/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/greengrass/GreengrassErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/greengrass/GreengrassEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in GreengrassClient header */
#include <aws/greengrass/model/AssociateRoleToGroupResult.h>
#include <aws/greengrass/model/AssociateServiceRoleToAccountResult.h>
#include <aws/greengrass/model/CreateConnectorDefinitionResult.h>
#include <aws/greengrass/model/CreateConnectorDefinitionVersionResult.h>
#include <aws/greengrass/model/CreateCoreDefinitionResult.h>
#include <aws/greengrass/model/CreateCoreDefinitionVersionResult.h>
#include <aws/greengrass/model/CreateDeploymentResult.h>
#include <aws/greengrass/model/CreateDeviceDefinitionResult.h>
#include <aws/greengrass/model/CreateDeviceDefinitionVersionResult.h>
#include <aws/greengrass/model/CreateFunctionDefinitionResult.h>
#include <aws/greengrass/model/CreateFunctionDefinitionVersionResult.h>
#include <aws/greengrass/model/CreateGroupResult.h>
#include <aws/greengrass/model/CreateGroupCertificateAuthorityResult.h>
#include <aws/greengrass/model/CreateGroupVersionResult.h>
#include <aws/greengrass/model/CreateLoggerDefinitionResult.h>
#include <aws/greengrass/model/CreateLoggerDefinitionVersionResult.h>
#include <aws/greengrass/model/CreateResourceDefinitionResult.h>
#include <aws/greengrass/model/CreateResourceDefinitionVersionResult.h>
#include <aws/greengrass/model/CreateSoftwareUpdateJobResult.h>
#include <aws/greengrass/model/CreateSubscriptionDefinitionResult.h>
#include <aws/greengrass/model/CreateSubscriptionDefinitionVersionResult.h>
#include <aws/greengrass/model/DeleteConnectorDefinitionResult.h>
#include <aws/greengrass/model/DeleteCoreDefinitionResult.h>
#include <aws/greengrass/model/DeleteDeviceDefinitionResult.h>
#include <aws/greengrass/model/DeleteFunctionDefinitionResult.h>
#include <aws/greengrass/model/DeleteGroupResult.h>
#include <aws/greengrass/model/DeleteLoggerDefinitionResult.h>
#include <aws/greengrass/model/DeleteResourceDefinitionResult.h>
#include <aws/greengrass/model/DeleteSubscriptionDefinitionResult.h>
#include <aws/greengrass/model/DisassociateRoleFromGroupResult.h>
#include <aws/greengrass/model/DisassociateServiceRoleFromAccountResult.h>
#include <aws/greengrass/model/GetAssociatedRoleResult.h>
#include <aws/greengrass/model/GetBulkDeploymentStatusResult.h>
#include <aws/greengrass/model/GetConnectivityInfoResult.h>
#include <aws/greengrass/model/GetConnectorDefinitionResult.h>
#include <aws/greengrass/model/GetConnectorDefinitionVersionResult.h>
#include <aws/greengrass/model/GetCoreDefinitionResult.h>
#include <aws/greengrass/model/GetCoreDefinitionVersionResult.h>
#include <aws/greengrass/model/GetDeploymentStatusResult.h>
#include <aws/greengrass/model/GetDeviceDefinitionResult.h>
#include <aws/greengrass/model/GetDeviceDefinitionVersionResult.h>
#include <aws/greengrass/model/GetFunctionDefinitionResult.h>
#include <aws/greengrass/model/GetFunctionDefinitionVersionResult.h>
#include <aws/greengrass/model/GetGroupResult.h>
#include <aws/greengrass/model/GetGroupCertificateAuthorityResult.h>
#include <aws/greengrass/model/GetGroupCertificateConfigurationResult.h>
#include <aws/greengrass/model/GetGroupVersionResult.h>
#include <aws/greengrass/model/GetLoggerDefinitionResult.h>
#include <aws/greengrass/model/GetLoggerDefinitionVersionResult.h>
#include <aws/greengrass/model/GetResourceDefinitionResult.h>
#include <aws/greengrass/model/GetResourceDefinitionVersionResult.h>
#include <aws/greengrass/model/GetServiceRoleForAccountResult.h>
#include <aws/greengrass/model/GetSubscriptionDefinitionResult.h>
#include <aws/greengrass/model/GetSubscriptionDefinitionVersionResult.h>
#include <aws/greengrass/model/GetThingRuntimeConfigurationResult.h>
#include <aws/greengrass/model/ListBulkDeploymentDetailedReportsResult.h>
#include <aws/greengrass/model/ListBulkDeploymentsResult.h>
#include <aws/greengrass/model/ListConnectorDefinitionVersionsResult.h>
#include <aws/greengrass/model/ListConnectorDefinitionsResult.h>
#include <aws/greengrass/model/ListCoreDefinitionVersionsResult.h>
#include <aws/greengrass/model/ListCoreDefinitionsResult.h>
#include <aws/greengrass/model/ListDeploymentsResult.h>
#include <aws/greengrass/model/ListDeviceDefinitionVersionsResult.h>
#include <aws/greengrass/model/ListDeviceDefinitionsResult.h>
#include <aws/greengrass/model/ListFunctionDefinitionVersionsResult.h>
#include <aws/greengrass/model/ListFunctionDefinitionsResult.h>
#include <aws/greengrass/model/ListGroupCertificateAuthoritiesResult.h>
#include <aws/greengrass/model/ListGroupVersionsResult.h>
#include <aws/greengrass/model/ListGroupsResult.h>
#include <aws/greengrass/model/ListLoggerDefinitionVersionsResult.h>
#include <aws/greengrass/model/ListLoggerDefinitionsResult.h>
#include <aws/greengrass/model/ListResourceDefinitionVersionsResult.h>
#include <aws/greengrass/model/ListResourceDefinitionsResult.h>
#include <aws/greengrass/model/ListSubscriptionDefinitionVersionsResult.h>
#include <aws/greengrass/model/ListSubscriptionDefinitionsResult.h>
#include <aws/greengrass/model/ListTagsForResourceResult.h>
#include <aws/greengrass/model/ResetDeploymentsResult.h>
#include <aws/greengrass/model/StartBulkDeploymentResult.h>
#include <aws/greengrass/model/StopBulkDeploymentResult.h>
#include <aws/greengrass/model/UpdateConnectivityInfoResult.h>
#include <aws/greengrass/model/UpdateConnectorDefinitionResult.h>
#include <aws/greengrass/model/UpdateCoreDefinitionResult.h>
#include <aws/greengrass/model/UpdateDeviceDefinitionResult.h>
#include <aws/greengrass/model/UpdateFunctionDefinitionResult.h>
#include <aws/greengrass/model/UpdateGroupResult.h>
#include <aws/greengrass/model/UpdateGroupCertificateConfigurationResult.h>
#include <aws/greengrass/model/UpdateLoggerDefinitionResult.h>
#include <aws/greengrass/model/UpdateResourceDefinitionResult.h>
#include <aws/greengrass/model/UpdateSubscriptionDefinitionResult.h>
#include <aws/greengrass/model/UpdateThingRuntimeConfigurationResult.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in GreengrassClient header */

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

  namespace Greengrass
  {
    using GreengrassClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using GreengrassEndpointProviderBase = Aws::Greengrass::Endpoint::GreengrassEndpointProviderBase;
    using GreengrassEndpointProvider = Aws::Greengrass::Endpoint::GreengrassEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in GreengrassClient header */
      class AssociateRoleToGroupRequest;
      class AssociateServiceRoleToAccountRequest;
      class CreateConnectorDefinitionRequest;
      class CreateConnectorDefinitionVersionRequest;
      class CreateCoreDefinitionRequest;
      class CreateCoreDefinitionVersionRequest;
      class CreateDeploymentRequest;
      class CreateDeviceDefinitionRequest;
      class CreateDeviceDefinitionVersionRequest;
      class CreateFunctionDefinitionRequest;
      class CreateFunctionDefinitionVersionRequest;
      class CreateGroupRequest;
      class CreateGroupCertificateAuthorityRequest;
      class CreateGroupVersionRequest;
      class CreateLoggerDefinitionRequest;
      class CreateLoggerDefinitionVersionRequest;
      class CreateResourceDefinitionRequest;
      class CreateResourceDefinitionVersionRequest;
      class CreateSoftwareUpdateJobRequest;
      class CreateSubscriptionDefinitionRequest;
      class CreateSubscriptionDefinitionVersionRequest;
      class DeleteConnectorDefinitionRequest;
      class DeleteCoreDefinitionRequest;
      class DeleteDeviceDefinitionRequest;
      class DeleteFunctionDefinitionRequest;
      class DeleteGroupRequest;
      class DeleteLoggerDefinitionRequest;
      class DeleteResourceDefinitionRequest;
      class DeleteSubscriptionDefinitionRequest;
      class DisassociateRoleFromGroupRequest;
      class DisassociateServiceRoleFromAccountRequest;
      class GetAssociatedRoleRequest;
      class GetBulkDeploymentStatusRequest;
      class GetConnectivityInfoRequest;
      class GetConnectorDefinitionRequest;
      class GetConnectorDefinitionVersionRequest;
      class GetCoreDefinitionRequest;
      class GetCoreDefinitionVersionRequest;
      class GetDeploymentStatusRequest;
      class GetDeviceDefinitionRequest;
      class GetDeviceDefinitionVersionRequest;
      class GetFunctionDefinitionRequest;
      class GetFunctionDefinitionVersionRequest;
      class GetGroupRequest;
      class GetGroupCertificateAuthorityRequest;
      class GetGroupCertificateConfigurationRequest;
      class GetGroupVersionRequest;
      class GetLoggerDefinitionRequest;
      class GetLoggerDefinitionVersionRequest;
      class GetResourceDefinitionRequest;
      class GetResourceDefinitionVersionRequest;
      class GetServiceRoleForAccountRequest;
      class GetSubscriptionDefinitionRequest;
      class GetSubscriptionDefinitionVersionRequest;
      class GetThingRuntimeConfigurationRequest;
      class ListBulkDeploymentDetailedReportsRequest;
      class ListBulkDeploymentsRequest;
      class ListConnectorDefinitionVersionsRequest;
      class ListConnectorDefinitionsRequest;
      class ListCoreDefinitionVersionsRequest;
      class ListCoreDefinitionsRequest;
      class ListDeploymentsRequest;
      class ListDeviceDefinitionVersionsRequest;
      class ListDeviceDefinitionsRequest;
      class ListFunctionDefinitionVersionsRequest;
      class ListFunctionDefinitionsRequest;
      class ListGroupCertificateAuthoritiesRequest;
      class ListGroupVersionsRequest;
      class ListGroupsRequest;
      class ListLoggerDefinitionVersionsRequest;
      class ListLoggerDefinitionsRequest;
      class ListResourceDefinitionVersionsRequest;
      class ListResourceDefinitionsRequest;
      class ListSubscriptionDefinitionVersionsRequest;
      class ListSubscriptionDefinitionsRequest;
      class ListTagsForResourceRequest;
      class ResetDeploymentsRequest;
      class StartBulkDeploymentRequest;
      class StopBulkDeploymentRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateConnectivityInfoRequest;
      class UpdateConnectorDefinitionRequest;
      class UpdateCoreDefinitionRequest;
      class UpdateDeviceDefinitionRequest;
      class UpdateFunctionDefinitionRequest;
      class UpdateGroupRequest;
      class UpdateGroupCertificateConfigurationRequest;
      class UpdateLoggerDefinitionRequest;
      class UpdateResourceDefinitionRequest;
      class UpdateSubscriptionDefinitionRequest;
      class UpdateThingRuntimeConfigurationRequest;
      /* End of service model forward declarations required in GreengrassClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<AssociateRoleToGroupResult, GreengrassError> AssociateRoleToGroupOutcome;
      typedef Aws::Utils::Outcome<AssociateServiceRoleToAccountResult, GreengrassError> AssociateServiceRoleToAccountOutcome;
      typedef Aws::Utils::Outcome<CreateConnectorDefinitionResult, GreengrassError> CreateConnectorDefinitionOutcome;
      typedef Aws::Utils::Outcome<CreateConnectorDefinitionVersionResult, GreengrassError> CreateConnectorDefinitionVersionOutcome;
      typedef Aws::Utils::Outcome<CreateCoreDefinitionResult, GreengrassError> CreateCoreDefinitionOutcome;
      typedef Aws::Utils::Outcome<CreateCoreDefinitionVersionResult, GreengrassError> CreateCoreDefinitionVersionOutcome;
      typedef Aws::Utils::Outcome<CreateDeploymentResult, GreengrassError> CreateDeploymentOutcome;
      typedef Aws::Utils::Outcome<CreateDeviceDefinitionResult, GreengrassError> CreateDeviceDefinitionOutcome;
      typedef Aws::Utils::Outcome<CreateDeviceDefinitionVersionResult, GreengrassError> CreateDeviceDefinitionVersionOutcome;
      typedef Aws::Utils::Outcome<CreateFunctionDefinitionResult, GreengrassError> CreateFunctionDefinitionOutcome;
      typedef Aws::Utils::Outcome<CreateFunctionDefinitionVersionResult, GreengrassError> CreateFunctionDefinitionVersionOutcome;
      typedef Aws::Utils::Outcome<CreateGroupResult, GreengrassError> CreateGroupOutcome;
      typedef Aws::Utils::Outcome<CreateGroupCertificateAuthorityResult, GreengrassError> CreateGroupCertificateAuthorityOutcome;
      typedef Aws::Utils::Outcome<CreateGroupVersionResult, GreengrassError> CreateGroupVersionOutcome;
      typedef Aws::Utils::Outcome<CreateLoggerDefinitionResult, GreengrassError> CreateLoggerDefinitionOutcome;
      typedef Aws::Utils::Outcome<CreateLoggerDefinitionVersionResult, GreengrassError> CreateLoggerDefinitionVersionOutcome;
      typedef Aws::Utils::Outcome<CreateResourceDefinitionResult, GreengrassError> CreateResourceDefinitionOutcome;
      typedef Aws::Utils::Outcome<CreateResourceDefinitionVersionResult, GreengrassError> CreateResourceDefinitionVersionOutcome;
      typedef Aws::Utils::Outcome<CreateSoftwareUpdateJobResult, GreengrassError> CreateSoftwareUpdateJobOutcome;
      typedef Aws::Utils::Outcome<CreateSubscriptionDefinitionResult, GreengrassError> CreateSubscriptionDefinitionOutcome;
      typedef Aws::Utils::Outcome<CreateSubscriptionDefinitionVersionResult, GreengrassError> CreateSubscriptionDefinitionVersionOutcome;
      typedef Aws::Utils::Outcome<DeleteConnectorDefinitionResult, GreengrassError> DeleteConnectorDefinitionOutcome;
      typedef Aws::Utils::Outcome<DeleteCoreDefinitionResult, GreengrassError> DeleteCoreDefinitionOutcome;
      typedef Aws::Utils::Outcome<DeleteDeviceDefinitionResult, GreengrassError> DeleteDeviceDefinitionOutcome;
      typedef Aws::Utils::Outcome<DeleteFunctionDefinitionResult, GreengrassError> DeleteFunctionDefinitionOutcome;
      typedef Aws::Utils::Outcome<DeleteGroupResult, GreengrassError> DeleteGroupOutcome;
      typedef Aws::Utils::Outcome<DeleteLoggerDefinitionResult, GreengrassError> DeleteLoggerDefinitionOutcome;
      typedef Aws::Utils::Outcome<DeleteResourceDefinitionResult, GreengrassError> DeleteResourceDefinitionOutcome;
      typedef Aws::Utils::Outcome<DeleteSubscriptionDefinitionResult, GreengrassError> DeleteSubscriptionDefinitionOutcome;
      typedef Aws::Utils::Outcome<DisassociateRoleFromGroupResult, GreengrassError> DisassociateRoleFromGroupOutcome;
      typedef Aws::Utils::Outcome<DisassociateServiceRoleFromAccountResult, GreengrassError> DisassociateServiceRoleFromAccountOutcome;
      typedef Aws::Utils::Outcome<GetAssociatedRoleResult, GreengrassError> GetAssociatedRoleOutcome;
      typedef Aws::Utils::Outcome<GetBulkDeploymentStatusResult, GreengrassError> GetBulkDeploymentStatusOutcome;
      typedef Aws::Utils::Outcome<GetConnectivityInfoResult, GreengrassError> GetConnectivityInfoOutcome;
      typedef Aws::Utils::Outcome<GetConnectorDefinitionResult, GreengrassError> GetConnectorDefinitionOutcome;
      typedef Aws::Utils::Outcome<GetConnectorDefinitionVersionResult, GreengrassError> GetConnectorDefinitionVersionOutcome;
      typedef Aws::Utils::Outcome<GetCoreDefinitionResult, GreengrassError> GetCoreDefinitionOutcome;
      typedef Aws::Utils::Outcome<GetCoreDefinitionVersionResult, GreengrassError> GetCoreDefinitionVersionOutcome;
      typedef Aws::Utils::Outcome<GetDeploymentStatusResult, GreengrassError> GetDeploymentStatusOutcome;
      typedef Aws::Utils::Outcome<GetDeviceDefinitionResult, GreengrassError> GetDeviceDefinitionOutcome;
      typedef Aws::Utils::Outcome<GetDeviceDefinitionVersionResult, GreengrassError> GetDeviceDefinitionVersionOutcome;
      typedef Aws::Utils::Outcome<GetFunctionDefinitionResult, GreengrassError> GetFunctionDefinitionOutcome;
      typedef Aws::Utils::Outcome<GetFunctionDefinitionVersionResult, GreengrassError> GetFunctionDefinitionVersionOutcome;
      typedef Aws::Utils::Outcome<GetGroupResult, GreengrassError> GetGroupOutcome;
      typedef Aws::Utils::Outcome<GetGroupCertificateAuthorityResult, GreengrassError> GetGroupCertificateAuthorityOutcome;
      typedef Aws::Utils::Outcome<GetGroupCertificateConfigurationResult, GreengrassError> GetGroupCertificateConfigurationOutcome;
      typedef Aws::Utils::Outcome<GetGroupVersionResult, GreengrassError> GetGroupVersionOutcome;
      typedef Aws::Utils::Outcome<GetLoggerDefinitionResult, GreengrassError> GetLoggerDefinitionOutcome;
      typedef Aws::Utils::Outcome<GetLoggerDefinitionVersionResult, GreengrassError> GetLoggerDefinitionVersionOutcome;
      typedef Aws::Utils::Outcome<GetResourceDefinitionResult, GreengrassError> GetResourceDefinitionOutcome;
      typedef Aws::Utils::Outcome<GetResourceDefinitionVersionResult, GreengrassError> GetResourceDefinitionVersionOutcome;
      typedef Aws::Utils::Outcome<GetServiceRoleForAccountResult, GreengrassError> GetServiceRoleForAccountOutcome;
      typedef Aws::Utils::Outcome<GetSubscriptionDefinitionResult, GreengrassError> GetSubscriptionDefinitionOutcome;
      typedef Aws::Utils::Outcome<GetSubscriptionDefinitionVersionResult, GreengrassError> GetSubscriptionDefinitionVersionOutcome;
      typedef Aws::Utils::Outcome<GetThingRuntimeConfigurationResult, GreengrassError> GetThingRuntimeConfigurationOutcome;
      typedef Aws::Utils::Outcome<ListBulkDeploymentDetailedReportsResult, GreengrassError> ListBulkDeploymentDetailedReportsOutcome;
      typedef Aws::Utils::Outcome<ListBulkDeploymentsResult, GreengrassError> ListBulkDeploymentsOutcome;
      typedef Aws::Utils::Outcome<ListConnectorDefinitionVersionsResult, GreengrassError> ListConnectorDefinitionVersionsOutcome;
      typedef Aws::Utils::Outcome<ListConnectorDefinitionsResult, GreengrassError> ListConnectorDefinitionsOutcome;
      typedef Aws::Utils::Outcome<ListCoreDefinitionVersionsResult, GreengrassError> ListCoreDefinitionVersionsOutcome;
      typedef Aws::Utils::Outcome<ListCoreDefinitionsResult, GreengrassError> ListCoreDefinitionsOutcome;
      typedef Aws::Utils::Outcome<ListDeploymentsResult, GreengrassError> ListDeploymentsOutcome;
      typedef Aws::Utils::Outcome<ListDeviceDefinitionVersionsResult, GreengrassError> ListDeviceDefinitionVersionsOutcome;
      typedef Aws::Utils::Outcome<ListDeviceDefinitionsResult, GreengrassError> ListDeviceDefinitionsOutcome;
      typedef Aws::Utils::Outcome<ListFunctionDefinitionVersionsResult, GreengrassError> ListFunctionDefinitionVersionsOutcome;
      typedef Aws::Utils::Outcome<ListFunctionDefinitionsResult, GreengrassError> ListFunctionDefinitionsOutcome;
      typedef Aws::Utils::Outcome<ListGroupCertificateAuthoritiesResult, GreengrassError> ListGroupCertificateAuthoritiesOutcome;
      typedef Aws::Utils::Outcome<ListGroupVersionsResult, GreengrassError> ListGroupVersionsOutcome;
      typedef Aws::Utils::Outcome<ListGroupsResult, GreengrassError> ListGroupsOutcome;
      typedef Aws::Utils::Outcome<ListLoggerDefinitionVersionsResult, GreengrassError> ListLoggerDefinitionVersionsOutcome;
      typedef Aws::Utils::Outcome<ListLoggerDefinitionsResult, GreengrassError> ListLoggerDefinitionsOutcome;
      typedef Aws::Utils::Outcome<ListResourceDefinitionVersionsResult, GreengrassError> ListResourceDefinitionVersionsOutcome;
      typedef Aws::Utils::Outcome<ListResourceDefinitionsResult, GreengrassError> ListResourceDefinitionsOutcome;
      typedef Aws::Utils::Outcome<ListSubscriptionDefinitionVersionsResult, GreengrassError> ListSubscriptionDefinitionVersionsOutcome;
      typedef Aws::Utils::Outcome<ListSubscriptionDefinitionsResult, GreengrassError> ListSubscriptionDefinitionsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, GreengrassError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<ResetDeploymentsResult, GreengrassError> ResetDeploymentsOutcome;
      typedef Aws::Utils::Outcome<StartBulkDeploymentResult, GreengrassError> StartBulkDeploymentOutcome;
      typedef Aws::Utils::Outcome<StopBulkDeploymentResult, GreengrassError> StopBulkDeploymentOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, GreengrassError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, GreengrassError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateConnectivityInfoResult, GreengrassError> UpdateConnectivityInfoOutcome;
      typedef Aws::Utils::Outcome<UpdateConnectorDefinitionResult, GreengrassError> UpdateConnectorDefinitionOutcome;
      typedef Aws::Utils::Outcome<UpdateCoreDefinitionResult, GreengrassError> UpdateCoreDefinitionOutcome;
      typedef Aws::Utils::Outcome<UpdateDeviceDefinitionResult, GreengrassError> UpdateDeviceDefinitionOutcome;
      typedef Aws::Utils::Outcome<UpdateFunctionDefinitionResult, GreengrassError> UpdateFunctionDefinitionOutcome;
      typedef Aws::Utils::Outcome<UpdateGroupResult, GreengrassError> UpdateGroupOutcome;
      typedef Aws::Utils::Outcome<UpdateGroupCertificateConfigurationResult, GreengrassError> UpdateGroupCertificateConfigurationOutcome;
      typedef Aws::Utils::Outcome<UpdateLoggerDefinitionResult, GreengrassError> UpdateLoggerDefinitionOutcome;
      typedef Aws::Utils::Outcome<UpdateResourceDefinitionResult, GreengrassError> UpdateResourceDefinitionOutcome;
      typedef Aws::Utils::Outcome<UpdateSubscriptionDefinitionResult, GreengrassError> UpdateSubscriptionDefinitionOutcome;
      typedef Aws::Utils::Outcome<UpdateThingRuntimeConfigurationResult, GreengrassError> UpdateThingRuntimeConfigurationOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<AssociateRoleToGroupOutcome> AssociateRoleToGroupOutcomeCallable;
      typedef std::future<AssociateServiceRoleToAccountOutcome> AssociateServiceRoleToAccountOutcomeCallable;
      typedef std::future<CreateConnectorDefinitionOutcome> CreateConnectorDefinitionOutcomeCallable;
      typedef std::future<CreateConnectorDefinitionVersionOutcome> CreateConnectorDefinitionVersionOutcomeCallable;
      typedef std::future<CreateCoreDefinitionOutcome> CreateCoreDefinitionOutcomeCallable;
      typedef std::future<CreateCoreDefinitionVersionOutcome> CreateCoreDefinitionVersionOutcomeCallable;
      typedef std::future<CreateDeploymentOutcome> CreateDeploymentOutcomeCallable;
      typedef std::future<CreateDeviceDefinitionOutcome> CreateDeviceDefinitionOutcomeCallable;
      typedef std::future<CreateDeviceDefinitionVersionOutcome> CreateDeviceDefinitionVersionOutcomeCallable;
      typedef std::future<CreateFunctionDefinitionOutcome> CreateFunctionDefinitionOutcomeCallable;
      typedef std::future<CreateFunctionDefinitionVersionOutcome> CreateFunctionDefinitionVersionOutcomeCallable;
      typedef std::future<CreateGroupOutcome> CreateGroupOutcomeCallable;
      typedef std::future<CreateGroupCertificateAuthorityOutcome> CreateGroupCertificateAuthorityOutcomeCallable;
      typedef std::future<CreateGroupVersionOutcome> CreateGroupVersionOutcomeCallable;
      typedef std::future<CreateLoggerDefinitionOutcome> CreateLoggerDefinitionOutcomeCallable;
      typedef std::future<CreateLoggerDefinitionVersionOutcome> CreateLoggerDefinitionVersionOutcomeCallable;
      typedef std::future<CreateResourceDefinitionOutcome> CreateResourceDefinitionOutcomeCallable;
      typedef std::future<CreateResourceDefinitionVersionOutcome> CreateResourceDefinitionVersionOutcomeCallable;
      typedef std::future<CreateSoftwareUpdateJobOutcome> CreateSoftwareUpdateJobOutcomeCallable;
      typedef std::future<CreateSubscriptionDefinitionOutcome> CreateSubscriptionDefinitionOutcomeCallable;
      typedef std::future<CreateSubscriptionDefinitionVersionOutcome> CreateSubscriptionDefinitionVersionOutcomeCallable;
      typedef std::future<DeleteConnectorDefinitionOutcome> DeleteConnectorDefinitionOutcomeCallable;
      typedef std::future<DeleteCoreDefinitionOutcome> DeleteCoreDefinitionOutcomeCallable;
      typedef std::future<DeleteDeviceDefinitionOutcome> DeleteDeviceDefinitionOutcomeCallable;
      typedef std::future<DeleteFunctionDefinitionOutcome> DeleteFunctionDefinitionOutcomeCallable;
      typedef std::future<DeleteGroupOutcome> DeleteGroupOutcomeCallable;
      typedef std::future<DeleteLoggerDefinitionOutcome> DeleteLoggerDefinitionOutcomeCallable;
      typedef std::future<DeleteResourceDefinitionOutcome> DeleteResourceDefinitionOutcomeCallable;
      typedef std::future<DeleteSubscriptionDefinitionOutcome> DeleteSubscriptionDefinitionOutcomeCallable;
      typedef std::future<DisassociateRoleFromGroupOutcome> DisassociateRoleFromGroupOutcomeCallable;
      typedef std::future<DisassociateServiceRoleFromAccountOutcome> DisassociateServiceRoleFromAccountOutcomeCallable;
      typedef std::future<GetAssociatedRoleOutcome> GetAssociatedRoleOutcomeCallable;
      typedef std::future<GetBulkDeploymentStatusOutcome> GetBulkDeploymentStatusOutcomeCallable;
      typedef std::future<GetConnectivityInfoOutcome> GetConnectivityInfoOutcomeCallable;
      typedef std::future<GetConnectorDefinitionOutcome> GetConnectorDefinitionOutcomeCallable;
      typedef std::future<GetConnectorDefinitionVersionOutcome> GetConnectorDefinitionVersionOutcomeCallable;
      typedef std::future<GetCoreDefinitionOutcome> GetCoreDefinitionOutcomeCallable;
      typedef std::future<GetCoreDefinitionVersionOutcome> GetCoreDefinitionVersionOutcomeCallable;
      typedef std::future<GetDeploymentStatusOutcome> GetDeploymentStatusOutcomeCallable;
      typedef std::future<GetDeviceDefinitionOutcome> GetDeviceDefinitionOutcomeCallable;
      typedef std::future<GetDeviceDefinitionVersionOutcome> GetDeviceDefinitionVersionOutcomeCallable;
      typedef std::future<GetFunctionDefinitionOutcome> GetFunctionDefinitionOutcomeCallable;
      typedef std::future<GetFunctionDefinitionVersionOutcome> GetFunctionDefinitionVersionOutcomeCallable;
      typedef std::future<GetGroupOutcome> GetGroupOutcomeCallable;
      typedef std::future<GetGroupCertificateAuthorityOutcome> GetGroupCertificateAuthorityOutcomeCallable;
      typedef std::future<GetGroupCertificateConfigurationOutcome> GetGroupCertificateConfigurationOutcomeCallable;
      typedef std::future<GetGroupVersionOutcome> GetGroupVersionOutcomeCallable;
      typedef std::future<GetLoggerDefinitionOutcome> GetLoggerDefinitionOutcomeCallable;
      typedef std::future<GetLoggerDefinitionVersionOutcome> GetLoggerDefinitionVersionOutcomeCallable;
      typedef std::future<GetResourceDefinitionOutcome> GetResourceDefinitionOutcomeCallable;
      typedef std::future<GetResourceDefinitionVersionOutcome> GetResourceDefinitionVersionOutcomeCallable;
      typedef std::future<GetServiceRoleForAccountOutcome> GetServiceRoleForAccountOutcomeCallable;
      typedef std::future<GetSubscriptionDefinitionOutcome> GetSubscriptionDefinitionOutcomeCallable;
      typedef std::future<GetSubscriptionDefinitionVersionOutcome> GetSubscriptionDefinitionVersionOutcomeCallable;
      typedef std::future<GetThingRuntimeConfigurationOutcome> GetThingRuntimeConfigurationOutcomeCallable;
      typedef std::future<ListBulkDeploymentDetailedReportsOutcome> ListBulkDeploymentDetailedReportsOutcomeCallable;
      typedef std::future<ListBulkDeploymentsOutcome> ListBulkDeploymentsOutcomeCallable;
      typedef std::future<ListConnectorDefinitionVersionsOutcome> ListConnectorDefinitionVersionsOutcomeCallable;
      typedef std::future<ListConnectorDefinitionsOutcome> ListConnectorDefinitionsOutcomeCallable;
      typedef std::future<ListCoreDefinitionVersionsOutcome> ListCoreDefinitionVersionsOutcomeCallable;
      typedef std::future<ListCoreDefinitionsOutcome> ListCoreDefinitionsOutcomeCallable;
      typedef std::future<ListDeploymentsOutcome> ListDeploymentsOutcomeCallable;
      typedef std::future<ListDeviceDefinitionVersionsOutcome> ListDeviceDefinitionVersionsOutcomeCallable;
      typedef std::future<ListDeviceDefinitionsOutcome> ListDeviceDefinitionsOutcomeCallable;
      typedef std::future<ListFunctionDefinitionVersionsOutcome> ListFunctionDefinitionVersionsOutcomeCallable;
      typedef std::future<ListFunctionDefinitionsOutcome> ListFunctionDefinitionsOutcomeCallable;
      typedef std::future<ListGroupCertificateAuthoritiesOutcome> ListGroupCertificateAuthoritiesOutcomeCallable;
      typedef std::future<ListGroupVersionsOutcome> ListGroupVersionsOutcomeCallable;
      typedef std::future<ListGroupsOutcome> ListGroupsOutcomeCallable;
      typedef std::future<ListLoggerDefinitionVersionsOutcome> ListLoggerDefinitionVersionsOutcomeCallable;
      typedef std::future<ListLoggerDefinitionsOutcome> ListLoggerDefinitionsOutcomeCallable;
      typedef std::future<ListResourceDefinitionVersionsOutcome> ListResourceDefinitionVersionsOutcomeCallable;
      typedef std::future<ListResourceDefinitionsOutcome> ListResourceDefinitionsOutcomeCallable;
      typedef std::future<ListSubscriptionDefinitionVersionsOutcome> ListSubscriptionDefinitionVersionsOutcomeCallable;
      typedef std::future<ListSubscriptionDefinitionsOutcome> ListSubscriptionDefinitionsOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<ResetDeploymentsOutcome> ResetDeploymentsOutcomeCallable;
      typedef std::future<StartBulkDeploymentOutcome> StartBulkDeploymentOutcomeCallable;
      typedef std::future<StopBulkDeploymentOutcome> StopBulkDeploymentOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateConnectivityInfoOutcome> UpdateConnectivityInfoOutcomeCallable;
      typedef std::future<UpdateConnectorDefinitionOutcome> UpdateConnectorDefinitionOutcomeCallable;
      typedef std::future<UpdateCoreDefinitionOutcome> UpdateCoreDefinitionOutcomeCallable;
      typedef std::future<UpdateDeviceDefinitionOutcome> UpdateDeviceDefinitionOutcomeCallable;
      typedef std::future<UpdateFunctionDefinitionOutcome> UpdateFunctionDefinitionOutcomeCallable;
      typedef std::future<UpdateGroupOutcome> UpdateGroupOutcomeCallable;
      typedef std::future<UpdateGroupCertificateConfigurationOutcome> UpdateGroupCertificateConfigurationOutcomeCallable;
      typedef std::future<UpdateLoggerDefinitionOutcome> UpdateLoggerDefinitionOutcomeCallable;
      typedef std::future<UpdateResourceDefinitionOutcome> UpdateResourceDefinitionOutcomeCallable;
      typedef std::future<UpdateSubscriptionDefinitionOutcome> UpdateSubscriptionDefinitionOutcomeCallable;
      typedef std::future<UpdateThingRuntimeConfigurationOutcome> UpdateThingRuntimeConfigurationOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class GreengrassClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const GreengrassClient*, const Model::AssociateRoleToGroupRequest&, const Model::AssociateRoleToGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateRoleToGroupResponseReceivedHandler;
    typedef std::function<void(const GreengrassClient*, const Model::AssociateServiceRoleToAccountRequest&, const Model::AssociateServiceRoleToAccountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateServiceRoleToAccountResponseReceivedHandler;
    typedef std::function<void(const GreengrassClient*, const Model::CreateConnectorDefinitionRequest&, const Model::CreateConnectorDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateConnectorDefinitionResponseReceivedHandler;
    typedef std::function<void(const GreengrassClient*, const Model::CreateConnectorDefinitionVersionRequest&, const Model::CreateConnectorDefinitionVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateConnectorDefinitionVersionResponseReceivedHandler;
    typedef std::function<void(const GreengrassClient*, const Model::CreateCoreDefinitionRequest&, const Model::CreateCoreDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateCoreDefinitionResponseReceivedHandler;
    typedef std::function<void(const GreengrassClient*, const Model::CreateCoreDefinitionVersionRequest&, const Model::CreateCoreDefinitionVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateCoreDefinitionVersionResponseReceivedHandler;
    typedef std::function<void(const GreengrassClient*, const Model::CreateDeploymentRequest&, const Model::CreateDeploymentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDeploymentResponseReceivedHandler;
    typedef std::function<void(const GreengrassClient*, const Model::CreateDeviceDefinitionRequest&, const Model::CreateDeviceDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDeviceDefinitionResponseReceivedHandler;
    typedef std::function<void(const GreengrassClient*, const Model::CreateDeviceDefinitionVersionRequest&, const Model::CreateDeviceDefinitionVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDeviceDefinitionVersionResponseReceivedHandler;
    typedef std::function<void(const GreengrassClient*, const Model::CreateFunctionDefinitionRequest&, const Model::CreateFunctionDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateFunctionDefinitionResponseReceivedHandler;
    typedef std::function<void(const GreengrassClient*, const Model::CreateFunctionDefinitionVersionRequest&, const Model::CreateFunctionDefinitionVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateFunctionDefinitionVersionResponseReceivedHandler;
    typedef std::function<void(const GreengrassClient*, const Model::CreateGroupRequest&, const Model::CreateGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateGroupResponseReceivedHandler;
    typedef std::function<void(const GreengrassClient*, const Model::CreateGroupCertificateAuthorityRequest&, const Model::CreateGroupCertificateAuthorityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateGroupCertificateAuthorityResponseReceivedHandler;
    typedef std::function<void(const GreengrassClient*, const Model::CreateGroupVersionRequest&, const Model::CreateGroupVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateGroupVersionResponseReceivedHandler;
    typedef std::function<void(const GreengrassClient*, const Model::CreateLoggerDefinitionRequest&, const Model::CreateLoggerDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateLoggerDefinitionResponseReceivedHandler;
    typedef std::function<void(const GreengrassClient*, const Model::CreateLoggerDefinitionVersionRequest&, const Model::CreateLoggerDefinitionVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateLoggerDefinitionVersionResponseReceivedHandler;
    typedef std::function<void(const GreengrassClient*, const Model::CreateResourceDefinitionRequest&, const Model::CreateResourceDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateResourceDefinitionResponseReceivedHandler;
    typedef std::function<void(const GreengrassClient*, const Model::CreateResourceDefinitionVersionRequest&, const Model::CreateResourceDefinitionVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateResourceDefinitionVersionResponseReceivedHandler;
    typedef std::function<void(const GreengrassClient*, const Model::CreateSoftwareUpdateJobRequest&, const Model::CreateSoftwareUpdateJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSoftwareUpdateJobResponseReceivedHandler;
    typedef std::function<void(const GreengrassClient*, const Model::CreateSubscriptionDefinitionRequest&, const Model::CreateSubscriptionDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSubscriptionDefinitionResponseReceivedHandler;
    typedef std::function<void(const GreengrassClient*, const Model::CreateSubscriptionDefinitionVersionRequest&, const Model::CreateSubscriptionDefinitionVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSubscriptionDefinitionVersionResponseReceivedHandler;
    typedef std::function<void(const GreengrassClient*, const Model::DeleteConnectorDefinitionRequest&, const Model::DeleteConnectorDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteConnectorDefinitionResponseReceivedHandler;
    typedef std::function<void(const GreengrassClient*, const Model::DeleteCoreDefinitionRequest&, const Model::DeleteCoreDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteCoreDefinitionResponseReceivedHandler;
    typedef std::function<void(const GreengrassClient*, const Model::DeleteDeviceDefinitionRequest&, const Model::DeleteDeviceDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDeviceDefinitionResponseReceivedHandler;
    typedef std::function<void(const GreengrassClient*, const Model::DeleteFunctionDefinitionRequest&, const Model::DeleteFunctionDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteFunctionDefinitionResponseReceivedHandler;
    typedef std::function<void(const GreengrassClient*, const Model::DeleteGroupRequest&, const Model::DeleteGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteGroupResponseReceivedHandler;
    typedef std::function<void(const GreengrassClient*, const Model::DeleteLoggerDefinitionRequest&, const Model::DeleteLoggerDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteLoggerDefinitionResponseReceivedHandler;
    typedef std::function<void(const GreengrassClient*, const Model::DeleteResourceDefinitionRequest&, const Model::DeleteResourceDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteResourceDefinitionResponseReceivedHandler;
    typedef std::function<void(const GreengrassClient*, const Model::DeleteSubscriptionDefinitionRequest&, const Model::DeleteSubscriptionDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSubscriptionDefinitionResponseReceivedHandler;
    typedef std::function<void(const GreengrassClient*, const Model::DisassociateRoleFromGroupRequest&, const Model::DisassociateRoleFromGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateRoleFromGroupResponseReceivedHandler;
    typedef std::function<void(const GreengrassClient*, const Model::DisassociateServiceRoleFromAccountRequest&, const Model::DisassociateServiceRoleFromAccountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateServiceRoleFromAccountResponseReceivedHandler;
    typedef std::function<void(const GreengrassClient*, const Model::GetAssociatedRoleRequest&, const Model::GetAssociatedRoleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAssociatedRoleResponseReceivedHandler;
    typedef std::function<void(const GreengrassClient*, const Model::GetBulkDeploymentStatusRequest&, const Model::GetBulkDeploymentStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetBulkDeploymentStatusResponseReceivedHandler;
    typedef std::function<void(const GreengrassClient*, const Model::GetConnectivityInfoRequest&, const Model::GetConnectivityInfoOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetConnectivityInfoResponseReceivedHandler;
    typedef std::function<void(const GreengrassClient*, const Model::GetConnectorDefinitionRequest&, const Model::GetConnectorDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetConnectorDefinitionResponseReceivedHandler;
    typedef std::function<void(const GreengrassClient*, const Model::GetConnectorDefinitionVersionRequest&, const Model::GetConnectorDefinitionVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetConnectorDefinitionVersionResponseReceivedHandler;
    typedef std::function<void(const GreengrassClient*, const Model::GetCoreDefinitionRequest&, const Model::GetCoreDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCoreDefinitionResponseReceivedHandler;
    typedef std::function<void(const GreengrassClient*, const Model::GetCoreDefinitionVersionRequest&, const Model::GetCoreDefinitionVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCoreDefinitionVersionResponseReceivedHandler;
    typedef std::function<void(const GreengrassClient*, const Model::GetDeploymentStatusRequest&, const Model::GetDeploymentStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDeploymentStatusResponseReceivedHandler;
    typedef std::function<void(const GreengrassClient*, const Model::GetDeviceDefinitionRequest&, const Model::GetDeviceDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDeviceDefinitionResponseReceivedHandler;
    typedef std::function<void(const GreengrassClient*, const Model::GetDeviceDefinitionVersionRequest&, const Model::GetDeviceDefinitionVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDeviceDefinitionVersionResponseReceivedHandler;
    typedef std::function<void(const GreengrassClient*, const Model::GetFunctionDefinitionRequest&, const Model::GetFunctionDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetFunctionDefinitionResponseReceivedHandler;
    typedef std::function<void(const GreengrassClient*, const Model::GetFunctionDefinitionVersionRequest&, const Model::GetFunctionDefinitionVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetFunctionDefinitionVersionResponseReceivedHandler;
    typedef std::function<void(const GreengrassClient*, const Model::GetGroupRequest&, const Model::GetGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetGroupResponseReceivedHandler;
    typedef std::function<void(const GreengrassClient*, const Model::GetGroupCertificateAuthorityRequest&, const Model::GetGroupCertificateAuthorityOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetGroupCertificateAuthorityResponseReceivedHandler;
    typedef std::function<void(const GreengrassClient*, const Model::GetGroupCertificateConfigurationRequest&, const Model::GetGroupCertificateConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetGroupCertificateConfigurationResponseReceivedHandler;
    typedef std::function<void(const GreengrassClient*, const Model::GetGroupVersionRequest&, const Model::GetGroupVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetGroupVersionResponseReceivedHandler;
    typedef std::function<void(const GreengrassClient*, const Model::GetLoggerDefinitionRequest&, const Model::GetLoggerDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetLoggerDefinitionResponseReceivedHandler;
    typedef std::function<void(const GreengrassClient*, const Model::GetLoggerDefinitionVersionRequest&, const Model::GetLoggerDefinitionVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetLoggerDefinitionVersionResponseReceivedHandler;
    typedef std::function<void(const GreengrassClient*, const Model::GetResourceDefinitionRequest&, const Model::GetResourceDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetResourceDefinitionResponseReceivedHandler;
    typedef std::function<void(const GreengrassClient*, const Model::GetResourceDefinitionVersionRequest&, const Model::GetResourceDefinitionVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetResourceDefinitionVersionResponseReceivedHandler;
    typedef std::function<void(const GreengrassClient*, const Model::GetServiceRoleForAccountRequest&, const Model::GetServiceRoleForAccountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetServiceRoleForAccountResponseReceivedHandler;
    typedef std::function<void(const GreengrassClient*, const Model::GetSubscriptionDefinitionRequest&, const Model::GetSubscriptionDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSubscriptionDefinitionResponseReceivedHandler;
    typedef std::function<void(const GreengrassClient*, const Model::GetSubscriptionDefinitionVersionRequest&, const Model::GetSubscriptionDefinitionVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSubscriptionDefinitionVersionResponseReceivedHandler;
    typedef std::function<void(const GreengrassClient*, const Model::GetThingRuntimeConfigurationRequest&, const Model::GetThingRuntimeConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetThingRuntimeConfigurationResponseReceivedHandler;
    typedef std::function<void(const GreengrassClient*, const Model::ListBulkDeploymentDetailedReportsRequest&, const Model::ListBulkDeploymentDetailedReportsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListBulkDeploymentDetailedReportsResponseReceivedHandler;
    typedef std::function<void(const GreengrassClient*, const Model::ListBulkDeploymentsRequest&, const Model::ListBulkDeploymentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListBulkDeploymentsResponseReceivedHandler;
    typedef std::function<void(const GreengrassClient*, const Model::ListConnectorDefinitionVersionsRequest&, const Model::ListConnectorDefinitionVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListConnectorDefinitionVersionsResponseReceivedHandler;
    typedef std::function<void(const GreengrassClient*, const Model::ListConnectorDefinitionsRequest&, const Model::ListConnectorDefinitionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListConnectorDefinitionsResponseReceivedHandler;
    typedef std::function<void(const GreengrassClient*, const Model::ListCoreDefinitionVersionsRequest&, const Model::ListCoreDefinitionVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCoreDefinitionVersionsResponseReceivedHandler;
    typedef std::function<void(const GreengrassClient*, const Model::ListCoreDefinitionsRequest&, const Model::ListCoreDefinitionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCoreDefinitionsResponseReceivedHandler;
    typedef std::function<void(const GreengrassClient*, const Model::ListDeploymentsRequest&, const Model::ListDeploymentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDeploymentsResponseReceivedHandler;
    typedef std::function<void(const GreengrassClient*, const Model::ListDeviceDefinitionVersionsRequest&, const Model::ListDeviceDefinitionVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDeviceDefinitionVersionsResponseReceivedHandler;
    typedef std::function<void(const GreengrassClient*, const Model::ListDeviceDefinitionsRequest&, const Model::ListDeviceDefinitionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDeviceDefinitionsResponseReceivedHandler;
    typedef std::function<void(const GreengrassClient*, const Model::ListFunctionDefinitionVersionsRequest&, const Model::ListFunctionDefinitionVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListFunctionDefinitionVersionsResponseReceivedHandler;
    typedef std::function<void(const GreengrassClient*, const Model::ListFunctionDefinitionsRequest&, const Model::ListFunctionDefinitionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListFunctionDefinitionsResponseReceivedHandler;
    typedef std::function<void(const GreengrassClient*, const Model::ListGroupCertificateAuthoritiesRequest&, const Model::ListGroupCertificateAuthoritiesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListGroupCertificateAuthoritiesResponseReceivedHandler;
    typedef std::function<void(const GreengrassClient*, const Model::ListGroupVersionsRequest&, const Model::ListGroupVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListGroupVersionsResponseReceivedHandler;
    typedef std::function<void(const GreengrassClient*, const Model::ListGroupsRequest&, const Model::ListGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListGroupsResponseReceivedHandler;
    typedef std::function<void(const GreengrassClient*, const Model::ListLoggerDefinitionVersionsRequest&, const Model::ListLoggerDefinitionVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListLoggerDefinitionVersionsResponseReceivedHandler;
    typedef std::function<void(const GreengrassClient*, const Model::ListLoggerDefinitionsRequest&, const Model::ListLoggerDefinitionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListLoggerDefinitionsResponseReceivedHandler;
    typedef std::function<void(const GreengrassClient*, const Model::ListResourceDefinitionVersionsRequest&, const Model::ListResourceDefinitionVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListResourceDefinitionVersionsResponseReceivedHandler;
    typedef std::function<void(const GreengrassClient*, const Model::ListResourceDefinitionsRequest&, const Model::ListResourceDefinitionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListResourceDefinitionsResponseReceivedHandler;
    typedef std::function<void(const GreengrassClient*, const Model::ListSubscriptionDefinitionVersionsRequest&, const Model::ListSubscriptionDefinitionVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSubscriptionDefinitionVersionsResponseReceivedHandler;
    typedef std::function<void(const GreengrassClient*, const Model::ListSubscriptionDefinitionsRequest&, const Model::ListSubscriptionDefinitionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSubscriptionDefinitionsResponseReceivedHandler;
    typedef std::function<void(const GreengrassClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const GreengrassClient*, const Model::ResetDeploymentsRequest&, const Model::ResetDeploymentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ResetDeploymentsResponseReceivedHandler;
    typedef std::function<void(const GreengrassClient*, const Model::StartBulkDeploymentRequest&, const Model::StartBulkDeploymentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartBulkDeploymentResponseReceivedHandler;
    typedef std::function<void(const GreengrassClient*, const Model::StopBulkDeploymentRequest&, const Model::StopBulkDeploymentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopBulkDeploymentResponseReceivedHandler;
    typedef std::function<void(const GreengrassClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const GreengrassClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const GreengrassClient*, const Model::UpdateConnectivityInfoRequest&, const Model::UpdateConnectivityInfoOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateConnectivityInfoResponseReceivedHandler;
    typedef std::function<void(const GreengrassClient*, const Model::UpdateConnectorDefinitionRequest&, const Model::UpdateConnectorDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateConnectorDefinitionResponseReceivedHandler;
    typedef std::function<void(const GreengrassClient*, const Model::UpdateCoreDefinitionRequest&, const Model::UpdateCoreDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateCoreDefinitionResponseReceivedHandler;
    typedef std::function<void(const GreengrassClient*, const Model::UpdateDeviceDefinitionRequest&, const Model::UpdateDeviceDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDeviceDefinitionResponseReceivedHandler;
    typedef std::function<void(const GreengrassClient*, const Model::UpdateFunctionDefinitionRequest&, const Model::UpdateFunctionDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateFunctionDefinitionResponseReceivedHandler;
    typedef std::function<void(const GreengrassClient*, const Model::UpdateGroupRequest&, const Model::UpdateGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateGroupResponseReceivedHandler;
    typedef std::function<void(const GreengrassClient*, const Model::UpdateGroupCertificateConfigurationRequest&, const Model::UpdateGroupCertificateConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateGroupCertificateConfigurationResponseReceivedHandler;
    typedef std::function<void(const GreengrassClient*, const Model::UpdateLoggerDefinitionRequest&, const Model::UpdateLoggerDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateLoggerDefinitionResponseReceivedHandler;
    typedef std::function<void(const GreengrassClient*, const Model::UpdateResourceDefinitionRequest&, const Model::UpdateResourceDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateResourceDefinitionResponseReceivedHandler;
    typedef std::function<void(const GreengrassClient*, const Model::UpdateSubscriptionDefinitionRequest&, const Model::UpdateSubscriptionDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSubscriptionDefinitionResponseReceivedHandler;
    typedef std::function<void(const GreengrassClient*, const Model::UpdateThingRuntimeConfigurationRequest&, const Model::UpdateThingRuntimeConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateThingRuntimeConfigurationResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace Greengrass
} // namespace Aws
