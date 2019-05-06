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

#pragma once
#include <aws/greengrass/Greengrass_EXPORTS.h>
#include <aws/greengrass/GreengrassErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
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
#include <aws/core/NoResult.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <future>
#include <functional>

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

namespace Model
{
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
        class TagResourceRequest;
        class DeleteConnectorDefinitionRequest;
        class DeleteCoreDefinitionRequest;
        class DeleteDeviceDefinitionRequest;
        class DeleteFunctionDefinitionRequest;
        class DeleteGroupRequest;
        class DeleteLoggerDefinitionRequest;
        class DeleteResourceDefinitionRequest;
        class DeleteSubscriptionDefinitionRequest;
        class UntagResourceRequest;
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

        typedef Aws::Utils::Outcome<AssociateRoleToGroupResult, Aws::Client::AWSError<GreengrassErrors>> AssociateRoleToGroupOutcome;
        typedef Aws::Utils::Outcome<AssociateServiceRoleToAccountResult, Aws::Client::AWSError<GreengrassErrors>> AssociateServiceRoleToAccountOutcome;
        typedef Aws::Utils::Outcome<CreateConnectorDefinitionResult, Aws::Client::AWSError<GreengrassErrors>> CreateConnectorDefinitionOutcome;
        typedef Aws::Utils::Outcome<CreateConnectorDefinitionVersionResult, Aws::Client::AWSError<GreengrassErrors>> CreateConnectorDefinitionVersionOutcome;
        typedef Aws::Utils::Outcome<CreateCoreDefinitionResult, Aws::Client::AWSError<GreengrassErrors>> CreateCoreDefinitionOutcome;
        typedef Aws::Utils::Outcome<CreateCoreDefinitionVersionResult, Aws::Client::AWSError<GreengrassErrors>> CreateCoreDefinitionVersionOutcome;
        typedef Aws::Utils::Outcome<CreateDeploymentResult, Aws::Client::AWSError<GreengrassErrors>> CreateDeploymentOutcome;
        typedef Aws::Utils::Outcome<CreateDeviceDefinitionResult, Aws::Client::AWSError<GreengrassErrors>> CreateDeviceDefinitionOutcome;
        typedef Aws::Utils::Outcome<CreateDeviceDefinitionVersionResult, Aws::Client::AWSError<GreengrassErrors>> CreateDeviceDefinitionVersionOutcome;
        typedef Aws::Utils::Outcome<CreateFunctionDefinitionResult, Aws::Client::AWSError<GreengrassErrors>> CreateFunctionDefinitionOutcome;
        typedef Aws::Utils::Outcome<CreateFunctionDefinitionVersionResult, Aws::Client::AWSError<GreengrassErrors>> CreateFunctionDefinitionVersionOutcome;
        typedef Aws::Utils::Outcome<CreateGroupResult, Aws::Client::AWSError<GreengrassErrors>> CreateGroupOutcome;
        typedef Aws::Utils::Outcome<CreateGroupCertificateAuthorityResult, Aws::Client::AWSError<GreengrassErrors>> CreateGroupCertificateAuthorityOutcome;
        typedef Aws::Utils::Outcome<CreateGroupVersionResult, Aws::Client::AWSError<GreengrassErrors>> CreateGroupVersionOutcome;
        typedef Aws::Utils::Outcome<CreateLoggerDefinitionResult, Aws::Client::AWSError<GreengrassErrors>> CreateLoggerDefinitionOutcome;
        typedef Aws::Utils::Outcome<CreateLoggerDefinitionVersionResult, Aws::Client::AWSError<GreengrassErrors>> CreateLoggerDefinitionVersionOutcome;
        typedef Aws::Utils::Outcome<CreateResourceDefinitionResult, Aws::Client::AWSError<GreengrassErrors>> CreateResourceDefinitionOutcome;
        typedef Aws::Utils::Outcome<CreateResourceDefinitionVersionResult, Aws::Client::AWSError<GreengrassErrors>> CreateResourceDefinitionVersionOutcome;
        typedef Aws::Utils::Outcome<CreateSoftwareUpdateJobResult, Aws::Client::AWSError<GreengrassErrors>> CreateSoftwareUpdateJobOutcome;
        typedef Aws::Utils::Outcome<CreateSubscriptionDefinitionResult, Aws::Client::AWSError<GreengrassErrors>> CreateSubscriptionDefinitionOutcome;
        typedef Aws::Utils::Outcome<CreateSubscriptionDefinitionVersionResult, Aws::Client::AWSError<GreengrassErrors>> CreateSubscriptionDefinitionVersionOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<GreengrassErrors>> TagResourceOutcome;
        typedef Aws::Utils::Outcome<DeleteConnectorDefinitionResult, Aws::Client::AWSError<GreengrassErrors>> DeleteConnectorDefinitionOutcome;
        typedef Aws::Utils::Outcome<DeleteCoreDefinitionResult, Aws::Client::AWSError<GreengrassErrors>> DeleteCoreDefinitionOutcome;
        typedef Aws::Utils::Outcome<DeleteDeviceDefinitionResult, Aws::Client::AWSError<GreengrassErrors>> DeleteDeviceDefinitionOutcome;
        typedef Aws::Utils::Outcome<DeleteFunctionDefinitionResult, Aws::Client::AWSError<GreengrassErrors>> DeleteFunctionDefinitionOutcome;
        typedef Aws::Utils::Outcome<DeleteGroupResult, Aws::Client::AWSError<GreengrassErrors>> DeleteGroupOutcome;
        typedef Aws::Utils::Outcome<DeleteLoggerDefinitionResult, Aws::Client::AWSError<GreengrassErrors>> DeleteLoggerDefinitionOutcome;
        typedef Aws::Utils::Outcome<DeleteResourceDefinitionResult, Aws::Client::AWSError<GreengrassErrors>> DeleteResourceDefinitionOutcome;
        typedef Aws::Utils::Outcome<DeleteSubscriptionDefinitionResult, Aws::Client::AWSError<GreengrassErrors>> DeleteSubscriptionDefinitionOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, Aws::Client::AWSError<GreengrassErrors>> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<DisassociateRoleFromGroupResult, Aws::Client::AWSError<GreengrassErrors>> DisassociateRoleFromGroupOutcome;
        typedef Aws::Utils::Outcome<DisassociateServiceRoleFromAccountResult, Aws::Client::AWSError<GreengrassErrors>> DisassociateServiceRoleFromAccountOutcome;
        typedef Aws::Utils::Outcome<GetAssociatedRoleResult, Aws::Client::AWSError<GreengrassErrors>> GetAssociatedRoleOutcome;
        typedef Aws::Utils::Outcome<GetBulkDeploymentStatusResult, Aws::Client::AWSError<GreengrassErrors>> GetBulkDeploymentStatusOutcome;
        typedef Aws::Utils::Outcome<GetConnectivityInfoResult, Aws::Client::AWSError<GreengrassErrors>> GetConnectivityInfoOutcome;
        typedef Aws::Utils::Outcome<GetConnectorDefinitionResult, Aws::Client::AWSError<GreengrassErrors>> GetConnectorDefinitionOutcome;
        typedef Aws::Utils::Outcome<GetConnectorDefinitionVersionResult, Aws::Client::AWSError<GreengrassErrors>> GetConnectorDefinitionVersionOutcome;
        typedef Aws::Utils::Outcome<GetCoreDefinitionResult, Aws::Client::AWSError<GreengrassErrors>> GetCoreDefinitionOutcome;
        typedef Aws::Utils::Outcome<GetCoreDefinitionVersionResult, Aws::Client::AWSError<GreengrassErrors>> GetCoreDefinitionVersionOutcome;
        typedef Aws::Utils::Outcome<GetDeploymentStatusResult, Aws::Client::AWSError<GreengrassErrors>> GetDeploymentStatusOutcome;
        typedef Aws::Utils::Outcome<GetDeviceDefinitionResult, Aws::Client::AWSError<GreengrassErrors>> GetDeviceDefinitionOutcome;
        typedef Aws::Utils::Outcome<GetDeviceDefinitionVersionResult, Aws::Client::AWSError<GreengrassErrors>> GetDeviceDefinitionVersionOutcome;
        typedef Aws::Utils::Outcome<GetFunctionDefinitionResult, Aws::Client::AWSError<GreengrassErrors>> GetFunctionDefinitionOutcome;
        typedef Aws::Utils::Outcome<GetFunctionDefinitionVersionResult, Aws::Client::AWSError<GreengrassErrors>> GetFunctionDefinitionVersionOutcome;
        typedef Aws::Utils::Outcome<GetGroupResult, Aws::Client::AWSError<GreengrassErrors>> GetGroupOutcome;
        typedef Aws::Utils::Outcome<GetGroupCertificateAuthorityResult, Aws::Client::AWSError<GreengrassErrors>> GetGroupCertificateAuthorityOutcome;
        typedef Aws::Utils::Outcome<GetGroupCertificateConfigurationResult, Aws::Client::AWSError<GreengrassErrors>> GetGroupCertificateConfigurationOutcome;
        typedef Aws::Utils::Outcome<GetGroupVersionResult, Aws::Client::AWSError<GreengrassErrors>> GetGroupVersionOutcome;
        typedef Aws::Utils::Outcome<GetLoggerDefinitionResult, Aws::Client::AWSError<GreengrassErrors>> GetLoggerDefinitionOutcome;
        typedef Aws::Utils::Outcome<GetLoggerDefinitionVersionResult, Aws::Client::AWSError<GreengrassErrors>> GetLoggerDefinitionVersionOutcome;
        typedef Aws::Utils::Outcome<GetResourceDefinitionResult, Aws::Client::AWSError<GreengrassErrors>> GetResourceDefinitionOutcome;
        typedef Aws::Utils::Outcome<GetResourceDefinitionVersionResult, Aws::Client::AWSError<GreengrassErrors>> GetResourceDefinitionVersionOutcome;
        typedef Aws::Utils::Outcome<GetServiceRoleForAccountResult, Aws::Client::AWSError<GreengrassErrors>> GetServiceRoleForAccountOutcome;
        typedef Aws::Utils::Outcome<GetSubscriptionDefinitionResult, Aws::Client::AWSError<GreengrassErrors>> GetSubscriptionDefinitionOutcome;
        typedef Aws::Utils::Outcome<GetSubscriptionDefinitionVersionResult, Aws::Client::AWSError<GreengrassErrors>> GetSubscriptionDefinitionVersionOutcome;
        typedef Aws::Utils::Outcome<ListBulkDeploymentDetailedReportsResult, Aws::Client::AWSError<GreengrassErrors>> ListBulkDeploymentDetailedReportsOutcome;
        typedef Aws::Utils::Outcome<ListBulkDeploymentsResult, Aws::Client::AWSError<GreengrassErrors>> ListBulkDeploymentsOutcome;
        typedef Aws::Utils::Outcome<ListConnectorDefinitionVersionsResult, Aws::Client::AWSError<GreengrassErrors>> ListConnectorDefinitionVersionsOutcome;
        typedef Aws::Utils::Outcome<ListConnectorDefinitionsResult, Aws::Client::AWSError<GreengrassErrors>> ListConnectorDefinitionsOutcome;
        typedef Aws::Utils::Outcome<ListCoreDefinitionVersionsResult, Aws::Client::AWSError<GreengrassErrors>> ListCoreDefinitionVersionsOutcome;
        typedef Aws::Utils::Outcome<ListCoreDefinitionsResult, Aws::Client::AWSError<GreengrassErrors>> ListCoreDefinitionsOutcome;
        typedef Aws::Utils::Outcome<ListDeploymentsResult, Aws::Client::AWSError<GreengrassErrors>> ListDeploymentsOutcome;
        typedef Aws::Utils::Outcome<ListDeviceDefinitionVersionsResult, Aws::Client::AWSError<GreengrassErrors>> ListDeviceDefinitionVersionsOutcome;
        typedef Aws::Utils::Outcome<ListDeviceDefinitionsResult, Aws::Client::AWSError<GreengrassErrors>> ListDeviceDefinitionsOutcome;
        typedef Aws::Utils::Outcome<ListFunctionDefinitionVersionsResult, Aws::Client::AWSError<GreengrassErrors>> ListFunctionDefinitionVersionsOutcome;
        typedef Aws::Utils::Outcome<ListFunctionDefinitionsResult, Aws::Client::AWSError<GreengrassErrors>> ListFunctionDefinitionsOutcome;
        typedef Aws::Utils::Outcome<ListGroupCertificateAuthoritiesResult, Aws::Client::AWSError<GreengrassErrors>> ListGroupCertificateAuthoritiesOutcome;
        typedef Aws::Utils::Outcome<ListGroupVersionsResult, Aws::Client::AWSError<GreengrassErrors>> ListGroupVersionsOutcome;
        typedef Aws::Utils::Outcome<ListGroupsResult, Aws::Client::AWSError<GreengrassErrors>> ListGroupsOutcome;
        typedef Aws::Utils::Outcome<ListLoggerDefinitionVersionsResult, Aws::Client::AWSError<GreengrassErrors>> ListLoggerDefinitionVersionsOutcome;
        typedef Aws::Utils::Outcome<ListLoggerDefinitionsResult, Aws::Client::AWSError<GreengrassErrors>> ListLoggerDefinitionsOutcome;
        typedef Aws::Utils::Outcome<ListResourceDefinitionVersionsResult, Aws::Client::AWSError<GreengrassErrors>> ListResourceDefinitionVersionsOutcome;
        typedef Aws::Utils::Outcome<ListResourceDefinitionsResult, Aws::Client::AWSError<GreengrassErrors>> ListResourceDefinitionsOutcome;
        typedef Aws::Utils::Outcome<ListSubscriptionDefinitionVersionsResult, Aws::Client::AWSError<GreengrassErrors>> ListSubscriptionDefinitionVersionsOutcome;
        typedef Aws::Utils::Outcome<ListSubscriptionDefinitionsResult, Aws::Client::AWSError<GreengrassErrors>> ListSubscriptionDefinitionsOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, Aws::Client::AWSError<GreengrassErrors>> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<ResetDeploymentsResult, Aws::Client::AWSError<GreengrassErrors>> ResetDeploymentsOutcome;
        typedef Aws::Utils::Outcome<StartBulkDeploymentResult, Aws::Client::AWSError<GreengrassErrors>> StartBulkDeploymentOutcome;
        typedef Aws::Utils::Outcome<StopBulkDeploymentResult, Aws::Client::AWSError<GreengrassErrors>> StopBulkDeploymentOutcome;
        typedef Aws::Utils::Outcome<UpdateConnectivityInfoResult, Aws::Client::AWSError<GreengrassErrors>> UpdateConnectivityInfoOutcome;
        typedef Aws::Utils::Outcome<UpdateConnectorDefinitionResult, Aws::Client::AWSError<GreengrassErrors>> UpdateConnectorDefinitionOutcome;
        typedef Aws::Utils::Outcome<UpdateCoreDefinitionResult, Aws::Client::AWSError<GreengrassErrors>> UpdateCoreDefinitionOutcome;
        typedef Aws::Utils::Outcome<UpdateDeviceDefinitionResult, Aws::Client::AWSError<GreengrassErrors>> UpdateDeviceDefinitionOutcome;
        typedef Aws::Utils::Outcome<UpdateFunctionDefinitionResult, Aws::Client::AWSError<GreengrassErrors>> UpdateFunctionDefinitionOutcome;
        typedef Aws::Utils::Outcome<UpdateGroupResult, Aws::Client::AWSError<GreengrassErrors>> UpdateGroupOutcome;
        typedef Aws::Utils::Outcome<UpdateGroupCertificateConfigurationResult, Aws::Client::AWSError<GreengrassErrors>> UpdateGroupCertificateConfigurationOutcome;
        typedef Aws::Utils::Outcome<UpdateLoggerDefinitionResult, Aws::Client::AWSError<GreengrassErrors>> UpdateLoggerDefinitionOutcome;
        typedef Aws::Utils::Outcome<UpdateResourceDefinitionResult, Aws::Client::AWSError<GreengrassErrors>> UpdateResourceDefinitionOutcome;
        typedef Aws::Utils::Outcome<UpdateSubscriptionDefinitionResult, Aws::Client::AWSError<GreengrassErrors>> UpdateSubscriptionDefinitionOutcome;

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
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<DeleteConnectorDefinitionOutcome> DeleteConnectorDefinitionOutcomeCallable;
        typedef std::future<DeleteCoreDefinitionOutcome> DeleteCoreDefinitionOutcomeCallable;
        typedef std::future<DeleteDeviceDefinitionOutcome> DeleteDeviceDefinitionOutcomeCallable;
        typedef std::future<DeleteFunctionDefinitionOutcome> DeleteFunctionDefinitionOutcomeCallable;
        typedef std::future<DeleteGroupOutcome> DeleteGroupOutcomeCallable;
        typedef std::future<DeleteLoggerDefinitionOutcome> DeleteLoggerDefinitionOutcomeCallable;
        typedef std::future<DeleteResourceDefinitionOutcome> DeleteResourceDefinitionOutcomeCallable;
        typedef std::future<DeleteSubscriptionDefinitionOutcome> DeleteSubscriptionDefinitionOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
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
} // namespace Model

  class GreengrassClient;

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
    typedef std::function<void(const GreengrassClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const GreengrassClient*, const Model::DeleteConnectorDefinitionRequest&, const Model::DeleteConnectorDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteConnectorDefinitionResponseReceivedHandler;
    typedef std::function<void(const GreengrassClient*, const Model::DeleteCoreDefinitionRequest&, const Model::DeleteCoreDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteCoreDefinitionResponseReceivedHandler;
    typedef std::function<void(const GreengrassClient*, const Model::DeleteDeviceDefinitionRequest&, const Model::DeleteDeviceDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDeviceDefinitionResponseReceivedHandler;
    typedef std::function<void(const GreengrassClient*, const Model::DeleteFunctionDefinitionRequest&, const Model::DeleteFunctionDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteFunctionDefinitionResponseReceivedHandler;
    typedef std::function<void(const GreengrassClient*, const Model::DeleteGroupRequest&, const Model::DeleteGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteGroupResponseReceivedHandler;
    typedef std::function<void(const GreengrassClient*, const Model::DeleteLoggerDefinitionRequest&, const Model::DeleteLoggerDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteLoggerDefinitionResponseReceivedHandler;
    typedef std::function<void(const GreengrassClient*, const Model::DeleteResourceDefinitionRequest&, const Model::DeleteResourceDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteResourceDefinitionResponseReceivedHandler;
    typedef std::function<void(const GreengrassClient*, const Model::DeleteSubscriptionDefinitionRequest&, const Model::DeleteSubscriptionDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSubscriptionDefinitionResponseReceivedHandler;
    typedef std::function<void(const GreengrassClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
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

  /**
   * AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act
   * locally on the data they generate, while still using the cloud for management,
   * analytics, and durable storage. AWS IoT Greengrass ensures your devices can
   * respond quickly to local events and operate with intermittent connectivity. AWS
   * IoT Greengrass minimizes the cost of transmitting data to the cloud by allowing
   * you to author AWS Lambda functions that execute locally.
   */
  class AWS_GREENGRASS_API GreengrassClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        GreengrassClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        GreengrassClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        GreengrassClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~GreengrassClient();

        inline virtual const char* GetServiceClientName() const override { return "Greengrass"; }


        /**
         * Associates a role with a group. Your Greengrass core will use the role to access
         * AWS cloud services. The role's permissions should allow Greengrass core Lambda
         * functions to perform actions against the cloud.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/AssociateRoleToGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateRoleToGroupOutcome AssociateRoleToGroup(const Model::AssociateRoleToGroupRequest& request) const;

        /**
         * Associates a role with a group. Your Greengrass core will use the role to access
         * AWS cloud services. The role's permissions should allow Greengrass core Lambda
         * functions to perform actions against the cloud.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/AssociateRoleToGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateRoleToGroupOutcomeCallable AssociateRoleToGroupCallable(const Model::AssociateRoleToGroupRequest& request) const;

        /**
         * Associates a role with a group. Your Greengrass core will use the role to access
         * AWS cloud services. The role's permissions should allow Greengrass core Lambda
         * functions to perform actions against the cloud.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/AssociateRoleToGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateRoleToGroupAsync(const Model::AssociateRoleToGroupRequest& request, const AssociateRoleToGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Associates a role with your account. AWS IoT Greengrass will use the role to
         * access your Lambda functions and AWS IoT resources. This is necessary for
         * deployments to succeed. The role must have at least minimum permissions in the
         * policy ''AWSGreengrassResourceAccessRolePolicy''.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/AssociateServiceRoleToAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateServiceRoleToAccountOutcome AssociateServiceRoleToAccount(const Model::AssociateServiceRoleToAccountRequest& request) const;

        /**
         * Associates a role with your account. AWS IoT Greengrass will use the role to
         * access your Lambda functions and AWS IoT resources. This is necessary for
         * deployments to succeed. The role must have at least minimum permissions in the
         * policy ''AWSGreengrassResourceAccessRolePolicy''.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/AssociateServiceRoleToAccount">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateServiceRoleToAccountOutcomeCallable AssociateServiceRoleToAccountCallable(const Model::AssociateServiceRoleToAccountRequest& request) const;

        /**
         * Associates a role with your account. AWS IoT Greengrass will use the role to
         * access your Lambda functions and AWS IoT resources. This is necessary for
         * deployments to succeed. The role must have at least minimum permissions in the
         * policy ''AWSGreengrassResourceAccessRolePolicy''.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/AssociateServiceRoleToAccount">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateServiceRoleToAccountAsync(const Model::AssociateServiceRoleToAccountRequest& request, const AssociateServiceRoleToAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Creates a connector definition. You may provide the initial version of the
         * connector definition now or use ''CreateConnectorDefinitionVersion'' at a later
         * time.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/CreateConnectorDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateConnectorDefinitionOutcome CreateConnectorDefinition(const Model::CreateConnectorDefinitionRequest& request) const;

        /**
         * Creates a connector definition. You may provide the initial version of the
         * connector definition now or use ''CreateConnectorDefinitionVersion'' at a later
         * time.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/CreateConnectorDefinition">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateConnectorDefinitionOutcomeCallable CreateConnectorDefinitionCallable(const Model::CreateConnectorDefinitionRequest& request) const;

        /**
         * Creates a connector definition. You may provide the initial version of the
         * connector definition now or use ''CreateConnectorDefinitionVersion'' at a later
         * time.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/CreateConnectorDefinition">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateConnectorDefinitionAsync(const Model::CreateConnectorDefinitionRequest& request, const CreateConnectorDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Creates a version of a connector definition which has already been
         * defined.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/CreateConnectorDefinitionVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateConnectorDefinitionVersionOutcome CreateConnectorDefinitionVersion(const Model::CreateConnectorDefinitionVersionRequest& request) const;

        /**
         * Creates a version of a connector definition which has already been
         * defined.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/CreateConnectorDefinitionVersion">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateConnectorDefinitionVersionOutcomeCallable CreateConnectorDefinitionVersionCallable(const Model::CreateConnectorDefinitionVersionRequest& request) const;

        /**
         * Creates a version of a connector definition which has already been
         * defined.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/CreateConnectorDefinitionVersion">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateConnectorDefinitionVersionAsync(const Model::CreateConnectorDefinitionVersionRequest& request, const CreateConnectorDefinitionVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Creates a core definition. You may provide the initial version of the core
         * definition now or use ''CreateCoreDefinitionVersion'' at a later time.
         * Greengrass groups must each contain exactly one Greengrass core.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/CreateCoreDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCoreDefinitionOutcome CreateCoreDefinition(const Model::CreateCoreDefinitionRequest& request) const;

        /**
         * Creates a core definition. You may provide the initial version of the core
         * definition now or use ''CreateCoreDefinitionVersion'' at a later time.
         * Greengrass groups must each contain exactly one Greengrass core.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/CreateCoreDefinition">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateCoreDefinitionOutcomeCallable CreateCoreDefinitionCallable(const Model::CreateCoreDefinitionRequest& request) const;

        /**
         * Creates a core definition. You may provide the initial version of the core
         * definition now or use ''CreateCoreDefinitionVersion'' at a later time.
         * Greengrass groups must each contain exactly one Greengrass core.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/CreateCoreDefinition">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateCoreDefinitionAsync(const Model::CreateCoreDefinitionRequest& request, const CreateCoreDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Creates a version of a core definition that has already been defined. Greengrass
         * groups must each contain exactly one Greengrass core.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/CreateCoreDefinitionVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCoreDefinitionVersionOutcome CreateCoreDefinitionVersion(const Model::CreateCoreDefinitionVersionRequest& request) const;

        /**
         * Creates a version of a core definition that has already been defined. Greengrass
         * groups must each contain exactly one Greengrass core.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/CreateCoreDefinitionVersion">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateCoreDefinitionVersionOutcomeCallable CreateCoreDefinitionVersionCallable(const Model::CreateCoreDefinitionVersionRequest& request) const;

        /**
         * Creates a version of a core definition that has already been defined. Greengrass
         * groups must each contain exactly one Greengrass core.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/CreateCoreDefinitionVersion">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateCoreDefinitionVersionAsync(const Model::CreateCoreDefinitionVersionRequest& request, const CreateCoreDefinitionVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Creates a deployment. ''CreateDeployment'' requests are idempotent with respect
         * to the ''X-Amzn-Client-Token'' token and the request parameters.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/CreateDeployment">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDeploymentOutcome CreateDeployment(const Model::CreateDeploymentRequest& request) const;

        /**
         * Creates a deployment. ''CreateDeployment'' requests are idempotent with respect
         * to the ''X-Amzn-Client-Token'' token and the request parameters.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/CreateDeployment">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDeploymentOutcomeCallable CreateDeploymentCallable(const Model::CreateDeploymentRequest& request) const;

        /**
         * Creates a deployment. ''CreateDeployment'' requests are idempotent with respect
         * to the ''X-Amzn-Client-Token'' token and the request parameters.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/CreateDeployment">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDeploymentAsync(const Model::CreateDeploymentRequest& request, const CreateDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Creates a device definition. You may provide the initial version of the device
         * definition now or use ''CreateDeviceDefinitionVersion'' at a later
         * time.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/CreateDeviceDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDeviceDefinitionOutcome CreateDeviceDefinition(const Model::CreateDeviceDefinitionRequest& request) const;

        /**
         * Creates a device definition. You may provide the initial version of the device
         * definition now or use ''CreateDeviceDefinitionVersion'' at a later
         * time.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/CreateDeviceDefinition">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDeviceDefinitionOutcomeCallable CreateDeviceDefinitionCallable(const Model::CreateDeviceDefinitionRequest& request) const;

        /**
         * Creates a device definition. You may provide the initial version of the device
         * definition now or use ''CreateDeviceDefinitionVersion'' at a later
         * time.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/CreateDeviceDefinition">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDeviceDefinitionAsync(const Model::CreateDeviceDefinitionRequest& request, const CreateDeviceDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Creates a version of a device definition that has already been
         * defined.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/CreateDeviceDefinitionVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDeviceDefinitionVersionOutcome CreateDeviceDefinitionVersion(const Model::CreateDeviceDefinitionVersionRequest& request) const;

        /**
         * Creates a version of a device definition that has already been
         * defined.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/CreateDeviceDefinitionVersion">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDeviceDefinitionVersionOutcomeCallable CreateDeviceDefinitionVersionCallable(const Model::CreateDeviceDefinitionVersionRequest& request) const;

        /**
         * Creates a version of a device definition that has already been
         * defined.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/CreateDeviceDefinitionVersion">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDeviceDefinitionVersionAsync(const Model::CreateDeviceDefinitionVersionRequest& request, const CreateDeviceDefinitionVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Creates a Lambda function definition which contains a list of Lambda functions
         * and their configurations to be used in a group. You can create an initial
         * version of the definition by providing a list of Lambda functions and their
         * configurations now, or use ''CreateFunctionDefinitionVersion'' later.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/CreateFunctionDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateFunctionDefinitionOutcome CreateFunctionDefinition(const Model::CreateFunctionDefinitionRequest& request) const;

        /**
         * Creates a Lambda function definition which contains a list of Lambda functions
         * and their configurations to be used in a group. You can create an initial
         * version of the definition by providing a list of Lambda functions and their
         * configurations now, or use ''CreateFunctionDefinitionVersion'' later.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/CreateFunctionDefinition">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateFunctionDefinitionOutcomeCallable CreateFunctionDefinitionCallable(const Model::CreateFunctionDefinitionRequest& request) const;

        /**
         * Creates a Lambda function definition which contains a list of Lambda functions
         * and their configurations to be used in a group. You can create an initial
         * version of the definition by providing a list of Lambda functions and their
         * configurations now, or use ''CreateFunctionDefinitionVersion'' later.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/CreateFunctionDefinition">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateFunctionDefinitionAsync(const Model::CreateFunctionDefinitionRequest& request, const CreateFunctionDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Creates a version of a Lambda function definition that has already been
         * defined.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/CreateFunctionDefinitionVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateFunctionDefinitionVersionOutcome CreateFunctionDefinitionVersion(const Model::CreateFunctionDefinitionVersionRequest& request) const;

        /**
         * Creates a version of a Lambda function definition that has already been
         * defined.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/CreateFunctionDefinitionVersion">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateFunctionDefinitionVersionOutcomeCallable CreateFunctionDefinitionVersionCallable(const Model::CreateFunctionDefinitionVersionRequest& request) const;

        /**
         * Creates a version of a Lambda function definition that has already been
         * defined.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/CreateFunctionDefinitionVersion">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateFunctionDefinitionVersionAsync(const Model::CreateFunctionDefinitionVersionRequest& request, const CreateFunctionDefinitionVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Creates a group. You may provide the initial version of the group or use
         * ''CreateGroupVersion'' at a later time. Tip: You can use the ''gg_group_setup''
         * package (https://github.com/awslabs/aws-greengrass-group-setup) as a library or
         * command-line application to create and deploy Greengrass groups.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/CreateGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateGroupOutcome CreateGroup(const Model::CreateGroupRequest& request) const;

        /**
         * Creates a group. You may provide the initial version of the group or use
         * ''CreateGroupVersion'' at a later time. Tip: You can use the ''gg_group_setup''
         * package (https://github.com/awslabs/aws-greengrass-group-setup) as a library or
         * command-line application to create and deploy Greengrass groups.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/CreateGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateGroupOutcomeCallable CreateGroupCallable(const Model::CreateGroupRequest& request) const;

        /**
         * Creates a group. You may provide the initial version of the group or use
         * ''CreateGroupVersion'' at a later time. Tip: You can use the ''gg_group_setup''
         * package (https://github.com/awslabs/aws-greengrass-group-setup) as a library or
         * command-line application to create and deploy Greengrass groups.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/CreateGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateGroupAsync(const Model::CreateGroupRequest& request, const CreateGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Creates a CA for the group. If a CA already exists, it will rotate the existing
         * CA.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/CreateGroupCertificateAuthority">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateGroupCertificateAuthorityOutcome CreateGroupCertificateAuthority(const Model::CreateGroupCertificateAuthorityRequest& request) const;

        /**
         * Creates a CA for the group. If a CA already exists, it will rotate the existing
         * CA.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/CreateGroupCertificateAuthority">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateGroupCertificateAuthorityOutcomeCallable CreateGroupCertificateAuthorityCallable(const Model::CreateGroupCertificateAuthorityRequest& request) const;

        /**
         * Creates a CA for the group. If a CA already exists, it will rotate the existing
         * CA.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/CreateGroupCertificateAuthority">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateGroupCertificateAuthorityAsync(const Model::CreateGroupCertificateAuthorityRequest& request, const CreateGroupCertificateAuthorityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Creates a version of a group which has already been defined.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/CreateGroupVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateGroupVersionOutcome CreateGroupVersion(const Model::CreateGroupVersionRequest& request) const;

        /**
         * Creates a version of a group which has already been defined.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/CreateGroupVersion">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateGroupVersionOutcomeCallable CreateGroupVersionCallable(const Model::CreateGroupVersionRequest& request) const;

        /**
         * Creates a version of a group which has already been defined.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/CreateGroupVersion">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateGroupVersionAsync(const Model::CreateGroupVersionRequest& request, const CreateGroupVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Creates a logger definition. You may provide the initial version of the logger
         * definition now or use ''CreateLoggerDefinitionVersion'' at a later
         * time.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/CreateLoggerDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLoggerDefinitionOutcome CreateLoggerDefinition(const Model::CreateLoggerDefinitionRequest& request) const;

        /**
         * Creates a logger definition. You may provide the initial version of the logger
         * definition now or use ''CreateLoggerDefinitionVersion'' at a later
         * time.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/CreateLoggerDefinition">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateLoggerDefinitionOutcomeCallable CreateLoggerDefinitionCallable(const Model::CreateLoggerDefinitionRequest& request) const;

        /**
         * Creates a logger definition. You may provide the initial version of the logger
         * definition now or use ''CreateLoggerDefinitionVersion'' at a later
         * time.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/CreateLoggerDefinition">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateLoggerDefinitionAsync(const Model::CreateLoggerDefinitionRequest& request, const CreateLoggerDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Creates a version of a logger definition that has already been
         * defined.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/CreateLoggerDefinitionVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLoggerDefinitionVersionOutcome CreateLoggerDefinitionVersion(const Model::CreateLoggerDefinitionVersionRequest& request) const;

        /**
         * Creates a version of a logger definition that has already been
         * defined.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/CreateLoggerDefinitionVersion">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateLoggerDefinitionVersionOutcomeCallable CreateLoggerDefinitionVersionCallable(const Model::CreateLoggerDefinitionVersionRequest& request) const;

        /**
         * Creates a version of a logger definition that has already been
         * defined.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/CreateLoggerDefinitionVersion">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateLoggerDefinitionVersionAsync(const Model::CreateLoggerDefinitionVersionRequest& request, const CreateLoggerDefinitionVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Creates a resource definition which contains a list of resources to be used in a
         * group. You can create an initial version of the definition by providing a list
         * of resources now, or use ''CreateResourceDefinitionVersion'' later.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/CreateResourceDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateResourceDefinitionOutcome CreateResourceDefinition(const Model::CreateResourceDefinitionRequest& request) const;

        /**
         * Creates a resource definition which contains a list of resources to be used in a
         * group. You can create an initial version of the definition by providing a list
         * of resources now, or use ''CreateResourceDefinitionVersion'' later.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/CreateResourceDefinition">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateResourceDefinitionOutcomeCallable CreateResourceDefinitionCallable(const Model::CreateResourceDefinitionRequest& request) const;

        /**
         * Creates a resource definition which contains a list of resources to be used in a
         * group. You can create an initial version of the definition by providing a list
         * of resources now, or use ''CreateResourceDefinitionVersion'' later.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/CreateResourceDefinition">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateResourceDefinitionAsync(const Model::CreateResourceDefinitionRequest& request, const CreateResourceDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Creates a version of a resource definition that has already been
         * defined.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/CreateResourceDefinitionVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateResourceDefinitionVersionOutcome CreateResourceDefinitionVersion(const Model::CreateResourceDefinitionVersionRequest& request) const;

        /**
         * Creates a version of a resource definition that has already been
         * defined.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/CreateResourceDefinitionVersion">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateResourceDefinitionVersionOutcomeCallable CreateResourceDefinitionVersionCallable(const Model::CreateResourceDefinitionVersionRequest& request) const;

        /**
         * Creates a version of a resource definition that has already been
         * defined.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/CreateResourceDefinitionVersion">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateResourceDefinitionVersionAsync(const Model::CreateResourceDefinitionVersionRequest& request, const CreateResourceDefinitionVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Creates a software update for a core or group of cores (specified as an IoT
         * thing group.) Use this to update the OTA Agent as well as the Greengrass core
         * software. It makes use of the IoT Jobs feature which provides additional
         * commands to manage a Greengrass core software update job.<p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/CreateSoftwareUpdateJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSoftwareUpdateJobOutcome CreateSoftwareUpdateJob(const Model::CreateSoftwareUpdateJobRequest& request) const;

        /**
         * Creates a software update for a core or group of cores (specified as an IoT
         * thing group.) Use this to update the OTA Agent as well as the Greengrass core
         * software. It makes use of the IoT Jobs feature which provides additional
         * commands to manage a Greengrass core software update job.<p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/CreateSoftwareUpdateJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateSoftwareUpdateJobOutcomeCallable CreateSoftwareUpdateJobCallable(const Model::CreateSoftwareUpdateJobRequest& request) const;

        /**
         * Creates a software update for a core or group of cores (specified as an IoT
         * thing group.) Use this to update the OTA Agent as well as the Greengrass core
         * software. It makes use of the IoT Jobs feature which provides additional
         * commands to manage a Greengrass core software update job.<p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/CreateSoftwareUpdateJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateSoftwareUpdateJobAsync(const Model::CreateSoftwareUpdateJobRequest& request, const CreateSoftwareUpdateJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Creates a subscription definition. You may provide the initial version of the
         * subscription definition now or use ''CreateSubscriptionDefinitionVersion'' at a
         * later time.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/CreateSubscriptionDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSubscriptionDefinitionOutcome CreateSubscriptionDefinition(const Model::CreateSubscriptionDefinitionRequest& request) const;

        /**
         * Creates a subscription definition. You may provide the initial version of the
         * subscription definition now or use ''CreateSubscriptionDefinitionVersion'' at a
         * later time.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/CreateSubscriptionDefinition">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateSubscriptionDefinitionOutcomeCallable CreateSubscriptionDefinitionCallable(const Model::CreateSubscriptionDefinitionRequest& request) const;

        /**
         * Creates a subscription definition. You may provide the initial version of the
         * subscription definition now or use ''CreateSubscriptionDefinitionVersion'' at a
         * later time.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/CreateSubscriptionDefinition">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateSubscriptionDefinitionAsync(const Model::CreateSubscriptionDefinitionRequest& request, const CreateSubscriptionDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Creates a version of a subscription definition which has already been
         * defined.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/CreateSubscriptionDefinitionVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSubscriptionDefinitionVersionOutcome CreateSubscriptionDefinitionVersion(const Model::CreateSubscriptionDefinitionVersionRequest& request) const;

        /**
         * Creates a version of a subscription definition which has already been
         * defined.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/CreateSubscriptionDefinitionVersion">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateSubscriptionDefinitionVersionOutcomeCallable CreateSubscriptionDefinitionVersionCallable(const Model::CreateSubscriptionDefinitionVersionRequest& request) const;

        /**
         * Creates a version of a subscription definition which has already been
         * defined.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/CreateSubscriptionDefinitionVersion">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateSubscriptionDefinitionVersionAsync(const Model::CreateSubscriptionDefinitionVersionRequest& request, const CreateSubscriptionDefinitionVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Add tags to a resource.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * Add tags to a resource.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/TagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * Add tags to a resource.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/TagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Deletes a connector definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/DeleteConnectorDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteConnectorDefinitionOutcome DeleteConnectorDefinition(const Model::DeleteConnectorDefinitionRequest& request) const;

        /**
         * Deletes a connector definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/DeleteConnectorDefinition">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteConnectorDefinitionOutcomeCallable DeleteConnectorDefinitionCallable(const Model::DeleteConnectorDefinitionRequest& request) const;

        /**
         * Deletes a connector definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/DeleteConnectorDefinition">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteConnectorDefinitionAsync(const Model::DeleteConnectorDefinitionRequest& request, const DeleteConnectorDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Deletes a core definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/DeleteCoreDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCoreDefinitionOutcome DeleteCoreDefinition(const Model::DeleteCoreDefinitionRequest& request) const;

        /**
         * Deletes a core definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/DeleteCoreDefinition">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteCoreDefinitionOutcomeCallable DeleteCoreDefinitionCallable(const Model::DeleteCoreDefinitionRequest& request) const;

        /**
         * Deletes a core definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/DeleteCoreDefinition">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteCoreDefinitionAsync(const Model::DeleteCoreDefinitionRequest& request, const DeleteCoreDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Deletes a device definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/DeleteDeviceDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDeviceDefinitionOutcome DeleteDeviceDefinition(const Model::DeleteDeviceDefinitionRequest& request) const;

        /**
         * Deletes a device definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/DeleteDeviceDefinition">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDeviceDefinitionOutcomeCallable DeleteDeviceDefinitionCallable(const Model::DeleteDeviceDefinitionRequest& request) const;

        /**
         * Deletes a device definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/DeleteDeviceDefinition">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDeviceDefinitionAsync(const Model::DeleteDeviceDefinitionRequest& request, const DeleteDeviceDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Deletes a Lambda function definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/DeleteFunctionDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFunctionDefinitionOutcome DeleteFunctionDefinition(const Model::DeleteFunctionDefinitionRequest& request) const;

        /**
         * Deletes a Lambda function definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/DeleteFunctionDefinition">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteFunctionDefinitionOutcomeCallable DeleteFunctionDefinitionCallable(const Model::DeleteFunctionDefinitionRequest& request) const;

        /**
         * Deletes a Lambda function definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/DeleteFunctionDefinition">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteFunctionDefinitionAsync(const Model::DeleteFunctionDefinitionRequest& request, const DeleteFunctionDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Deletes a group.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/DeleteGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteGroupOutcome DeleteGroup(const Model::DeleteGroupRequest& request) const;

        /**
         * Deletes a group.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/DeleteGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteGroupOutcomeCallable DeleteGroupCallable(const Model::DeleteGroupRequest& request) const;

        /**
         * Deletes a group.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/DeleteGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteGroupAsync(const Model::DeleteGroupRequest& request, const DeleteGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Deletes a logger definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/DeleteLoggerDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteLoggerDefinitionOutcome DeleteLoggerDefinition(const Model::DeleteLoggerDefinitionRequest& request) const;

        /**
         * Deletes a logger definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/DeleteLoggerDefinition">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteLoggerDefinitionOutcomeCallable DeleteLoggerDefinitionCallable(const Model::DeleteLoggerDefinitionRequest& request) const;

        /**
         * Deletes a logger definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/DeleteLoggerDefinition">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteLoggerDefinitionAsync(const Model::DeleteLoggerDefinitionRequest& request, const DeleteLoggerDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Deletes a resource definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/DeleteResourceDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteResourceDefinitionOutcome DeleteResourceDefinition(const Model::DeleteResourceDefinitionRequest& request) const;

        /**
         * Deletes a resource definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/DeleteResourceDefinition">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteResourceDefinitionOutcomeCallable DeleteResourceDefinitionCallable(const Model::DeleteResourceDefinitionRequest& request) const;

        /**
         * Deletes a resource definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/DeleteResourceDefinition">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteResourceDefinitionAsync(const Model::DeleteResourceDefinitionRequest& request, const DeleteResourceDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Deletes a subscription definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/DeleteSubscriptionDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSubscriptionDefinitionOutcome DeleteSubscriptionDefinition(const Model::DeleteSubscriptionDefinitionRequest& request) const;

        /**
         * Deletes a subscription definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/DeleteSubscriptionDefinition">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteSubscriptionDefinitionOutcomeCallable DeleteSubscriptionDefinitionCallable(const Model::DeleteSubscriptionDefinitionRequest& request) const;

        /**
         * Deletes a subscription definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/DeleteSubscriptionDefinition">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteSubscriptionDefinitionAsync(const Model::DeleteSubscriptionDefinitionRequest& request, const DeleteSubscriptionDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Remove tags with specified keys from a resource.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * Remove tags with specified keys from a resource.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/UntagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * Remove tags with specified keys from a resource.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/UntagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Disassociates the role from a group.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/DisassociateRoleFromGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateRoleFromGroupOutcome DisassociateRoleFromGroup(const Model::DisassociateRoleFromGroupRequest& request) const;

        /**
         * Disassociates the role from a group.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/DisassociateRoleFromGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateRoleFromGroupOutcomeCallable DisassociateRoleFromGroupCallable(const Model::DisassociateRoleFromGroupRequest& request) const;

        /**
         * Disassociates the role from a group.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/DisassociateRoleFromGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateRoleFromGroupAsync(const Model::DisassociateRoleFromGroupRequest& request, const DisassociateRoleFromGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Disassociates the service role from your account. Without a service role,
         * deployments will not work.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/DisassociateServiceRoleFromAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateServiceRoleFromAccountOutcome DisassociateServiceRoleFromAccount(const Model::DisassociateServiceRoleFromAccountRequest& request) const;

        /**
         * Disassociates the service role from your account. Without a service role,
         * deployments will not work.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/DisassociateServiceRoleFromAccount">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateServiceRoleFromAccountOutcomeCallable DisassociateServiceRoleFromAccountCallable(const Model::DisassociateServiceRoleFromAccountRequest& request) const;

        /**
         * Disassociates the service role from your account. Without a service role,
         * deployments will not work.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/DisassociateServiceRoleFromAccount">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateServiceRoleFromAccountAsync(const Model::DisassociateServiceRoleFromAccountRequest& request, const DisassociateServiceRoleFromAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Retrieves the role associated with a particular group.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/GetAssociatedRole">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAssociatedRoleOutcome GetAssociatedRole(const Model::GetAssociatedRoleRequest& request) const;

        /**
         * Retrieves the role associated with a particular group.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/GetAssociatedRole">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAssociatedRoleOutcomeCallable GetAssociatedRoleCallable(const Model::GetAssociatedRoleRequest& request) const;

        /**
         * Retrieves the role associated with a particular group.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/GetAssociatedRole">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAssociatedRoleAsync(const Model::GetAssociatedRoleRequest& request, const GetAssociatedRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Returns the status of a bulk deployment.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/GetBulkDeploymentStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBulkDeploymentStatusOutcome GetBulkDeploymentStatus(const Model::GetBulkDeploymentStatusRequest& request) const;

        /**
         * Returns the status of a bulk deployment.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/GetBulkDeploymentStatus">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetBulkDeploymentStatusOutcomeCallable GetBulkDeploymentStatusCallable(const Model::GetBulkDeploymentStatusRequest& request) const;

        /**
         * Returns the status of a bulk deployment.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/GetBulkDeploymentStatus">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetBulkDeploymentStatusAsync(const Model::GetBulkDeploymentStatusRequest& request, const GetBulkDeploymentStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Retrieves the connectivity information for a core.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/GetConnectivityInfo">AWS
         * API Reference</a></p>
         */
        virtual Model::GetConnectivityInfoOutcome GetConnectivityInfo(const Model::GetConnectivityInfoRequest& request) const;

        /**
         * Retrieves the connectivity information for a core.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/GetConnectivityInfo">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetConnectivityInfoOutcomeCallable GetConnectivityInfoCallable(const Model::GetConnectivityInfoRequest& request) const;

        /**
         * Retrieves the connectivity information for a core.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/GetConnectivityInfo">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetConnectivityInfoAsync(const Model::GetConnectivityInfoRequest& request, const GetConnectivityInfoResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Retrieves information about a connector definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/GetConnectorDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::GetConnectorDefinitionOutcome GetConnectorDefinition(const Model::GetConnectorDefinitionRequest& request) const;

        /**
         * Retrieves information about a connector definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/GetConnectorDefinition">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetConnectorDefinitionOutcomeCallable GetConnectorDefinitionCallable(const Model::GetConnectorDefinitionRequest& request) const;

        /**
         * Retrieves information about a connector definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/GetConnectorDefinition">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetConnectorDefinitionAsync(const Model::GetConnectorDefinitionRequest& request, const GetConnectorDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Retrieves information about a connector definition version, including the
         * connectors that the version contains. Connectors are prebuilt modules that
         * interact with local infrastructure, device protocols, AWS, and other cloud
         * services.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/GetConnectorDefinitionVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::GetConnectorDefinitionVersionOutcome GetConnectorDefinitionVersion(const Model::GetConnectorDefinitionVersionRequest& request) const;

        /**
         * Retrieves information about a connector definition version, including the
         * connectors that the version contains. Connectors are prebuilt modules that
         * interact with local infrastructure, device protocols, AWS, and other cloud
         * services.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/GetConnectorDefinitionVersion">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetConnectorDefinitionVersionOutcomeCallable GetConnectorDefinitionVersionCallable(const Model::GetConnectorDefinitionVersionRequest& request) const;

        /**
         * Retrieves information about a connector definition version, including the
         * connectors that the version contains. Connectors are prebuilt modules that
         * interact with local infrastructure, device protocols, AWS, and other cloud
         * services.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/GetConnectorDefinitionVersion">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetConnectorDefinitionVersionAsync(const Model::GetConnectorDefinitionVersionRequest& request, const GetConnectorDefinitionVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Retrieves information about a core definition version.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/GetCoreDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCoreDefinitionOutcome GetCoreDefinition(const Model::GetCoreDefinitionRequest& request) const;

        /**
         * Retrieves information about a core definition version.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/GetCoreDefinition">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCoreDefinitionOutcomeCallable GetCoreDefinitionCallable(const Model::GetCoreDefinitionRequest& request) const;

        /**
         * Retrieves information about a core definition version.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/GetCoreDefinition">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCoreDefinitionAsync(const Model::GetCoreDefinitionRequest& request, const GetCoreDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Retrieves information about a core definition version.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/GetCoreDefinitionVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCoreDefinitionVersionOutcome GetCoreDefinitionVersion(const Model::GetCoreDefinitionVersionRequest& request) const;

        /**
         * Retrieves information about a core definition version.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/GetCoreDefinitionVersion">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCoreDefinitionVersionOutcomeCallable GetCoreDefinitionVersionCallable(const Model::GetCoreDefinitionVersionRequest& request) const;

        /**
         * Retrieves information about a core definition version.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/GetCoreDefinitionVersion">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCoreDefinitionVersionAsync(const Model::GetCoreDefinitionVersionRequest& request, const GetCoreDefinitionVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Returns the status of a deployment.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/GetDeploymentStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDeploymentStatusOutcome GetDeploymentStatus(const Model::GetDeploymentStatusRequest& request) const;

        /**
         * Returns the status of a deployment.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/GetDeploymentStatus">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDeploymentStatusOutcomeCallable GetDeploymentStatusCallable(const Model::GetDeploymentStatusRequest& request) const;

        /**
         * Returns the status of a deployment.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/GetDeploymentStatus">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDeploymentStatusAsync(const Model::GetDeploymentStatusRequest& request, const GetDeploymentStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Retrieves information about a device definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/GetDeviceDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDeviceDefinitionOutcome GetDeviceDefinition(const Model::GetDeviceDefinitionRequest& request) const;

        /**
         * Retrieves information about a device definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/GetDeviceDefinition">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDeviceDefinitionOutcomeCallable GetDeviceDefinitionCallable(const Model::GetDeviceDefinitionRequest& request) const;

        /**
         * Retrieves information about a device definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/GetDeviceDefinition">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDeviceDefinitionAsync(const Model::GetDeviceDefinitionRequest& request, const GetDeviceDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Retrieves information about a device definition version.<p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/GetDeviceDefinitionVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDeviceDefinitionVersionOutcome GetDeviceDefinitionVersion(const Model::GetDeviceDefinitionVersionRequest& request) const;

        /**
         * Retrieves information about a device definition version.<p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/GetDeviceDefinitionVersion">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDeviceDefinitionVersionOutcomeCallable GetDeviceDefinitionVersionCallable(const Model::GetDeviceDefinitionVersionRequest& request) const;

        /**
         * Retrieves information about a device definition version.<p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/GetDeviceDefinitionVersion">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDeviceDefinitionVersionAsync(const Model::GetDeviceDefinitionVersionRequest& request, const GetDeviceDefinitionVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Retrieves information about a Lambda function definition, including its creation
         * time and latest version.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/GetFunctionDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFunctionDefinitionOutcome GetFunctionDefinition(const Model::GetFunctionDefinitionRequest& request) const;

        /**
         * Retrieves information about a Lambda function definition, including its creation
         * time and latest version.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/GetFunctionDefinition">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetFunctionDefinitionOutcomeCallable GetFunctionDefinitionCallable(const Model::GetFunctionDefinitionRequest& request) const;

        /**
         * Retrieves information about a Lambda function definition, including its creation
         * time and latest version.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/GetFunctionDefinition">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetFunctionDefinitionAsync(const Model::GetFunctionDefinitionRequest& request, const GetFunctionDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Retrieves information about a Lambda function definition version, including
         * which Lambda functions are included in the version and their
         * configurations.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/GetFunctionDefinitionVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFunctionDefinitionVersionOutcome GetFunctionDefinitionVersion(const Model::GetFunctionDefinitionVersionRequest& request) const;

        /**
         * Retrieves information about a Lambda function definition version, including
         * which Lambda functions are included in the version and their
         * configurations.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/GetFunctionDefinitionVersion">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetFunctionDefinitionVersionOutcomeCallable GetFunctionDefinitionVersionCallable(const Model::GetFunctionDefinitionVersionRequest& request) const;

        /**
         * Retrieves information about a Lambda function definition version, including
         * which Lambda functions are included in the version and their
         * configurations.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/GetFunctionDefinitionVersion">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetFunctionDefinitionVersionAsync(const Model::GetFunctionDefinitionVersionRequest& request, const GetFunctionDefinitionVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Retrieves information about a group.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/GetGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::GetGroupOutcome GetGroup(const Model::GetGroupRequest& request) const;

        /**
         * Retrieves information about a group.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/GetGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetGroupOutcomeCallable GetGroupCallable(const Model::GetGroupRequest& request) const;

        /**
         * Retrieves information about a group.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/GetGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetGroupAsync(const Model::GetGroupRequest& request, const GetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Retreives the CA associated with a group. Returns the public key of the
         * CA.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/GetGroupCertificateAuthority">AWS
         * API Reference</a></p>
         */
        virtual Model::GetGroupCertificateAuthorityOutcome GetGroupCertificateAuthority(const Model::GetGroupCertificateAuthorityRequest& request) const;

        /**
         * Retreives the CA associated with a group. Returns the public key of the
         * CA.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/GetGroupCertificateAuthority">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetGroupCertificateAuthorityOutcomeCallable GetGroupCertificateAuthorityCallable(const Model::GetGroupCertificateAuthorityRequest& request) const;

        /**
         * Retreives the CA associated with a group. Returns the public key of the
         * CA.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/GetGroupCertificateAuthority">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetGroupCertificateAuthorityAsync(const Model::GetGroupCertificateAuthorityRequest& request, const GetGroupCertificateAuthorityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Retrieves the current configuration for the CA used by the group.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/GetGroupCertificateConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetGroupCertificateConfigurationOutcome GetGroupCertificateConfiguration(const Model::GetGroupCertificateConfigurationRequest& request) const;

        /**
         * Retrieves the current configuration for the CA used by the group.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/GetGroupCertificateConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetGroupCertificateConfigurationOutcomeCallable GetGroupCertificateConfigurationCallable(const Model::GetGroupCertificateConfigurationRequest& request) const;

        /**
         * Retrieves the current configuration for the CA used by the group.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/GetGroupCertificateConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetGroupCertificateConfigurationAsync(const Model::GetGroupCertificateConfigurationRequest& request, const GetGroupCertificateConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Retrieves information about a group version.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/GetGroupVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::GetGroupVersionOutcome GetGroupVersion(const Model::GetGroupVersionRequest& request) const;

        /**
         * Retrieves information about a group version.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/GetGroupVersion">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetGroupVersionOutcomeCallable GetGroupVersionCallable(const Model::GetGroupVersionRequest& request) const;

        /**
         * Retrieves information about a group version.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/GetGroupVersion">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetGroupVersionAsync(const Model::GetGroupVersionRequest& request, const GetGroupVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Retrieves information about a logger definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/GetLoggerDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLoggerDefinitionOutcome GetLoggerDefinition(const Model::GetLoggerDefinitionRequest& request) const;

        /**
         * Retrieves information about a logger definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/GetLoggerDefinition">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetLoggerDefinitionOutcomeCallable GetLoggerDefinitionCallable(const Model::GetLoggerDefinitionRequest& request) const;

        /**
         * Retrieves information about a logger definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/GetLoggerDefinition">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetLoggerDefinitionAsync(const Model::GetLoggerDefinitionRequest& request, const GetLoggerDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Retrieves information about a logger definition version.<p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/GetLoggerDefinitionVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLoggerDefinitionVersionOutcome GetLoggerDefinitionVersion(const Model::GetLoggerDefinitionVersionRequest& request) const;

        /**
         * Retrieves information about a logger definition version.<p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/GetLoggerDefinitionVersion">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetLoggerDefinitionVersionOutcomeCallable GetLoggerDefinitionVersionCallable(const Model::GetLoggerDefinitionVersionRequest& request) const;

        /**
         * Retrieves information about a logger definition version.<p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/GetLoggerDefinitionVersion">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetLoggerDefinitionVersionAsync(const Model::GetLoggerDefinitionVersionRequest& request, const GetLoggerDefinitionVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Retrieves information about a resource definition, including its creation time
         * and latest version.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/GetResourceDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResourceDefinitionOutcome GetResourceDefinition(const Model::GetResourceDefinitionRequest& request) const;

        /**
         * Retrieves information about a resource definition, including its creation time
         * and latest version.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/GetResourceDefinition">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetResourceDefinitionOutcomeCallable GetResourceDefinitionCallable(const Model::GetResourceDefinitionRequest& request) const;

        /**
         * Retrieves information about a resource definition, including its creation time
         * and latest version.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/GetResourceDefinition">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetResourceDefinitionAsync(const Model::GetResourceDefinitionRequest& request, const GetResourceDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Retrieves information about a resource definition version, including which
         * resources are included in the version.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/GetResourceDefinitionVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResourceDefinitionVersionOutcome GetResourceDefinitionVersion(const Model::GetResourceDefinitionVersionRequest& request) const;

        /**
         * Retrieves information about a resource definition version, including which
         * resources are included in the version.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/GetResourceDefinitionVersion">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetResourceDefinitionVersionOutcomeCallable GetResourceDefinitionVersionCallable(const Model::GetResourceDefinitionVersionRequest& request) const;

        /**
         * Retrieves information about a resource definition version, including which
         * resources are included in the version.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/GetResourceDefinitionVersion">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetResourceDefinitionVersionAsync(const Model::GetResourceDefinitionVersionRequest& request, const GetResourceDefinitionVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Retrieves the service role that is attached to your account.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/GetServiceRoleForAccount">AWS
         * API Reference</a></p>
         */
        virtual Model::GetServiceRoleForAccountOutcome GetServiceRoleForAccount(const Model::GetServiceRoleForAccountRequest& request) const;

        /**
         * Retrieves the service role that is attached to your account.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/GetServiceRoleForAccount">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetServiceRoleForAccountOutcomeCallable GetServiceRoleForAccountCallable(const Model::GetServiceRoleForAccountRequest& request) const;

        /**
         * Retrieves the service role that is attached to your account.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/GetServiceRoleForAccount">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetServiceRoleForAccountAsync(const Model::GetServiceRoleForAccountRequest& request, const GetServiceRoleForAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Retrieves information about a subscription definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/GetSubscriptionDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSubscriptionDefinitionOutcome GetSubscriptionDefinition(const Model::GetSubscriptionDefinitionRequest& request) const;

        /**
         * Retrieves information about a subscription definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/GetSubscriptionDefinition">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSubscriptionDefinitionOutcomeCallable GetSubscriptionDefinitionCallable(const Model::GetSubscriptionDefinitionRequest& request) const;

        /**
         * Retrieves information about a subscription definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/GetSubscriptionDefinition">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSubscriptionDefinitionAsync(const Model::GetSubscriptionDefinitionRequest& request, const GetSubscriptionDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Retrieves information about a subscription definition version.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/GetSubscriptionDefinitionVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSubscriptionDefinitionVersionOutcome GetSubscriptionDefinitionVersion(const Model::GetSubscriptionDefinitionVersionRequest& request) const;

        /**
         * Retrieves information about a subscription definition version.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/GetSubscriptionDefinitionVersion">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSubscriptionDefinitionVersionOutcomeCallable GetSubscriptionDefinitionVersionCallable(const Model::GetSubscriptionDefinitionVersionRequest& request) const;

        /**
         * Retrieves information about a subscription definition version.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/GetSubscriptionDefinitionVersion">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSubscriptionDefinitionVersionAsync(const Model::GetSubscriptionDefinitionVersionRequest& request, const GetSubscriptionDefinitionVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Gets a paginated list of the deployments that have been started in a bulk
         * deployment operation, and their current deployment status.<p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ListBulkDeploymentDetailedReports">AWS
         * API Reference</a></p>
         */
        virtual Model::ListBulkDeploymentDetailedReportsOutcome ListBulkDeploymentDetailedReports(const Model::ListBulkDeploymentDetailedReportsRequest& request) const;

        /**
         * Gets a paginated list of the deployments that have been started in a bulk
         * deployment operation, and their current deployment status.<p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ListBulkDeploymentDetailedReports">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListBulkDeploymentDetailedReportsOutcomeCallable ListBulkDeploymentDetailedReportsCallable(const Model::ListBulkDeploymentDetailedReportsRequest& request) const;

        /**
         * Gets a paginated list of the deployments that have been started in a bulk
         * deployment operation, and their current deployment status.<p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ListBulkDeploymentDetailedReports">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListBulkDeploymentDetailedReportsAsync(const Model::ListBulkDeploymentDetailedReportsRequest& request, const ListBulkDeploymentDetailedReportsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Returns a list of bulk deployments.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ListBulkDeployments">AWS
         * API Reference</a></p>
         */
        virtual Model::ListBulkDeploymentsOutcome ListBulkDeployments(const Model::ListBulkDeploymentsRequest& request) const;

        /**
         * Returns a list of bulk deployments.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ListBulkDeployments">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListBulkDeploymentsOutcomeCallable ListBulkDeploymentsCallable(const Model::ListBulkDeploymentsRequest& request) const;

        /**
         * Returns a list of bulk deployments.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ListBulkDeployments">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListBulkDeploymentsAsync(const Model::ListBulkDeploymentsRequest& request, const ListBulkDeploymentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Lists the versions of a connector definition, which are containers for
         * connectors. Connectors run on the Greengrass core and contain built-in
         * integration with local infrastructure, device protocols, AWS, and other cloud
         * services.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ListConnectorDefinitionVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListConnectorDefinitionVersionsOutcome ListConnectorDefinitionVersions(const Model::ListConnectorDefinitionVersionsRequest& request) const;

        /**
         * Lists the versions of a connector definition, which are containers for
         * connectors. Connectors run on the Greengrass core and contain built-in
         * integration with local infrastructure, device protocols, AWS, and other cloud
         * services.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ListConnectorDefinitionVersions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListConnectorDefinitionVersionsOutcomeCallable ListConnectorDefinitionVersionsCallable(const Model::ListConnectorDefinitionVersionsRequest& request) const;

        /**
         * Lists the versions of a connector definition, which are containers for
         * connectors. Connectors run on the Greengrass core and contain built-in
         * integration with local infrastructure, device protocols, AWS, and other cloud
         * services.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ListConnectorDefinitionVersions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListConnectorDefinitionVersionsAsync(const Model::ListConnectorDefinitionVersionsRequest& request, const ListConnectorDefinitionVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Retrieves a list of connector definitions.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ListConnectorDefinitions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListConnectorDefinitionsOutcome ListConnectorDefinitions(const Model::ListConnectorDefinitionsRequest& request) const;

        /**
         * Retrieves a list of connector definitions.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ListConnectorDefinitions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListConnectorDefinitionsOutcomeCallable ListConnectorDefinitionsCallable(const Model::ListConnectorDefinitionsRequest& request) const;

        /**
         * Retrieves a list of connector definitions.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ListConnectorDefinitions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListConnectorDefinitionsAsync(const Model::ListConnectorDefinitionsRequest& request, const ListConnectorDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Lists the versions of a core definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ListCoreDefinitionVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCoreDefinitionVersionsOutcome ListCoreDefinitionVersions(const Model::ListCoreDefinitionVersionsRequest& request) const;

        /**
         * Lists the versions of a core definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ListCoreDefinitionVersions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListCoreDefinitionVersionsOutcomeCallable ListCoreDefinitionVersionsCallable(const Model::ListCoreDefinitionVersionsRequest& request) const;

        /**
         * Lists the versions of a core definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ListCoreDefinitionVersions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListCoreDefinitionVersionsAsync(const Model::ListCoreDefinitionVersionsRequest& request, const ListCoreDefinitionVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Retrieves a list of core definitions.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ListCoreDefinitions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCoreDefinitionsOutcome ListCoreDefinitions(const Model::ListCoreDefinitionsRequest& request) const;

        /**
         * Retrieves a list of core definitions.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ListCoreDefinitions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListCoreDefinitionsOutcomeCallable ListCoreDefinitionsCallable(const Model::ListCoreDefinitionsRequest& request) const;

        /**
         * Retrieves a list of core definitions.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ListCoreDefinitions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListCoreDefinitionsAsync(const Model::ListCoreDefinitionsRequest& request, const ListCoreDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Returns a history of deployments for the group.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ListDeployments">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDeploymentsOutcome ListDeployments(const Model::ListDeploymentsRequest& request) const;

        /**
         * Returns a history of deployments for the group.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ListDeployments">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDeploymentsOutcomeCallable ListDeploymentsCallable(const Model::ListDeploymentsRequest& request) const;

        /**
         * Returns a history of deployments for the group.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ListDeployments">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDeploymentsAsync(const Model::ListDeploymentsRequest& request, const ListDeploymentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Lists the versions of a device definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ListDeviceDefinitionVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDeviceDefinitionVersionsOutcome ListDeviceDefinitionVersions(const Model::ListDeviceDefinitionVersionsRequest& request) const;

        /**
         * Lists the versions of a device definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ListDeviceDefinitionVersions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDeviceDefinitionVersionsOutcomeCallable ListDeviceDefinitionVersionsCallable(const Model::ListDeviceDefinitionVersionsRequest& request) const;

        /**
         * Lists the versions of a device definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ListDeviceDefinitionVersions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDeviceDefinitionVersionsAsync(const Model::ListDeviceDefinitionVersionsRequest& request, const ListDeviceDefinitionVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Retrieves a list of device definitions.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ListDeviceDefinitions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDeviceDefinitionsOutcome ListDeviceDefinitions(const Model::ListDeviceDefinitionsRequest& request) const;

        /**
         * Retrieves a list of device definitions.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ListDeviceDefinitions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDeviceDefinitionsOutcomeCallable ListDeviceDefinitionsCallable(const Model::ListDeviceDefinitionsRequest& request) const;

        /**
         * Retrieves a list of device definitions.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ListDeviceDefinitions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDeviceDefinitionsAsync(const Model::ListDeviceDefinitionsRequest& request, const ListDeviceDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Lists the versions of a Lambda function definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ListFunctionDefinitionVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFunctionDefinitionVersionsOutcome ListFunctionDefinitionVersions(const Model::ListFunctionDefinitionVersionsRequest& request) const;

        /**
         * Lists the versions of a Lambda function definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ListFunctionDefinitionVersions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListFunctionDefinitionVersionsOutcomeCallable ListFunctionDefinitionVersionsCallable(const Model::ListFunctionDefinitionVersionsRequest& request) const;

        /**
         * Lists the versions of a Lambda function definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ListFunctionDefinitionVersions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListFunctionDefinitionVersionsAsync(const Model::ListFunctionDefinitionVersionsRequest& request, const ListFunctionDefinitionVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Retrieves a list of Lambda function definitions.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ListFunctionDefinitions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFunctionDefinitionsOutcome ListFunctionDefinitions(const Model::ListFunctionDefinitionsRequest& request) const;

        /**
         * Retrieves a list of Lambda function definitions.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ListFunctionDefinitions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListFunctionDefinitionsOutcomeCallable ListFunctionDefinitionsCallable(const Model::ListFunctionDefinitionsRequest& request) const;

        /**
         * Retrieves a list of Lambda function definitions.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ListFunctionDefinitions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListFunctionDefinitionsAsync(const Model::ListFunctionDefinitionsRequest& request, const ListFunctionDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Retrieves the current CAs for a group.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ListGroupCertificateAuthorities">AWS
         * API Reference</a></p>
         */
        virtual Model::ListGroupCertificateAuthoritiesOutcome ListGroupCertificateAuthorities(const Model::ListGroupCertificateAuthoritiesRequest& request) const;

        /**
         * Retrieves the current CAs for a group.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ListGroupCertificateAuthorities">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListGroupCertificateAuthoritiesOutcomeCallable ListGroupCertificateAuthoritiesCallable(const Model::ListGroupCertificateAuthoritiesRequest& request) const;

        /**
         * Retrieves the current CAs for a group.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ListGroupCertificateAuthorities">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListGroupCertificateAuthoritiesAsync(const Model::ListGroupCertificateAuthoritiesRequest& request, const ListGroupCertificateAuthoritiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Lists the versions of a group.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ListGroupVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListGroupVersionsOutcome ListGroupVersions(const Model::ListGroupVersionsRequest& request) const;

        /**
         * Lists the versions of a group.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ListGroupVersions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListGroupVersionsOutcomeCallable ListGroupVersionsCallable(const Model::ListGroupVersionsRequest& request) const;

        /**
         * Lists the versions of a group.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ListGroupVersions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListGroupVersionsAsync(const Model::ListGroupVersionsRequest& request, const ListGroupVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Retrieves a list of groups.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ListGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListGroupsOutcome ListGroups(const Model::ListGroupsRequest& request) const;

        /**
         * Retrieves a list of groups.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ListGroups">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListGroupsOutcomeCallable ListGroupsCallable(const Model::ListGroupsRequest& request) const;

        /**
         * Retrieves a list of groups.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ListGroups">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListGroupsAsync(const Model::ListGroupsRequest& request, const ListGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Lists the versions of a logger definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ListLoggerDefinitionVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLoggerDefinitionVersionsOutcome ListLoggerDefinitionVersions(const Model::ListLoggerDefinitionVersionsRequest& request) const;

        /**
         * Lists the versions of a logger definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ListLoggerDefinitionVersions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListLoggerDefinitionVersionsOutcomeCallable ListLoggerDefinitionVersionsCallable(const Model::ListLoggerDefinitionVersionsRequest& request) const;

        /**
         * Lists the versions of a logger definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ListLoggerDefinitionVersions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListLoggerDefinitionVersionsAsync(const Model::ListLoggerDefinitionVersionsRequest& request, const ListLoggerDefinitionVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Retrieves a list of logger definitions.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ListLoggerDefinitions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLoggerDefinitionsOutcome ListLoggerDefinitions(const Model::ListLoggerDefinitionsRequest& request) const;

        /**
         * Retrieves a list of logger definitions.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ListLoggerDefinitions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListLoggerDefinitionsOutcomeCallable ListLoggerDefinitionsCallable(const Model::ListLoggerDefinitionsRequest& request) const;

        /**
         * Retrieves a list of logger definitions.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ListLoggerDefinitions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListLoggerDefinitionsAsync(const Model::ListLoggerDefinitionsRequest& request, const ListLoggerDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Lists the versions of a resource definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ListResourceDefinitionVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListResourceDefinitionVersionsOutcome ListResourceDefinitionVersions(const Model::ListResourceDefinitionVersionsRequest& request) const;

        /**
         * Lists the versions of a resource definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ListResourceDefinitionVersions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListResourceDefinitionVersionsOutcomeCallable ListResourceDefinitionVersionsCallable(const Model::ListResourceDefinitionVersionsRequest& request) const;

        /**
         * Lists the versions of a resource definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ListResourceDefinitionVersions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListResourceDefinitionVersionsAsync(const Model::ListResourceDefinitionVersionsRequest& request, const ListResourceDefinitionVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Retrieves a list of resource definitions.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ListResourceDefinitions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListResourceDefinitionsOutcome ListResourceDefinitions(const Model::ListResourceDefinitionsRequest& request) const;

        /**
         * Retrieves a list of resource definitions.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ListResourceDefinitions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListResourceDefinitionsOutcomeCallable ListResourceDefinitionsCallable(const Model::ListResourceDefinitionsRequest& request) const;

        /**
         * Retrieves a list of resource definitions.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ListResourceDefinitions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListResourceDefinitionsAsync(const Model::ListResourceDefinitionsRequest& request, const ListResourceDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Lists the versions of a subscription definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ListSubscriptionDefinitionVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSubscriptionDefinitionVersionsOutcome ListSubscriptionDefinitionVersions(const Model::ListSubscriptionDefinitionVersionsRequest& request) const;

        /**
         * Lists the versions of a subscription definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ListSubscriptionDefinitionVersions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListSubscriptionDefinitionVersionsOutcomeCallable ListSubscriptionDefinitionVersionsCallable(const Model::ListSubscriptionDefinitionVersionsRequest& request) const;

        /**
         * Lists the versions of a subscription definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ListSubscriptionDefinitionVersions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSubscriptionDefinitionVersionsAsync(const Model::ListSubscriptionDefinitionVersionsRequest& request, const ListSubscriptionDefinitionVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Retrieves a list of subscription definitions.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ListSubscriptionDefinitions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSubscriptionDefinitionsOutcome ListSubscriptionDefinitions(const Model::ListSubscriptionDefinitionsRequest& request) const;

        /**
         * Retrieves a list of subscription definitions.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ListSubscriptionDefinitions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListSubscriptionDefinitionsOutcomeCallable ListSubscriptionDefinitionsCallable(const Model::ListSubscriptionDefinitionsRequest& request) const;

        /**
         * Retrieves a list of subscription definitions.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ListSubscriptionDefinitions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSubscriptionDefinitionsAsync(const Model::ListSubscriptionDefinitionsRequest& request, const ListSubscriptionDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Retrieves the tags for a resource.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * Retrieves the tags for a resource.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * Retrieves the tags for a resource.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Resets a group's deployments.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ResetDeployments">AWS
         * API Reference</a></p>
         */
        virtual Model::ResetDeploymentsOutcome ResetDeployments(const Model::ResetDeploymentsRequest& request) const;

        /**
         * Resets a group's deployments.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ResetDeployments">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ResetDeploymentsOutcomeCallable ResetDeploymentsCallable(const Model::ResetDeploymentsRequest& request) const;

        /**
         * Resets a group's deployments.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/ResetDeployments">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ResetDeploymentsAsync(const Model::ResetDeploymentsRequest& request, const ResetDeploymentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Deploys multiple groups in one operation. This action starts the bulk deployment
         * of a specified set of group versions. Each group version deployment will be
         * triggered with an adaptive rate that has a fixed upper limit. We recommend that
         * you include an ''X-Amzn-Client-Token'' token in every ''StartBulkDeployment''
         * request. These requests are idempotent with respect to the token and the request
         * parameters.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/StartBulkDeployment">AWS
         * API Reference</a></p>
         */
        virtual Model::StartBulkDeploymentOutcome StartBulkDeployment(const Model::StartBulkDeploymentRequest& request) const;

        /**
         * Deploys multiple groups in one operation. This action starts the bulk deployment
         * of a specified set of group versions. Each group version deployment will be
         * triggered with an adaptive rate that has a fixed upper limit. We recommend that
         * you include an ''X-Amzn-Client-Token'' token in every ''StartBulkDeployment''
         * request. These requests are idempotent with respect to the token and the request
         * parameters.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/StartBulkDeployment">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartBulkDeploymentOutcomeCallable StartBulkDeploymentCallable(const Model::StartBulkDeploymentRequest& request) const;

        /**
         * Deploys multiple groups in one operation. This action starts the bulk deployment
         * of a specified set of group versions. Each group version deployment will be
         * triggered with an adaptive rate that has a fixed upper limit. We recommend that
         * you include an ''X-Amzn-Client-Token'' token in every ''StartBulkDeployment''
         * request. These requests are idempotent with respect to the token and the request
         * parameters.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/StartBulkDeployment">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartBulkDeploymentAsync(const Model::StartBulkDeploymentRequest& request, const StartBulkDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Stops the execution of a bulk deployment. This action returns a status of
         * ''Stopping'' until the deployment is stopped. You cannot start a new bulk
         * deployment while a previous deployment is in the ''Stopping'' state. This action
         * doesn't rollback completed deployments or cancel pending deployments.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/StopBulkDeployment">AWS
         * API Reference</a></p>
         */
        virtual Model::StopBulkDeploymentOutcome StopBulkDeployment(const Model::StopBulkDeploymentRequest& request) const;

        /**
         * Stops the execution of a bulk deployment. This action returns a status of
         * ''Stopping'' until the deployment is stopped. You cannot start a new bulk
         * deployment while a previous deployment is in the ''Stopping'' state. This action
         * doesn't rollback completed deployments or cancel pending deployments.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/StopBulkDeployment">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopBulkDeploymentOutcomeCallable StopBulkDeploymentCallable(const Model::StopBulkDeploymentRequest& request) const;

        /**
         * Stops the execution of a bulk deployment. This action returns a status of
         * ''Stopping'' until the deployment is stopped. You cannot start a new bulk
         * deployment while a previous deployment is in the ''Stopping'' state. This action
         * doesn't rollback completed deployments or cancel pending deployments.<p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/StopBulkDeployment">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopBulkDeploymentAsync(const Model::StopBulkDeploymentRequest& request, const StopBulkDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Updates the connectivity information for the core. Any devices that belong to
         * the group which has this core will receive this information in order to find the
         * location of the core and connect to it.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/UpdateConnectivityInfo">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateConnectivityInfoOutcome UpdateConnectivityInfo(const Model::UpdateConnectivityInfoRequest& request) const;

        /**
         * Updates the connectivity information for the core. Any devices that belong to
         * the group which has this core will receive this information in order to find the
         * location of the core and connect to it.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/UpdateConnectivityInfo">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateConnectivityInfoOutcomeCallable UpdateConnectivityInfoCallable(const Model::UpdateConnectivityInfoRequest& request) const;

        /**
         * Updates the connectivity information for the core. Any devices that belong to
         * the group which has this core will receive this information in order to find the
         * location of the core and connect to it.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/UpdateConnectivityInfo">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateConnectivityInfoAsync(const Model::UpdateConnectivityInfoRequest& request, const UpdateConnectivityInfoResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Updates a connector definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/UpdateConnectorDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateConnectorDefinitionOutcome UpdateConnectorDefinition(const Model::UpdateConnectorDefinitionRequest& request) const;

        /**
         * Updates a connector definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/UpdateConnectorDefinition">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateConnectorDefinitionOutcomeCallable UpdateConnectorDefinitionCallable(const Model::UpdateConnectorDefinitionRequest& request) const;

        /**
         * Updates a connector definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/UpdateConnectorDefinition">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateConnectorDefinitionAsync(const Model::UpdateConnectorDefinitionRequest& request, const UpdateConnectorDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Updates a core definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/UpdateCoreDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateCoreDefinitionOutcome UpdateCoreDefinition(const Model::UpdateCoreDefinitionRequest& request) const;

        /**
         * Updates a core definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/UpdateCoreDefinition">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateCoreDefinitionOutcomeCallable UpdateCoreDefinitionCallable(const Model::UpdateCoreDefinitionRequest& request) const;

        /**
         * Updates a core definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/UpdateCoreDefinition">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateCoreDefinitionAsync(const Model::UpdateCoreDefinitionRequest& request, const UpdateCoreDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Updates a device definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/UpdateDeviceDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDeviceDefinitionOutcome UpdateDeviceDefinition(const Model::UpdateDeviceDefinitionRequest& request) const;

        /**
         * Updates a device definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/UpdateDeviceDefinition">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDeviceDefinitionOutcomeCallable UpdateDeviceDefinitionCallable(const Model::UpdateDeviceDefinitionRequest& request) const;

        /**
         * Updates a device definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/UpdateDeviceDefinition">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDeviceDefinitionAsync(const Model::UpdateDeviceDefinitionRequest& request, const UpdateDeviceDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Updates a Lambda function definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/UpdateFunctionDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFunctionDefinitionOutcome UpdateFunctionDefinition(const Model::UpdateFunctionDefinitionRequest& request) const;

        /**
         * Updates a Lambda function definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/UpdateFunctionDefinition">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateFunctionDefinitionOutcomeCallable UpdateFunctionDefinitionCallable(const Model::UpdateFunctionDefinitionRequest& request) const;

        /**
         * Updates a Lambda function definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/UpdateFunctionDefinition">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateFunctionDefinitionAsync(const Model::UpdateFunctionDefinitionRequest& request, const UpdateFunctionDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Updates a group.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/UpdateGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateGroupOutcome UpdateGroup(const Model::UpdateGroupRequest& request) const;

        /**
         * Updates a group.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/UpdateGroup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateGroupOutcomeCallable UpdateGroupCallable(const Model::UpdateGroupRequest& request) const;

        /**
         * Updates a group.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/UpdateGroup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateGroupAsync(const Model::UpdateGroupRequest& request, const UpdateGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Updates the Certificate expiry time for a group.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/UpdateGroupCertificateConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateGroupCertificateConfigurationOutcome UpdateGroupCertificateConfiguration(const Model::UpdateGroupCertificateConfigurationRequest& request) const;

        /**
         * Updates the Certificate expiry time for a group.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/UpdateGroupCertificateConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateGroupCertificateConfigurationOutcomeCallable UpdateGroupCertificateConfigurationCallable(const Model::UpdateGroupCertificateConfigurationRequest& request) const;

        /**
         * Updates the Certificate expiry time for a group.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/UpdateGroupCertificateConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateGroupCertificateConfigurationAsync(const Model::UpdateGroupCertificateConfigurationRequest& request, const UpdateGroupCertificateConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Updates a logger definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/UpdateLoggerDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateLoggerDefinitionOutcome UpdateLoggerDefinition(const Model::UpdateLoggerDefinitionRequest& request) const;

        /**
         * Updates a logger definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/UpdateLoggerDefinition">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateLoggerDefinitionOutcomeCallable UpdateLoggerDefinitionCallable(const Model::UpdateLoggerDefinitionRequest& request) const;

        /**
         * Updates a logger definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/UpdateLoggerDefinition">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateLoggerDefinitionAsync(const Model::UpdateLoggerDefinitionRequest& request, const UpdateLoggerDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Updates a resource definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/UpdateResourceDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateResourceDefinitionOutcome UpdateResourceDefinition(const Model::UpdateResourceDefinitionRequest& request) const;

        /**
         * Updates a resource definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/UpdateResourceDefinition">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateResourceDefinitionOutcomeCallable UpdateResourceDefinitionCallable(const Model::UpdateResourceDefinitionRequest& request) const;

        /**
         * Updates a resource definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/UpdateResourceDefinition">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateResourceDefinitionAsync(const Model::UpdateResourceDefinitionRequest& request, const UpdateResourceDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Updates a subscription definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/UpdateSubscriptionDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSubscriptionDefinitionOutcome UpdateSubscriptionDefinition(const Model::UpdateSubscriptionDefinitionRequest& request) const;

        /**
         * Updates a subscription definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/UpdateSubscriptionDefinition">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateSubscriptionDefinitionOutcomeCallable UpdateSubscriptionDefinitionCallable(const Model::UpdateSubscriptionDefinitionRequest& request) const;

        /**
         * Updates a subscription definition.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/greengrass-2017-06-07/UpdateSubscriptionDefinition">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateSubscriptionDefinitionAsync(const Model::UpdateSubscriptionDefinitionRequest& request, const UpdateSubscriptionDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void AssociateRoleToGroupAsyncHelper(const Model::AssociateRoleToGroupRequest& request, const AssociateRoleToGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void AssociateServiceRoleToAccountAsyncHelper(const Model::AssociateServiceRoleToAccountRequest& request, const AssociateServiceRoleToAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateConnectorDefinitionAsyncHelper(const Model::CreateConnectorDefinitionRequest& request, const CreateConnectorDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateConnectorDefinitionVersionAsyncHelper(const Model::CreateConnectorDefinitionVersionRequest& request, const CreateConnectorDefinitionVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateCoreDefinitionAsyncHelper(const Model::CreateCoreDefinitionRequest& request, const CreateCoreDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateCoreDefinitionVersionAsyncHelper(const Model::CreateCoreDefinitionVersionRequest& request, const CreateCoreDefinitionVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateDeploymentAsyncHelper(const Model::CreateDeploymentRequest& request, const CreateDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateDeviceDefinitionAsyncHelper(const Model::CreateDeviceDefinitionRequest& request, const CreateDeviceDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateDeviceDefinitionVersionAsyncHelper(const Model::CreateDeviceDefinitionVersionRequest& request, const CreateDeviceDefinitionVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateFunctionDefinitionAsyncHelper(const Model::CreateFunctionDefinitionRequest& request, const CreateFunctionDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateFunctionDefinitionVersionAsyncHelper(const Model::CreateFunctionDefinitionVersionRequest& request, const CreateFunctionDefinitionVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateGroupAsyncHelper(const Model::CreateGroupRequest& request, const CreateGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateGroupCertificateAuthorityAsyncHelper(const Model::CreateGroupCertificateAuthorityRequest& request, const CreateGroupCertificateAuthorityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateGroupVersionAsyncHelper(const Model::CreateGroupVersionRequest& request, const CreateGroupVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateLoggerDefinitionAsyncHelper(const Model::CreateLoggerDefinitionRequest& request, const CreateLoggerDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateLoggerDefinitionVersionAsyncHelper(const Model::CreateLoggerDefinitionVersionRequest& request, const CreateLoggerDefinitionVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateResourceDefinitionAsyncHelper(const Model::CreateResourceDefinitionRequest& request, const CreateResourceDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateResourceDefinitionVersionAsyncHelper(const Model::CreateResourceDefinitionVersionRequest& request, const CreateResourceDefinitionVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateSoftwareUpdateJobAsyncHelper(const Model::CreateSoftwareUpdateJobRequest& request, const CreateSoftwareUpdateJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateSubscriptionDefinitionAsyncHelper(const Model::CreateSubscriptionDefinitionRequest& request, const CreateSubscriptionDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateSubscriptionDefinitionVersionAsyncHelper(const Model::CreateSubscriptionDefinitionVersionRequest& request, const CreateSubscriptionDefinitionVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteConnectorDefinitionAsyncHelper(const Model::DeleteConnectorDefinitionRequest& request, const DeleteConnectorDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteCoreDefinitionAsyncHelper(const Model::DeleteCoreDefinitionRequest& request, const DeleteCoreDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteDeviceDefinitionAsyncHelper(const Model::DeleteDeviceDefinitionRequest& request, const DeleteDeviceDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteFunctionDefinitionAsyncHelper(const Model::DeleteFunctionDefinitionRequest& request, const DeleteFunctionDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteGroupAsyncHelper(const Model::DeleteGroupRequest& request, const DeleteGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteLoggerDefinitionAsyncHelper(const Model::DeleteLoggerDefinitionRequest& request, const DeleteLoggerDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteResourceDefinitionAsyncHelper(const Model::DeleteResourceDefinitionRequest& request, const DeleteResourceDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteSubscriptionDefinitionAsyncHelper(const Model::DeleteSubscriptionDefinitionRequest& request, const DeleteSubscriptionDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateRoleFromGroupAsyncHelper(const Model::DisassociateRoleFromGroupRequest& request, const DisassociateRoleFromGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateServiceRoleFromAccountAsyncHelper(const Model::DisassociateServiceRoleFromAccountRequest& request, const DisassociateServiceRoleFromAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetAssociatedRoleAsyncHelper(const Model::GetAssociatedRoleRequest& request, const GetAssociatedRoleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetBulkDeploymentStatusAsyncHelper(const Model::GetBulkDeploymentStatusRequest& request, const GetBulkDeploymentStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetConnectivityInfoAsyncHelper(const Model::GetConnectivityInfoRequest& request, const GetConnectivityInfoResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetConnectorDefinitionAsyncHelper(const Model::GetConnectorDefinitionRequest& request, const GetConnectorDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetConnectorDefinitionVersionAsyncHelper(const Model::GetConnectorDefinitionVersionRequest& request, const GetConnectorDefinitionVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetCoreDefinitionAsyncHelper(const Model::GetCoreDefinitionRequest& request, const GetCoreDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetCoreDefinitionVersionAsyncHelper(const Model::GetCoreDefinitionVersionRequest& request, const GetCoreDefinitionVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDeploymentStatusAsyncHelper(const Model::GetDeploymentStatusRequest& request, const GetDeploymentStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDeviceDefinitionAsyncHelper(const Model::GetDeviceDefinitionRequest& request, const GetDeviceDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDeviceDefinitionVersionAsyncHelper(const Model::GetDeviceDefinitionVersionRequest& request, const GetDeviceDefinitionVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetFunctionDefinitionAsyncHelper(const Model::GetFunctionDefinitionRequest& request, const GetFunctionDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetFunctionDefinitionVersionAsyncHelper(const Model::GetFunctionDefinitionVersionRequest& request, const GetFunctionDefinitionVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetGroupAsyncHelper(const Model::GetGroupRequest& request, const GetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetGroupCertificateAuthorityAsyncHelper(const Model::GetGroupCertificateAuthorityRequest& request, const GetGroupCertificateAuthorityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetGroupCertificateConfigurationAsyncHelper(const Model::GetGroupCertificateConfigurationRequest& request, const GetGroupCertificateConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetGroupVersionAsyncHelper(const Model::GetGroupVersionRequest& request, const GetGroupVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetLoggerDefinitionAsyncHelper(const Model::GetLoggerDefinitionRequest& request, const GetLoggerDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetLoggerDefinitionVersionAsyncHelper(const Model::GetLoggerDefinitionVersionRequest& request, const GetLoggerDefinitionVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetResourceDefinitionAsyncHelper(const Model::GetResourceDefinitionRequest& request, const GetResourceDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetResourceDefinitionVersionAsyncHelper(const Model::GetResourceDefinitionVersionRequest& request, const GetResourceDefinitionVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetServiceRoleForAccountAsyncHelper(const Model::GetServiceRoleForAccountRequest& request, const GetServiceRoleForAccountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetSubscriptionDefinitionAsyncHelper(const Model::GetSubscriptionDefinitionRequest& request, const GetSubscriptionDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetSubscriptionDefinitionVersionAsyncHelper(const Model::GetSubscriptionDefinitionVersionRequest& request, const GetSubscriptionDefinitionVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListBulkDeploymentDetailedReportsAsyncHelper(const Model::ListBulkDeploymentDetailedReportsRequest& request, const ListBulkDeploymentDetailedReportsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListBulkDeploymentsAsyncHelper(const Model::ListBulkDeploymentsRequest& request, const ListBulkDeploymentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListConnectorDefinitionVersionsAsyncHelper(const Model::ListConnectorDefinitionVersionsRequest& request, const ListConnectorDefinitionVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListConnectorDefinitionsAsyncHelper(const Model::ListConnectorDefinitionsRequest& request, const ListConnectorDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListCoreDefinitionVersionsAsyncHelper(const Model::ListCoreDefinitionVersionsRequest& request, const ListCoreDefinitionVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListCoreDefinitionsAsyncHelper(const Model::ListCoreDefinitionsRequest& request, const ListCoreDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDeploymentsAsyncHelper(const Model::ListDeploymentsRequest& request, const ListDeploymentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDeviceDefinitionVersionsAsyncHelper(const Model::ListDeviceDefinitionVersionsRequest& request, const ListDeviceDefinitionVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListDeviceDefinitionsAsyncHelper(const Model::ListDeviceDefinitionsRequest& request, const ListDeviceDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListFunctionDefinitionVersionsAsyncHelper(const Model::ListFunctionDefinitionVersionsRequest& request, const ListFunctionDefinitionVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListFunctionDefinitionsAsyncHelper(const Model::ListFunctionDefinitionsRequest& request, const ListFunctionDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListGroupCertificateAuthoritiesAsyncHelper(const Model::ListGroupCertificateAuthoritiesRequest& request, const ListGroupCertificateAuthoritiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListGroupVersionsAsyncHelper(const Model::ListGroupVersionsRequest& request, const ListGroupVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListGroupsAsyncHelper(const Model::ListGroupsRequest& request, const ListGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListLoggerDefinitionVersionsAsyncHelper(const Model::ListLoggerDefinitionVersionsRequest& request, const ListLoggerDefinitionVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListLoggerDefinitionsAsyncHelper(const Model::ListLoggerDefinitionsRequest& request, const ListLoggerDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListResourceDefinitionVersionsAsyncHelper(const Model::ListResourceDefinitionVersionsRequest& request, const ListResourceDefinitionVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListResourceDefinitionsAsyncHelper(const Model::ListResourceDefinitionsRequest& request, const ListResourceDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListSubscriptionDefinitionVersionsAsyncHelper(const Model::ListSubscriptionDefinitionVersionsRequest& request, const ListSubscriptionDefinitionVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListSubscriptionDefinitionsAsyncHelper(const Model::ListSubscriptionDefinitionsRequest& request, const ListSubscriptionDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ResetDeploymentsAsyncHelper(const Model::ResetDeploymentsRequest& request, const ResetDeploymentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartBulkDeploymentAsyncHelper(const Model::StartBulkDeploymentRequest& request, const StartBulkDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopBulkDeploymentAsyncHelper(const Model::StopBulkDeploymentRequest& request, const StopBulkDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateConnectivityInfoAsyncHelper(const Model::UpdateConnectivityInfoRequest& request, const UpdateConnectivityInfoResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateConnectorDefinitionAsyncHelper(const Model::UpdateConnectorDefinitionRequest& request, const UpdateConnectorDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateCoreDefinitionAsyncHelper(const Model::UpdateCoreDefinitionRequest& request, const UpdateCoreDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateDeviceDefinitionAsyncHelper(const Model::UpdateDeviceDefinitionRequest& request, const UpdateDeviceDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateFunctionDefinitionAsyncHelper(const Model::UpdateFunctionDefinitionRequest& request, const UpdateFunctionDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateGroupAsyncHelper(const Model::UpdateGroupRequest& request, const UpdateGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateGroupCertificateConfigurationAsyncHelper(const Model::UpdateGroupCertificateConfigurationRequest& request, const UpdateGroupCertificateConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateLoggerDefinitionAsyncHelper(const Model::UpdateLoggerDefinitionRequest& request, const UpdateLoggerDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateResourceDefinitionAsyncHelper(const Model::UpdateResourceDefinitionRequest& request, const UpdateResourceDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateSubscriptionDefinitionAsyncHelper(const Model::UpdateSubscriptionDefinitionRequest& request, const UpdateSubscriptionDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace Greengrass
} // namespace Aws
