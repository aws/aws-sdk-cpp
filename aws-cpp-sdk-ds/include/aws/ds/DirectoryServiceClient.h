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
#pragma once
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/ds/DirectoryServiceErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ds/model/ConnectDirectoryResult.h>
#include <aws/ds/model/CreateAliasResult.h>
#include <aws/ds/model/CreateComputerResult.h>
#include <aws/ds/model/CreateDirectoryResult.h>
#include <aws/ds/model/CreateMicrosoftADResult.h>
#include <aws/ds/model/CreateSnapshotResult.h>
#include <aws/ds/model/CreateTrustResult.h>
#include <aws/ds/model/DeleteDirectoryResult.h>
#include <aws/ds/model/DeleteSnapshotResult.h>
#include <aws/ds/model/DeleteTrustResult.h>
#include <aws/ds/model/DescribeDirectoriesResult.h>
#include <aws/ds/model/DescribeSnapshotsResult.h>
#include <aws/ds/model/DescribeTrustsResult.h>
#include <aws/ds/model/DisableRadiusResult.h>
#include <aws/ds/model/DisableSsoResult.h>
#include <aws/ds/model/EnableRadiusResult.h>
#include <aws/ds/model/EnableSsoResult.h>
#include <aws/ds/model/GetDirectoryLimitsResult.h>
#include <aws/ds/model/GetSnapshotLimitsResult.h>
#include <aws/ds/model/RestoreFromSnapshotResult.h>
#include <aws/ds/model/UpdateRadiusResult.h>
#include <aws/ds/model/VerifyTrustResult.h>
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

namespace Json
{
  class JsonValue;
} // namespace Json
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

namespace DirectoryService
{

namespace Model
{
        class ConnectDirectoryRequest;
        class CreateAliasRequest;
        class CreateComputerRequest;
        class CreateDirectoryRequest;
        class CreateMicrosoftADRequest;
        class CreateSnapshotRequest;
        class CreateTrustRequest;
        class DeleteDirectoryRequest;
        class DeleteSnapshotRequest;
        class DeleteTrustRequest;
        class DescribeDirectoriesRequest;
        class DescribeSnapshotsRequest;
        class DescribeTrustsRequest;
        class DisableRadiusRequest;
        class DisableSsoRequest;
        class EnableRadiusRequest;
        class EnableSsoRequest;
        class GetDirectoryLimitsRequest;
        class GetSnapshotLimitsRequest;
        class RestoreFromSnapshotRequest;
        class UpdateRadiusRequest;
        class VerifyTrustRequest;

        typedef Aws::Utils::Outcome<ConnectDirectoryResult, Aws::Client::AWSError<DirectoryServiceErrors>> ConnectDirectoryOutcome;
        typedef Aws::Utils::Outcome<CreateAliasResult, Aws::Client::AWSError<DirectoryServiceErrors>> CreateAliasOutcome;
        typedef Aws::Utils::Outcome<CreateComputerResult, Aws::Client::AWSError<DirectoryServiceErrors>> CreateComputerOutcome;
        typedef Aws::Utils::Outcome<CreateDirectoryResult, Aws::Client::AWSError<DirectoryServiceErrors>> CreateDirectoryOutcome;
        typedef Aws::Utils::Outcome<CreateMicrosoftADResult, Aws::Client::AWSError<DirectoryServiceErrors>> CreateMicrosoftADOutcome;
        typedef Aws::Utils::Outcome<CreateSnapshotResult, Aws::Client::AWSError<DirectoryServiceErrors>> CreateSnapshotOutcome;
        typedef Aws::Utils::Outcome<CreateTrustResult, Aws::Client::AWSError<DirectoryServiceErrors>> CreateTrustOutcome;
        typedef Aws::Utils::Outcome<DeleteDirectoryResult, Aws::Client::AWSError<DirectoryServiceErrors>> DeleteDirectoryOutcome;
        typedef Aws::Utils::Outcome<DeleteSnapshotResult, Aws::Client::AWSError<DirectoryServiceErrors>> DeleteSnapshotOutcome;
        typedef Aws::Utils::Outcome<DeleteTrustResult, Aws::Client::AWSError<DirectoryServiceErrors>> DeleteTrustOutcome;
        typedef Aws::Utils::Outcome<DescribeDirectoriesResult, Aws::Client::AWSError<DirectoryServiceErrors>> DescribeDirectoriesOutcome;
        typedef Aws::Utils::Outcome<DescribeSnapshotsResult, Aws::Client::AWSError<DirectoryServiceErrors>> DescribeSnapshotsOutcome;
        typedef Aws::Utils::Outcome<DescribeTrustsResult, Aws::Client::AWSError<DirectoryServiceErrors>> DescribeTrustsOutcome;
        typedef Aws::Utils::Outcome<DisableRadiusResult, Aws::Client::AWSError<DirectoryServiceErrors>> DisableRadiusOutcome;
        typedef Aws::Utils::Outcome<DisableSsoResult, Aws::Client::AWSError<DirectoryServiceErrors>> DisableSsoOutcome;
        typedef Aws::Utils::Outcome<EnableRadiusResult, Aws::Client::AWSError<DirectoryServiceErrors>> EnableRadiusOutcome;
        typedef Aws::Utils::Outcome<EnableSsoResult, Aws::Client::AWSError<DirectoryServiceErrors>> EnableSsoOutcome;
        typedef Aws::Utils::Outcome<GetDirectoryLimitsResult, Aws::Client::AWSError<DirectoryServiceErrors>> GetDirectoryLimitsOutcome;
        typedef Aws::Utils::Outcome<GetSnapshotLimitsResult, Aws::Client::AWSError<DirectoryServiceErrors>> GetSnapshotLimitsOutcome;
        typedef Aws::Utils::Outcome<RestoreFromSnapshotResult, Aws::Client::AWSError<DirectoryServiceErrors>> RestoreFromSnapshotOutcome;
        typedef Aws::Utils::Outcome<UpdateRadiusResult, Aws::Client::AWSError<DirectoryServiceErrors>> UpdateRadiusOutcome;
        typedef Aws::Utils::Outcome<VerifyTrustResult, Aws::Client::AWSError<DirectoryServiceErrors>> VerifyTrustOutcome;

        typedef std::future<ConnectDirectoryOutcome> ConnectDirectoryOutcomeCallable;
        typedef std::future<CreateAliasOutcome> CreateAliasOutcomeCallable;
        typedef std::future<CreateComputerOutcome> CreateComputerOutcomeCallable;
        typedef std::future<CreateDirectoryOutcome> CreateDirectoryOutcomeCallable;
        typedef std::future<CreateMicrosoftADOutcome> CreateMicrosoftADOutcomeCallable;
        typedef std::future<CreateSnapshotOutcome> CreateSnapshotOutcomeCallable;
        typedef std::future<CreateTrustOutcome> CreateTrustOutcomeCallable;
        typedef std::future<DeleteDirectoryOutcome> DeleteDirectoryOutcomeCallable;
        typedef std::future<DeleteSnapshotOutcome> DeleteSnapshotOutcomeCallable;
        typedef std::future<DeleteTrustOutcome> DeleteTrustOutcomeCallable;
        typedef std::future<DescribeDirectoriesOutcome> DescribeDirectoriesOutcomeCallable;
        typedef std::future<DescribeSnapshotsOutcome> DescribeSnapshotsOutcomeCallable;
        typedef std::future<DescribeTrustsOutcome> DescribeTrustsOutcomeCallable;
        typedef std::future<DisableRadiusOutcome> DisableRadiusOutcomeCallable;
        typedef std::future<DisableSsoOutcome> DisableSsoOutcomeCallable;
        typedef std::future<EnableRadiusOutcome> EnableRadiusOutcomeCallable;
        typedef std::future<EnableSsoOutcome> EnableSsoOutcomeCallable;
        typedef std::future<GetDirectoryLimitsOutcome> GetDirectoryLimitsOutcomeCallable;
        typedef std::future<GetSnapshotLimitsOutcome> GetSnapshotLimitsOutcomeCallable;
        typedef std::future<RestoreFromSnapshotOutcome> RestoreFromSnapshotOutcomeCallable;
        typedef std::future<UpdateRadiusOutcome> UpdateRadiusOutcomeCallable;
        typedef std::future<VerifyTrustOutcome> VerifyTrustOutcomeCallable;
} // namespace Model

  class DirectoryServiceClient;

    typedef std::function<void(const DirectoryServiceClient*, const Model::ConnectDirectoryRequest&, const Model::ConnectDirectoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ConnectDirectoryResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::CreateAliasRequest&, const Model::CreateAliasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAliasResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::CreateComputerRequest&, const Model::CreateComputerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateComputerResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::CreateDirectoryRequest&, const Model::CreateDirectoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDirectoryResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::CreateMicrosoftADRequest&, const Model::CreateMicrosoftADOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateMicrosoftADResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::CreateSnapshotRequest&, const Model::CreateSnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSnapshotResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::CreateTrustRequest&, const Model::CreateTrustOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTrustResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::DeleteDirectoryRequest&, const Model::DeleteDirectoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDirectoryResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::DeleteSnapshotRequest&, const Model::DeleteSnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSnapshotResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::DeleteTrustRequest&, const Model::DeleteTrustOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTrustResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::DescribeDirectoriesRequest&, const Model::DescribeDirectoriesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDirectoriesResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::DescribeSnapshotsRequest&, const Model::DescribeSnapshotsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSnapshotsResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::DescribeTrustsRequest&, const Model::DescribeTrustsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTrustsResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::DisableRadiusRequest&, const Model::DisableRadiusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisableRadiusResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::DisableSsoRequest&, const Model::DisableSsoOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisableSsoResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::EnableRadiusRequest&, const Model::EnableRadiusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > EnableRadiusResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::EnableSsoRequest&, const Model::EnableSsoOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > EnableSsoResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::GetDirectoryLimitsRequest&, const Model::GetDirectoryLimitsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDirectoryLimitsResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::GetSnapshotLimitsRequest&, const Model::GetSnapshotLimitsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSnapshotLimitsResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::RestoreFromSnapshotRequest&, const Model::RestoreFromSnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RestoreFromSnapshotResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::UpdateRadiusRequest&, const Model::UpdateRadiusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateRadiusResponseReceivedHandler;
    typedef std::function<void(const DirectoryServiceClient*, const Model::VerifyTrustRequest&, const Model::VerifyTrustOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > VerifyTrustResponseReceivedHandler;

  /**
   * <fullname>AWS Directory Service</fullname> <p>This is the <i>AWS Directory
   * Service API Reference</i>. This guide provides detailed information about AWS
   * Directory Service operations, data types, parameters, and errors.</p>
   */
  class AWS_DIRECTORYSERVICE_API DirectoryServiceClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DirectoryServiceClient(const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DirectoryServiceClient(const Auth::AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        DirectoryServiceClient(const std::shared_ptr<Auth::AWSCredentialsProvider>& credentialsProvider,
            const Client::ClientConfiguration& clientConfiguration = Client::ClientConfiguration(),
            const std::shared_ptr<Http::HttpClientFactory const>& httpClientFactory = nullptr);

        virtual ~DirectoryServiceClient();

        /**
         * <p>Creates an AD Connector to connect to an on-premises directory.</p>
         */
        virtual Model::ConnectDirectoryOutcome ConnectDirectory(const Model::ConnectDirectoryRequest& request) const;

        /**
         * <p>Creates an AD Connector to connect to an on-premises directory.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ConnectDirectoryOutcomeCallable ConnectDirectoryCallable(const Model::ConnectDirectoryRequest& request) const;

        /**
         * <p>Creates an AD Connector to connect to an on-premises directory.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ConnectDirectoryAsync(const Model::ConnectDirectoryRequest& request, const ConnectDirectoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an alias for a directory and assigns the alias to the directory. The
         * alias is used to construct the access URL for the directory, such as
         * <code>http://<![CDATA[&#x3C;]]>alias<![CDATA[&#x3E;]]>.awsapps.com</code>.</p>
         * <important> <p>After an alias has been created, it cannot be deleted or reused,
         * so this operation should only be used when absolutely necessary.</p>
         * </important>
         */
        virtual Model::CreateAliasOutcome CreateAlias(const Model::CreateAliasRequest& request) const;

        /**
         * <p>Creates an alias for a directory and assigns the alias to the directory. The
         * alias is used to construct the access URL for the directory, such as
         * <code>http://<![CDATA[&#x3C;]]>alias<![CDATA[&#x3E;]]>.awsapps.com</code>.</p>
         * <important> <p>After an alias has been created, it cannot be deleted or reused,
         * so this operation should only be used when absolutely necessary.</p>
         * </important>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateAliasOutcomeCallable CreateAliasCallable(const Model::CreateAliasRequest& request) const;

        /**
         * <p>Creates an alias for a directory and assigns the alias to the directory. The
         * alias is used to construct the access URL for the directory, such as
         * <code>http://<![CDATA[&#x3C;]]>alias<![CDATA[&#x3E;]]>.awsapps.com</code>.</p>
         * <important> <p>After an alias has been created, it cannot be deleted or reused,
         * so this operation should only be used when absolutely necessary.</p>
         * </important>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateAliasAsync(const Model::CreateAliasRequest& request, const CreateAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a computer account in the specified directory, and joins the computer
         * to the directory.</p>
         */
        virtual Model::CreateComputerOutcome CreateComputer(const Model::CreateComputerRequest& request) const;

        /**
         * <p>Creates a computer account in the specified directory, and joins the computer
         * to the directory.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateComputerOutcomeCallable CreateComputerCallable(const Model::CreateComputerRequest& request) const;

        /**
         * <p>Creates a computer account in the specified directory, and joins the computer
         * to the directory.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateComputerAsync(const Model::CreateComputerRequest& request, const CreateComputerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a Simple AD directory.</p>
         */
        virtual Model::CreateDirectoryOutcome CreateDirectory(const Model::CreateDirectoryRequest& request) const;

        /**
         * <p>Creates a Simple AD directory.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDirectoryOutcomeCallable CreateDirectoryCallable(const Model::CreateDirectoryRequest& request) const;

        /**
         * <p>Creates a Simple AD directory.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDirectoryAsync(const Model::CreateDirectoryRequest& request, const CreateDirectoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Creates a Microsoft AD in the AWS cloud.
         */
        virtual Model::CreateMicrosoftADOutcome CreateMicrosoftAD(const Model::CreateMicrosoftADRequest& request) const;

        /**
         * Creates a Microsoft AD in the AWS cloud.
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateMicrosoftADOutcomeCallable CreateMicrosoftADCallable(const Model::CreateMicrosoftADRequest& request) const;

        /**
         * Creates a Microsoft AD in the AWS cloud.
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateMicrosoftADAsync(const Model::CreateMicrosoftADRequest& request, const CreateMicrosoftADResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a snapshot of a Simple AD directory.</p> <note> <p>You cannot take
         * snapshots of AD Connector directories.</p> </note>
         */
        virtual Model::CreateSnapshotOutcome CreateSnapshot(const Model::CreateSnapshotRequest& request) const;

        /**
         * <p>Creates a snapshot of a Simple AD directory.</p> <note> <p>You cannot take
         * snapshots of AD Connector directories.</p> </note>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateSnapshotOutcomeCallable CreateSnapshotCallable(const Model::CreateSnapshotRequest& request) const;

        /**
         * <p>Creates a snapshot of a Simple AD directory.</p> <note> <p>You cannot take
         * snapshots of AD Connector directories.</p> </note>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateSnapshotAsync(const Model::CreateSnapshotRequest& request, const CreateSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>AWS Directory Service for Microsoft Active Directory allows you to configure
         * trust relationships. For example, you can establish a trust between your
         * Microsoft AD in the AWS cloud, and your existing on-premises Microsoft Active
         * Directory. This would allow you to provide users and groups access to resources
         * in either domain, with a single set of credentials.</p><p>This action initiates
         * the creation of the AWS side of a trust relationship between a Microsoft AD in
         * the AWS cloud and an external domain.</p>
         */
        virtual Model::CreateTrustOutcome CreateTrust(const Model::CreateTrustRequest& request) const;

        /**
         * <p>AWS Directory Service for Microsoft Active Directory allows you to configure
         * trust relationships. For example, you can establish a trust between your
         * Microsoft AD in the AWS cloud, and your existing on-premises Microsoft Active
         * Directory. This would allow you to provide users and groups access to resources
         * in either domain, with a single set of credentials.</p><p>This action initiates
         * the creation of the AWS side of a trust relationship between a Microsoft AD in
         * the AWS cloud and an external domain.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateTrustOutcomeCallable CreateTrustCallable(const Model::CreateTrustRequest& request) const;

        /**
         * <p>AWS Directory Service for Microsoft Active Directory allows you to configure
         * trust relationships. For example, you can establish a trust between your
         * Microsoft AD in the AWS cloud, and your existing on-premises Microsoft Active
         * Directory. This would allow you to provide users and groups access to resources
         * in either domain, with a single set of credentials.</p><p>This action initiates
         * the creation of the AWS side of a trust relationship between a Microsoft AD in
         * the AWS cloud and an external domain.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateTrustAsync(const Model::CreateTrustRequest& request, const CreateTrustResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an AWS Directory Service directory.</p>
         */
        virtual Model::DeleteDirectoryOutcome DeleteDirectory(const Model::DeleteDirectoryRequest& request) const;

        /**
         * <p>Deletes an AWS Directory Service directory.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDirectoryOutcomeCallable DeleteDirectoryCallable(const Model::DeleteDirectoryRequest& request) const;

        /**
         * <p>Deletes an AWS Directory Service directory.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDirectoryAsync(const Model::DeleteDirectoryRequest& request, const DeleteDirectoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a directory snapshot.</p>
         */
        virtual Model::DeleteSnapshotOutcome DeleteSnapshot(const Model::DeleteSnapshotRequest& request) const;

        /**
         * <p>Deletes a directory snapshot.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteSnapshotOutcomeCallable DeleteSnapshotCallable(const Model::DeleteSnapshotRequest& request) const;

        /**
         * <p>Deletes a directory snapshot.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteSnapshotAsync(const Model::DeleteSnapshotRequest& request, const DeleteSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * Deletes an existing trust relationship between your Microsoft AD in the AWS
         * cloud and an external domain.
         */
        virtual Model::DeleteTrustOutcome DeleteTrust(const Model::DeleteTrustRequest& request) const;

        /**
         * Deletes an existing trust relationship between your Microsoft AD in the AWS
         * cloud and an external domain.
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteTrustOutcomeCallable DeleteTrustCallable(const Model::DeleteTrustRequest& request) const;

        /**
         * Deletes an existing trust relationship between your Microsoft AD in the AWS
         * cloud and an external domain.
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteTrustAsync(const Model::DeleteTrustRequest& request, const DeleteTrustResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Obtains information about the directories that belong to this account.</p>
         * <p>You can retrieve information about specific directories by passing the
         * directory identifiers in the <i>DirectoryIds</i> parameter. Otherwise, all
         * directories that belong to the current account are returned.</p> <p>This
         * operation supports pagination with the use of the <i>NextToken</i> request and
         * response parameters. If more results are available, the
         * <i>DescribeDirectoriesResult.NextToken</i> member contains a token that you pass
         * in the next call to <a>DescribeDirectories</a> to retrieve the next set of
         * items.</p> <p>You can also specify a maximum number of return results with the
         * <i>Limit</i> parameter.</p>
         */
        virtual Model::DescribeDirectoriesOutcome DescribeDirectories(const Model::DescribeDirectoriesRequest& request) const;

        /**
         * <p>Obtains information about the directories that belong to this account.</p>
         * <p>You can retrieve information about specific directories by passing the
         * directory identifiers in the <i>DirectoryIds</i> parameter. Otherwise, all
         * directories that belong to the current account are returned.</p> <p>This
         * operation supports pagination with the use of the <i>NextToken</i> request and
         * response parameters. If more results are available, the
         * <i>DescribeDirectoriesResult.NextToken</i> member contains a token that you pass
         * in the next call to <a>DescribeDirectories</a> to retrieve the next set of
         * items.</p> <p>You can also specify a maximum number of return results with the
         * <i>Limit</i> parameter.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDirectoriesOutcomeCallable DescribeDirectoriesCallable(const Model::DescribeDirectoriesRequest& request) const;

        /**
         * <p>Obtains information about the directories that belong to this account.</p>
         * <p>You can retrieve information about specific directories by passing the
         * directory identifiers in the <i>DirectoryIds</i> parameter. Otherwise, all
         * directories that belong to the current account are returned.</p> <p>This
         * operation supports pagination with the use of the <i>NextToken</i> request and
         * response parameters. If more results are available, the
         * <i>DescribeDirectoriesResult.NextToken</i> member contains a token that you pass
         * in the next call to <a>DescribeDirectories</a> to retrieve the next set of
         * items.</p> <p>You can also specify a maximum number of return results with the
         * <i>Limit</i> parameter.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDirectoriesAsync(const Model::DescribeDirectoriesRequest& request, const DescribeDirectoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Obtains information about the directory snapshots that belong to this
         * account.</p> <p>This operation supports pagination with the use of the
         * <i>NextToken</i> request and response parameters. If more results are available,
         * the <i>DescribeSnapshots.NextToken</i> member contains a token that you pass in
         * the next call to <a>DescribeSnapshots</a> to retrieve the next set of items.</p>
         * <p>You can also specify a maximum number of return results with the <i>Limit</i>
         * parameter.</p>
         */
        virtual Model::DescribeSnapshotsOutcome DescribeSnapshots(const Model::DescribeSnapshotsRequest& request) const;

        /**
         * <p>Obtains information about the directory snapshots that belong to this
         * account.</p> <p>This operation supports pagination with the use of the
         * <i>NextToken</i> request and response parameters. If more results are available,
         * the <i>DescribeSnapshots.NextToken</i> member contains a token that you pass in
         * the next call to <a>DescribeSnapshots</a> to retrieve the next set of items.</p>
         * <p>You can also specify a maximum number of return results with the <i>Limit</i>
         * parameter.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeSnapshotsOutcomeCallable DescribeSnapshotsCallable(const Model::DescribeSnapshotsRequest& request) const;

        /**
         * <p>Obtains information about the directory snapshots that belong to this
         * account.</p> <p>This operation supports pagination with the use of the
         * <i>NextToken</i> request and response parameters. If more results are available,
         * the <i>DescribeSnapshots.NextToken</i> member contains a token that you pass in
         * the next call to <a>DescribeSnapshots</a> to retrieve the next set of items.</p>
         * <p>You can also specify a maximum number of return results with the <i>Limit</i>
         * parameter.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeSnapshotsAsync(const Model::DescribeSnapshotsRequest& request, const DescribeSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Obtains information about the trust relationships for this account.</p> <p>If
         * no input parameters are provided, such as DirectoryId or TrustIds, this request
         * describes all the trust relationships belonging to the account.</p>
         */
        virtual Model::DescribeTrustsOutcome DescribeTrusts(const Model::DescribeTrustsRequest& request) const;

        /**
         * <p>Obtains information about the trust relationships for this account.</p> <p>If
         * no input parameters are provided, such as DirectoryId or TrustIds, this request
         * describes all the trust relationships belonging to the account.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeTrustsOutcomeCallable DescribeTrustsCallable(const Model::DescribeTrustsRequest& request) const;

        /**
         * <p>Obtains information about the trust relationships for this account.</p> <p>If
         * no input parameters are provided, such as DirectoryId or TrustIds, this request
         * describes all the trust relationships belonging to the account.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeTrustsAsync(const Model::DescribeTrustsRequest& request, const DescribeTrustsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disables multi-factor authentication (MFA) with the Remote Authentication
         * Dial In User Service (RADIUS) server for an AD Connector directory.</p>
         */
        virtual Model::DisableRadiusOutcome DisableRadius(const Model::DisableRadiusRequest& request) const;

        /**
         * <p>Disables multi-factor authentication (MFA) with the Remote Authentication
         * Dial In User Service (RADIUS) server for an AD Connector directory.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisableRadiusOutcomeCallable DisableRadiusCallable(const Model::DisableRadiusRequest& request) const;

        /**
         * <p>Disables multi-factor authentication (MFA) with the Remote Authentication
         * Dial In User Service (RADIUS) server for an AD Connector directory.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisableRadiusAsync(const Model::DisableRadiusRequest& request, const DisableRadiusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disables single-sign on for a directory.</p>
         */
        virtual Model::DisableSsoOutcome DisableSso(const Model::DisableSsoRequest& request) const;

        /**
         * <p>Disables single-sign on for a directory.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisableSsoOutcomeCallable DisableSsoCallable(const Model::DisableSsoRequest& request) const;

        /**
         * <p>Disables single-sign on for a directory.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisableSsoAsync(const Model::DisableSsoRequest& request, const DisableSsoResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Enables multi-factor authentication (MFA) with the Remote Authentication Dial
         * In User Service (RADIUS) server for an AD Connector directory.</p>
         */
        virtual Model::EnableRadiusOutcome EnableRadius(const Model::EnableRadiusRequest& request) const;

        /**
         * <p>Enables multi-factor authentication (MFA) with the Remote Authentication Dial
         * In User Service (RADIUS) server for an AD Connector directory.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::EnableRadiusOutcomeCallable EnableRadiusCallable(const Model::EnableRadiusRequest& request) const;

        /**
         * <p>Enables multi-factor authentication (MFA) with the Remote Authentication Dial
         * In User Service (RADIUS) server for an AD Connector directory.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void EnableRadiusAsync(const Model::EnableRadiusRequest& request, const EnableRadiusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Enables single-sign on for a directory.</p>
         */
        virtual Model::EnableSsoOutcome EnableSso(const Model::EnableSsoRequest& request) const;

        /**
         * <p>Enables single-sign on for a directory.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::EnableSsoOutcomeCallable EnableSsoCallable(const Model::EnableSsoRequest& request) const;

        /**
         * <p>Enables single-sign on for a directory.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void EnableSsoAsync(const Model::EnableSsoRequest& request, const EnableSsoResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Obtains directory limit information for the current region.</p>
         */
        virtual Model::GetDirectoryLimitsOutcome GetDirectoryLimits(const Model::GetDirectoryLimitsRequest& request) const;

        /**
         * <p>Obtains directory limit information for the current region.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDirectoryLimitsOutcomeCallable GetDirectoryLimitsCallable(const Model::GetDirectoryLimitsRequest& request) const;

        /**
         * <p>Obtains directory limit information for the current region.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDirectoryLimitsAsync(const Model::GetDirectoryLimitsRequest& request, const GetDirectoryLimitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Obtains the manual snapshot limits for a directory.</p>
         */
        virtual Model::GetSnapshotLimitsOutcome GetSnapshotLimits(const Model::GetSnapshotLimitsRequest& request) const;

        /**
         * <p>Obtains the manual snapshot limits for a directory.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetSnapshotLimitsOutcomeCallable GetSnapshotLimitsCallable(const Model::GetSnapshotLimitsRequest& request) const;

        /**
         * <p>Obtains the manual snapshot limits for a directory.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetSnapshotLimitsAsync(const Model::GetSnapshotLimitsRequest& request, const GetSnapshotLimitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Restores a directory using an existing directory snapshot.</p> <p>When you
         * restore a directory from a snapshot, any changes made to the directory after the
         * snapshot date are overwritten.</p> <p>This action returns as soon as the restore
         * operation is initiated. You can monitor the progress of the restore operation by
         * calling the <a>DescribeDirectories</a> operation with the directory identifier.
         * When the <b>DirectoryDescription.Stage</b> value changes to <code>Active</code>,
         * the restore operation is complete.</p>
         */
        virtual Model::RestoreFromSnapshotOutcome RestoreFromSnapshot(const Model::RestoreFromSnapshotRequest& request) const;

        /**
         * <p>Restores a directory using an existing directory snapshot.</p> <p>When you
         * restore a directory from a snapshot, any changes made to the directory after the
         * snapshot date are overwritten.</p> <p>This action returns as soon as the restore
         * operation is initiated. You can monitor the progress of the restore operation by
         * calling the <a>DescribeDirectories</a> operation with the directory identifier.
         * When the <b>DirectoryDescription.Stage</b> value changes to <code>Active</code>,
         * the restore operation is complete.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RestoreFromSnapshotOutcomeCallable RestoreFromSnapshotCallable(const Model::RestoreFromSnapshotRequest& request) const;

        /**
         * <p>Restores a directory using an existing directory snapshot.</p> <p>When you
         * restore a directory from a snapshot, any changes made to the directory after the
         * snapshot date are overwritten.</p> <p>This action returns as soon as the restore
         * operation is initiated. You can monitor the progress of the restore operation by
         * calling the <a>DescribeDirectories</a> operation with the directory identifier.
         * When the <b>DirectoryDescription.Stage</b> value changes to <code>Active</code>,
         * the restore operation is complete.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RestoreFromSnapshotAsync(const Model::RestoreFromSnapshotRequest& request, const RestoreFromSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the Remote Authentication Dial In User Service (RADIUS) server
         * information for an AD Connector directory.</p>
         */
        virtual Model::UpdateRadiusOutcome UpdateRadius(const Model::UpdateRadiusRequest& request) const;

        /**
         * <p>Updates the Remote Authentication Dial In User Service (RADIUS) server
         * information for an AD Connector directory.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateRadiusOutcomeCallable UpdateRadiusCallable(const Model::UpdateRadiusRequest& request) const;

        /**
         * <p>Updates the Remote Authentication Dial In User Service (RADIUS) server
         * information for an AD Connector directory.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateRadiusAsync(const Model::UpdateRadiusRequest& request, const UpdateRadiusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>AWS Directory Service for Microsoft Active Directory allows you to configure
         * and verify trust relationships. </p><p>This action verifies a trust relationship
         * between your Microsoft AD in the AWS cloud and an external domain.</p>
         */
        virtual Model::VerifyTrustOutcome VerifyTrust(const Model::VerifyTrustRequest& request) const;

        /**
         * <p>AWS Directory Service for Microsoft Active Directory allows you to configure
         * and verify trust relationships. </p><p>This action verifies a trust relationship
         * between your Microsoft AD in the AWS cloud and an external domain.</p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::VerifyTrustOutcomeCallable VerifyTrustCallable(const Model::VerifyTrustRequest& request) const;

        /**
         * <p>AWS Directory Service for Microsoft Active Directory allows you to configure
         * and verify trust relationships. </p><p>This action verifies a trust relationship
         * between your Microsoft AD in the AWS cloud and an external domain.</p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void VerifyTrustAsync(const Model::VerifyTrustRequest& request, const VerifyTrustResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


    private:
      void init(const Client::ClientConfiguration& clientConfiguration);

        /**Async helpers**/
        void ConnectDirectoryAsyncHelper(const Model::ConnectDirectoryRequest& request, const ConnectDirectoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateAliasAsyncHelper(const Model::CreateAliasRequest& request, const CreateAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateComputerAsyncHelper(const Model::CreateComputerRequest& request, const CreateComputerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateDirectoryAsyncHelper(const Model::CreateDirectoryRequest& request, const CreateDirectoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateMicrosoftADAsyncHelper(const Model::CreateMicrosoftADRequest& request, const CreateMicrosoftADResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateSnapshotAsyncHelper(const Model::CreateSnapshotRequest& request, const CreateSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateTrustAsyncHelper(const Model::CreateTrustRequest& request, const CreateTrustResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteDirectoryAsyncHelper(const Model::DeleteDirectoryRequest& request, const DeleteDirectoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteSnapshotAsyncHelper(const Model::DeleteSnapshotRequest& request, const DeleteSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteTrustAsyncHelper(const Model::DeleteTrustRequest& request, const DeleteTrustResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDirectoriesAsyncHelper(const Model::DescribeDirectoriesRequest& request, const DescribeDirectoriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeSnapshotsAsyncHelper(const Model::DescribeSnapshotsRequest& request, const DescribeSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeTrustsAsyncHelper(const Model::DescribeTrustsRequest& request, const DescribeTrustsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisableRadiusAsyncHelper(const Model::DisableRadiusRequest& request, const DisableRadiusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisableSsoAsyncHelper(const Model::DisableSsoRequest& request, const DisableSsoResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void EnableRadiusAsyncHelper(const Model::EnableRadiusRequest& request, const EnableRadiusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void EnableSsoAsyncHelper(const Model::EnableSsoRequest& request, const EnableSsoResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetDirectoryLimitsAsyncHelper(const Model::GetDirectoryLimitsRequest& request, const GetDirectoryLimitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetSnapshotLimitsAsyncHelper(const Model::GetSnapshotLimitsRequest& request, const GetSnapshotLimitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RestoreFromSnapshotAsyncHelper(const Model::RestoreFromSnapshotRequest& request, const RestoreFromSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateRadiusAsyncHelper(const Model::UpdateRadiusRequest& request, const UpdateRadiusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void VerifyTrustAsyncHelper(const Model::VerifyTrustRequest& request, const VerifyTrustResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      std::shared_ptr<Utils::Threading::Executor> m_executor;
  };

} // namespace DirectoryService
} // namespace Aws
