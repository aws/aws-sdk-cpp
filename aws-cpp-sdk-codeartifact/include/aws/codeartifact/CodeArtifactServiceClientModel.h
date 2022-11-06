/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/codeartifact/CodeArtifactErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/codeartifact/CodeArtifactEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in CodeArtifactClient header */
#include <aws/codeartifact/model/AssociateExternalConnectionResult.h>
#include <aws/codeartifact/model/CopyPackageVersionsResult.h>
#include <aws/codeartifact/model/CreateDomainResult.h>
#include <aws/codeartifact/model/CreateRepositoryResult.h>
#include <aws/codeartifact/model/DeleteDomainResult.h>
#include <aws/codeartifact/model/DeleteDomainPermissionsPolicyResult.h>
#include <aws/codeartifact/model/DeletePackageVersionsResult.h>
#include <aws/codeartifact/model/DeleteRepositoryResult.h>
#include <aws/codeartifact/model/DeleteRepositoryPermissionsPolicyResult.h>
#include <aws/codeartifact/model/DescribeDomainResult.h>
#include <aws/codeartifact/model/DescribePackageResult.h>
#include <aws/codeartifact/model/DescribePackageVersionResult.h>
#include <aws/codeartifact/model/DescribeRepositoryResult.h>
#include <aws/codeartifact/model/DisassociateExternalConnectionResult.h>
#include <aws/codeartifact/model/DisposePackageVersionsResult.h>
#include <aws/codeartifact/model/GetAuthorizationTokenResult.h>
#include <aws/codeartifact/model/GetDomainPermissionsPolicyResult.h>
#include <aws/codeartifact/model/GetPackageVersionAssetResult.h>
#include <aws/codeartifact/model/GetPackageVersionReadmeResult.h>
#include <aws/codeartifact/model/GetRepositoryEndpointResult.h>
#include <aws/codeartifact/model/GetRepositoryPermissionsPolicyResult.h>
#include <aws/codeartifact/model/ListDomainsResult.h>
#include <aws/codeartifact/model/ListPackageVersionAssetsResult.h>
#include <aws/codeartifact/model/ListPackageVersionDependenciesResult.h>
#include <aws/codeartifact/model/ListPackageVersionsResult.h>
#include <aws/codeartifact/model/ListPackagesResult.h>
#include <aws/codeartifact/model/ListRepositoriesResult.h>
#include <aws/codeartifact/model/ListRepositoriesInDomainResult.h>
#include <aws/codeartifact/model/ListTagsForResourceResult.h>
#include <aws/codeartifact/model/PutDomainPermissionsPolicyResult.h>
#include <aws/codeartifact/model/PutPackageOriginConfigurationResult.h>
#include <aws/codeartifact/model/PutRepositoryPermissionsPolicyResult.h>
#include <aws/codeartifact/model/TagResourceResult.h>
#include <aws/codeartifact/model/UntagResourceResult.h>
#include <aws/codeartifact/model/UpdatePackageVersionsStatusResult.h>
#include <aws/codeartifact/model/UpdateRepositoryResult.h>
/* End of service model headers required in CodeArtifactClient header */

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

  namespace CodeArtifact
  {
    using CodeArtifactClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using CodeArtifactEndpointProviderBase = Aws::CodeArtifact::Endpoint::CodeArtifactEndpointProviderBase;
    using CodeArtifactEndpointProvider = Aws::CodeArtifact::Endpoint::CodeArtifactEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in CodeArtifactClient header */
      class AssociateExternalConnectionRequest;
      class CopyPackageVersionsRequest;
      class CreateDomainRequest;
      class CreateRepositoryRequest;
      class DeleteDomainRequest;
      class DeleteDomainPermissionsPolicyRequest;
      class DeletePackageVersionsRequest;
      class DeleteRepositoryRequest;
      class DeleteRepositoryPermissionsPolicyRequest;
      class DescribeDomainRequest;
      class DescribePackageRequest;
      class DescribePackageVersionRequest;
      class DescribeRepositoryRequest;
      class DisassociateExternalConnectionRequest;
      class DisposePackageVersionsRequest;
      class GetAuthorizationTokenRequest;
      class GetDomainPermissionsPolicyRequest;
      class GetPackageVersionAssetRequest;
      class GetPackageVersionReadmeRequest;
      class GetRepositoryEndpointRequest;
      class GetRepositoryPermissionsPolicyRequest;
      class ListDomainsRequest;
      class ListPackageVersionAssetsRequest;
      class ListPackageVersionDependenciesRequest;
      class ListPackageVersionsRequest;
      class ListPackagesRequest;
      class ListRepositoriesRequest;
      class ListRepositoriesInDomainRequest;
      class ListTagsForResourceRequest;
      class PutDomainPermissionsPolicyRequest;
      class PutPackageOriginConfigurationRequest;
      class PutRepositoryPermissionsPolicyRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdatePackageVersionsStatusRequest;
      class UpdateRepositoryRequest;
      /* End of service model forward declarations required in CodeArtifactClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<AssociateExternalConnectionResult, CodeArtifactError> AssociateExternalConnectionOutcome;
      typedef Aws::Utils::Outcome<CopyPackageVersionsResult, CodeArtifactError> CopyPackageVersionsOutcome;
      typedef Aws::Utils::Outcome<CreateDomainResult, CodeArtifactError> CreateDomainOutcome;
      typedef Aws::Utils::Outcome<CreateRepositoryResult, CodeArtifactError> CreateRepositoryOutcome;
      typedef Aws::Utils::Outcome<DeleteDomainResult, CodeArtifactError> DeleteDomainOutcome;
      typedef Aws::Utils::Outcome<DeleteDomainPermissionsPolicyResult, CodeArtifactError> DeleteDomainPermissionsPolicyOutcome;
      typedef Aws::Utils::Outcome<DeletePackageVersionsResult, CodeArtifactError> DeletePackageVersionsOutcome;
      typedef Aws::Utils::Outcome<DeleteRepositoryResult, CodeArtifactError> DeleteRepositoryOutcome;
      typedef Aws::Utils::Outcome<DeleteRepositoryPermissionsPolicyResult, CodeArtifactError> DeleteRepositoryPermissionsPolicyOutcome;
      typedef Aws::Utils::Outcome<DescribeDomainResult, CodeArtifactError> DescribeDomainOutcome;
      typedef Aws::Utils::Outcome<DescribePackageResult, CodeArtifactError> DescribePackageOutcome;
      typedef Aws::Utils::Outcome<DescribePackageVersionResult, CodeArtifactError> DescribePackageVersionOutcome;
      typedef Aws::Utils::Outcome<DescribeRepositoryResult, CodeArtifactError> DescribeRepositoryOutcome;
      typedef Aws::Utils::Outcome<DisassociateExternalConnectionResult, CodeArtifactError> DisassociateExternalConnectionOutcome;
      typedef Aws::Utils::Outcome<DisposePackageVersionsResult, CodeArtifactError> DisposePackageVersionsOutcome;
      typedef Aws::Utils::Outcome<GetAuthorizationTokenResult, CodeArtifactError> GetAuthorizationTokenOutcome;
      typedef Aws::Utils::Outcome<GetDomainPermissionsPolicyResult, CodeArtifactError> GetDomainPermissionsPolicyOutcome;
      typedef Aws::Utils::Outcome<GetPackageVersionAssetResult, CodeArtifactError> GetPackageVersionAssetOutcome;
      typedef Aws::Utils::Outcome<GetPackageVersionReadmeResult, CodeArtifactError> GetPackageVersionReadmeOutcome;
      typedef Aws::Utils::Outcome<GetRepositoryEndpointResult, CodeArtifactError> GetRepositoryEndpointOutcome;
      typedef Aws::Utils::Outcome<GetRepositoryPermissionsPolicyResult, CodeArtifactError> GetRepositoryPermissionsPolicyOutcome;
      typedef Aws::Utils::Outcome<ListDomainsResult, CodeArtifactError> ListDomainsOutcome;
      typedef Aws::Utils::Outcome<ListPackageVersionAssetsResult, CodeArtifactError> ListPackageVersionAssetsOutcome;
      typedef Aws::Utils::Outcome<ListPackageVersionDependenciesResult, CodeArtifactError> ListPackageVersionDependenciesOutcome;
      typedef Aws::Utils::Outcome<ListPackageVersionsResult, CodeArtifactError> ListPackageVersionsOutcome;
      typedef Aws::Utils::Outcome<ListPackagesResult, CodeArtifactError> ListPackagesOutcome;
      typedef Aws::Utils::Outcome<ListRepositoriesResult, CodeArtifactError> ListRepositoriesOutcome;
      typedef Aws::Utils::Outcome<ListRepositoriesInDomainResult, CodeArtifactError> ListRepositoriesInDomainOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, CodeArtifactError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<PutDomainPermissionsPolicyResult, CodeArtifactError> PutDomainPermissionsPolicyOutcome;
      typedef Aws::Utils::Outcome<PutPackageOriginConfigurationResult, CodeArtifactError> PutPackageOriginConfigurationOutcome;
      typedef Aws::Utils::Outcome<PutRepositoryPermissionsPolicyResult, CodeArtifactError> PutRepositoryPermissionsPolicyOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, CodeArtifactError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, CodeArtifactError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdatePackageVersionsStatusResult, CodeArtifactError> UpdatePackageVersionsStatusOutcome;
      typedef Aws::Utils::Outcome<UpdateRepositoryResult, CodeArtifactError> UpdateRepositoryOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<AssociateExternalConnectionOutcome> AssociateExternalConnectionOutcomeCallable;
      typedef std::future<CopyPackageVersionsOutcome> CopyPackageVersionsOutcomeCallable;
      typedef std::future<CreateDomainOutcome> CreateDomainOutcomeCallable;
      typedef std::future<CreateRepositoryOutcome> CreateRepositoryOutcomeCallable;
      typedef std::future<DeleteDomainOutcome> DeleteDomainOutcomeCallable;
      typedef std::future<DeleteDomainPermissionsPolicyOutcome> DeleteDomainPermissionsPolicyOutcomeCallable;
      typedef std::future<DeletePackageVersionsOutcome> DeletePackageVersionsOutcomeCallable;
      typedef std::future<DeleteRepositoryOutcome> DeleteRepositoryOutcomeCallable;
      typedef std::future<DeleteRepositoryPermissionsPolicyOutcome> DeleteRepositoryPermissionsPolicyOutcomeCallable;
      typedef std::future<DescribeDomainOutcome> DescribeDomainOutcomeCallable;
      typedef std::future<DescribePackageOutcome> DescribePackageOutcomeCallable;
      typedef std::future<DescribePackageVersionOutcome> DescribePackageVersionOutcomeCallable;
      typedef std::future<DescribeRepositoryOutcome> DescribeRepositoryOutcomeCallable;
      typedef std::future<DisassociateExternalConnectionOutcome> DisassociateExternalConnectionOutcomeCallable;
      typedef std::future<DisposePackageVersionsOutcome> DisposePackageVersionsOutcomeCallable;
      typedef std::future<GetAuthorizationTokenOutcome> GetAuthorizationTokenOutcomeCallable;
      typedef std::future<GetDomainPermissionsPolicyOutcome> GetDomainPermissionsPolicyOutcomeCallable;
      typedef std::future<GetPackageVersionAssetOutcome> GetPackageVersionAssetOutcomeCallable;
      typedef std::future<GetPackageVersionReadmeOutcome> GetPackageVersionReadmeOutcomeCallable;
      typedef std::future<GetRepositoryEndpointOutcome> GetRepositoryEndpointOutcomeCallable;
      typedef std::future<GetRepositoryPermissionsPolicyOutcome> GetRepositoryPermissionsPolicyOutcomeCallable;
      typedef std::future<ListDomainsOutcome> ListDomainsOutcomeCallable;
      typedef std::future<ListPackageVersionAssetsOutcome> ListPackageVersionAssetsOutcomeCallable;
      typedef std::future<ListPackageVersionDependenciesOutcome> ListPackageVersionDependenciesOutcomeCallable;
      typedef std::future<ListPackageVersionsOutcome> ListPackageVersionsOutcomeCallable;
      typedef std::future<ListPackagesOutcome> ListPackagesOutcomeCallable;
      typedef std::future<ListRepositoriesOutcome> ListRepositoriesOutcomeCallable;
      typedef std::future<ListRepositoriesInDomainOutcome> ListRepositoriesInDomainOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<PutDomainPermissionsPolicyOutcome> PutDomainPermissionsPolicyOutcomeCallable;
      typedef std::future<PutPackageOriginConfigurationOutcome> PutPackageOriginConfigurationOutcomeCallable;
      typedef std::future<PutRepositoryPermissionsPolicyOutcome> PutRepositoryPermissionsPolicyOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdatePackageVersionsStatusOutcome> UpdatePackageVersionsStatusOutcomeCallable;
      typedef std::future<UpdateRepositoryOutcome> UpdateRepositoryOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class CodeArtifactClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const CodeArtifactClient*, const Model::AssociateExternalConnectionRequest&, const Model::AssociateExternalConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateExternalConnectionResponseReceivedHandler;
    typedef std::function<void(const CodeArtifactClient*, const Model::CopyPackageVersionsRequest&, const Model::CopyPackageVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CopyPackageVersionsResponseReceivedHandler;
    typedef std::function<void(const CodeArtifactClient*, const Model::CreateDomainRequest&, const Model::CreateDomainOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDomainResponseReceivedHandler;
    typedef std::function<void(const CodeArtifactClient*, const Model::CreateRepositoryRequest&, const Model::CreateRepositoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateRepositoryResponseReceivedHandler;
    typedef std::function<void(const CodeArtifactClient*, const Model::DeleteDomainRequest&, const Model::DeleteDomainOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDomainResponseReceivedHandler;
    typedef std::function<void(const CodeArtifactClient*, const Model::DeleteDomainPermissionsPolicyRequest&, const Model::DeleteDomainPermissionsPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDomainPermissionsPolicyResponseReceivedHandler;
    typedef std::function<void(const CodeArtifactClient*, const Model::DeletePackageVersionsRequest&, const Model::DeletePackageVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePackageVersionsResponseReceivedHandler;
    typedef std::function<void(const CodeArtifactClient*, const Model::DeleteRepositoryRequest&, const Model::DeleteRepositoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRepositoryResponseReceivedHandler;
    typedef std::function<void(const CodeArtifactClient*, const Model::DeleteRepositoryPermissionsPolicyRequest&, const Model::DeleteRepositoryPermissionsPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRepositoryPermissionsPolicyResponseReceivedHandler;
    typedef std::function<void(const CodeArtifactClient*, const Model::DescribeDomainRequest&, const Model::DescribeDomainOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDomainResponseReceivedHandler;
    typedef std::function<void(const CodeArtifactClient*, const Model::DescribePackageRequest&, const Model::DescribePackageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribePackageResponseReceivedHandler;
    typedef std::function<void(const CodeArtifactClient*, const Model::DescribePackageVersionRequest&, const Model::DescribePackageVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribePackageVersionResponseReceivedHandler;
    typedef std::function<void(const CodeArtifactClient*, const Model::DescribeRepositoryRequest&, const Model::DescribeRepositoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeRepositoryResponseReceivedHandler;
    typedef std::function<void(const CodeArtifactClient*, const Model::DisassociateExternalConnectionRequest&, const Model::DisassociateExternalConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateExternalConnectionResponseReceivedHandler;
    typedef std::function<void(const CodeArtifactClient*, const Model::DisposePackageVersionsRequest&, const Model::DisposePackageVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisposePackageVersionsResponseReceivedHandler;
    typedef std::function<void(const CodeArtifactClient*, const Model::GetAuthorizationTokenRequest&, const Model::GetAuthorizationTokenOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAuthorizationTokenResponseReceivedHandler;
    typedef std::function<void(const CodeArtifactClient*, const Model::GetDomainPermissionsPolicyRequest&, const Model::GetDomainPermissionsPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDomainPermissionsPolicyResponseReceivedHandler;
    typedef std::function<void(const CodeArtifactClient*, const Model::GetPackageVersionAssetRequest&, Model::GetPackageVersionAssetOutcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPackageVersionAssetResponseReceivedHandler;
    typedef std::function<void(const CodeArtifactClient*, const Model::GetPackageVersionReadmeRequest&, const Model::GetPackageVersionReadmeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPackageVersionReadmeResponseReceivedHandler;
    typedef std::function<void(const CodeArtifactClient*, const Model::GetRepositoryEndpointRequest&, const Model::GetRepositoryEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRepositoryEndpointResponseReceivedHandler;
    typedef std::function<void(const CodeArtifactClient*, const Model::GetRepositoryPermissionsPolicyRequest&, const Model::GetRepositoryPermissionsPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRepositoryPermissionsPolicyResponseReceivedHandler;
    typedef std::function<void(const CodeArtifactClient*, const Model::ListDomainsRequest&, const Model::ListDomainsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDomainsResponseReceivedHandler;
    typedef std::function<void(const CodeArtifactClient*, const Model::ListPackageVersionAssetsRequest&, const Model::ListPackageVersionAssetsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPackageVersionAssetsResponseReceivedHandler;
    typedef std::function<void(const CodeArtifactClient*, const Model::ListPackageVersionDependenciesRequest&, const Model::ListPackageVersionDependenciesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPackageVersionDependenciesResponseReceivedHandler;
    typedef std::function<void(const CodeArtifactClient*, const Model::ListPackageVersionsRequest&, const Model::ListPackageVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPackageVersionsResponseReceivedHandler;
    typedef std::function<void(const CodeArtifactClient*, const Model::ListPackagesRequest&, const Model::ListPackagesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPackagesResponseReceivedHandler;
    typedef std::function<void(const CodeArtifactClient*, const Model::ListRepositoriesRequest&, const Model::ListRepositoriesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRepositoriesResponseReceivedHandler;
    typedef std::function<void(const CodeArtifactClient*, const Model::ListRepositoriesInDomainRequest&, const Model::ListRepositoriesInDomainOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRepositoriesInDomainResponseReceivedHandler;
    typedef std::function<void(const CodeArtifactClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const CodeArtifactClient*, const Model::PutDomainPermissionsPolicyRequest&, const Model::PutDomainPermissionsPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutDomainPermissionsPolicyResponseReceivedHandler;
    typedef std::function<void(const CodeArtifactClient*, const Model::PutPackageOriginConfigurationRequest&, const Model::PutPackageOriginConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutPackageOriginConfigurationResponseReceivedHandler;
    typedef std::function<void(const CodeArtifactClient*, const Model::PutRepositoryPermissionsPolicyRequest&, const Model::PutRepositoryPermissionsPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutRepositoryPermissionsPolicyResponseReceivedHandler;
    typedef std::function<void(const CodeArtifactClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const CodeArtifactClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const CodeArtifactClient*, const Model::UpdatePackageVersionsStatusRequest&, const Model::UpdatePackageVersionsStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdatePackageVersionsStatusResponseReceivedHandler;
    typedef std::function<void(const CodeArtifactClient*, const Model::UpdateRepositoryRequest&, const Model::UpdateRepositoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateRepositoryResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace CodeArtifact
} // namespace Aws
