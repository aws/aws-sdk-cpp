/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/Outcome.h>
#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <aws/cloudsearch/CloudSearchClient.h>
#include <aws/cloudsearch/CloudSearchEndpoint.h>
#include <aws/cloudsearch/CloudSearchErrorMarshaller.h>
#include <aws/cloudsearch/model/BuildSuggestersRequest.h>
#include <aws/cloudsearch/model/CreateDomainRequest.h>
#include <aws/cloudsearch/model/DefineAnalysisSchemeRequest.h>
#include <aws/cloudsearch/model/DefineExpressionRequest.h>
#include <aws/cloudsearch/model/DefineIndexFieldRequest.h>
#include <aws/cloudsearch/model/DefineSuggesterRequest.h>
#include <aws/cloudsearch/model/DeleteAnalysisSchemeRequest.h>
#include <aws/cloudsearch/model/DeleteDomainRequest.h>
#include <aws/cloudsearch/model/DeleteExpressionRequest.h>
#include <aws/cloudsearch/model/DeleteIndexFieldRequest.h>
#include <aws/cloudsearch/model/DeleteSuggesterRequest.h>
#include <aws/cloudsearch/model/DescribeAnalysisSchemesRequest.h>
#include <aws/cloudsearch/model/DescribeAvailabilityOptionsRequest.h>
#include <aws/cloudsearch/model/DescribeDomainEndpointOptionsRequest.h>
#include <aws/cloudsearch/model/DescribeDomainsRequest.h>
#include <aws/cloudsearch/model/DescribeExpressionsRequest.h>
#include <aws/cloudsearch/model/DescribeIndexFieldsRequest.h>
#include <aws/cloudsearch/model/DescribeScalingParametersRequest.h>
#include <aws/cloudsearch/model/DescribeServiceAccessPoliciesRequest.h>
#include <aws/cloudsearch/model/DescribeSuggestersRequest.h>
#include <aws/cloudsearch/model/IndexDocumentsRequest.h>
#include <aws/cloudsearch/model/ListDomainNamesRequest.h>
#include <aws/cloudsearch/model/UpdateAvailabilityOptionsRequest.h>
#include <aws/cloudsearch/model/UpdateDomainEndpointOptionsRequest.h>
#include <aws/cloudsearch/model/UpdateScalingParametersRequest.h>
#include <aws/cloudsearch/model/UpdateServiceAccessPoliciesRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::CloudSearch;
using namespace Aws::CloudSearch::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Xml;


static const char* SERVICE_NAME = "cloudsearch";
static const char* ALLOCATION_TAG = "CloudSearchClient";

CloudSearchClient::CloudSearchClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CloudSearchErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CloudSearchClient::CloudSearchClient(const AWSCredentials& credentials,
                                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CloudSearchErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CloudSearchClient::CloudSearchClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CloudSearchErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CloudSearchClient::~CloudSearchClient()
{
}

void CloudSearchClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("CloudSearch");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + CloudSearchEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void CloudSearchClient::OverrideEndpoint(const Aws::String& endpoint)
{
  if (endpoint.compare(0, 7, "http://") == 0 || endpoint.compare(0, 8, "https://") == 0)
  {
      m_uri = endpoint;
  }
  else
  {
      m_uri = m_configScheme + "://" + endpoint;
  }
}

Aws::String CloudSearchClient::ConvertRequestToPresignedUrl(const AmazonSerializableWebServiceRequest& requestToConvert, const char* region) const
{
  Aws::StringStream ss;
  ss << "https://" << CloudSearchEndpoint::ForRegion(region);
  ss << "?" << requestToConvert.SerializePayload();

  URI uri(ss.str());
  return GeneratePresignedUrl(uri, Aws::Http::HttpMethod::HTTP_GET, region, 3600);
}

BuildSuggestersOutcome CloudSearchClient::BuildSuggesters(const BuildSuggestersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return BuildSuggestersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

BuildSuggestersOutcomeCallable CloudSearchClient::BuildSuggestersCallable(const BuildSuggestersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BuildSuggestersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BuildSuggesters(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudSearchClientBuildSuggestersAsyncHelper(CloudSearchClient const * const clientThis, const BuildSuggestersRequest& request, const BuildSuggestersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->BuildSuggesters(request), context);
}

void CloudSearchClient::BuildSuggestersAsync(const BuildSuggestersRequest& request, const BuildSuggestersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudSearchClientBuildSuggestersAsyncHelper( this, request, handler, context ); } );
}

CreateDomainOutcome CloudSearchClient::CreateDomain(const CreateDomainRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateDomainOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

CreateDomainOutcomeCallable CloudSearchClient::CreateDomainCallable(const CreateDomainRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDomainOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDomain(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudSearchClientCreateDomainAsyncHelper(CloudSearchClient const * const clientThis, const CreateDomainRequest& request, const CreateDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateDomain(request), context);
}

void CloudSearchClient::CreateDomainAsync(const CreateDomainRequest& request, const CreateDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudSearchClientCreateDomainAsyncHelper( this, request, handler, context ); } );
}

DefineAnalysisSchemeOutcome CloudSearchClient::DefineAnalysisScheme(const DefineAnalysisSchemeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DefineAnalysisSchemeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DefineAnalysisSchemeOutcomeCallable CloudSearchClient::DefineAnalysisSchemeCallable(const DefineAnalysisSchemeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DefineAnalysisSchemeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DefineAnalysisScheme(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudSearchClientDefineAnalysisSchemeAsyncHelper(CloudSearchClient const * const clientThis, const DefineAnalysisSchemeRequest& request, const DefineAnalysisSchemeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DefineAnalysisScheme(request), context);
}

void CloudSearchClient::DefineAnalysisSchemeAsync(const DefineAnalysisSchemeRequest& request, const DefineAnalysisSchemeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudSearchClientDefineAnalysisSchemeAsyncHelper( this, request, handler, context ); } );
}

DefineExpressionOutcome CloudSearchClient::DefineExpression(const DefineExpressionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DefineExpressionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DefineExpressionOutcomeCallable CloudSearchClient::DefineExpressionCallable(const DefineExpressionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DefineExpressionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DefineExpression(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudSearchClientDefineExpressionAsyncHelper(CloudSearchClient const * const clientThis, const DefineExpressionRequest& request, const DefineExpressionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DefineExpression(request), context);
}

void CloudSearchClient::DefineExpressionAsync(const DefineExpressionRequest& request, const DefineExpressionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudSearchClientDefineExpressionAsyncHelper( this, request, handler, context ); } );
}

DefineIndexFieldOutcome CloudSearchClient::DefineIndexField(const DefineIndexFieldRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DefineIndexFieldOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DefineIndexFieldOutcomeCallable CloudSearchClient::DefineIndexFieldCallable(const DefineIndexFieldRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DefineIndexFieldOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DefineIndexField(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudSearchClientDefineIndexFieldAsyncHelper(CloudSearchClient const * const clientThis, const DefineIndexFieldRequest& request, const DefineIndexFieldResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DefineIndexField(request), context);
}

void CloudSearchClient::DefineIndexFieldAsync(const DefineIndexFieldRequest& request, const DefineIndexFieldResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudSearchClientDefineIndexFieldAsyncHelper( this, request, handler, context ); } );
}

DefineSuggesterOutcome CloudSearchClient::DefineSuggester(const DefineSuggesterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DefineSuggesterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DefineSuggesterOutcomeCallable CloudSearchClient::DefineSuggesterCallable(const DefineSuggesterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DefineSuggesterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DefineSuggester(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudSearchClientDefineSuggesterAsyncHelper(CloudSearchClient const * const clientThis, const DefineSuggesterRequest& request, const DefineSuggesterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DefineSuggester(request), context);
}

void CloudSearchClient::DefineSuggesterAsync(const DefineSuggesterRequest& request, const DefineSuggesterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudSearchClientDefineSuggesterAsyncHelper( this, request, handler, context ); } );
}

DeleteAnalysisSchemeOutcome CloudSearchClient::DeleteAnalysisScheme(const DeleteAnalysisSchemeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteAnalysisSchemeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteAnalysisSchemeOutcomeCallable CloudSearchClient::DeleteAnalysisSchemeCallable(const DeleteAnalysisSchemeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAnalysisSchemeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAnalysisScheme(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudSearchClientDeleteAnalysisSchemeAsyncHelper(CloudSearchClient const * const clientThis, const DeleteAnalysisSchemeRequest& request, const DeleteAnalysisSchemeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteAnalysisScheme(request), context);
}

void CloudSearchClient::DeleteAnalysisSchemeAsync(const DeleteAnalysisSchemeRequest& request, const DeleteAnalysisSchemeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudSearchClientDeleteAnalysisSchemeAsyncHelper( this, request, handler, context ); } );
}

DeleteDomainOutcome CloudSearchClient::DeleteDomain(const DeleteDomainRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteDomainOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteDomainOutcomeCallable CloudSearchClient::DeleteDomainCallable(const DeleteDomainRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDomainOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDomain(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudSearchClientDeleteDomainAsyncHelper(CloudSearchClient const * const clientThis, const DeleteDomainRequest& request, const DeleteDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteDomain(request), context);
}

void CloudSearchClient::DeleteDomainAsync(const DeleteDomainRequest& request, const DeleteDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudSearchClientDeleteDomainAsyncHelper( this, request, handler, context ); } );
}

DeleteExpressionOutcome CloudSearchClient::DeleteExpression(const DeleteExpressionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteExpressionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteExpressionOutcomeCallable CloudSearchClient::DeleteExpressionCallable(const DeleteExpressionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteExpressionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteExpression(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudSearchClientDeleteExpressionAsyncHelper(CloudSearchClient const * const clientThis, const DeleteExpressionRequest& request, const DeleteExpressionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteExpression(request), context);
}

void CloudSearchClient::DeleteExpressionAsync(const DeleteExpressionRequest& request, const DeleteExpressionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudSearchClientDeleteExpressionAsyncHelper( this, request, handler, context ); } );
}

DeleteIndexFieldOutcome CloudSearchClient::DeleteIndexField(const DeleteIndexFieldRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteIndexFieldOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteIndexFieldOutcomeCallable CloudSearchClient::DeleteIndexFieldCallable(const DeleteIndexFieldRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteIndexFieldOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteIndexField(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudSearchClientDeleteIndexFieldAsyncHelper(CloudSearchClient const * const clientThis, const DeleteIndexFieldRequest& request, const DeleteIndexFieldResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteIndexField(request), context);
}

void CloudSearchClient::DeleteIndexFieldAsync(const DeleteIndexFieldRequest& request, const DeleteIndexFieldResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudSearchClientDeleteIndexFieldAsyncHelper( this, request, handler, context ); } );
}

DeleteSuggesterOutcome CloudSearchClient::DeleteSuggester(const DeleteSuggesterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteSuggesterOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DeleteSuggesterOutcomeCallable CloudSearchClient::DeleteSuggesterCallable(const DeleteSuggesterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteSuggesterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteSuggester(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudSearchClientDeleteSuggesterAsyncHelper(CloudSearchClient const * const clientThis, const DeleteSuggesterRequest& request, const DeleteSuggesterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteSuggester(request), context);
}

void CloudSearchClient::DeleteSuggesterAsync(const DeleteSuggesterRequest& request, const DeleteSuggesterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudSearchClientDeleteSuggesterAsyncHelper( this, request, handler, context ); } );
}

DescribeAnalysisSchemesOutcome CloudSearchClient::DescribeAnalysisSchemes(const DescribeAnalysisSchemesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeAnalysisSchemesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeAnalysisSchemesOutcomeCallable CloudSearchClient::DescribeAnalysisSchemesCallable(const DescribeAnalysisSchemesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAnalysisSchemesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAnalysisSchemes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudSearchClientDescribeAnalysisSchemesAsyncHelper(CloudSearchClient const * const clientThis, const DescribeAnalysisSchemesRequest& request, const DescribeAnalysisSchemesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeAnalysisSchemes(request), context);
}

void CloudSearchClient::DescribeAnalysisSchemesAsync(const DescribeAnalysisSchemesRequest& request, const DescribeAnalysisSchemesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudSearchClientDescribeAnalysisSchemesAsyncHelper( this, request, handler, context ); } );
}

DescribeAvailabilityOptionsOutcome CloudSearchClient::DescribeAvailabilityOptions(const DescribeAvailabilityOptionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeAvailabilityOptionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeAvailabilityOptionsOutcomeCallable CloudSearchClient::DescribeAvailabilityOptionsCallable(const DescribeAvailabilityOptionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAvailabilityOptionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAvailabilityOptions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudSearchClientDescribeAvailabilityOptionsAsyncHelper(CloudSearchClient const * const clientThis, const DescribeAvailabilityOptionsRequest& request, const DescribeAvailabilityOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeAvailabilityOptions(request), context);
}

void CloudSearchClient::DescribeAvailabilityOptionsAsync(const DescribeAvailabilityOptionsRequest& request, const DescribeAvailabilityOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudSearchClientDescribeAvailabilityOptionsAsyncHelper( this, request, handler, context ); } );
}

DescribeDomainEndpointOptionsOutcome CloudSearchClient::DescribeDomainEndpointOptions(const DescribeDomainEndpointOptionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeDomainEndpointOptionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeDomainEndpointOptionsOutcomeCallable CloudSearchClient::DescribeDomainEndpointOptionsCallable(const DescribeDomainEndpointOptionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDomainEndpointOptionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDomainEndpointOptions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudSearchClientDescribeDomainEndpointOptionsAsyncHelper(CloudSearchClient const * const clientThis, const DescribeDomainEndpointOptionsRequest& request, const DescribeDomainEndpointOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeDomainEndpointOptions(request), context);
}

void CloudSearchClient::DescribeDomainEndpointOptionsAsync(const DescribeDomainEndpointOptionsRequest& request, const DescribeDomainEndpointOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudSearchClientDescribeDomainEndpointOptionsAsyncHelper( this, request, handler, context ); } );
}

DescribeDomainsOutcome CloudSearchClient::DescribeDomains(const DescribeDomainsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeDomainsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeDomainsOutcomeCallable CloudSearchClient::DescribeDomainsCallable(const DescribeDomainsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDomainsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDomains(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudSearchClientDescribeDomainsAsyncHelper(CloudSearchClient const * const clientThis, const DescribeDomainsRequest& request, const DescribeDomainsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeDomains(request), context);
}

void CloudSearchClient::DescribeDomainsAsync(const DescribeDomainsRequest& request, const DescribeDomainsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudSearchClientDescribeDomainsAsyncHelper( this, request, handler, context ); } );
}

DescribeExpressionsOutcome CloudSearchClient::DescribeExpressions(const DescribeExpressionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeExpressionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeExpressionsOutcomeCallable CloudSearchClient::DescribeExpressionsCallable(const DescribeExpressionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeExpressionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeExpressions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudSearchClientDescribeExpressionsAsyncHelper(CloudSearchClient const * const clientThis, const DescribeExpressionsRequest& request, const DescribeExpressionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeExpressions(request), context);
}

void CloudSearchClient::DescribeExpressionsAsync(const DescribeExpressionsRequest& request, const DescribeExpressionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudSearchClientDescribeExpressionsAsyncHelper( this, request, handler, context ); } );
}

DescribeIndexFieldsOutcome CloudSearchClient::DescribeIndexFields(const DescribeIndexFieldsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeIndexFieldsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeIndexFieldsOutcomeCallable CloudSearchClient::DescribeIndexFieldsCallable(const DescribeIndexFieldsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeIndexFieldsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeIndexFields(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudSearchClientDescribeIndexFieldsAsyncHelper(CloudSearchClient const * const clientThis, const DescribeIndexFieldsRequest& request, const DescribeIndexFieldsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeIndexFields(request), context);
}

void CloudSearchClient::DescribeIndexFieldsAsync(const DescribeIndexFieldsRequest& request, const DescribeIndexFieldsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudSearchClientDescribeIndexFieldsAsyncHelper( this, request, handler, context ); } );
}

DescribeScalingParametersOutcome CloudSearchClient::DescribeScalingParameters(const DescribeScalingParametersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeScalingParametersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeScalingParametersOutcomeCallable CloudSearchClient::DescribeScalingParametersCallable(const DescribeScalingParametersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeScalingParametersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeScalingParameters(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudSearchClientDescribeScalingParametersAsyncHelper(CloudSearchClient const * const clientThis, const DescribeScalingParametersRequest& request, const DescribeScalingParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeScalingParameters(request), context);
}

void CloudSearchClient::DescribeScalingParametersAsync(const DescribeScalingParametersRequest& request, const DescribeScalingParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudSearchClientDescribeScalingParametersAsyncHelper( this, request, handler, context ); } );
}

DescribeServiceAccessPoliciesOutcome CloudSearchClient::DescribeServiceAccessPolicies(const DescribeServiceAccessPoliciesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeServiceAccessPoliciesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeServiceAccessPoliciesOutcomeCallable CloudSearchClient::DescribeServiceAccessPoliciesCallable(const DescribeServiceAccessPoliciesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeServiceAccessPoliciesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeServiceAccessPolicies(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudSearchClientDescribeServiceAccessPoliciesAsyncHelper(CloudSearchClient const * const clientThis, const DescribeServiceAccessPoliciesRequest& request, const DescribeServiceAccessPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeServiceAccessPolicies(request), context);
}

void CloudSearchClient::DescribeServiceAccessPoliciesAsync(const DescribeServiceAccessPoliciesRequest& request, const DescribeServiceAccessPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudSearchClientDescribeServiceAccessPoliciesAsyncHelper( this, request, handler, context ); } );
}

DescribeSuggestersOutcome CloudSearchClient::DescribeSuggesters(const DescribeSuggestersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeSuggestersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

DescribeSuggestersOutcomeCallable CloudSearchClient::DescribeSuggestersCallable(const DescribeSuggestersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeSuggestersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeSuggesters(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudSearchClientDescribeSuggestersAsyncHelper(CloudSearchClient const * const clientThis, const DescribeSuggestersRequest& request, const DescribeSuggestersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeSuggesters(request), context);
}

void CloudSearchClient::DescribeSuggestersAsync(const DescribeSuggestersRequest& request, const DescribeSuggestersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudSearchClientDescribeSuggestersAsyncHelper( this, request, handler, context ); } );
}

IndexDocumentsOutcome CloudSearchClient::IndexDocuments(const IndexDocumentsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return IndexDocumentsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

IndexDocumentsOutcomeCallable CloudSearchClient::IndexDocumentsCallable(const IndexDocumentsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< IndexDocumentsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->IndexDocuments(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudSearchClientIndexDocumentsAsyncHelper(CloudSearchClient const * const clientThis, const IndexDocumentsRequest& request, const IndexDocumentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->IndexDocuments(request), context);
}

void CloudSearchClient::IndexDocumentsAsync(const IndexDocumentsRequest& request, const IndexDocumentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudSearchClientIndexDocumentsAsyncHelper( this, request, handler, context ); } );
}

ListDomainNamesOutcome CloudSearchClient::ListDomainNames(const ListDomainNamesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListDomainNamesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

ListDomainNamesOutcomeCallable CloudSearchClient::ListDomainNamesCallable(const ListDomainNamesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDomainNamesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDomainNames(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudSearchClientListDomainNamesAsyncHelper(CloudSearchClient const * const clientThis, const ListDomainNamesRequest& request, const ListDomainNamesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListDomainNames(request), context);
}

void CloudSearchClient::ListDomainNamesAsync(const ListDomainNamesRequest& request, const ListDomainNamesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudSearchClientListDomainNamesAsyncHelper( this, request, handler, context ); } );
}

UpdateAvailabilityOptionsOutcome CloudSearchClient::UpdateAvailabilityOptions(const UpdateAvailabilityOptionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateAvailabilityOptionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

UpdateAvailabilityOptionsOutcomeCallable CloudSearchClient::UpdateAvailabilityOptionsCallable(const UpdateAvailabilityOptionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateAvailabilityOptionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateAvailabilityOptions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudSearchClientUpdateAvailabilityOptionsAsyncHelper(CloudSearchClient const * const clientThis, const UpdateAvailabilityOptionsRequest& request, const UpdateAvailabilityOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateAvailabilityOptions(request), context);
}

void CloudSearchClient::UpdateAvailabilityOptionsAsync(const UpdateAvailabilityOptionsRequest& request, const UpdateAvailabilityOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudSearchClientUpdateAvailabilityOptionsAsyncHelper( this, request, handler, context ); } );
}

UpdateDomainEndpointOptionsOutcome CloudSearchClient::UpdateDomainEndpointOptions(const UpdateDomainEndpointOptionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateDomainEndpointOptionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

UpdateDomainEndpointOptionsOutcomeCallable CloudSearchClient::UpdateDomainEndpointOptionsCallable(const UpdateDomainEndpointOptionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateDomainEndpointOptionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateDomainEndpointOptions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudSearchClientUpdateDomainEndpointOptionsAsyncHelper(CloudSearchClient const * const clientThis, const UpdateDomainEndpointOptionsRequest& request, const UpdateDomainEndpointOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateDomainEndpointOptions(request), context);
}

void CloudSearchClient::UpdateDomainEndpointOptionsAsync(const UpdateDomainEndpointOptionsRequest& request, const UpdateDomainEndpointOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudSearchClientUpdateDomainEndpointOptionsAsyncHelper( this, request, handler, context ); } );
}

UpdateScalingParametersOutcome CloudSearchClient::UpdateScalingParameters(const UpdateScalingParametersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateScalingParametersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

UpdateScalingParametersOutcomeCallable CloudSearchClient::UpdateScalingParametersCallable(const UpdateScalingParametersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateScalingParametersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateScalingParameters(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudSearchClientUpdateScalingParametersAsyncHelper(CloudSearchClient const * const clientThis, const UpdateScalingParametersRequest& request, const UpdateScalingParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateScalingParameters(request), context);
}

void CloudSearchClient::UpdateScalingParametersAsync(const UpdateScalingParametersRequest& request, const UpdateScalingParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudSearchClientUpdateScalingParametersAsyncHelper( this, request, handler, context ); } );
}

UpdateServiceAccessPoliciesOutcome CloudSearchClient::UpdateServiceAccessPolicies(const UpdateServiceAccessPoliciesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateServiceAccessPoliciesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST));
}

UpdateServiceAccessPoliciesOutcomeCallable CloudSearchClient::UpdateServiceAccessPoliciesCallable(const UpdateServiceAccessPoliciesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateServiceAccessPoliciesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateServiceAccessPolicies(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudSearchClientUpdateServiceAccessPoliciesAsyncHelper(CloudSearchClient const * const clientThis, const UpdateServiceAccessPoliciesRequest& request, const UpdateServiceAccessPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateServiceAccessPolicies(request), context);
}

void CloudSearchClient::UpdateServiceAccessPoliciesAsync(const UpdateServiceAccessPoliciesRequest& request, const UpdateServiceAccessPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudSearchClientUpdateServiceAccessPoliciesAsyncHelper( this, request, handler, context ); } );
}

