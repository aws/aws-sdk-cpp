/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backupsearch/BackupSearch_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/backupsearch/BackupSearchServiceClientModel.h>

namespace Aws
{
namespace BackupSearch
{
  /**
   * <p><fullname>Backup Search</fullname> <p>Backup Search is the recovery point and
   * item level search for Backup.</p> <p>For additional information, see:</p> <ul>
   * <li> <p> <a
   * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/api-reference.html">Backup
   * API Reference</a> </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/aws-backup/latest/devguide/whatisbackup.html">Backup
   * Developer Guide</a> </p> </li> </ul></p>
   */
  class AWS_BACKUPSEARCH_API BackupSearchClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<BackupSearchClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef BackupSearchClientConfiguration ClientConfigurationType;
      typedef BackupSearchEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        BackupSearchClient(const Aws::BackupSearch::BackupSearchClientConfiguration& clientConfiguration = Aws::BackupSearch::BackupSearchClientConfiguration(),
                           std::shared_ptr<BackupSearchEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        BackupSearchClient(const Aws::Auth::AWSCredentials& credentials,
                           std::shared_ptr<BackupSearchEndpointProviderBase> endpointProvider = nullptr,
                           const Aws::BackupSearch::BackupSearchClientConfiguration& clientConfiguration = Aws::BackupSearch::BackupSearchClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        BackupSearchClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                           std::shared_ptr<BackupSearchEndpointProviderBase> endpointProvider = nullptr,
                           const Aws::BackupSearch::BackupSearchClientConfiguration& clientConfiguration = Aws::BackupSearch::BackupSearchClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        BackupSearchClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        BackupSearchClient(const Aws::Auth::AWSCredentials& credentials,
                           const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        BackupSearchClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                           const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~BackupSearchClient();

        /**
         * <p>This operation retrieves metadata of a search job, including its
         * progress.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backupsearch-2018-05-10/GetSearchJob">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSearchJobOutcome GetSearchJob(const Model::GetSearchJobRequest& request) const;

        /**
         * A Callable wrapper for GetSearchJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetSearchJobRequestT = Model::GetSearchJobRequest>
        Model::GetSearchJobOutcomeCallable GetSearchJobCallable(const GetSearchJobRequestT& request) const
        {
            return SubmitCallable(&BackupSearchClient::GetSearchJob, request);
        }

        /**
         * An Async wrapper for GetSearchJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSearchJobRequestT = Model::GetSearchJobRequest>
        void GetSearchJobAsync(const GetSearchJobRequestT& request, const GetSearchJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BackupSearchClient::GetSearchJob, request, handler, context);
        }

        /**
         * <p>This operation retrieves the metadata of an export job.</p> <p>An export job
         * is an operation that transmits the results of a search job to a specified S3
         * bucket in a .csv file.</p> <p>An export job allows you to retain results of a
         * search beyond the search job's scheduled retention of 7 days.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backupsearch-2018-05-10/GetSearchResultExportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSearchResultExportJobOutcome GetSearchResultExportJob(const Model::GetSearchResultExportJobRequest& request) const;

        /**
         * A Callable wrapper for GetSearchResultExportJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetSearchResultExportJobRequestT = Model::GetSearchResultExportJobRequest>
        Model::GetSearchResultExportJobOutcomeCallable GetSearchResultExportJobCallable(const GetSearchResultExportJobRequestT& request) const
        {
            return SubmitCallable(&BackupSearchClient::GetSearchResultExportJob, request);
        }

        /**
         * An Async wrapper for GetSearchResultExportJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSearchResultExportJobRequestT = Model::GetSearchResultExportJobRequest>
        void GetSearchResultExportJobAsync(const GetSearchResultExportJobRequestT& request, const GetSearchResultExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BackupSearchClient::GetSearchResultExportJob, request, handler, context);
        }

        /**
         * <p>This operation returns a list of all backups (recovery points) in a paginated
         * format that were included in the search job.</p> <p>If a search does not display
         * an expected backup in the results, you can call this operation to display each
         * backup included in the search. Any backups that were not included because they
         * have a <code>FAILED</code> status from a permissions issue will be displayed,
         * along with a status message.</p> <p>Only recovery points with a backup index
         * that has a status of <code>ACTIVE</code> will be included in search results. If
         * the index has any other status, its status will be displayed along with a status
         * message.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backupsearch-2018-05-10/ListSearchJobBackups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSearchJobBackupsOutcome ListSearchJobBackups(const Model::ListSearchJobBackupsRequest& request) const;

        /**
         * A Callable wrapper for ListSearchJobBackups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListSearchJobBackupsRequestT = Model::ListSearchJobBackupsRequest>
        Model::ListSearchJobBackupsOutcomeCallable ListSearchJobBackupsCallable(const ListSearchJobBackupsRequestT& request) const
        {
            return SubmitCallable(&BackupSearchClient::ListSearchJobBackups, request);
        }

        /**
         * An Async wrapper for ListSearchJobBackups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListSearchJobBackupsRequestT = Model::ListSearchJobBackupsRequest>
        void ListSearchJobBackupsAsync(const ListSearchJobBackupsRequestT& request, const ListSearchJobBackupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BackupSearchClient::ListSearchJobBackups, request, handler, context);
        }

        /**
         * <p>This operation returns a list of a specified search job.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backupsearch-2018-05-10/ListSearchJobResults">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSearchJobResultsOutcome ListSearchJobResults(const Model::ListSearchJobResultsRequest& request) const;

        /**
         * A Callable wrapper for ListSearchJobResults that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListSearchJobResultsRequestT = Model::ListSearchJobResultsRequest>
        Model::ListSearchJobResultsOutcomeCallable ListSearchJobResultsCallable(const ListSearchJobResultsRequestT& request) const
        {
            return SubmitCallable(&BackupSearchClient::ListSearchJobResults, request);
        }

        /**
         * An Async wrapper for ListSearchJobResults that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListSearchJobResultsRequestT = Model::ListSearchJobResultsRequest>
        void ListSearchJobResultsAsync(const ListSearchJobResultsRequestT& request, const ListSearchJobResultsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BackupSearchClient::ListSearchJobResults, request, handler, context);
        }

        /**
         * <p>This operation returns a list of search jobs belonging to an
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backupsearch-2018-05-10/ListSearchJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSearchJobsOutcome ListSearchJobs(const Model::ListSearchJobsRequest& request = {}) const;

        /**
         * A Callable wrapper for ListSearchJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListSearchJobsRequestT = Model::ListSearchJobsRequest>
        Model::ListSearchJobsOutcomeCallable ListSearchJobsCallable(const ListSearchJobsRequestT& request = {}) const
        {
            return SubmitCallable(&BackupSearchClient::ListSearchJobs, request);
        }

        /**
         * An Async wrapper for ListSearchJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListSearchJobsRequestT = Model::ListSearchJobsRequest>
        void ListSearchJobsAsync(const ListSearchJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListSearchJobsRequestT& request = {}) const
        {
            return SubmitAsync(&BackupSearchClient::ListSearchJobs, request, handler, context);
        }

        /**
         * <p>This operation exports search results of a search job to a specified
         * destination S3 bucket.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backupsearch-2018-05-10/ListSearchResultExportJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSearchResultExportJobsOutcome ListSearchResultExportJobs(const Model::ListSearchResultExportJobsRequest& request = {}) const;

        /**
         * A Callable wrapper for ListSearchResultExportJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListSearchResultExportJobsRequestT = Model::ListSearchResultExportJobsRequest>
        Model::ListSearchResultExportJobsOutcomeCallable ListSearchResultExportJobsCallable(const ListSearchResultExportJobsRequestT& request = {}) const
        {
            return SubmitCallable(&BackupSearchClient::ListSearchResultExportJobs, request);
        }

        /**
         * An Async wrapper for ListSearchResultExportJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListSearchResultExportJobsRequestT = Model::ListSearchResultExportJobsRequest>
        void ListSearchResultExportJobsAsync(const ListSearchResultExportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListSearchResultExportJobsRequestT& request = {}) const
        {
            return SubmitAsync(&BackupSearchClient::ListSearchResultExportJobs, request, handler, context);
        }

        /**
         * <p>This operation returns the tags for a resource type.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backupsearch-2018-05-10/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&BackupSearchClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BackupSearchClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>This operation creates a search job which returns recovery points filtered by
         * SearchScope and items filtered by ItemFilters.</p> <p>You can optionally include
         * ClientToken, EncryptionKeyArn, Name, and/or Tags.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backupsearch-2018-05-10/StartSearchJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartSearchJobOutcome StartSearchJob(const Model::StartSearchJobRequest& request) const;

        /**
         * A Callable wrapper for StartSearchJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartSearchJobRequestT = Model::StartSearchJobRequest>
        Model::StartSearchJobOutcomeCallable StartSearchJobCallable(const StartSearchJobRequestT& request) const
        {
            return SubmitCallable(&BackupSearchClient::StartSearchJob, request);
        }

        /**
         * An Async wrapper for StartSearchJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartSearchJobRequestT = Model::StartSearchJobRequest>
        void StartSearchJobAsync(const StartSearchJobRequestT& request, const StartSearchJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BackupSearchClient::StartSearchJob, request, handler, context);
        }

        /**
         * <p>This operations starts a job to export the results of search job to a
         * designated S3 bucket.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backupsearch-2018-05-10/StartSearchResultExportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartSearchResultExportJobOutcome StartSearchResultExportJob(const Model::StartSearchResultExportJobRequest& request) const;

        /**
         * A Callable wrapper for StartSearchResultExportJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartSearchResultExportJobRequestT = Model::StartSearchResultExportJobRequest>
        Model::StartSearchResultExportJobOutcomeCallable StartSearchResultExportJobCallable(const StartSearchResultExportJobRequestT& request) const
        {
            return SubmitCallable(&BackupSearchClient::StartSearchResultExportJob, request);
        }

        /**
         * An Async wrapper for StartSearchResultExportJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartSearchResultExportJobRequestT = Model::StartSearchResultExportJobRequest>
        void StartSearchResultExportJobAsync(const StartSearchResultExportJobRequestT& request, const StartSearchResultExportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BackupSearchClient::StartSearchResultExportJob, request, handler, context);
        }

        /**
         * <p>This operations ends a search job.</p> <p>Only a search job with a status of
         * <code>RUNNING</code> can be stopped.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backupsearch-2018-05-10/StopSearchJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StopSearchJobOutcome StopSearchJob(const Model::StopSearchJobRequest& request) const;

        /**
         * A Callable wrapper for StopSearchJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopSearchJobRequestT = Model::StopSearchJobRequest>
        Model::StopSearchJobOutcomeCallable StopSearchJobCallable(const StopSearchJobRequestT& request) const
        {
            return SubmitCallable(&BackupSearchClient::StopSearchJob, request);
        }

        /**
         * An Async wrapper for StopSearchJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopSearchJobRequestT = Model::StopSearchJobRequest>
        void StopSearchJobAsync(const StopSearchJobRequestT& request, const StopSearchJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BackupSearchClient::StopSearchJob, request, handler, context);
        }

        /**
         * <p>This operation puts tags on the resource you indicate.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backupsearch-2018-05-10/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&BackupSearchClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BackupSearchClient::TagResource, request, handler, context);
        }

        /**
         * <p>This operation removes tags from the specified resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backupsearch-2018-05-10/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&BackupSearchClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BackupSearchClient::UntagResource, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<BackupSearchEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<BackupSearchClient>;
      void init(const BackupSearchClientConfiguration& clientConfiguration);

      BackupSearchClientConfiguration m_clientConfiguration;
      std::shared_ptr<BackupSearchEndpointProviderBase> m_endpointProvider;
  };

} // namespace BackupSearch
} // namespace Aws
