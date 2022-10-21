﻿/**
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
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <aws/amplifyuibuilder/AmplifyUIBuilderClient.h>
#include <aws/amplifyuibuilder/AmplifyUIBuilderEndpoint.h>
#include <aws/amplifyuibuilder/AmplifyUIBuilderErrorMarshaller.h>
#include <aws/amplifyuibuilder/model/CreateComponentRequest.h>
#include <aws/amplifyuibuilder/model/CreateFormRequest.h>
#include <aws/amplifyuibuilder/model/CreateThemeRequest.h>
#include <aws/amplifyuibuilder/model/DeleteComponentRequest.h>
#include <aws/amplifyuibuilder/model/DeleteFormRequest.h>
#include <aws/amplifyuibuilder/model/DeleteThemeRequest.h>
#include <aws/amplifyuibuilder/model/ExchangeCodeForTokenRequest.h>
#include <aws/amplifyuibuilder/model/ExportComponentsRequest.h>
#include <aws/amplifyuibuilder/model/ExportFormsRequest.h>
#include <aws/amplifyuibuilder/model/ExportThemesRequest.h>
#include <aws/amplifyuibuilder/model/GetComponentRequest.h>
#include <aws/amplifyuibuilder/model/GetFormRequest.h>
#include <aws/amplifyuibuilder/model/GetMetadataRequest.h>
#include <aws/amplifyuibuilder/model/GetThemeRequest.h>
#include <aws/amplifyuibuilder/model/ListComponentsRequest.h>
#include <aws/amplifyuibuilder/model/ListFormsRequest.h>
#include <aws/amplifyuibuilder/model/ListThemesRequest.h>
#include <aws/amplifyuibuilder/model/PutMetadataFlagRequest.h>
#include <aws/amplifyuibuilder/model/RefreshTokenRequest.h>
#include <aws/amplifyuibuilder/model/UpdateComponentRequest.h>
#include <aws/amplifyuibuilder/model/UpdateFormRequest.h>
#include <aws/amplifyuibuilder/model/UpdateThemeRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::AmplifyUIBuilder;
using namespace Aws::AmplifyUIBuilder::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

const char* AmplifyUIBuilderClient::SERVICE_NAME = "amplifyuibuilder";
const char* AmplifyUIBuilderClient::ALLOCATION_TAG = "AmplifyUIBuilderClient";

AmplifyUIBuilderClient::AmplifyUIBuilderClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<AmplifyUIBuilderErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

AmplifyUIBuilderClient::AmplifyUIBuilderClient(const AWSCredentials& credentials,
                                               const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<AmplifyUIBuilderErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

AmplifyUIBuilderClient::AmplifyUIBuilderClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                               const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<AmplifyUIBuilderErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

AmplifyUIBuilderClient::~AmplifyUIBuilderClient()
{
}

void AmplifyUIBuilderClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("AmplifyUIBuilder");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + AmplifyUIBuilderEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void AmplifyUIBuilderClient::OverrideEndpoint(const Aws::String& endpoint)
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

CreateComponentOutcome AmplifyUIBuilderClient::CreateComponent(const CreateComponentRequest& request) const
{
  if (!request.AppIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateComponent", "Required field: AppId, is not set");
    return CreateComponentOutcome(Aws::Client::AWSError<AmplifyUIBuilderErrors>(AmplifyUIBuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  if (!request.EnvironmentNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateComponent", "Required field: EnvironmentName, is not set");
    return CreateComponentOutcome(Aws::Client::AWSError<AmplifyUIBuilderErrors>(AmplifyUIBuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/app/");
  uri.AddPathSegment(request.GetAppId());
  uri.AddPathSegments("/environment/");
  uri.AddPathSegment(request.GetEnvironmentName());
  uri.AddPathSegments("/components");
  return CreateComponentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateComponentOutcomeCallable AmplifyUIBuilderClient::CreateComponentCallable(const CreateComponentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateComponentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateComponent(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AmplifyUIBuilderClient::CreateComponentAsync(const CreateComponentRequest& request, const CreateComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateComponent(request), context);
    } );
}

CreateFormOutcome AmplifyUIBuilderClient::CreateForm(const CreateFormRequest& request) const
{
  if (!request.AppIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateForm", "Required field: AppId, is not set");
    return CreateFormOutcome(Aws::Client::AWSError<AmplifyUIBuilderErrors>(AmplifyUIBuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  if (!request.EnvironmentNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateForm", "Required field: EnvironmentName, is not set");
    return CreateFormOutcome(Aws::Client::AWSError<AmplifyUIBuilderErrors>(AmplifyUIBuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/app/");
  uri.AddPathSegment(request.GetAppId());
  uri.AddPathSegments("/environment/");
  uri.AddPathSegment(request.GetEnvironmentName());
  uri.AddPathSegments("/forms");
  return CreateFormOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateFormOutcomeCallable AmplifyUIBuilderClient::CreateFormCallable(const CreateFormRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateFormOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateForm(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AmplifyUIBuilderClient::CreateFormAsync(const CreateFormRequest& request, const CreateFormResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateForm(request), context);
    } );
}

CreateThemeOutcome AmplifyUIBuilderClient::CreateTheme(const CreateThemeRequest& request) const
{
  if (!request.AppIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateTheme", "Required field: AppId, is not set");
    return CreateThemeOutcome(Aws::Client::AWSError<AmplifyUIBuilderErrors>(AmplifyUIBuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  if (!request.EnvironmentNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateTheme", "Required field: EnvironmentName, is not set");
    return CreateThemeOutcome(Aws::Client::AWSError<AmplifyUIBuilderErrors>(AmplifyUIBuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/app/");
  uri.AddPathSegment(request.GetAppId());
  uri.AddPathSegments("/environment/");
  uri.AddPathSegment(request.GetEnvironmentName());
  uri.AddPathSegments("/themes");
  return CreateThemeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateThemeOutcomeCallable AmplifyUIBuilderClient::CreateThemeCallable(const CreateThemeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateThemeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateTheme(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AmplifyUIBuilderClient::CreateThemeAsync(const CreateThemeRequest& request, const CreateThemeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateTheme(request), context);
    } );
}

DeleteComponentOutcome AmplifyUIBuilderClient::DeleteComponent(const DeleteComponentRequest& request) const
{
  if (!request.AppIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteComponent", "Required field: AppId, is not set");
    return DeleteComponentOutcome(Aws::Client::AWSError<AmplifyUIBuilderErrors>(AmplifyUIBuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  if (!request.EnvironmentNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteComponent", "Required field: EnvironmentName, is not set");
    return DeleteComponentOutcome(Aws::Client::AWSError<AmplifyUIBuilderErrors>(AmplifyUIBuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentName]", false));
  }
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteComponent", "Required field: Id, is not set");
    return DeleteComponentOutcome(Aws::Client::AWSError<AmplifyUIBuilderErrors>(AmplifyUIBuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/app/");
  uri.AddPathSegment(request.GetAppId());
  uri.AddPathSegments("/environment/");
  uri.AddPathSegment(request.GetEnvironmentName());
  uri.AddPathSegments("/components/");
  uri.AddPathSegment(request.GetId());
  return DeleteComponentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteComponentOutcomeCallable AmplifyUIBuilderClient::DeleteComponentCallable(const DeleteComponentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteComponentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteComponent(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AmplifyUIBuilderClient::DeleteComponentAsync(const DeleteComponentRequest& request, const DeleteComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteComponent(request), context);
    } );
}

DeleteFormOutcome AmplifyUIBuilderClient::DeleteForm(const DeleteFormRequest& request) const
{
  if (!request.AppIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteForm", "Required field: AppId, is not set");
    return DeleteFormOutcome(Aws::Client::AWSError<AmplifyUIBuilderErrors>(AmplifyUIBuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  if (!request.EnvironmentNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteForm", "Required field: EnvironmentName, is not set");
    return DeleteFormOutcome(Aws::Client::AWSError<AmplifyUIBuilderErrors>(AmplifyUIBuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentName]", false));
  }
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteForm", "Required field: Id, is not set");
    return DeleteFormOutcome(Aws::Client::AWSError<AmplifyUIBuilderErrors>(AmplifyUIBuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/app/");
  uri.AddPathSegment(request.GetAppId());
  uri.AddPathSegments("/environment/");
  uri.AddPathSegment(request.GetEnvironmentName());
  uri.AddPathSegments("/forms/");
  uri.AddPathSegment(request.GetId());
  return DeleteFormOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteFormOutcomeCallable AmplifyUIBuilderClient::DeleteFormCallable(const DeleteFormRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteFormOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteForm(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AmplifyUIBuilderClient::DeleteFormAsync(const DeleteFormRequest& request, const DeleteFormResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteForm(request), context);
    } );
}

DeleteThemeOutcome AmplifyUIBuilderClient::DeleteTheme(const DeleteThemeRequest& request) const
{
  if (!request.AppIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteTheme", "Required field: AppId, is not set");
    return DeleteThemeOutcome(Aws::Client::AWSError<AmplifyUIBuilderErrors>(AmplifyUIBuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  if (!request.EnvironmentNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteTheme", "Required field: EnvironmentName, is not set");
    return DeleteThemeOutcome(Aws::Client::AWSError<AmplifyUIBuilderErrors>(AmplifyUIBuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentName]", false));
  }
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteTheme", "Required field: Id, is not set");
    return DeleteThemeOutcome(Aws::Client::AWSError<AmplifyUIBuilderErrors>(AmplifyUIBuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/app/");
  uri.AddPathSegment(request.GetAppId());
  uri.AddPathSegments("/environment/");
  uri.AddPathSegment(request.GetEnvironmentName());
  uri.AddPathSegments("/themes/");
  uri.AddPathSegment(request.GetId());
  return DeleteThemeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteThemeOutcomeCallable AmplifyUIBuilderClient::DeleteThemeCallable(const DeleteThemeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteThemeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteTheme(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AmplifyUIBuilderClient::DeleteThemeAsync(const DeleteThemeRequest& request, const DeleteThemeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteTheme(request), context);
    } );
}

ExchangeCodeForTokenOutcome AmplifyUIBuilderClient::ExchangeCodeForToken(const ExchangeCodeForTokenRequest& request) const
{
  if (!request.ProviderHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ExchangeCodeForToken", "Required field: Provider, is not set");
    return ExchangeCodeForTokenOutcome(Aws::Client::AWSError<AmplifyUIBuilderErrors>(AmplifyUIBuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Provider]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tokens/");
  uri.AddPathSegment(TokenProvidersMapper::GetNameForTokenProviders(request.GetProvider()));
  return ExchangeCodeForTokenOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ExchangeCodeForTokenOutcomeCallable AmplifyUIBuilderClient::ExchangeCodeForTokenCallable(const ExchangeCodeForTokenRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ExchangeCodeForTokenOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ExchangeCodeForToken(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AmplifyUIBuilderClient::ExchangeCodeForTokenAsync(const ExchangeCodeForTokenRequest& request, const ExchangeCodeForTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ExchangeCodeForToken(request), context);
    } );
}

ExportComponentsOutcome AmplifyUIBuilderClient::ExportComponents(const ExportComponentsRequest& request) const
{
  if (!request.AppIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ExportComponents", "Required field: AppId, is not set");
    return ExportComponentsOutcome(Aws::Client::AWSError<AmplifyUIBuilderErrors>(AmplifyUIBuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  if (!request.EnvironmentNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ExportComponents", "Required field: EnvironmentName, is not set");
    return ExportComponentsOutcome(Aws::Client::AWSError<AmplifyUIBuilderErrors>(AmplifyUIBuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/export/app/");
  uri.AddPathSegment(request.GetAppId());
  uri.AddPathSegments("/environment/");
  uri.AddPathSegment(request.GetEnvironmentName());
  uri.AddPathSegments("/components");
  return ExportComponentsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ExportComponentsOutcomeCallable AmplifyUIBuilderClient::ExportComponentsCallable(const ExportComponentsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ExportComponentsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ExportComponents(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AmplifyUIBuilderClient::ExportComponentsAsync(const ExportComponentsRequest& request, const ExportComponentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ExportComponents(request), context);
    } );
}

ExportFormsOutcome AmplifyUIBuilderClient::ExportForms(const ExportFormsRequest& request) const
{
  if (!request.AppIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ExportForms", "Required field: AppId, is not set");
    return ExportFormsOutcome(Aws::Client::AWSError<AmplifyUIBuilderErrors>(AmplifyUIBuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  if (!request.EnvironmentNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ExportForms", "Required field: EnvironmentName, is not set");
    return ExportFormsOutcome(Aws::Client::AWSError<AmplifyUIBuilderErrors>(AmplifyUIBuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/export/app/");
  uri.AddPathSegment(request.GetAppId());
  uri.AddPathSegments("/environment/");
  uri.AddPathSegment(request.GetEnvironmentName());
  uri.AddPathSegments("/forms");
  return ExportFormsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ExportFormsOutcomeCallable AmplifyUIBuilderClient::ExportFormsCallable(const ExportFormsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ExportFormsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ExportForms(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AmplifyUIBuilderClient::ExportFormsAsync(const ExportFormsRequest& request, const ExportFormsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ExportForms(request), context);
    } );
}

ExportThemesOutcome AmplifyUIBuilderClient::ExportThemes(const ExportThemesRequest& request) const
{
  if (!request.AppIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ExportThemes", "Required field: AppId, is not set");
    return ExportThemesOutcome(Aws::Client::AWSError<AmplifyUIBuilderErrors>(AmplifyUIBuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  if (!request.EnvironmentNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ExportThemes", "Required field: EnvironmentName, is not set");
    return ExportThemesOutcome(Aws::Client::AWSError<AmplifyUIBuilderErrors>(AmplifyUIBuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/export/app/");
  uri.AddPathSegment(request.GetAppId());
  uri.AddPathSegments("/environment/");
  uri.AddPathSegment(request.GetEnvironmentName());
  uri.AddPathSegments("/themes");
  return ExportThemesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ExportThemesOutcomeCallable AmplifyUIBuilderClient::ExportThemesCallable(const ExportThemesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ExportThemesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ExportThemes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AmplifyUIBuilderClient::ExportThemesAsync(const ExportThemesRequest& request, const ExportThemesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ExportThemes(request), context);
    } );
}

GetComponentOutcome AmplifyUIBuilderClient::GetComponent(const GetComponentRequest& request) const
{
  if (!request.AppIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetComponent", "Required field: AppId, is not set");
    return GetComponentOutcome(Aws::Client::AWSError<AmplifyUIBuilderErrors>(AmplifyUIBuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  if (!request.EnvironmentNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetComponent", "Required field: EnvironmentName, is not set");
    return GetComponentOutcome(Aws::Client::AWSError<AmplifyUIBuilderErrors>(AmplifyUIBuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentName]", false));
  }
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetComponent", "Required field: Id, is not set");
    return GetComponentOutcome(Aws::Client::AWSError<AmplifyUIBuilderErrors>(AmplifyUIBuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/app/");
  uri.AddPathSegment(request.GetAppId());
  uri.AddPathSegments("/environment/");
  uri.AddPathSegment(request.GetEnvironmentName());
  uri.AddPathSegments("/components/");
  uri.AddPathSegment(request.GetId());
  return GetComponentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetComponentOutcomeCallable AmplifyUIBuilderClient::GetComponentCallable(const GetComponentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetComponentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetComponent(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AmplifyUIBuilderClient::GetComponentAsync(const GetComponentRequest& request, const GetComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetComponent(request), context);
    } );
}

GetFormOutcome AmplifyUIBuilderClient::GetForm(const GetFormRequest& request) const
{
  if (!request.AppIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetForm", "Required field: AppId, is not set");
    return GetFormOutcome(Aws::Client::AWSError<AmplifyUIBuilderErrors>(AmplifyUIBuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  if (!request.EnvironmentNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetForm", "Required field: EnvironmentName, is not set");
    return GetFormOutcome(Aws::Client::AWSError<AmplifyUIBuilderErrors>(AmplifyUIBuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentName]", false));
  }
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetForm", "Required field: Id, is not set");
    return GetFormOutcome(Aws::Client::AWSError<AmplifyUIBuilderErrors>(AmplifyUIBuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/app/");
  uri.AddPathSegment(request.GetAppId());
  uri.AddPathSegments("/environment/");
  uri.AddPathSegment(request.GetEnvironmentName());
  uri.AddPathSegments("/forms/");
  uri.AddPathSegment(request.GetId());
  return GetFormOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetFormOutcomeCallable AmplifyUIBuilderClient::GetFormCallable(const GetFormRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetFormOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetForm(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AmplifyUIBuilderClient::GetFormAsync(const GetFormRequest& request, const GetFormResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetForm(request), context);
    } );
}

GetMetadataOutcome AmplifyUIBuilderClient::GetMetadata(const GetMetadataRequest& request) const
{
  if (!request.AppIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetMetadata", "Required field: AppId, is not set");
    return GetMetadataOutcome(Aws::Client::AWSError<AmplifyUIBuilderErrors>(AmplifyUIBuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  if (!request.EnvironmentNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetMetadata", "Required field: EnvironmentName, is not set");
    return GetMetadataOutcome(Aws::Client::AWSError<AmplifyUIBuilderErrors>(AmplifyUIBuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/app/");
  uri.AddPathSegment(request.GetAppId());
  uri.AddPathSegments("/environment/");
  uri.AddPathSegment(request.GetEnvironmentName());
  uri.AddPathSegments("/metadata");
  return GetMetadataOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetMetadataOutcomeCallable AmplifyUIBuilderClient::GetMetadataCallable(const GetMetadataRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetMetadataOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetMetadata(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AmplifyUIBuilderClient::GetMetadataAsync(const GetMetadataRequest& request, const GetMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetMetadata(request), context);
    } );
}

GetThemeOutcome AmplifyUIBuilderClient::GetTheme(const GetThemeRequest& request) const
{
  if (!request.AppIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetTheme", "Required field: AppId, is not set");
    return GetThemeOutcome(Aws::Client::AWSError<AmplifyUIBuilderErrors>(AmplifyUIBuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  if (!request.EnvironmentNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetTheme", "Required field: EnvironmentName, is not set");
    return GetThemeOutcome(Aws::Client::AWSError<AmplifyUIBuilderErrors>(AmplifyUIBuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentName]", false));
  }
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetTheme", "Required field: Id, is not set");
    return GetThemeOutcome(Aws::Client::AWSError<AmplifyUIBuilderErrors>(AmplifyUIBuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/app/");
  uri.AddPathSegment(request.GetAppId());
  uri.AddPathSegments("/environment/");
  uri.AddPathSegment(request.GetEnvironmentName());
  uri.AddPathSegments("/themes/");
  uri.AddPathSegment(request.GetId());
  return GetThemeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetThemeOutcomeCallable AmplifyUIBuilderClient::GetThemeCallable(const GetThemeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetThemeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetTheme(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AmplifyUIBuilderClient::GetThemeAsync(const GetThemeRequest& request, const GetThemeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetTheme(request), context);
    } );
}

ListComponentsOutcome AmplifyUIBuilderClient::ListComponents(const ListComponentsRequest& request) const
{
  if (!request.AppIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListComponents", "Required field: AppId, is not set");
    return ListComponentsOutcome(Aws::Client::AWSError<AmplifyUIBuilderErrors>(AmplifyUIBuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  if (!request.EnvironmentNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListComponents", "Required field: EnvironmentName, is not set");
    return ListComponentsOutcome(Aws::Client::AWSError<AmplifyUIBuilderErrors>(AmplifyUIBuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/app/");
  uri.AddPathSegment(request.GetAppId());
  uri.AddPathSegments("/environment/");
  uri.AddPathSegment(request.GetEnvironmentName());
  uri.AddPathSegments("/components");
  return ListComponentsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListComponentsOutcomeCallable AmplifyUIBuilderClient::ListComponentsCallable(const ListComponentsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListComponentsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListComponents(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AmplifyUIBuilderClient::ListComponentsAsync(const ListComponentsRequest& request, const ListComponentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListComponents(request), context);
    } );
}

ListFormsOutcome AmplifyUIBuilderClient::ListForms(const ListFormsRequest& request) const
{
  if (!request.AppIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListForms", "Required field: AppId, is not set");
    return ListFormsOutcome(Aws::Client::AWSError<AmplifyUIBuilderErrors>(AmplifyUIBuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  if (!request.EnvironmentNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListForms", "Required field: EnvironmentName, is not set");
    return ListFormsOutcome(Aws::Client::AWSError<AmplifyUIBuilderErrors>(AmplifyUIBuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/app/");
  uri.AddPathSegment(request.GetAppId());
  uri.AddPathSegments("/environment/");
  uri.AddPathSegment(request.GetEnvironmentName());
  uri.AddPathSegments("/forms");
  return ListFormsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListFormsOutcomeCallable AmplifyUIBuilderClient::ListFormsCallable(const ListFormsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListFormsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListForms(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AmplifyUIBuilderClient::ListFormsAsync(const ListFormsRequest& request, const ListFormsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListForms(request), context);
    } );
}

ListThemesOutcome AmplifyUIBuilderClient::ListThemes(const ListThemesRequest& request) const
{
  if (!request.AppIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListThemes", "Required field: AppId, is not set");
    return ListThemesOutcome(Aws::Client::AWSError<AmplifyUIBuilderErrors>(AmplifyUIBuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  if (!request.EnvironmentNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListThemes", "Required field: EnvironmentName, is not set");
    return ListThemesOutcome(Aws::Client::AWSError<AmplifyUIBuilderErrors>(AmplifyUIBuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/app/");
  uri.AddPathSegment(request.GetAppId());
  uri.AddPathSegments("/environment/");
  uri.AddPathSegment(request.GetEnvironmentName());
  uri.AddPathSegments("/themes");
  return ListThemesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListThemesOutcomeCallable AmplifyUIBuilderClient::ListThemesCallable(const ListThemesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListThemesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListThemes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AmplifyUIBuilderClient::ListThemesAsync(const ListThemesRequest& request, const ListThemesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListThemes(request), context);
    } );
}

PutMetadataFlagOutcome AmplifyUIBuilderClient::PutMetadataFlag(const PutMetadataFlagRequest& request) const
{
  if (!request.AppIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutMetadataFlag", "Required field: AppId, is not set");
    return PutMetadataFlagOutcome(Aws::Client::AWSError<AmplifyUIBuilderErrors>(AmplifyUIBuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  if (!request.EnvironmentNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutMetadataFlag", "Required field: EnvironmentName, is not set");
    return PutMetadataFlagOutcome(Aws::Client::AWSError<AmplifyUIBuilderErrors>(AmplifyUIBuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentName]", false));
  }
  if (!request.FeatureNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutMetadataFlag", "Required field: FeatureName, is not set");
    return PutMetadataFlagOutcome(Aws::Client::AWSError<AmplifyUIBuilderErrors>(AmplifyUIBuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FeatureName]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/app/");
  uri.AddPathSegment(request.GetAppId());
  uri.AddPathSegments("/environment/");
  uri.AddPathSegment(request.GetEnvironmentName());
  uri.AddPathSegments("/metadata/features/");
  uri.AddPathSegment(request.GetFeatureName());
  return PutMetadataFlagOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutMetadataFlagOutcomeCallable AmplifyUIBuilderClient::PutMetadataFlagCallable(const PutMetadataFlagRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutMetadataFlagOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutMetadataFlag(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AmplifyUIBuilderClient::PutMetadataFlagAsync(const PutMetadataFlagRequest& request, const PutMetadataFlagResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutMetadataFlag(request), context);
    } );
}

RefreshTokenOutcome AmplifyUIBuilderClient::RefreshToken(const RefreshTokenRequest& request) const
{
  if (!request.ProviderHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RefreshToken", "Required field: Provider, is not set");
    return RefreshTokenOutcome(Aws::Client::AWSError<AmplifyUIBuilderErrors>(AmplifyUIBuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Provider]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tokens/");
  uri.AddPathSegment(TokenProvidersMapper::GetNameForTokenProviders(request.GetProvider()));
  uri.AddPathSegments("/refresh");
  return RefreshTokenOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RefreshTokenOutcomeCallable AmplifyUIBuilderClient::RefreshTokenCallable(const RefreshTokenRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RefreshTokenOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RefreshToken(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AmplifyUIBuilderClient::RefreshTokenAsync(const RefreshTokenRequest& request, const RefreshTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RefreshToken(request), context);
    } );
}

UpdateComponentOutcome AmplifyUIBuilderClient::UpdateComponent(const UpdateComponentRequest& request) const
{
  if (!request.AppIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateComponent", "Required field: AppId, is not set");
    return UpdateComponentOutcome(Aws::Client::AWSError<AmplifyUIBuilderErrors>(AmplifyUIBuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  if (!request.EnvironmentNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateComponent", "Required field: EnvironmentName, is not set");
    return UpdateComponentOutcome(Aws::Client::AWSError<AmplifyUIBuilderErrors>(AmplifyUIBuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentName]", false));
  }
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateComponent", "Required field: Id, is not set");
    return UpdateComponentOutcome(Aws::Client::AWSError<AmplifyUIBuilderErrors>(AmplifyUIBuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/app/");
  uri.AddPathSegment(request.GetAppId());
  uri.AddPathSegments("/environment/");
  uri.AddPathSegment(request.GetEnvironmentName());
  uri.AddPathSegments("/components/");
  uri.AddPathSegment(request.GetId());
  return UpdateComponentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateComponentOutcomeCallable AmplifyUIBuilderClient::UpdateComponentCallable(const UpdateComponentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateComponentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateComponent(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AmplifyUIBuilderClient::UpdateComponentAsync(const UpdateComponentRequest& request, const UpdateComponentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateComponent(request), context);
    } );
}

UpdateFormOutcome AmplifyUIBuilderClient::UpdateForm(const UpdateFormRequest& request) const
{
  if (!request.AppIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateForm", "Required field: AppId, is not set");
    return UpdateFormOutcome(Aws::Client::AWSError<AmplifyUIBuilderErrors>(AmplifyUIBuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  if (!request.EnvironmentNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateForm", "Required field: EnvironmentName, is not set");
    return UpdateFormOutcome(Aws::Client::AWSError<AmplifyUIBuilderErrors>(AmplifyUIBuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentName]", false));
  }
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateForm", "Required field: Id, is not set");
    return UpdateFormOutcome(Aws::Client::AWSError<AmplifyUIBuilderErrors>(AmplifyUIBuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/app/");
  uri.AddPathSegment(request.GetAppId());
  uri.AddPathSegments("/environment/");
  uri.AddPathSegment(request.GetEnvironmentName());
  uri.AddPathSegments("/forms/");
  uri.AddPathSegment(request.GetId());
  return UpdateFormOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateFormOutcomeCallable AmplifyUIBuilderClient::UpdateFormCallable(const UpdateFormRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateFormOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateForm(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AmplifyUIBuilderClient::UpdateFormAsync(const UpdateFormRequest& request, const UpdateFormResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateForm(request), context);
    } );
}

UpdateThemeOutcome AmplifyUIBuilderClient::UpdateTheme(const UpdateThemeRequest& request) const
{
  if (!request.AppIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateTheme", "Required field: AppId, is not set");
    return UpdateThemeOutcome(Aws::Client::AWSError<AmplifyUIBuilderErrors>(AmplifyUIBuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  if (!request.EnvironmentNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateTheme", "Required field: EnvironmentName, is not set");
    return UpdateThemeOutcome(Aws::Client::AWSError<AmplifyUIBuilderErrors>(AmplifyUIBuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentName]", false));
  }
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateTheme", "Required field: Id, is not set");
    return UpdateThemeOutcome(Aws::Client::AWSError<AmplifyUIBuilderErrors>(AmplifyUIBuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/app/");
  uri.AddPathSegment(request.GetAppId());
  uri.AddPathSegments("/environment/");
  uri.AddPathSegment(request.GetEnvironmentName());
  uri.AddPathSegments("/themes/");
  uri.AddPathSegment(request.GetId());
  return UpdateThemeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateThemeOutcomeCallable AmplifyUIBuilderClient::UpdateThemeCallable(const UpdateThemeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateThemeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateTheme(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AmplifyUIBuilderClient::UpdateThemeAsync(const UpdateThemeRequest& request, const UpdateThemeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateTheme(request), context);
    } );
}

