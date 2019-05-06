/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
#include <aws/cloudsearch/model/DescribeDomainsRequest.h>
#include <aws/cloudsearch/model/DescribeExpressionsRequest.h>
#include <aws/cloudsearch/model/DescribeIndexFieldsRequest.h>
#include <aws/cloudsearch/model/DescribeScalingParametersRequest.h>
#include <aws/cloudsearch/model/DescribeServiceAccessPoliciesRequest.h>
#include <aws/cloudsearch/model/DescribeSuggestersRequest.h>
#include <aws/cloudsearch/model/IndexDocumentsRequest.h>
#include <aws/cloudsearch/model/ListDomainNamesRequest.h>
#include <aws/cloudsearch/model/UpdateAvailabilityOptionsRequest.h>
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
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<CloudSearchErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CloudSearchClient::CloudSearchClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<CloudSearchErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CloudSearchClient::CloudSearchClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<CloudSearchErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CloudSearchClient::~CloudSearchClient()
{
}

void CloudSearchClient::init(const ClientConfiguration& config)
{
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
  return GeneratePresignedUrl(uri, HttpMethod::HTTP_GET, region, 3600);
}

BuildSuggestersOutcome CloudSearchClient::BuildSuggesters(const BuildSuggestersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return BuildSuggestersOutcome(BuildSuggestersResult(outcome.GetResult()));
  }
  else
  {
    return BuildSuggestersOutcome(outcome.GetError());
  }
}

BuildSuggestersOutcomeCallable CloudSearchClient::BuildSuggestersCallable(const BuildSuggestersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BuildSuggestersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BuildSuggesters(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudSearchClient::BuildSuggestersAsync(const BuildSuggestersRequest& request, const BuildSuggestersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->BuildSuggestersAsyncHelper( request, handler, context ); } );
}

void CloudSearchClient::BuildSuggestersAsyncHelper(const BuildSuggestersRequest& request, const BuildSuggestersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, BuildSuggesters(request), context);
}

CreateDomainOutcome CloudSearchClient::CreateDomain(const CreateDomainRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return CreateDomainOutcome(CreateDomainResult(outcome.GetResult()));
  }
  else
  {
    return CreateDomainOutcome(outcome.GetError());
  }
}

CreateDomainOutcomeCallable CloudSearchClient::CreateDomainCallable(const CreateDomainRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDomainOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDomain(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudSearchClient::CreateDomainAsync(const CreateDomainRequest& request, const CreateDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateDomainAsyncHelper( request, handler, context ); } );
}

void CloudSearchClient::CreateDomainAsyncHelper(const CreateDomainRequest& request, const CreateDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateDomain(request), context);
}

DefineAnalysisSchemeOutcome CloudSearchClient::DefineAnalysisScheme(const DefineAnalysisSchemeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DefineAnalysisSchemeOutcome(DefineAnalysisSchemeResult(outcome.GetResult()));
  }
  else
  {
    return DefineAnalysisSchemeOutcome(outcome.GetError());
  }
}

DefineAnalysisSchemeOutcomeCallable CloudSearchClient::DefineAnalysisSchemeCallable(const DefineAnalysisSchemeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DefineAnalysisSchemeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DefineAnalysisScheme(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudSearchClient::DefineAnalysisSchemeAsync(const DefineAnalysisSchemeRequest& request, const DefineAnalysisSchemeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DefineAnalysisSchemeAsyncHelper( request, handler, context ); } );
}

void CloudSearchClient::DefineAnalysisSchemeAsyncHelper(const DefineAnalysisSchemeRequest& request, const DefineAnalysisSchemeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DefineAnalysisScheme(request), context);
}

DefineExpressionOutcome CloudSearchClient::DefineExpression(const DefineExpressionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DefineExpressionOutcome(DefineExpressionResult(outcome.GetResult()));
  }
  else
  {
    return DefineExpressionOutcome(outcome.GetError());
  }
}

DefineExpressionOutcomeCallable CloudSearchClient::DefineExpressionCallable(const DefineExpressionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DefineExpressionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DefineExpression(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudSearchClient::DefineExpressionAsync(const DefineExpressionRequest& request, const DefineExpressionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DefineExpressionAsyncHelper( request, handler, context ); } );
}

void CloudSearchClient::DefineExpressionAsyncHelper(const DefineExpressionRequest& request, const DefineExpressionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DefineExpression(request), context);
}

DefineIndexFieldOutcome CloudSearchClient::DefineIndexField(const DefineIndexFieldRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DefineIndexFieldOutcome(DefineIndexFieldResult(outcome.GetResult()));
  }
  else
  {
    return DefineIndexFieldOutcome(outcome.GetError());
  }
}

DefineIndexFieldOutcomeCallable CloudSearchClient::DefineIndexFieldCallable(const DefineIndexFieldRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DefineIndexFieldOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DefineIndexField(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudSearchClient::DefineIndexFieldAsync(const DefineIndexFieldRequest& request, const DefineIndexFieldResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DefineIndexFieldAsyncHelper( request, handler, context ); } );
}

void CloudSearchClient::DefineIndexFieldAsyncHelper(const DefineIndexFieldRequest& request, const DefineIndexFieldResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DefineIndexField(request), context);
}

DefineSuggesterOutcome CloudSearchClient::DefineSuggester(const DefineSuggesterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DefineSuggesterOutcome(DefineSuggesterResult(outcome.GetResult()));
  }
  else
  {
    return DefineSuggesterOutcome(outcome.GetError());
  }
}

DefineSuggesterOutcomeCallable CloudSearchClient::DefineSuggesterCallable(const DefineSuggesterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DefineSuggesterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DefineSuggester(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudSearchClient::DefineSuggesterAsync(const DefineSuggesterRequest& request, const DefineSuggesterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DefineSuggesterAsyncHelper( request, handler, context ); } );
}

void CloudSearchClient::DefineSuggesterAsyncHelper(const DefineSuggesterRequest& request, const DefineSuggesterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DefineSuggester(request), context);
}

DeleteAnalysisSchemeOutcome CloudSearchClient::DeleteAnalysisScheme(const DeleteAnalysisSchemeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteAnalysisSchemeOutcome(DeleteAnalysisSchemeResult(outcome.GetResult()));
  }
  else
  {
    return DeleteAnalysisSchemeOutcome(outcome.GetError());
  }
}

DeleteAnalysisSchemeOutcomeCallable CloudSearchClient::DeleteAnalysisSchemeCallable(const DeleteAnalysisSchemeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteAnalysisSchemeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteAnalysisScheme(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudSearchClient::DeleteAnalysisSchemeAsync(const DeleteAnalysisSchemeRequest& request, const DeleteAnalysisSchemeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteAnalysisSchemeAsyncHelper( request, handler, context ); } );
}

void CloudSearchClient::DeleteAnalysisSchemeAsyncHelper(const DeleteAnalysisSchemeRequest& request, const DeleteAnalysisSchemeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteAnalysisScheme(request), context);
}

DeleteDomainOutcome CloudSearchClient::DeleteDomain(const DeleteDomainRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteDomainOutcome(DeleteDomainResult(outcome.GetResult()));
  }
  else
  {
    return DeleteDomainOutcome(outcome.GetError());
  }
}

DeleteDomainOutcomeCallable CloudSearchClient::DeleteDomainCallable(const DeleteDomainRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDomainOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDomain(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudSearchClient::DeleteDomainAsync(const DeleteDomainRequest& request, const DeleteDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteDomainAsyncHelper( request, handler, context ); } );
}

void CloudSearchClient::DeleteDomainAsyncHelper(const DeleteDomainRequest& request, const DeleteDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteDomain(request), context);
}

DeleteExpressionOutcome CloudSearchClient::DeleteExpression(const DeleteExpressionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteExpressionOutcome(DeleteExpressionResult(outcome.GetResult()));
  }
  else
  {
    return DeleteExpressionOutcome(outcome.GetError());
  }
}

DeleteExpressionOutcomeCallable CloudSearchClient::DeleteExpressionCallable(const DeleteExpressionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteExpressionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteExpression(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudSearchClient::DeleteExpressionAsync(const DeleteExpressionRequest& request, const DeleteExpressionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteExpressionAsyncHelper( request, handler, context ); } );
}

void CloudSearchClient::DeleteExpressionAsyncHelper(const DeleteExpressionRequest& request, const DeleteExpressionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteExpression(request), context);
}

DeleteIndexFieldOutcome CloudSearchClient::DeleteIndexField(const DeleteIndexFieldRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteIndexFieldOutcome(DeleteIndexFieldResult(outcome.GetResult()));
  }
  else
  {
    return DeleteIndexFieldOutcome(outcome.GetError());
  }
}

DeleteIndexFieldOutcomeCallable CloudSearchClient::DeleteIndexFieldCallable(const DeleteIndexFieldRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteIndexFieldOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteIndexField(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudSearchClient::DeleteIndexFieldAsync(const DeleteIndexFieldRequest& request, const DeleteIndexFieldResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteIndexFieldAsyncHelper( request, handler, context ); } );
}

void CloudSearchClient::DeleteIndexFieldAsyncHelper(const DeleteIndexFieldRequest& request, const DeleteIndexFieldResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteIndexField(request), context);
}

DeleteSuggesterOutcome CloudSearchClient::DeleteSuggester(const DeleteSuggesterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteSuggesterOutcome(DeleteSuggesterResult(outcome.GetResult()));
  }
  else
  {
    return DeleteSuggesterOutcome(outcome.GetError());
  }
}

DeleteSuggesterOutcomeCallable CloudSearchClient::DeleteSuggesterCallable(const DeleteSuggesterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteSuggesterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteSuggester(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudSearchClient::DeleteSuggesterAsync(const DeleteSuggesterRequest& request, const DeleteSuggesterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteSuggesterAsyncHelper( request, handler, context ); } );
}

void CloudSearchClient::DeleteSuggesterAsyncHelper(const DeleteSuggesterRequest& request, const DeleteSuggesterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteSuggester(request), context);
}

DescribeAnalysisSchemesOutcome CloudSearchClient::DescribeAnalysisSchemes(const DescribeAnalysisSchemesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeAnalysisSchemesOutcome(DescribeAnalysisSchemesResult(outcome.GetResult()));
  }
  else
  {
    return DescribeAnalysisSchemesOutcome(outcome.GetError());
  }
}

DescribeAnalysisSchemesOutcomeCallable CloudSearchClient::DescribeAnalysisSchemesCallable(const DescribeAnalysisSchemesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAnalysisSchemesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAnalysisSchemes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudSearchClient::DescribeAnalysisSchemesAsync(const DescribeAnalysisSchemesRequest& request, const DescribeAnalysisSchemesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeAnalysisSchemesAsyncHelper( request, handler, context ); } );
}

void CloudSearchClient::DescribeAnalysisSchemesAsyncHelper(const DescribeAnalysisSchemesRequest& request, const DescribeAnalysisSchemesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeAnalysisSchemes(request), context);
}

DescribeAvailabilityOptionsOutcome CloudSearchClient::DescribeAvailabilityOptions(const DescribeAvailabilityOptionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeAvailabilityOptionsOutcome(DescribeAvailabilityOptionsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeAvailabilityOptionsOutcome(outcome.GetError());
  }
}

DescribeAvailabilityOptionsOutcomeCallable CloudSearchClient::DescribeAvailabilityOptionsCallable(const DescribeAvailabilityOptionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeAvailabilityOptionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeAvailabilityOptions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudSearchClient::DescribeAvailabilityOptionsAsync(const DescribeAvailabilityOptionsRequest& request, const DescribeAvailabilityOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeAvailabilityOptionsAsyncHelper( request, handler, context ); } );
}

void CloudSearchClient::DescribeAvailabilityOptionsAsyncHelper(const DescribeAvailabilityOptionsRequest& request, const DescribeAvailabilityOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeAvailabilityOptions(request), context);
}

DescribeDomainsOutcome CloudSearchClient::DescribeDomains(const DescribeDomainsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeDomainsOutcome(DescribeDomainsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeDomainsOutcome(outcome.GetError());
  }
}

DescribeDomainsOutcomeCallable CloudSearchClient::DescribeDomainsCallable(const DescribeDomainsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDomainsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDomains(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudSearchClient::DescribeDomainsAsync(const DescribeDomainsRequest& request, const DescribeDomainsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeDomainsAsyncHelper( request, handler, context ); } );
}

void CloudSearchClient::DescribeDomainsAsyncHelper(const DescribeDomainsRequest& request, const DescribeDomainsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeDomains(request), context);
}

DescribeExpressionsOutcome CloudSearchClient::DescribeExpressions(const DescribeExpressionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeExpressionsOutcome(DescribeExpressionsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeExpressionsOutcome(outcome.GetError());
  }
}

DescribeExpressionsOutcomeCallable CloudSearchClient::DescribeExpressionsCallable(const DescribeExpressionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeExpressionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeExpressions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudSearchClient::DescribeExpressionsAsync(const DescribeExpressionsRequest& request, const DescribeExpressionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeExpressionsAsyncHelper( request, handler, context ); } );
}

void CloudSearchClient::DescribeExpressionsAsyncHelper(const DescribeExpressionsRequest& request, const DescribeExpressionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeExpressions(request), context);
}

DescribeIndexFieldsOutcome CloudSearchClient::DescribeIndexFields(const DescribeIndexFieldsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeIndexFieldsOutcome(DescribeIndexFieldsResult(outcome.GetResult()));
  }
  else
  {
    return DescribeIndexFieldsOutcome(outcome.GetError());
  }
}

DescribeIndexFieldsOutcomeCallable CloudSearchClient::DescribeIndexFieldsCallable(const DescribeIndexFieldsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeIndexFieldsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeIndexFields(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudSearchClient::DescribeIndexFieldsAsync(const DescribeIndexFieldsRequest& request, const DescribeIndexFieldsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeIndexFieldsAsyncHelper( request, handler, context ); } );
}

void CloudSearchClient::DescribeIndexFieldsAsyncHelper(const DescribeIndexFieldsRequest& request, const DescribeIndexFieldsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeIndexFields(request), context);
}

DescribeScalingParametersOutcome CloudSearchClient::DescribeScalingParameters(const DescribeScalingParametersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeScalingParametersOutcome(DescribeScalingParametersResult(outcome.GetResult()));
  }
  else
  {
    return DescribeScalingParametersOutcome(outcome.GetError());
  }
}

DescribeScalingParametersOutcomeCallable CloudSearchClient::DescribeScalingParametersCallable(const DescribeScalingParametersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeScalingParametersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeScalingParameters(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudSearchClient::DescribeScalingParametersAsync(const DescribeScalingParametersRequest& request, const DescribeScalingParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeScalingParametersAsyncHelper( request, handler, context ); } );
}

void CloudSearchClient::DescribeScalingParametersAsyncHelper(const DescribeScalingParametersRequest& request, const DescribeScalingParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeScalingParameters(request), context);
}

DescribeServiceAccessPoliciesOutcome CloudSearchClient::DescribeServiceAccessPolicies(const DescribeServiceAccessPoliciesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeServiceAccessPoliciesOutcome(DescribeServiceAccessPoliciesResult(outcome.GetResult()));
  }
  else
  {
    return DescribeServiceAccessPoliciesOutcome(outcome.GetError());
  }
}

DescribeServiceAccessPoliciesOutcomeCallable CloudSearchClient::DescribeServiceAccessPoliciesCallable(const DescribeServiceAccessPoliciesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeServiceAccessPoliciesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeServiceAccessPolicies(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudSearchClient::DescribeServiceAccessPoliciesAsync(const DescribeServiceAccessPoliciesRequest& request, const DescribeServiceAccessPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeServiceAccessPoliciesAsyncHelper( request, handler, context ); } );
}

void CloudSearchClient::DescribeServiceAccessPoliciesAsyncHelper(const DescribeServiceAccessPoliciesRequest& request, const DescribeServiceAccessPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeServiceAccessPolicies(request), context);
}

DescribeSuggestersOutcome CloudSearchClient::DescribeSuggesters(const DescribeSuggestersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeSuggestersOutcome(DescribeSuggestersResult(outcome.GetResult()));
  }
  else
  {
    return DescribeSuggestersOutcome(outcome.GetError());
  }
}

DescribeSuggestersOutcomeCallable CloudSearchClient::DescribeSuggestersCallable(const DescribeSuggestersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeSuggestersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeSuggesters(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudSearchClient::DescribeSuggestersAsync(const DescribeSuggestersRequest& request, const DescribeSuggestersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeSuggestersAsyncHelper( request, handler, context ); } );
}

void CloudSearchClient::DescribeSuggestersAsyncHelper(const DescribeSuggestersRequest& request, const DescribeSuggestersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeSuggesters(request), context);
}

IndexDocumentsOutcome CloudSearchClient::IndexDocuments(const IndexDocumentsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return IndexDocumentsOutcome(IndexDocumentsResult(outcome.GetResult()));
  }
  else
  {
    return IndexDocumentsOutcome(outcome.GetError());
  }
}

IndexDocumentsOutcomeCallable CloudSearchClient::IndexDocumentsCallable(const IndexDocumentsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< IndexDocumentsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->IndexDocuments(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudSearchClient::IndexDocumentsAsync(const IndexDocumentsRequest& request, const IndexDocumentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->IndexDocumentsAsyncHelper( request, handler, context ); } );
}

void CloudSearchClient::IndexDocumentsAsyncHelper(const IndexDocumentsRequest& request, const IndexDocumentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, IndexDocuments(request), context);
}

ListDomainNamesOutcome CloudSearchClient::ListDomainNames(const ListDomainNamesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListDomainNamesOutcome(ListDomainNamesResult(outcome.GetResult()));
  }
  else
  {
    return ListDomainNamesOutcome(outcome.GetError());
  }
}

ListDomainNamesOutcomeCallable CloudSearchClient::ListDomainNamesCallable(const ListDomainNamesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDomainNamesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDomainNames(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudSearchClient::ListDomainNamesAsync(const ListDomainNamesRequest& request, const ListDomainNamesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListDomainNamesAsyncHelper( request, handler, context ); } );
}

void CloudSearchClient::ListDomainNamesAsyncHelper(const ListDomainNamesRequest& request, const ListDomainNamesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListDomainNames(request), context);
}

UpdateAvailabilityOptionsOutcome CloudSearchClient::UpdateAvailabilityOptions(const UpdateAvailabilityOptionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return UpdateAvailabilityOptionsOutcome(UpdateAvailabilityOptionsResult(outcome.GetResult()));
  }
  else
  {
    return UpdateAvailabilityOptionsOutcome(outcome.GetError());
  }
}

UpdateAvailabilityOptionsOutcomeCallable CloudSearchClient::UpdateAvailabilityOptionsCallable(const UpdateAvailabilityOptionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateAvailabilityOptionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateAvailabilityOptions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudSearchClient::UpdateAvailabilityOptionsAsync(const UpdateAvailabilityOptionsRequest& request, const UpdateAvailabilityOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateAvailabilityOptionsAsyncHelper( request, handler, context ); } );
}

void CloudSearchClient::UpdateAvailabilityOptionsAsyncHelper(const UpdateAvailabilityOptionsRequest& request, const UpdateAvailabilityOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateAvailabilityOptions(request), context);
}

UpdateScalingParametersOutcome CloudSearchClient::UpdateScalingParameters(const UpdateScalingParametersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return UpdateScalingParametersOutcome(UpdateScalingParametersResult(outcome.GetResult()));
  }
  else
  {
    return UpdateScalingParametersOutcome(outcome.GetError());
  }
}

UpdateScalingParametersOutcomeCallable CloudSearchClient::UpdateScalingParametersCallable(const UpdateScalingParametersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateScalingParametersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateScalingParameters(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudSearchClient::UpdateScalingParametersAsync(const UpdateScalingParametersRequest& request, const UpdateScalingParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateScalingParametersAsyncHelper( request, handler, context ); } );
}

void CloudSearchClient::UpdateScalingParametersAsyncHelper(const UpdateScalingParametersRequest& request, const UpdateScalingParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateScalingParameters(request), context);
}

UpdateServiceAccessPoliciesOutcome CloudSearchClient::UpdateServiceAccessPolicies(const UpdateServiceAccessPoliciesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  XmlOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return UpdateServiceAccessPoliciesOutcome(UpdateServiceAccessPoliciesResult(outcome.GetResult()));
  }
  else
  {
    return UpdateServiceAccessPoliciesOutcome(outcome.GetError());
  }
}

UpdateServiceAccessPoliciesOutcomeCallable CloudSearchClient::UpdateServiceAccessPoliciesCallable(const UpdateServiceAccessPoliciesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateServiceAccessPoliciesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateServiceAccessPolicies(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudSearchClient::UpdateServiceAccessPoliciesAsync(const UpdateServiceAccessPoliciesRequest& request, const UpdateServiceAccessPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateServiceAccessPoliciesAsyncHelper( request, handler, context ); } );
}

void CloudSearchClient::UpdateServiceAccessPoliciesAsyncHelper(const UpdateServiceAccessPoliciesRequest& request, const UpdateServiceAccessPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateServiceAccessPolicies(request), context);
}



