/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/amplifyuibuilder/AmplifyUIBuilderErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/amplifyuibuilder/AmplifyUIBuilderEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in AmplifyUIBuilderClient header */
#include <aws/amplifyuibuilder/model/CreateComponentResult.h>
#include <aws/amplifyuibuilder/model/CreateFormResult.h>
#include <aws/amplifyuibuilder/model/CreateThemeResult.h>
#include <aws/amplifyuibuilder/model/ExchangeCodeForTokenResult.h>
#include <aws/amplifyuibuilder/model/ExportComponentsResult.h>
#include <aws/amplifyuibuilder/model/ExportFormsResult.h>
#include <aws/amplifyuibuilder/model/ExportThemesResult.h>
#include <aws/amplifyuibuilder/model/GetComponentResult.h>
#include <aws/amplifyuibuilder/model/GetFormResult.h>
#include <aws/amplifyuibuilder/model/GetMetadataResult.h>
#include <aws/amplifyuibuilder/model/GetThemeResult.h>
#include <aws/amplifyuibuilder/model/ListComponentsResult.h>
#include <aws/amplifyuibuilder/model/ListFormsResult.h>
#include <aws/amplifyuibuilder/model/ListThemesResult.h>
#include <aws/amplifyuibuilder/model/RefreshTokenResult.h>
#include <aws/amplifyuibuilder/model/UpdateComponentResult.h>
#include <aws/amplifyuibuilder/model/UpdateFormResult.h>
#include <aws/amplifyuibuilder/model/UpdateThemeResult.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in AmplifyUIBuilderClient header */

namespace Aws
{
  namespace Http
  {
    class HttpClient;
    class HttpClientFactory;
  } // namespace Http

  namespace Utils
  {
    template< typename R, typename E> class Outcome;

    namespace Threading
    {
      class Executor;
    } // namespace Threading
  } // namespace Utils

  namespace Auth
  {
    class AWSCredentials;
    class AWSCredentialsProvider;
  } // namespace Auth

  namespace Client
  {
    class RetryStrategy;
  } // namespace Client

  namespace AmplifyUIBuilder
  {
    using AmplifyUIBuilderClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using AmplifyUIBuilderEndpointProviderBase = Aws::AmplifyUIBuilder::Endpoint::AmplifyUIBuilderEndpointProviderBase;
    using AmplifyUIBuilderEndpointProvider = Aws::AmplifyUIBuilder::Endpoint::AmplifyUIBuilderEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in AmplifyUIBuilderClient header */
      class CreateComponentRequest;
      class CreateFormRequest;
      class CreateThemeRequest;
      class DeleteComponentRequest;
      class DeleteFormRequest;
      class DeleteThemeRequest;
      class ExchangeCodeForTokenRequest;
      class ExportComponentsRequest;
      class ExportFormsRequest;
      class ExportThemesRequest;
      class GetComponentRequest;
      class GetFormRequest;
      class GetMetadataRequest;
      class GetThemeRequest;
      class ListComponentsRequest;
      class ListFormsRequest;
      class ListThemesRequest;
      class PutMetadataFlagRequest;
      class RefreshTokenRequest;
      class UpdateComponentRequest;
      class UpdateFormRequest;
      class UpdateThemeRequest;
      /* End of service model forward declarations required in AmplifyUIBuilderClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CreateComponentResult, AmplifyUIBuilderError> CreateComponentOutcome;
      typedef Aws::Utils::Outcome<CreateFormResult, AmplifyUIBuilderError> CreateFormOutcome;
      typedef Aws::Utils::Outcome<CreateThemeResult, AmplifyUIBuilderError> CreateThemeOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, AmplifyUIBuilderError> DeleteComponentOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, AmplifyUIBuilderError> DeleteFormOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, AmplifyUIBuilderError> DeleteThemeOutcome;
      typedef Aws::Utils::Outcome<ExchangeCodeForTokenResult, AmplifyUIBuilderError> ExchangeCodeForTokenOutcome;
      typedef Aws::Utils::Outcome<ExportComponentsResult, AmplifyUIBuilderError> ExportComponentsOutcome;
      typedef Aws::Utils::Outcome<ExportFormsResult, AmplifyUIBuilderError> ExportFormsOutcome;
      typedef Aws::Utils::Outcome<ExportThemesResult, AmplifyUIBuilderError> ExportThemesOutcome;
      typedef Aws::Utils::Outcome<GetComponentResult, AmplifyUIBuilderError> GetComponentOutcome;
      typedef Aws::Utils::Outcome<GetFormResult, AmplifyUIBuilderError> GetFormOutcome;
      typedef Aws::Utils::Outcome<GetMetadataResult, AmplifyUIBuilderError> GetMetadataOutcome;
      typedef Aws::Utils::Outcome<GetThemeResult, AmplifyUIBuilderError> GetThemeOutcome;
      typedef Aws::Utils::Outcome<ListComponentsResult, AmplifyUIBuilderError> ListComponentsOutcome;
      typedef Aws::Utils::Outcome<ListFormsResult, AmplifyUIBuilderError> ListFormsOutcome;
      typedef Aws::Utils::Outcome<ListThemesResult, AmplifyUIBuilderError> ListThemesOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, AmplifyUIBuilderError> PutMetadataFlagOutcome;
      typedef Aws::Utils::Outcome<RefreshTokenResult, AmplifyUIBuilderError> RefreshTokenOutcome;
      typedef Aws::Utils::Outcome<UpdateComponentResult, AmplifyUIBuilderError> UpdateComponentOutcome;
      typedef Aws::Utils::Outcome<UpdateFormResult, AmplifyUIBuilderError> UpdateFormOutcome;
      typedef Aws::Utils::Outcome<UpdateThemeResult, AmplifyUIBuilderError> UpdateThemeOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CreateComponentOutcome> CreateComponentOutcomeCallable;
      typedef std::future<CreateFormOutcome> CreateFormOutcomeCallable;
      typedef std::future<CreateThemeOutcome> CreateThemeOutcomeCallable;
      typedef std::future<DeleteComponentOutcome> DeleteComponentOutcomeCallable;
      typedef std::future<DeleteFormOutcome> DeleteFormOutcomeCallable;
      typedef std::future<DeleteThemeOutcome> DeleteThemeOutcomeCallable;
      typedef std::future<ExchangeCodeForTokenOutcome> ExchangeCodeForTokenOutcomeCallable;
      typedef std::future<ExportComponentsOutcome> ExportComponentsOutcomeCallable;
      typedef std::future<ExportFormsOutcome> ExportFormsOutcomeCallable;
      typedef std::future<ExportThemesOutcome> ExportThemesOutcomeCallable;
      typedef std::future<GetComponentOutcome> GetComponentOutcomeCallable;
      typedef std::future<GetFormOutcome> GetFormOutcomeCallable;
      typedef std::future<GetMetadataOutcome> GetMetadataOutcomeCallable;
      typedef std::future<GetThemeOutcome> GetThemeOutcomeCallable;
      typedef std::future<ListComponentsOutcome> ListComponentsOutcomeCallable;
      typedef std::future<ListFormsOutcome> ListFormsOutcomeCallable;
      typedef std::future<ListThemesOutcome> ListThemesOutcomeCallable;
      typedef std::future<PutMetadataFlagOutcome> PutMetadataFlagOutcomeCallable;
      typedef std::future<RefreshTokenOutcome> RefreshTokenOutcomeCallable;
      typedef std::future<UpdateComponentOutcome> UpdateComponentOutcomeCallable;
      typedef std::future<UpdateFormOutcome> UpdateFormOutcomeCallable;
      typedef std::future<UpdateThemeOutcome> UpdateThemeOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class AmplifyUIBuilderClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const AmplifyUIBuilderClient*, const Model::CreateComponentRequest&, const Model::CreateComponentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateComponentResponseReceivedHandler;
    typedef std::function<void(const AmplifyUIBuilderClient*, const Model::CreateFormRequest&, const Model::CreateFormOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateFormResponseReceivedHandler;
    typedef std::function<void(const AmplifyUIBuilderClient*, const Model::CreateThemeRequest&, const Model::CreateThemeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateThemeResponseReceivedHandler;
    typedef std::function<void(const AmplifyUIBuilderClient*, const Model::DeleteComponentRequest&, const Model::DeleteComponentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteComponentResponseReceivedHandler;
    typedef std::function<void(const AmplifyUIBuilderClient*, const Model::DeleteFormRequest&, const Model::DeleteFormOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteFormResponseReceivedHandler;
    typedef std::function<void(const AmplifyUIBuilderClient*, const Model::DeleteThemeRequest&, const Model::DeleteThemeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteThemeResponseReceivedHandler;
    typedef std::function<void(const AmplifyUIBuilderClient*, const Model::ExchangeCodeForTokenRequest&, const Model::ExchangeCodeForTokenOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ExchangeCodeForTokenResponseReceivedHandler;
    typedef std::function<void(const AmplifyUIBuilderClient*, const Model::ExportComponentsRequest&, const Model::ExportComponentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ExportComponentsResponseReceivedHandler;
    typedef std::function<void(const AmplifyUIBuilderClient*, const Model::ExportFormsRequest&, const Model::ExportFormsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ExportFormsResponseReceivedHandler;
    typedef std::function<void(const AmplifyUIBuilderClient*, const Model::ExportThemesRequest&, const Model::ExportThemesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ExportThemesResponseReceivedHandler;
    typedef std::function<void(const AmplifyUIBuilderClient*, const Model::GetComponentRequest&, const Model::GetComponentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetComponentResponseReceivedHandler;
    typedef std::function<void(const AmplifyUIBuilderClient*, const Model::GetFormRequest&, const Model::GetFormOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetFormResponseReceivedHandler;
    typedef std::function<void(const AmplifyUIBuilderClient*, const Model::GetMetadataRequest&, const Model::GetMetadataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMetadataResponseReceivedHandler;
    typedef std::function<void(const AmplifyUIBuilderClient*, const Model::GetThemeRequest&, const Model::GetThemeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetThemeResponseReceivedHandler;
    typedef std::function<void(const AmplifyUIBuilderClient*, const Model::ListComponentsRequest&, const Model::ListComponentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListComponentsResponseReceivedHandler;
    typedef std::function<void(const AmplifyUIBuilderClient*, const Model::ListFormsRequest&, const Model::ListFormsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListFormsResponseReceivedHandler;
    typedef std::function<void(const AmplifyUIBuilderClient*, const Model::ListThemesRequest&, const Model::ListThemesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListThemesResponseReceivedHandler;
    typedef std::function<void(const AmplifyUIBuilderClient*, const Model::PutMetadataFlagRequest&, const Model::PutMetadataFlagOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutMetadataFlagResponseReceivedHandler;
    typedef std::function<void(const AmplifyUIBuilderClient*, const Model::RefreshTokenRequest&, const Model::RefreshTokenOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RefreshTokenResponseReceivedHandler;
    typedef std::function<void(const AmplifyUIBuilderClient*, const Model::UpdateComponentRequest&, const Model::UpdateComponentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateComponentResponseReceivedHandler;
    typedef std::function<void(const AmplifyUIBuilderClient*, const Model::UpdateFormRequest&, const Model::UpdateFormOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateFormResponseReceivedHandler;
    typedef std::function<void(const AmplifyUIBuilderClient*, const Model::UpdateThemeRequest&, const Model::UpdateThemeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateThemeResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace AmplifyUIBuilder
} // namespace Aws
