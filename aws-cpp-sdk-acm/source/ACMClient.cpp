/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/acm/ACMClient.h>
#include <aws/acm/ACMEndpoint.h>
#include <aws/acm/ACMErrorMarshaller.h>
#include <aws/acm/model/DeleteCertificateRequest.h>
#include <aws/acm/model/DescribeCertificateRequest.h>
#include <aws/acm/model/GetCertificateRequest.h>
#include <aws/acm/model/ListCertificatesRequest.h>
#include <aws/acm/model/RequestCertificateRequest.h>
#include <aws/acm/model/ResendValidationEmailRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::ACM;
using namespace Aws::ACM::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "acm";
static const char* ALLOCATION_TAG = "ACMClient";

ACMClient::ACMClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(Aws::MakeShared<HttpClientFactory>(ALLOCATION_TAG), clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.authenticationRegion.empty() ? RegionMapper::GetRegionName(clientConfiguration.region) : clientConfiguration.authenticationRegion),
    Aws::MakeShared<ACMErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ACMClient::ACMClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(Aws::MakeShared<HttpClientFactory>(ALLOCATION_TAG), clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.authenticationRegion.empty() ? RegionMapper::GetRegionName(clientConfiguration.region) : clientConfiguration.authenticationRegion),
    Aws::MakeShared<ACMErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ACMClient::ACMClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration, const std::shared_ptr<HttpClientFactory const>& httpClientFactory) :
  BASECLASS(httpClientFactory != nullptr ? httpClientFactory : Aws::MakeShared<HttpClientFactory>(ALLOCATION_TAG), clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.authenticationRegion.empty() ? RegionMapper::GetRegionName(clientConfiguration.region) : clientConfiguration.authenticationRegion),
    Aws::MakeShared<ACMErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ACMClient::~ACMClient()
{
}

void ACMClient::init(const ClientConfiguration& config)
{
  Aws::StringStream ss;
  ss << SchemeMapper::ToString(config.scheme) << "://";

  if(config.endpointOverride.empty() && config.authenticationRegion.empty())
  {
    ss << ACMEndpoint::ForRegion(config.region);
  }
  else
  {
    ss << config.endpointOverride;
  }

  m_uri = ss.str();
}
DeleteCertificateOutcome ACMClient::DeleteCertificate(const DeleteCertificateRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DeleteCertificateOutcome(NoResult());
  }
  else
  {
    return DeleteCertificateOutcome(outcome.GetError());
  }
}

DeleteCertificateOutcomeCallable ACMClient::DeleteCertificateCallable(const DeleteCertificateRequest& request) const
{
  return std::async(std::launch::async, &ACMClient::DeleteCertificate, this, request);
}

void ACMClient::DeleteCertificateAsync(const DeleteCertificateRequest& request, const DeleteCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&ACMClient::DeleteCertificateAsyncHelper, this, request, handler, context);
}

void ACMClient::DeleteCertificateAsyncHelper(const DeleteCertificateRequest& request, const DeleteCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteCertificate(request), context);
}

DescribeCertificateOutcome ACMClient::DescribeCertificate(const DescribeCertificateRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return DescribeCertificateOutcome(DescribeCertificateResult(outcome.GetResult()));
  }
  else
  {
    return DescribeCertificateOutcome(outcome.GetError());
  }
}

DescribeCertificateOutcomeCallable ACMClient::DescribeCertificateCallable(const DescribeCertificateRequest& request) const
{
  return std::async(std::launch::async, &ACMClient::DescribeCertificate, this, request);
}

void ACMClient::DescribeCertificateAsync(const DescribeCertificateRequest& request, const DescribeCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&ACMClient::DescribeCertificateAsyncHelper, this, request, handler, context);
}

void ACMClient::DescribeCertificateAsyncHelper(const DescribeCertificateRequest& request, const DescribeCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeCertificate(request), context);
}

GetCertificateOutcome ACMClient::GetCertificate(const GetCertificateRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return GetCertificateOutcome(GetCertificateResult(outcome.GetResult()));
  }
  else
  {
    return GetCertificateOutcome(outcome.GetError());
  }
}

GetCertificateOutcomeCallable ACMClient::GetCertificateCallable(const GetCertificateRequest& request) const
{
  return std::async(std::launch::async, &ACMClient::GetCertificate, this, request);
}

void ACMClient::GetCertificateAsync(const GetCertificateRequest& request, const GetCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&ACMClient::GetCertificateAsyncHelper, this, request, handler, context);
}

void ACMClient::GetCertificateAsyncHelper(const GetCertificateRequest& request, const GetCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetCertificate(request), context);
}

ListCertificatesOutcome ACMClient::ListCertificates(const ListCertificatesRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ListCertificatesOutcome(ListCertificatesResult(outcome.GetResult()));
  }
  else
  {
    return ListCertificatesOutcome(outcome.GetError());
  }
}

ListCertificatesOutcomeCallable ACMClient::ListCertificatesCallable(const ListCertificatesRequest& request) const
{
  return std::async(std::launch::async, &ACMClient::ListCertificates, this, request);
}

void ACMClient::ListCertificatesAsync(const ListCertificatesRequest& request, const ListCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&ACMClient::ListCertificatesAsyncHelper, this, request, handler, context);
}

void ACMClient::ListCertificatesAsyncHelper(const ListCertificatesRequest& request, const ListCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListCertificates(request), context);
}

RequestCertificateOutcome ACMClient::RequestCertificate(const RequestCertificateRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return RequestCertificateOutcome(RequestCertificateResult(outcome.GetResult()));
  }
  else
  {
    return RequestCertificateOutcome(outcome.GetError());
  }
}

RequestCertificateOutcomeCallable ACMClient::RequestCertificateCallable(const RequestCertificateRequest& request) const
{
  return std::async(std::launch::async, &ACMClient::RequestCertificate, this, request);
}

void ACMClient::RequestCertificateAsync(const RequestCertificateRequest& request, const RequestCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&ACMClient::RequestCertificateAsyncHelper, this, request, handler, context);
}

void ACMClient::RequestCertificateAsyncHelper(const RequestCertificateRequest& request, const RequestCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, RequestCertificate(request), context);
}

ResendValidationEmailOutcome ACMClient::ResendValidationEmail(const ResendValidationEmailRequest& request) const
{
  Aws::StringStream ss;
  ss << m_uri << "/";

  JsonOutcome outcome = MakeRequest(ss.str(), request, HttpMethod::HTTP_POST);
  if(outcome.IsSuccess())
  {
    return ResendValidationEmailOutcome(NoResult());
  }
  else
  {
    return ResendValidationEmailOutcome(outcome.GetError());
  }
}

ResendValidationEmailOutcomeCallable ACMClient::ResendValidationEmailCallable(const ResendValidationEmailRequest& request) const
{
  return std::async(std::launch::async, &ACMClient::ResendValidationEmail, this, request);
}

void ACMClient::ResendValidationEmailAsync(const ResendValidationEmailRequest& request, const ResendValidationEmailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit(&ACMClient::ResendValidationEmailAsyncHelper, this, request, handler, context);
}

void ACMClient::ResendValidationEmailAsyncHelper(const ResendValidationEmailRequest& request, const ResendValidationEmailResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ResendValidationEmail(request), context);
}

