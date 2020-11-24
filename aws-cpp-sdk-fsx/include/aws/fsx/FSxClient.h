/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/FSxErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/fsx/model/AssociateFileSystemAliasesResult.h>
#include <aws/fsx/model/CancelDataRepositoryTaskResult.h>
#include <aws/fsx/model/CreateBackupResult.h>
#include <aws/fsx/model/CreateDataRepositoryTaskResult.h>
#include <aws/fsx/model/CreateFileSystemResult.h>
#include <aws/fsx/model/CreateFileSystemFromBackupResult.h>
#include <aws/fsx/model/DeleteBackupResult.h>
#include <aws/fsx/model/DeleteFileSystemResult.h>
#include <aws/fsx/model/DescribeBackupsResult.h>
#include <aws/fsx/model/DescribeDataRepositoryTasksResult.h>
#include <aws/fsx/model/DescribeFileSystemAliasesResult.h>
#include <aws/fsx/model/DescribeFileSystemsResult.h>
#include <aws/fsx/model/DisassociateFileSystemAliasesResult.h>
#include <aws/fsx/model/ListTagsForResourceResult.h>
#include <aws/fsx/model/TagResourceResult.h>
#include <aws/fsx/model/UntagResourceResult.h>
#include <aws/fsx/model/UpdateFileSystemResult.h>
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

namespace FSx
{

namespace Model
{
        class AssociateFileSystemAliasesRequest;
        class CancelDataRepositoryTaskRequest;
        class CreateBackupRequest;
        class CreateDataRepositoryTaskRequest;
        class CreateFileSystemRequest;
        class CreateFileSystemFromBackupRequest;
        class DeleteBackupRequest;
        class DeleteFileSystemRequest;
        class DescribeBackupsRequest;
        class DescribeDataRepositoryTasksRequest;
        class DescribeFileSystemAliasesRequest;
        class DescribeFileSystemsRequest;
        class DisassociateFileSystemAliasesRequest;
        class ListTagsForResourceRequest;
        class TagResourceRequest;
        class UntagResourceRequest;
        class UpdateFileSystemRequest;

        typedef Aws::Utils::Outcome<AssociateFileSystemAliasesResult, FSxError> AssociateFileSystemAliasesOutcome;
        typedef Aws::Utils::Outcome<CancelDataRepositoryTaskResult, FSxError> CancelDataRepositoryTaskOutcome;
        typedef Aws::Utils::Outcome<CreateBackupResult, FSxError> CreateBackupOutcome;
        typedef Aws::Utils::Outcome<CreateDataRepositoryTaskResult, FSxError> CreateDataRepositoryTaskOutcome;
        typedef Aws::Utils::Outcome<CreateFileSystemResult, FSxError> CreateFileSystemOutcome;
        typedef Aws::Utils::Outcome<CreateFileSystemFromBackupResult, FSxError> CreateFileSystemFromBackupOutcome;
        typedef Aws::Utils::Outcome<DeleteBackupResult, FSxError> DeleteBackupOutcome;
        typedef Aws::Utils::Outcome<DeleteFileSystemResult, FSxError> DeleteFileSystemOutcome;
        typedef Aws::Utils::Outcome<DescribeBackupsResult, FSxError> DescribeBackupsOutcome;
        typedef Aws::Utils::Outcome<DescribeDataRepositoryTasksResult, FSxError> DescribeDataRepositoryTasksOutcome;
        typedef Aws::Utils::Outcome<DescribeFileSystemAliasesResult, FSxError> DescribeFileSystemAliasesOutcome;
        typedef Aws::Utils::Outcome<DescribeFileSystemsResult, FSxError> DescribeFileSystemsOutcome;
        typedef Aws::Utils::Outcome<DisassociateFileSystemAliasesResult, FSxError> DisassociateFileSystemAliasesOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, FSxError> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<TagResourceResult, FSxError> TagResourceOutcome;
        typedef Aws::Utils::Outcome<UntagResourceResult, FSxError> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<UpdateFileSystemResult, FSxError> UpdateFileSystemOutcome;

        typedef std::future<AssociateFileSystemAliasesOutcome> AssociateFileSystemAliasesOutcomeCallable;
        typedef std::future<CancelDataRepositoryTaskOutcome> CancelDataRepositoryTaskOutcomeCallable;
        typedef std::future<CreateBackupOutcome> CreateBackupOutcomeCallable;
        typedef std::future<CreateDataRepositoryTaskOutcome> CreateDataRepositoryTaskOutcomeCallable;
        typedef std::future<CreateFileSystemOutcome> CreateFileSystemOutcomeCallable;
        typedef std::future<CreateFileSystemFromBackupOutcome> CreateFileSystemFromBackupOutcomeCallable;
        typedef std::future<DeleteBackupOutcome> DeleteBackupOutcomeCallable;
        typedef std::future<DeleteFileSystemOutcome> DeleteFileSystemOutcomeCallable;
        typedef std::future<DescribeBackupsOutcome> DescribeBackupsOutcomeCallable;
        typedef std::future<DescribeDataRepositoryTasksOutcome> DescribeDataRepositoryTasksOutcomeCallable;
        typedef std::future<DescribeFileSystemAliasesOutcome> DescribeFileSystemAliasesOutcomeCallable;
        typedef std::future<DescribeFileSystemsOutcome> DescribeFileSystemsOutcomeCallable;
        typedef std::future<DisassociateFileSystemAliasesOutcome> DisassociateFileSystemAliasesOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UpdateFileSystemOutcome> UpdateFileSystemOutcomeCallable;
} // namespace Model

  class FSxClient;

    typedef std::function<void(const FSxClient*, const Model::AssociateFileSystemAliasesRequest&, const Model::AssociateFileSystemAliasesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateFileSystemAliasesResponseReceivedHandler;
    typedef std::function<void(const FSxClient*, const Model::CancelDataRepositoryTaskRequest&, const Model::CancelDataRepositoryTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelDataRepositoryTaskResponseReceivedHandler;
    typedef std::function<void(const FSxClient*, const Model::CreateBackupRequest&, const Model::CreateBackupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateBackupResponseReceivedHandler;
    typedef std::function<void(const FSxClient*, const Model::CreateDataRepositoryTaskRequest&, const Model::CreateDataRepositoryTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDataRepositoryTaskResponseReceivedHandler;
    typedef std::function<void(const FSxClient*, const Model::CreateFileSystemRequest&, const Model::CreateFileSystemOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateFileSystemResponseReceivedHandler;
    typedef std::function<void(const FSxClient*, const Model::CreateFileSystemFromBackupRequest&, const Model::CreateFileSystemFromBackupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateFileSystemFromBackupResponseReceivedHandler;
    typedef std::function<void(const FSxClient*, const Model::DeleteBackupRequest&, const Model::DeleteBackupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteBackupResponseReceivedHandler;
    typedef std::function<void(const FSxClient*, const Model::DeleteFileSystemRequest&, const Model::DeleteFileSystemOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteFileSystemResponseReceivedHandler;
    typedef std::function<void(const FSxClient*, const Model::DescribeBackupsRequest&, const Model::DescribeBackupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeBackupsResponseReceivedHandler;
    typedef std::function<void(const FSxClient*, const Model::DescribeDataRepositoryTasksRequest&, const Model::DescribeDataRepositoryTasksOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDataRepositoryTasksResponseReceivedHandler;
    typedef std::function<void(const FSxClient*, const Model::DescribeFileSystemAliasesRequest&, const Model::DescribeFileSystemAliasesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeFileSystemAliasesResponseReceivedHandler;
    typedef std::function<void(const FSxClient*, const Model::DescribeFileSystemsRequest&, const Model::DescribeFileSystemsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeFileSystemsResponseReceivedHandler;
    typedef std::function<void(const FSxClient*, const Model::DisassociateFileSystemAliasesRequest&, const Model::DisassociateFileSystemAliasesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateFileSystemAliasesResponseReceivedHandler;
    typedef std::function<void(const FSxClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const FSxClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const FSxClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const FSxClient*, const Model::UpdateFileSystemRequest&, const Model::UpdateFileSystemOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateFileSystemResponseReceivedHandler;

  /**
   * <p>Amazon FSx is a fully managed service that makes it easy for storage and
   * application administrators to launch and use shared file storage.</p>
   */
  class AWS_FSX_API FSxClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        FSxClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        FSxClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        FSxClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~FSxClient();


        /**
         * <p>Use this action to associate one or more Domain Name Server (DNS) aliases
         * with an existing Amazon FSx for Windows File Server file system. A file systen
         * can have a maximum of 50 DNS aliases associated with it at any one time. If you
         * try to associate a DNS alias that is already associated with the file system,
         * FSx takes no action on that alias in the request. For more information, see <a
         * href="https://docs.aws.amazon.com/fsx/latest/WindowsGuide/managing-dns-aliases.html">Working
         * with DNS Aliases</a> and <a
         * href="https://docs.aws.amazon.com/fsx/latest/WindowsGuide/walkthrough05-file-system-custom-CNAME.html">Walkthrough
         * 5: Using DNS aliases to access your file system</a>, including additional steps
         * you must take to be able to access your file system using a DNS alias.</p>
         * <p>The system response shows the DNS aliases that Amazon FSx is attempting to
         * associate with the file system. Use the API operation to monitor the status of
         * the aliases Amazon FSx is associating with the file system.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/AssociateFileSystemAliases">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateFileSystemAliasesOutcome AssociateFileSystemAliases(const Model::AssociateFileSystemAliasesRequest& request) const;

        /**
         * <p>Use this action to associate one or more Domain Name Server (DNS) aliases
         * with an existing Amazon FSx for Windows File Server file system. A file systen
         * can have a maximum of 50 DNS aliases associated with it at any one time. If you
         * try to associate a DNS alias that is already associated with the file system,
         * FSx takes no action on that alias in the request. For more information, see <a
         * href="https://docs.aws.amazon.com/fsx/latest/WindowsGuide/managing-dns-aliases.html">Working
         * with DNS Aliases</a> and <a
         * href="https://docs.aws.amazon.com/fsx/latest/WindowsGuide/walkthrough05-file-system-custom-CNAME.html">Walkthrough
         * 5: Using DNS aliases to access your file system</a>, including additional steps
         * you must take to be able to access your file system using a DNS alias.</p>
         * <p>The system response shows the DNS aliases that Amazon FSx is attempting to
         * associate with the file system. Use the API operation to monitor the status of
         * the aliases Amazon FSx is associating with the file system.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/AssociateFileSystemAliases">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateFileSystemAliasesOutcomeCallable AssociateFileSystemAliasesCallable(const Model::AssociateFileSystemAliasesRequest& request) const;

        /**
         * <p>Use this action to associate one or more Domain Name Server (DNS) aliases
         * with an existing Amazon FSx for Windows File Server file system. A file systen
         * can have a maximum of 50 DNS aliases associated with it at any one time. If you
         * try to associate a DNS alias that is already associated with the file system,
         * FSx takes no action on that alias in the request. For more information, see <a
         * href="https://docs.aws.amazon.com/fsx/latest/WindowsGuide/managing-dns-aliases.html">Working
         * with DNS Aliases</a> and <a
         * href="https://docs.aws.amazon.com/fsx/latest/WindowsGuide/walkthrough05-file-system-custom-CNAME.html">Walkthrough
         * 5: Using DNS aliases to access your file system</a>, including additional steps
         * you must take to be able to access your file system using a DNS alias.</p>
         * <p>The system response shows the DNS aliases that Amazon FSx is attempting to
         * associate with the file system. Use the API operation to monitor the status of
         * the aliases Amazon FSx is associating with the file system.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/AssociateFileSystemAliases">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateFileSystemAliasesAsync(const Model::AssociateFileSystemAliasesRequest& request, const AssociateFileSystemAliasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Cancels an existing Amazon FSx for Lustre data repository task if that task
         * is in either the <code>PENDING</code> or <code>EXECUTING</code> state. When you
         * cancel a task, Amazon FSx does the following.</p> <ul> <li> <p>Any files that
         * FSx has already exported are not reverted.</p> </li> <li> <p>FSx continues to
         * export any files that are "in-flight" when the cancel operation is received.</p>
         * </li> <li> <p>FSx does not export any files that have not yet been exported.</p>
         * </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/CancelDataRepositoryTask">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelDataRepositoryTaskOutcome CancelDataRepositoryTask(const Model::CancelDataRepositoryTaskRequest& request) const;

        /**
         * <p>Cancels an existing Amazon FSx for Lustre data repository task if that task
         * is in either the <code>PENDING</code> or <code>EXECUTING</code> state. When you
         * cancel a task, Amazon FSx does the following.</p> <ul> <li> <p>Any files that
         * FSx has already exported are not reverted.</p> </li> <li> <p>FSx continues to
         * export any files that are "in-flight" when the cancel operation is received.</p>
         * </li> <li> <p>FSx does not export any files that have not yet been exported.</p>
         * </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/CancelDataRepositoryTask">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CancelDataRepositoryTaskOutcomeCallable CancelDataRepositoryTaskCallable(const Model::CancelDataRepositoryTaskRequest& request) const;

        /**
         * <p>Cancels an existing Amazon FSx for Lustre data repository task if that task
         * is in either the <code>PENDING</code> or <code>EXECUTING</code> state. When you
         * cancel a task, Amazon FSx does the following.</p> <ul> <li> <p>Any files that
         * FSx has already exported are not reverted.</p> </li> <li> <p>FSx continues to
         * export any files that are "in-flight" when the cancel operation is received.</p>
         * </li> <li> <p>FSx does not export any files that have not yet been exported.</p>
         * </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/CancelDataRepositoryTask">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CancelDataRepositoryTaskAsync(const Model::CancelDataRepositoryTaskRequest& request, const CancelDataRepositoryTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a backup of an existing Amazon FSx file system. Creating regular
         * backups for your file system is a best practice, enabling you to restore a file
         * system from a backup if an issue arises with the original file system.</p>
         * <p>For Amazon FSx for Lustre file systems, you can create a backup only for file
         * systems with the following configuration:</p> <ul> <li> <p>a Persistent
         * deployment type</p> </li> <li> <p>is <i>not</i> linked to a data
         * respository.</p> </li> </ul> <p>For more information about backing up Amazon FSx
         * for Lustre file systems, see <a
         * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/using-backups-fsx.html">Working
         * with FSx for Lustre backups</a>.</p> <p>For more information about backing up
         * Amazon FSx for Windows file systems, see <a
         * href="https://docs.aws.amazon.com/fsx/latest/WindowsGuide/using-backups.html">Working
         * with FSx for Windows backups</a>.</p> <p>If a backup with the specified client
         * request token exists, and the parameters match, this operation returns the
         * description of the existing backup. If a backup specified client request token
         * exists, and the parameters don't match, this operation returns
         * <code>IncompatibleParameterError</code>. If a backup with the specified client
         * request token doesn't exist, <code>CreateBackup</code> does the following: </p>
         * <ul> <li> <p>Creates a new Amazon FSx backup with an assigned ID, and an initial
         * lifecycle state of <code>CREATING</code>.</p> </li> <li> <p>Returns the
         * description of the backup.</p> </li> </ul> <p>By using the idempotent operation,
         * you can retry a <code>CreateBackup</code> operation without the risk of creating
         * an extra backup. This approach can be useful when an initial call fails in a way
         * that makes it unclear whether a backup was created. If you use the same client
         * request token and the initial call created a backup, the operation returns a
         * successful result because all the parameters are the same.</p> <p>The
         * <code>CreateBackup</code> operation returns while the backup's lifecycle state
         * is still <code>CREATING</code>. You can check the backup creation status by
         * calling the <a>DescribeBackups</a> operation, which returns the backup state
         * along with other information.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/CreateBackup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateBackupOutcome CreateBackup(const Model::CreateBackupRequest& request) const;

        /**
         * <p>Creates a backup of an existing Amazon FSx file system. Creating regular
         * backups for your file system is a best practice, enabling you to restore a file
         * system from a backup if an issue arises with the original file system.</p>
         * <p>For Amazon FSx for Lustre file systems, you can create a backup only for file
         * systems with the following configuration:</p> <ul> <li> <p>a Persistent
         * deployment type</p> </li> <li> <p>is <i>not</i> linked to a data
         * respository.</p> </li> </ul> <p>For more information about backing up Amazon FSx
         * for Lustre file systems, see <a
         * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/using-backups-fsx.html">Working
         * with FSx for Lustre backups</a>.</p> <p>For more information about backing up
         * Amazon FSx for Windows file systems, see <a
         * href="https://docs.aws.amazon.com/fsx/latest/WindowsGuide/using-backups.html">Working
         * with FSx for Windows backups</a>.</p> <p>If a backup with the specified client
         * request token exists, and the parameters match, this operation returns the
         * description of the existing backup. If a backup specified client request token
         * exists, and the parameters don't match, this operation returns
         * <code>IncompatibleParameterError</code>. If a backup with the specified client
         * request token doesn't exist, <code>CreateBackup</code> does the following: </p>
         * <ul> <li> <p>Creates a new Amazon FSx backup with an assigned ID, and an initial
         * lifecycle state of <code>CREATING</code>.</p> </li> <li> <p>Returns the
         * description of the backup.</p> </li> </ul> <p>By using the idempotent operation,
         * you can retry a <code>CreateBackup</code> operation without the risk of creating
         * an extra backup. This approach can be useful when an initial call fails in a way
         * that makes it unclear whether a backup was created. If you use the same client
         * request token and the initial call created a backup, the operation returns a
         * successful result because all the parameters are the same.</p> <p>The
         * <code>CreateBackup</code> operation returns while the backup's lifecycle state
         * is still <code>CREATING</code>. You can check the backup creation status by
         * calling the <a>DescribeBackups</a> operation, which returns the backup state
         * along with other information.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/CreateBackup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateBackupOutcomeCallable CreateBackupCallable(const Model::CreateBackupRequest& request) const;

        /**
         * <p>Creates a backup of an existing Amazon FSx file system. Creating regular
         * backups for your file system is a best practice, enabling you to restore a file
         * system from a backup if an issue arises with the original file system.</p>
         * <p>For Amazon FSx for Lustre file systems, you can create a backup only for file
         * systems with the following configuration:</p> <ul> <li> <p>a Persistent
         * deployment type</p> </li> <li> <p>is <i>not</i> linked to a data
         * respository.</p> </li> </ul> <p>For more information about backing up Amazon FSx
         * for Lustre file systems, see <a
         * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/using-backups-fsx.html">Working
         * with FSx for Lustre backups</a>.</p> <p>For more information about backing up
         * Amazon FSx for Windows file systems, see <a
         * href="https://docs.aws.amazon.com/fsx/latest/WindowsGuide/using-backups.html">Working
         * with FSx for Windows backups</a>.</p> <p>If a backup with the specified client
         * request token exists, and the parameters match, this operation returns the
         * description of the existing backup. If a backup specified client request token
         * exists, and the parameters don't match, this operation returns
         * <code>IncompatibleParameterError</code>. If a backup with the specified client
         * request token doesn't exist, <code>CreateBackup</code> does the following: </p>
         * <ul> <li> <p>Creates a new Amazon FSx backup with an assigned ID, and an initial
         * lifecycle state of <code>CREATING</code>.</p> </li> <li> <p>Returns the
         * description of the backup.</p> </li> </ul> <p>By using the idempotent operation,
         * you can retry a <code>CreateBackup</code> operation without the risk of creating
         * an extra backup. This approach can be useful when an initial call fails in a way
         * that makes it unclear whether a backup was created. If you use the same client
         * request token and the initial call created a backup, the operation returns a
         * successful result because all the parameters are the same.</p> <p>The
         * <code>CreateBackup</code> operation returns while the backup's lifecycle state
         * is still <code>CREATING</code>. You can check the backup creation status by
         * calling the <a>DescribeBackups</a> operation, which returns the backup state
         * along with other information.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/CreateBackup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateBackupAsync(const Model::CreateBackupRequest& request, const CreateBackupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an Amazon FSx for Lustre data repository task. You use data
         * repository tasks to perform bulk operations between your Amazon FSx file system
         * and its linked data repository. An example of a data repository task is
         * exporting any data and metadata changes, including POSIX metadata, to files,
         * directories, and symbolic links (symlinks) from your FSx file system to its
         * linked data repository. A <code>CreateDataRepositoryTask</code> operation will
         * fail if a data repository is not linked to the FSx file system. To learn more
         * about data repository tasks, see <a
         * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/data-repository-tasks.html">Data
         * Repository Tasks</a>. To learn more about linking a data repository to your file
         * system, see <a
         * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/create-fs-linked-data-repo.html">Linking
         * your file system to an S3 bucket</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/CreateDataRepositoryTask">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDataRepositoryTaskOutcome CreateDataRepositoryTask(const Model::CreateDataRepositoryTaskRequest& request) const;

        /**
         * <p>Creates an Amazon FSx for Lustre data repository task. You use data
         * repository tasks to perform bulk operations between your Amazon FSx file system
         * and its linked data repository. An example of a data repository task is
         * exporting any data and metadata changes, including POSIX metadata, to files,
         * directories, and symbolic links (symlinks) from your FSx file system to its
         * linked data repository. A <code>CreateDataRepositoryTask</code> operation will
         * fail if a data repository is not linked to the FSx file system. To learn more
         * about data repository tasks, see <a
         * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/data-repository-tasks.html">Data
         * Repository Tasks</a>. To learn more about linking a data repository to your file
         * system, see <a
         * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/create-fs-linked-data-repo.html">Linking
         * your file system to an S3 bucket</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/CreateDataRepositoryTask">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDataRepositoryTaskOutcomeCallable CreateDataRepositoryTaskCallable(const Model::CreateDataRepositoryTaskRequest& request) const;

        /**
         * <p>Creates an Amazon FSx for Lustre data repository task. You use data
         * repository tasks to perform bulk operations between your Amazon FSx file system
         * and its linked data repository. An example of a data repository task is
         * exporting any data and metadata changes, including POSIX metadata, to files,
         * directories, and symbolic links (symlinks) from your FSx file system to its
         * linked data repository. A <code>CreateDataRepositoryTask</code> operation will
         * fail if a data repository is not linked to the FSx file system. To learn more
         * about data repository tasks, see <a
         * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/data-repository-tasks.html">Data
         * Repository Tasks</a>. To learn more about linking a data repository to your file
         * system, see <a
         * href="https://docs.aws.amazon.com/fsx/latest/LustreGuide/create-fs-linked-data-repo.html">Linking
         * your file system to an S3 bucket</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/CreateDataRepositoryTask">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDataRepositoryTaskAsync(const Model::CreateDataRepositoryTaskRequest& request, const CreateDataRepositoryTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new, empty Amazon FSx file system.</p> <p>If a file system with the
         * specified client request token exists and the parameters match,
         * <code>CreateFileSystem</code> returns the description of the existing file
         * system. If a file system specified client request token exists and the
         * parameters don't match, this call returns
         * <code>IncompatibleParameterError</code>. If a file system with the specified
         * client request token doesn't exist, <code>CreateFileSystem</code> does the
         * following: </p> <ul> <li> <p>Creates a new, empty Amazon FSx file system with an
         * assigned ID, and an initial lifecycle state of <code>CREATING</code>.</p> </li>
         * <li> <p>Returns the description of the file system.</p> </li> </ul> <p>This
         * operation requires a client request token in the request that Amazon FSx uses to
         * ensure idempotent creation. This means that calling the operation multiple times
         * with the same client request token has no effect. By using the idempotent
         * operation, you can retry a <code>CreateFileSystem</code> operation without the
         * risk of creating an extra file system. This approach can be useful when an
         * initial call fails in a way that makes it unclear whether a file system was
         * created. Examples are if a transport level timeout occurred, or your connection
         * was reset. If you use the same client request token and the initial call created
         * a file system, the client receives success as long as the parameters are the
         * same.</p>  <p>The <code>CreateFileSystem</code> call returns while the
         * file system's lifecycle state is still <code>CREATING</code>. You can check the
         * file-system creation status by calling the <a>DescribeFileSystems</a> operation,
         * which returns the file system state along with other information.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/CreateFileSystem">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateFileSystemOutcome CreateFileSystem(const Model::CreateFileSystemRequest& request) const;

        /**
         * <p>Creates a new, empty Amazon FSx file system.</p> <p>If a file system with the
         * specified client request token exists and the parameters match,
         * <code>CreateFileSystem</code> returns the description of the existing file
         * system. If a file system specified client request token exists and the
         * parameters don't match, this call returns
         * <code>IncompatibleParameterError</code>. If a file system with the specified
         * client request token doesn't exist, <code>CreateFileSystem</code> does the
         * following: </p> <ul> <li> <p>Creates a new, empty Amazon FSx file system with an
         * assigned ID, and an initial lifecycle state of <code>CREATING</code>.</p> </li>
         * <li> <p>Returns the description of the file system.</p> </li> </ul> <p>This
         * operation requires a client request token in the request that Amazon FSx uses to
         * ensure idempotent creation. This means that calling the operation multiple times
         * with the same client request token has no effect. By using the idempotent
         * operation, you can retry a <code>CreateFileSystem</code> operation without the
         * risk of creating an extra file system. This approach can be useful when an
         * initial call fails in a way that makes it unclear whether a file system was
         * created. Examples are if a transport level timeout occurred, or your connection
         * was reset. If you use the same client request token and the initial call created
         * a file system, the client receives success as long as the parameters are the
         * same.</p>  <p>The <code>CreateFileSystem</code> call returns while the
         * file system's lifecycle state is still <code>CREATING</code>. You can check the
         * file-system creation status by calling the <a>DescribeFileSystems</a> operation,
         * which returns the file system state along with other information.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/CreateFileSystem">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateFileSystemOutcomeCallable CreateFileSystemCallable(const Model::CreateFileSystemRequest& request) const;

        /**
         * <p>Creates a new, empty Amazon FSx file system.</p> <p>If a file system with the
         * specified client request token exists and the parameters match,
         * <code>CreateFileSystem</code> returns the description of the existing file
         * system. If a file system specified client request token exists and the
         * parameters don't match, this call returns
         * <code>IncompatibleParameterError</code>. If a file system with the specified
         * client request token doesn't exist, <code>CreateFileSystem</code> does the
         * following: </p> <ul> <li> <p>Creates a new, empty Amazon FSx file system with an
         * assigned ID, and an initial lifecycle state of <code>CREATING</code>.</p> </li>
         * <li> <p>Returns the description of the file system.</p> </li> </ul> <p>This
         * operation requires a client request token in the request that Amazon FSx uses to
         * ensure idempotent creation. This means that calling the operation multiple times
         * with the same client request token has no effect. By using the idempotent
         * operation, you can retry a <code>CreateFileSystem</code> operation without the
         * risk of creating an extra file system. This approach can be useful when an
         * initial call fails in a way that makes it unclear whether a file system was
         * created. Examples are if a transport level timeout occurred, or your connection
         * was reset. If you use the same client request token and the initial call created
         * a file system, the client receives success as long as the parameters are the
         * same.</p>  <p>The <code>CreateFileSystem</code> call returns while the
         * file system's lifecycle state is still <code>CREATING</code>. You can check the
         * file-system creation status by calling the <a>DescribeFileSystems</a> operation,
         * which returns the file system state along with other information.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/CreateFileSystem">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateFileSystemAsync(const Model::CreateFileSystemRequest& request, const CreateFileSystemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new Amazon FSx file system from an existing Amazon FSx backup.</p>
         * <p>If a file system with the specified client request token exists and the
         * parameters match, this operation returns the description of the file system. If
         * a client request token specified by the file system exists and the parameters
         * don't match, this call returns <code>IncompatibleParameterError</code>. If a
         * file system with the specified client request token doesn't exist, this
         * operation does the following:</p> <ul> <li> <p>Creates a new Amazon FSx file
         * system from backup with an assigned ID, and an initial lifecycle state of
         * <code>CREATING</code>.</p> </li> <li> <p>Returns the description of the file
         * system.</p> </li> </ul> <p>Parameters like Active Directory, default share name,
         * automatic backup, and backup settings default to the parameters of the file
         * system that was backed up, unless overridden. You can explicitly supply other
         * settings.</p> <p>By using the idempotent operation, you can retry a
         * <code>CreateFileSystemFromBackup</code> call without the risk of creating an
         * extra file system. This approach can be useful when an initial call fails in a
         * way that makes it unclear whether a file system was created. Examples are if a
         * transport level timeout occurred, or your connection was reset. If you use the
         * same client request token and the initial call created a file system, the client
         * receives success as long as the parameters are the same.</p>  <p>The
         * <code>CreateFileSystemFromBackup</code> call returns while the file system's
         * lifecycle state is still <code>CREATING</code>. You can check the file-system
         * creation status by calling the <a>DescribeFileSystems</a> operation, which
         * returns the file system state along with other information.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/CreateFileSystemFromBackup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateFileSystemFromBackupOutcome CreateFileSystemFromBackup(const Model::CreateFileSystemFromBackupRequest& request) const;

        /**
         * <p>Creates a new Amazon FSx file system from an existing Amazon FSx backup.</p>
         * <p>If a file system with the specified client request token exists and the
         * parameters match, this operation returns the description of the file system. If
         * a client request token specified by the file system exists and the parameters
         * don't match, this call returns <code>IncompatibleParameterError</code>. If a
         * file system with the specified client request token doesn't exist, this
         * operation does the following:</p> <ul> <li> <p>Creates a new Amazon FSx file
         * system from backup with an assigned ID, and an initial lifecycle state of
         * <code>CREATING</code>.</p> </li> <li> <p>Returns the description of the file
         * system.</p> </li> </ul> <p>Parameters like Active Directory, default share name,
         * automatic backup, and backup settings default to the parameters of the file
         * system that was backed up, unless overridden. You can explicitly supply other
         * settings.</p> <p>By using the idempotent operation, you can retry a
         * <code>CreateFileSystemFromBackup</code> call without the risk of creating an
         * extra file system. This approach can be useful when an initial call fails in a
         * way that makes it unclear whether a file system was created. Examples are if a
         * transport level timeout occurred, or your connection was reset. If you use the
         * same client request token and the initial call created a file system, the client
         * receives success as long as the parameters are the same.</p>  <p>The
         * <code>CreateFileSystemFromBackup</code> call returns while the file system's
         * lifecycle state is still <code>CREATING</code>. You can check the file-system
         * creation status by calling the <a>DescribeFileSystems</a> operation, which
         * returns the file system state along with other information.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/CreateFileSystemFromBackup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateFileSystemFromBackupOutcomeCallable CreateFileSystemFromBackupCallable(const Model::CreateFileSystemFromBackupRequest& request) const;

        /**
         * <p>Creates a new Amazon FSx file system from an existing Amazon FSx backup.</p>
         * <p>If a file system with the specified client request token exists and the
         * parameters match, this operation returns the description of the file system. If
         * a client request token specified by the file system exists and the parameters
         * don't match, this call returns <code>IncompatibleParameterError</code>. If a
         * file system with the specified client request token doesn't exist, this
         * operation does the following:</p> <ul> <li> <p>Creates a new Amazon FSx file
         * system from backup with an assigned ID, and an initial lifecycle state of
         * <code>CREATING</code>.</p> </li> <li> <p>Returns the description of the file
         * system.</p> </li> </ul> <p>Parameters like Active Directory, default share name,
         * automatic backup, and backup settings default to the parameters of the file
         * system that was backed up, unless overridden. You can explicitly supply other
         * settings.</p> <p>By using the idempotent operation, you can retry a
         * <code>CreateFileSystemFromBackup</code> call without the risk of creating an
         * extra file system. This approach can be useful when an initial call fails in a
         * way that makes it unclear whether a file system was created. Examples are if a
         * transport level timeout occurred, or your connection was reset. If you use the
         * same client request token and the initial call created a file system, the client
         * receives success as long as the parameters are the same.</p>  <p>The
         * <code>CreateFileSystemFromBackup</code> call returns while the file system's
         * lifecycle state is still <code>CREATING</code>. You can check the file-system
         * creation status by calling the <a>DescribeFileSystems</a> operation, which
         * returns the file system state along with other information.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/CreateFileSystemFromBackup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateFileSystemFromBackupAsync(const Model::CreateFileSystemFromBackupRequest& request, const CreateFileSystemFromBackupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an Amazon FSx backup, deleting its contents. After deletion, the
         * backup no longer exists, and its data is gone.</p> <p>The
         * <code>DeleteBackup</code> call returns instantly. The backup will not show up in
         * later <code>DescribeBackups</code> calls.</p>  <p>The data in a
         * deleted backup is also deleted and can't be recovered by any means.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/DeleteBackup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteBackupOutcome DeleteBackup(const Model::DeleteBackupRequest& request) const;

        /**
         * <p>Deletes an Amazon FSx backup, deleting its contents. After deletion, the
         * backup no longer exists, and its data is gone.</p> <p>The
         * <code>DeleteBackup</code> call returns instantly. The backup will not show up in
         * later <code>DescribeBackups</code> calls.</p>  <p>The data in a
         * deleted backup is also deleted and can't be recovered by any means.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/DeleteBackup">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteBackupOutcomeCallable DeleteBackupCallable(const Model::DeleteBackupRequest& request) const;

        /**
         * <p>Deletes an Amazon FSx backup, deleting its contents. After deletion, the
         * backup no longer exists, and its data is gone.</p> <p>The
         * <code>DeleteBackup</code> call returns instantly. The backup will not show up in
         * later <code>DescribeBackups</code> calls.</p>  <p>The data in a
         * deleted backup is also deleted and can't be recovered by any means.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/DeleteBackup">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteBackupAsync(const Model::DeleteBackupRequest& request, const DeleteBackupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a file system, deleting its contents. After deletion, the file system
         * no longer exists, and its data is gone. Any existing automatic backups will also
         * be deleted.</p> <p>By default, when you delete an Amazon FSx for Windows File
         * Server file system, a final backup is created upon deletion. This final backup
         * is not subject to the file system's retention policy, and must be manually
         * deleted.</p> <p>The <code>DeleteFileSystem</code> action returns while the file
         * system has the <code>DELETING</code> status. You can check the file system
         * deletion status by calling the <a>DescribeFileSystems</a> action, which returns
         * a list of file systems in your account. If you pass the file system ID for a
         * deleted file system, the <a>DescribeFileSystems</a> returns a
         * <code>FileSystemNotFound</code> error.</p>  <p>Deleting an Amazon FSx for
         * Lustre file system will fail with a 400 BadRequest if a data repository task is
         * in a <code>PENDING</code> or <code>EXECUTING</code> state.</p> 
         *  <p>The data in a deleted file system is also deleted and can't be
         * recovered by any means.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/DeleteFileSystem">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFileSystemOutcome DeleteFileSystem(const Model::DeleteFileSystemRequest& request) const;

        /**
         * <p>Deletes a file system, deleting its contents. After deletion, the file system
         * no longer exists, and its data is gone. Any existing automatic backups will also
         * be deleted.</p> <p>By default, when you delete an Amazon FSx for Windows File
         * Server file system, a final backup is created upon deletion. This final backup
         * is not subject to the file system's retention policy, and must be manually
         * deleted.</p> <p>The <code>DeleteFileSystem</code> action returns while the file
         * system has the <code>DELETING</code> status. You can check the file system
         * deletion status by calling the <a>DescribeFileSystems</a> action, which returns
         * a list of file systems in your account. If you pass the file system ID for a
         * deleted file system, the <a>DescribeFileSystems</a> returns a
         * <code>FileSystemNotFound</code> error.</p>  <p>Deleting an Amazon FSx for
         * Lustre file system will fail with a 400 BadRequest if a data repository task is
         * in a <code>PENDING</code> or <code>EXECUTING</code> state.</p> 
         *  <p>The data in a deleted file system is also deleted and can't be
         * recovered by any means.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/DeleteFileSystem">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteFileSystemOutcomeCallable DeleteFileSystemCallable(const Model::DeleteFileSystemRequest& request) const;

        /**
         * <p>Deletes a file system, deleting its contents. After deletion, the file system
         * no longer exists, and its data is gone. Any existing automatic backups will also
         * be deleted.</p> <p>By default, when you delete an Amazon FSx for Windows File
         * Server file system, a final backup is created upon deletion. This final backup
         * is not subject to the file system's retention policy, and must be manually
         * deleted.</p> <p>The <code>DeleteFileSystem</code> action returns while the file
         * system has the <code>DELETING</code> status. You can check the file system
         * deletion status by calling the <a>DescribeFileSystems</a> action, which returns
         * a list of file systems in your account. If you pass the file system ID for a
         * deleted file system, the <a>DescribeFileSystems</a> returns a
         * <code>FileSystemNotFound</code> error.</p>  <p>Deleting an Amazon FSx for
         * Lustre file system will fail with a 400 BadRequest if a data repository task is
         * in a <code>PENDING</code> or <code>EXECUTING</code> state.</p> 
         *  <p>The data in a deleted file system is also deleted and can't be
         * recovered by any means.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/DeleteFileSystem">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteFileSystemAsync(const Model::DeleteFileSystemRequest& request, const DeleteFileSystemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the description of specific Amazon FSx backups, if a
         * <code>BackupIds</code> value is provided for that backup. Otherwise, it returns
         * all backups owned by your AWS account in the AWS Region of the endpoint that
         * you're calling.</p> <p>When retrieving all backups, you can optionally specify
         * the <code>MaxResults</code> parameter to limit the number of backups in a
         * response. If more backups remain, Amazon FSx returns a <code>NextToken</code>
         * value in the response. In this case, send a later request with the
         * <code>NextToken</code> request parameter set to the value of
         * <code>NextToken</code> from the last response.</p> <p>This action is used in an
         * iterative process to retrieve a list of your backups.
         * <code>DescribeBackups</code> is called first without a
         * <code>NextToken</code>value. Then the action continues to be called with the
         * <code>NextToken</code> parameter set to the value of the last
         * <code>NextToken</code> value until a response has no <code>NextToken</code>.</p>
         * <p>When using this action, keep the following in mind:</p> <ul> <li> <p>The
         * implementation might return fewer than <code>MaxResults</code> file system
         * descriptions while still including a <code>NextToken</code> value.</p> </li>
         * <li> <p>The order of backups returned in the response of one
         * <code>DescribeBackups</code> call and the order of backups returned across the
         * responses of a multi-call iteration is unspecified.</p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/DescribeBackups">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeBackupsOutcome DescribeBackups(const Model::DescribeBackupsRequest& request) const;

        /**
         * <p>Returns the description of specific Amazon FSx backups, if a
         * <code>BackupIds</code> value is provided for that backup. Otherwise, it returns
         * all backups owned by your AWS account in the AWS Region of the endpoint that
         * you're calling.</p> <p>When retrieving all backups, you can optionally specify
         * the <code>MaxResults</code> parameter to limit the number of backups in a
         * response. If more backups remain, Amazon FSx returns a <code>NextToken</code>
         * value in the response. In this case, send a later request with the
         * <code>NextToken</code> request parameter set to the value of
         * <code>NextToken</code> from the last response.</p> <p>This action is used in an
         * iterative process to retrieve a list of your backups.
         * <code>DescribeBackups</code> is called first without a
         * <code>NextToken</code>value. Then the action continues to be called with the
         * <code>NextToken</code> parameter set to the value of the last
         * <code>NextToken</code> value until a response has no <code>NextToken</code>.</p>
         * <p>When using this action, keep the following in mind:</p> <ul> <li> <p>The
         * implementation might return fewer than <code>MaxResults</code> file system
         * descriptions while still including a <code>NextToken</code> value.</p> </li>
         * <li> <p>The order of backups returned in the response of one
         * <code>DescribeBackups</code> call and the order of backups returned across the
         * responses of a multi-call iteration is unspecified.</p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/DescribeBackups">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeBackupsOutcomeCallable DescribeBackupsCallable(const Model::DescribeBackupsRequest& request) const;

        /**
         * <p>Returns the description of specific Amazon FSx backups, if a
         * <code>BackupIds</code> value is provided for that backup. Otherwise, it returns
         * all backups owned by your AWS account in the AWS Region of the endpoint that
         * you're calling.</p> <p>When retrieving all backups, you can optionally specify
         * the <code>MaxResults</code> parameter to limit the number of backups in a
         * response. If more backups remain, Amazon FSx returns a <code>NextToken</code>
         * value in the response. In this case, send a later request with the
         * <code>NextToken</code> request parameter set to the value of
         * <code>NextToken</code> from the last response.</p> <p>This action is used in an
         * iterative process to retrieve a list of your backups.
         * <code>DescribeBackups</code> is called first without a
         * <code>NextToken</code>value. Then the action continues to be called with the
         * <code>NextToken</code> parameter set to the value of the last
         * <code>NextToken</code> value until a response has no <code>NextToken</code>.</p>
         * <p>When using this action, keep the following in mind:</p> <ul> <li> <p>The
         * implementation might return fewer than <code>MaxResults</code> file system
         * descriptions while still including a <code>NextToken</code> value.</p> </li>
         * <li> <p>The order of backups returned in the response of one
         * <code>DescribeBackups</code> call and the order of backups returned across the
         * responses of a multi-call iteration is unspecified.</p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/DescribeBackups">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeBackupsAsync(const Model::DescribeBackupsRequest& request, const DescribeBackupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the description of specific Amazon FSx for Lustre data repository
         * tasks, if one or more <code>TaskIds</code> values are provided in the request,
         * or if filters are used in the request. You can use filters to narrow the
         * response to include just tasks for specific file systems, or tasks in a specific
         * lifecycle state. Otherwise, it returns all data repository tasks owned by your
         * AWS account in the AWS Region of the endpoint that you're calling.</p> <p>When
         * retrieving all tasks, you can paginate the response by using the optional
         * <code>MaxResults</code> parameter to limit the number of tasks returned in a
         * response. If more tasks remain, Amazon FSx returns a <code>NextToken</code>
         * value in the response. In this case, send a later request with the
         * <code>NextToken</code> request parameter set to the value of
         * <code>NextToken</code> from the last response.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/DescribeDataRepositoryTasks">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDataRepositoryTasksOutcome DescribeDataRepositoryTasks(const Model::DescribeDataRepositoryTasksRequest& request) const;

        /**
         * <p>Returns the description of specific Amazon FSx for Lustre data repository
         * tasks, if one or more <code>TaskIds</code> values are provided in the request,
         * or if filters are used in the request. You can use filters to narrow the
         * response to include just tasks for specific file systems, or tasks in a specific
         * lifecycle state. Otherwise, it returns all data repository tasks owned by your
         * AWS account in the AWS Region of the endpoint that you're calling.</p> <p>When
         * retrieving all tasks, you can paginate the response by using the optional
         * <code>MaxResults</code> parameter to limit the number of tasks returned in a
         * response. If more tasks remain, Amazon FSx returns a <code>NextToken</code>
         * value in the response. In this case, send a later request with the
         * <code>NextToken</code> request parameter set to the value of
         * <code>NextToken</code> from the last response.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/DescribeDataRepositoryTasks">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDataRepositoryTasksOutcomeCallable DescribeDataRepositoryTasksCallable(const Model::DescribeDataRepositoryTasksRequest& request) const;

        /**
         * <p>Returns the description of specific Amazon FSx for Lustre data repository
         * tasks, if one or more <code>TaskIds</code> values are provided in the request,
         * or if filters are used in the request. You can use filters to narrow the
         * response to include just tasks for specific file systems, or tasks in a specific
         * lifecycle state. Otherwise, it returns all data repository tasks owned by your
         * AWS account in the AWS Region of the endpoint that you're calling.</p> <p>When
         * retrieving all tasks, you can paginate the response by using the optional
         * <code>MaxResults</code> parameter to limit the number of tasks returned in a
         * response. If more tasks remain, Amazon FSx returns a <code>NextToken</code>
         * value in the response. In this case, send a later request with the
         * <code>NextToken</code> request parameter set to the value of
         * <code>NextToken</code> from the last response.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/DescribeDataRepositoryTasks">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDataRepositoryTasksAsync(const Model::DescribeDataRepositoryTasksRequest& request, const DescribeDataRepositoryTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the DNS aliases that are associated with the specified Amazon FSx for
         * Windows File Server file system. A history of all DNS aliases that have been
         * associated with and disassociated from the file system is available in the list
         * of <a>AdministrativeAction</a> provided in the <a>DescribeFileSystems</a>
         * operation response.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/DescribeFileSystemAliases">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeFileSystemAliasesOutcome DescribeFileSystemAliases(const Model::DescribeFileSystemAliasesRequest& request) const;

        /**
         * <p>Returns the DNS aliases that are associated with the specified Amazon FSx for
         * Windows File Server file system. A history of all DNS aliases that have been
         * associated with and disassociated from the file system is available in the list
         * of <a>AdministrativeAction</a> provided in the <a>DescribeFileSystems</a>
         * operation response.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/DescribeFileSystemAliases">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeFileSystemAliasesOutcomeCallable DescribeFileSystemAliasesCallable(const Model::DescribeFileSystemAliasesRequest& request) const;

        /**
         * <p>Returns the DNS aliases that are associated with the specified Amazon FSx for
         * Windows File Server file system. A history of all DNS aliases that have been
         * associated with and disassociated from the file system is available in the list
         * of <a>AdministrativeAction</a> provided in the <a>DescribeFileSystems</a>
         * operation response.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/DescribeFileSystemAliases">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeFileSystemAliasesAsync(const Model::DescribeFileSystemAliasesRequest& request, const DescribeFileSystemAliasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the description of specific Amazon FSx file systems, if a
         * <code>FileSystemIds</code> value is provided for that file system. Otherwise, it
         * returns descriptions of all file systems owned by your AWS account in the AWS
         * Region of the endpoint that you're calling.</p> <p>When retrieving all file
         * system descriptions, you can optionally specify the <code>MaxResults</code>
         * parameter to limit the number of descriptions in a response. If more file system
         * descriptions remain, Amazon FSx returns a <code>NextToken</code> value in the
         * response. In this case, send a later request with the <code>NextToken</code>
         * request parameter set to the value of <code>NextToken</code> from the last
         * response.</p> <p>This action is used in an iterative process to retrieve a list
         * of your file system descriptions. <code>DescribeFileSystems</code> is called
         * first without a <code>NextToken</code>value. Then the action continues to be
         * called with the <code>NextToken</code> parameter set to the value of the last
         * <code>NextToken</code> value until a response has no <code>NextToken</code>.</p>
         * <p>When using this action, keep the following in mind:</p> <ul> <li> <p>The
         * implementation might return fewer than <code>MaxResults</code> file system
         * descriptions while still including a <code>NextToken</code> value.</p> </li>
         * <li> <p>The order of file systems returned in the response of one
         * <code>DescribeFileSystems</code> call and the order of file systems returned
         * across the responses of a multicall iteration is unspecified.</p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/DescribeFileSystems">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeFileSystemsOutcome DescribeFileSystems(const Model::DescribeFileSystemsRequest& request) const;

        /**
         * <p>Returns the description of specific Amazon FSx file systems, if a
         * <code>FileSystemIds</code> value is provided for that file system. Otherwise, it
         * returns descriptions of all file systems owned by your AWS account in the AWS
         * Region of the endpoint that you're calling.</p> <p>When retrieving all file
         * system descriptions, you can optionally specify the <code>MaxResults</code>
         * parameter to limit the number of descriptions in a response. If more file system
         * descriptions remain, Amazon FSx returns a <code>NextToken</code> value in the
         * response. In this case, send a later request with the <code>NextToken</code>
         * request parameter set to the value of <code>NextToken</code> from the last
         * response.</p> <p>This action is used in an iterative process to retrieve a list
         * of your file system descriptions. <code>DescribeFileSystems</code> is called
         * first without a <code>NextToken</code>value. Then the action continues to be
         * called with the <code>NextToken</code> parameter set to the value of the last
         * <code>NextToken</code> value until a response has no <code>NextToken</code>.</p>
         * <p>When using this action, keep the following in mind:</p> <ul> <li> <p>The
         * implementation might return fewer than <code>MaxResults</code> file system
         * descriptions while still including a <code>NextToken</code> value.</p> </li>
         * <li> <p>The order of file systems returned in the response of one
         * <code>DescribeFileSystems</code> call and the order of file systems returned
         * across the responses of a multicall iteration is unspecified.</p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/DescribeFileSystems">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeFileSystemsOutcomeCallable DescribeFileSystemsCallable(const Model::DescribeFileSystemsRequest& request) const;

        /**
         * <p>Returns the description of specific Amazon FSx file systems, if a
         * <code>FileSystemIds</code> value is provided for that file system. Otherwise, it
         * returns descriptions of all file systems owned by your AWS account in the AWS
         * Region of the endpoint that you're calling.</p> <p>When retrieving all file
         * system descriptions, you can optionally specify the <code>MaxResults</code>
         * parameter to limit the number of descriptions in a response. If more file system
         * descriptions remain, Amazon FSx returns a <code>NextToken</code> value in the
         * response. In this case, send a later request with the <code>NextToken</code>
         * request parameter set to the value of <code>NextToken</code> from the last
         * response.</p> <p>This action is used in an iterative process to retrieve a list
         * of your file system descriptions. <code>DescribeFileSystems</code> is called
         * first without a <code>NextToken</code>value. Then the action continues to be
         * called with the <code>NextToken</code> parameter set to the value of the last
         * <code>NextToken</code> value until a response has no <code>NextToken</code>.</p>
         * <p>When using this action, keep the following in mind:</p> <ul> <li> <p>The
         * implementation might return fewer than <code>MaxResults</code> file system
         * descriptions while still including a <code>NextToken</code> value.</p> </li>
         * <li> <p>The order of file systems returned in the response of one
         * <code>DescribeFileSystems</code> call and the order of file systems returned
         * across the responses of a multicall iteration is unspecified.</p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/DescribeFileSystems">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeFileSystemsAsync(const Model::DescribeFileSystemsRequest& request, const DescribeFileSystemsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Use this action to disassociate, or remove, one or more Domain Name Service
         * (DNS) aliases from an Amazon FSx for Windows File Server file system. If you
         * attempt to disassociate a DNS alias that is not associated with the file system,
         * Amazon FSx responds with a 400 Bad Request. For more information, see <a
         * href="https://docs.aws.amazon.com/fsx/latest/WindowsGuide/managing-dns-aliases.html">Working
         * with DNS Aliases</a>.</p> <p>The system generated response showing the DNS
         * aliases that Amazon FSx is attempting to disassociate from the file system. Use
         * the API operation to monitor the status of the aliases Amazon FSx is
         * disassociating with the file system.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/DisassociateFileSystemAliases">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateFileSystemAliasesOutcome DisassociateFileSystemAliases(const Model::DisassociateFileSystemAliasesRequest& request) const;

        /**
         * <p>Use this action to disassociate, or remove, one or more Domain Name Service
         * (DNS) aliases from an Amazon FSx for Windows File Server file system. If you
         * attempt to disassociate a DNS alias that is not associated with the file system,
         * Amazon FSx responds with a 400 Bad Request. For more information, see <a
         * href="https://docs.aws.amazon.com/fsx/latest/WindowsGuide/managing-dns-aliases.html">Working
         * with DNS Aliases</a>.</p> <p>The system generated response showing the DNS
         * aliases that Amazon FSx is attempting to disassociate from the file system. Use
         * the API operation to monitor the status of the aliases Amazon FSx is
         * disassociating with the file system.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/DisassociateFileSystemAliases">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateFileSystemAliasesOutcomeCallable DisassociateFileSystemAliasesCallable(const Model::DisassociateFileSystemAliasesRequest& request) const;

        /**
         * <p>Use this action to disassociate, or remove, one or more Domain Name Service
         * (DNS) aliases from an Amazon FSx for Windows File Server file system. If you
         * attempt to disassociate a DNS alias that is not associated with the file system,
         * Amazon FSx responds with a 400 Bad Request. For more information, see <a
         * href="https://docs.aws.amazon.com/fsx/latest/WindowsGuide/managing-dns-aliases.html">Working
         * with DNS Aliases</a>.</p> <p>The system generated response showing the DNS
         * aliases that Amazon FSx is attempting to disassociate from the file system. Use
         * the API operation to monitor the status of the aliases Amazon FSx is
         * disassociating with the file system.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/DisassociateFileSystemAliases">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateFileSystemAliasesAsync(const Model::DisassociateFileSystemAliasesRequest& request, const DisassociateFileSystemAliasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists tags for an Amazon FSx file systems and backups in the case of Amazon
         * FSx for Windows File Server.</p> <p>When retrieving all tags, you can optionally
         * specify the <code>MaxResults</code> parameter to limit the number of tags in a
         * response. If more tags remain, Amazon FSx returns a <code>NextToken</code> value
         * in the response. In this case, send a later request with the
         * <code>NextToken</code> request parameter set to the value of
         * <code>NextToken</code> from the last response.</p> <p>This action is used in an
         * iterative process to retrieve a list of your tags.
         * <code>ListTagsForResource</code> is called first without a
         * <code>NextToken</code>value. Then the action continues to be called with the
         * <code>NextToken</code> parameter set to the value of the last
         * <code>NextToken</code> value until a response has no <code>NextToken</code>.</p>
         * <p>When using this action, keep the following in mind:</p> <ul> <li> <p>The
         * implementation might return fewer than <code>MaxResults</code> file system
         * descriptions while still including a <code>NextToken</code> value.</p> </li>
         * <li> <p>The order of tags returned in the response of one
         * <code>ListTagsForResource</code> call and the order of tags returned across the
         * responses of a multi-call iteration is unspecified.</p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Lists tags for an Amazon FSx file systems and backups in the case of Amazon
         * FSx for Windows File Server.</p> <p>When retrieving all tags, you can optionally
         * specify the <code>MaxResults</code> parameter to limit the number of tags in a
         * response. If more tags remain, Amazon FSx returns a <code>NextToken</code> value
         * in the response. In this case, send a later request with the
         * <code>NextToken</code> request parameter set to the value of
         * <code>NextToken</code> from the last response.</p> <p>This action is used in an
         * iterative process to retrieve a list of your tags.
         * <code>ListTagsForResource</code> is called first without a
         * <code>NextToken</code>value. Then the action continues to be called with the
         * <code>NextToken</code> parameter set to the value of the last
         * <code>NextToken</code> value until a response has no <code>NextToken</code>.</p>
         * <p>When using this action, keep the following in mind:</p> <ul> <li> <p>The
         * implementation might return fewer than <code>MaxResults</code> file system
         * descriptions while still including a <code>NextToken</code> value.</p> </li>
         * <li> <p>The order of tags returned in the response of one
         * <code>ListTagsForResource</code> call and the order of tags returned across the
         * responses of a multi-call iteration is unspecified.</p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Lists tags for an Amazon FSx file systems and backups in the case of Amazon
         * FSx for Windows File Server.</p> <p>When retrieving all tags, you can optionally
         * specify the <code>MaxResults</code> parameter to limit the number of tags in a
         * response. If more tags remain, Amazon FSx returns a <code>NextToken</code> value
         * in the response. In this case, send a later request with the
         * <code>NextToken</code> request parameter set to the value of
         * <code>NextToken</code> from the last response.</p> <p>This action is used in an
         * iterative process to retrieve a list of your tags.
         * <code>ListTagsForResource</code> is called first without a
         * <code>NextToken</code>value. Then the action continues to be called with the
         * <code>NextToken</code> parameter set to the value of the last
         * <code>NextToken</code> value until a response has no <code>NextToken</code>.</p>
         * <p>When using this action, keep the following in mind:</p> <ul> <li> <p>The
         * implementation might return fewer than <code>MaxResults</code> file system
         * descriptions while still including a <code>NextToken</code> value.</p> </li>
         * <li> <p>The order of tags returned in the response of one
         * <code>ListTagsForResource</code> call and the order of tags returned across the
         * responses of a multi-call iteration is unspecified.</p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Tags an Amazon FSx resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/TagResource">AWS API
         * Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * <p>Tags an Amazon FSx resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/TagResource">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * <p>Tags an Amazon FSx resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/TagResource">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This action removes a tag from an Amazon FSx resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * <p>This action removes a tag from an Amazon FSx resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/UntagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * <p>This action removes a tag from an Amazon FSx resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/UntagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Use this operation to update the configuration of an existing Amazon FSx file
         * system. You can update multiple properties in a single request.</p> <p>For
         * Amazon FSx for Windows File Server file systems, you can update the following
         * properties:</p> <ul> <li> <p>AutomaticBackupRetentionDays</p> </li> <li>
         * <p>DailyAutomaticBackupStartTime</p> </li> <li>
         * <p>SelfManagedActiveDirectoryConfiguration</p> </li> <li> <p>StorageCapacity</p>
         * </li> <li> <p>ThroughputCapacity</p> </li> <li>
         * <p>WeeklyMaintenanceStartTime</p> </li> </ul> <p>For Amazon FSx for Lustre file
         * systems, you can update the following properties:</p> <ul> <li>
         * <p>AutoImportPolicy</p> </li> <li> <p>AutomaticBackupRetentionDays</p> </li>
         * <li> <p>DailyAutomaticBackupStartTime</p> </li> <li> <p>StorageCapacity</p>
         * </li> <li> <p>WeeklyMaintenanceStartTime</p> </li> </ul><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/UpdateFileSystem">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFileSystemOutcome UpdateFileSystem(const Model::UpdateFileSystemRequest& request) const;

        /**
         * <p>Use this operation to update the configuration of an existing Amazon FSx file
         * system. You can update multiple properties in a single request.</p> <p>For
         * Amazon FSx for Windows File Server file systems, you can update the following
         * properties:</p> <ul> <li> <p>AutomaticBackupRetentionDays</p> </li> <li>
         * <p>DailyAutomaticBackupStartTime</p> </li> <li>
         * <p>SelfManagedActiveDirectoryConfiguration</p> </li> <li> <p>StorageCapacity</p>
         * </li> <li> <p>ThroughputCapacity</p> </li> <li>
         * <p>WeeklyMaintenanceStartTime</p> </li> </ul> <p>For Amazon FSx for Lustre file
         * systems, you can update the following properties:</p> <ul> <li>
         * <p>AutoImportPolicy</p> </li> <li> <p>AutomaticBackupRetentionDays</p> </li>
         * <li> <p>DailyAutomaticBackupStartTime</p> </li> <li> <p>StorageCapacity</p>
         * </li> <li> <p>WeeklyMaintenanceStartTime</p> </li> </ul><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/UpdateFileSystem">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateFileSystemOutcomeCallable UpdateFileSystemCallable(const Model::UpdateFileSystemRequest& request) const;

        /**
         * <p>Use this operation to update the configuration of an existing Amazon FSx file
         * system. You can update multiple properties in a single request.</p> <p>For
         * Amazon FSx for Windows File Server file systems, you can update the following
         * properties:</p> <ul> <li> <p>AutomaticBackupRetentionDays</p> </li> <li>
         * <p>DailyAutomaticBackupStartTime</p> </li> <li>
         * <p>SelfManagedActiveDirectoryConfiguration</p> </li> <li> <p>StorageCapacity</p>
         * </li> <li> <p>ThroughputCapacity</p> </li> <li>
         * <p>WeeklyMaintenanceStartTime</p> </li> </ul> <p>For Amazon FSx for Lustre file
         * systems, you can update the following properties:</p> <ul> <li>
         * <p>AutoImportPolicy</p> </li> <li> <p>AutomaticBackupRetentionDays</p> </li>
         * <li> <p>DailyAutomaticBackupStartTime</p> </li> <li> <p>StorageCapacity</p>
         * </li> <li> <p>WeeklyMaintenanceStartTime</p> </li> </ul><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/UpdateFileSystem">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateFileSystemAsync(const Model::UpdateFileSystemRequest& request, const UpdateFileSystemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void AssociateFileSystemAliasesAsyncHelper(const Model::AssociateFileSystemAliasesRequest& request, const AssociateFileSystemAliasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CancelDataRepositoryTaskAsyncHelper(const Model::CancelDataRepositoryTaskRequest& request, const CancelDataRepositoryTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateBackupAsyncHelper(const Model::CreateBackupRequest& request, const CreateBackupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateDataRepositoryTaskAsyncHelper(const Model::CreateDataRepositoryTaskRequest& request, const CreateDataRepositoryTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateFileSystemAsyncHelper(const Model::CreateFileSystemRequest& request, const CreateFileSystemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateFileSystemFromBackupAsyncHelper(const Model::CreateFileSystemFromBackupRequest& request, const CreateFileSystemFromBackupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteBackupAsyncHelper(const Model::DeleteBackupRequest& request, const DeleteBackupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteFileSystemAsyncHelper(const Model::DeleteFileSystemRequest& request, const DeleteFileSystemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeBackupsAsyncHelper(const Model::DescribeBackupsRequest& request, const DescribeBackupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeDataRepositoryTasksAsyncHelper(const Model::DescribeDataRepositoryTasksRequest& request, const DescribeDataRepositoryTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeFileSystemAliasesAsyncHelper(const Model::DescribeFileSystemAliasesRequest& request, const DescribeFileSystemAliasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeFileSystemsAsyncHelper(const Model::DescribeFileSystemsRequest& request, const DescribeFileSystemsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisassociateFileSystemAliasesAsyncHelper(const Model::DisassociateFileSystemAliasesRequest& request, const DisassociateFileSystemAliasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateFileSystemAsyncHelper(const Model::UpdateFileSystemRequest& request, const UpdateFileSystemResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace FSx
} // namespace Aws
