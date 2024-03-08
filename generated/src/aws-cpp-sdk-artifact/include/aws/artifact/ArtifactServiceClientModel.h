/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/artifact/ArtifactErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/artifact/ArtifactEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in ArtifactClient header */
#include <aws/artifact/model/GetAccountSettingsResult.h>
#include <aws/artifact/model/GetReportResult.h>
#include <aws/artifact/model/GetReportMetadataResult.h>
#include <aws/artifact/model/GetTermForReportResult.h>
#include <aws/artifact/model/ListReportsResult.h>
#include <aws/artifact/model/PutAccountSettingsResult.h>
/* End of service model headers required in ArtifactClient header */

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

  namespace Artifact
  {
    using ArtifactClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using ArtifactEndpointProviderBase = Aws::Artifact::Endpoint::ArtifactEndpointProviderBase;
    using ArtifactEndpointProvider = Aws::Artifact::Endpoint::ArtifactEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in ArtifactClient header */
      class GetAccountSettingsRequest;
      class GetReportRequest;
      class GetReportMetadataRequest;
      class GetTermForReportRequest;
      class ListReportsRequest;
      class PutAccountSettingsRequest;
      /* End of service model forward declarations required in ArtifactClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<GetAccountSettingsResult, ArtifactError> GetAccountSettingsOutcome;
      typedef Aws::Utils::Outcome<GetReportResult, ArtifactError> GetReportOutcome;
      typedef Aws::Utils::Outcome<GetReportMetadataResult, ArtifactError> GetReportMetadataOutcome;
      typedef Aws::Utils::Outcome<GetTermForReportResult, ArtifactError> GetTermForReportOutcome;
      typedef Aws::Utils::Outcome<ListReportsResult, ArtifactError> ListReportsOutcome;
      typedef Aws::Utils::Outcome<PutAccountSettingsResult, ArtifactError> PutAccountSettingsOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<GetAccountSettingsOutcome> GetAccountSettingsOutcomeCallable;
      typedef std::future<GetReportOutcome> GetReportOutcomeCallable;
      typedef std::future<GetReportMetadataOutcome> GetReportMetadataOutcomeCallable;
      typedef std::future<GetTermForReportOutcome> GetTermForReportOutcomeCallable;
      typedef std::future<ListReportsOutcome> ListReportsOutcomeCallable;
      typedef std::future<PutAccountSettingsOutcome> PutAccountSettingsOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class ArtifactClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const ArtifactClient*, const Model::GetAccountSettingsRequest&, const Model::GetAccountSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAccountSettingsResponseReceivedHandler;
    typedef std::function<void(const ArtifactClient*, const Model::GetReportRequest&, const Model::GetReportOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetReportResponseReceivedHandler;
    typedef std::function<void(const ArtifactClient*, const Model::GetReportMetadataRequest&, const Model::GetReportMetadataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetReportMetadataResponseReceivedHandler;
    typedef std::function<void(const ArtifactClient*, const Model::GetTermForReportRequest&, const Model::GetTermForReportOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTermForReportResponseReceivedHandler;
    typedef std::function<void(const ArtifactClient*, const Model::ListReportsRequest&, const Model::ListReportsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListReportsResponseReceivedHandler;
    typedef std::function<void(const ArtifactClient*, const Model::PutAccountSettingsRequest&, const Model::PutAccountSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutAccountSettingsResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace Artifact
} // namespace Aws
