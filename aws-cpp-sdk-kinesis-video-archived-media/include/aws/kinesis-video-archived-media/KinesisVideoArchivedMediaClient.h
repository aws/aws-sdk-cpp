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
#include <aws/kinesis-video-archived-media/KinesisVideoArchivedMedia_EXPORTS.h>
#include <aws/kinesis-video-archived-media/KinesisVideoArchivedMediaErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/kinesis-video-archived-media/model/GetMediaForFragmentListResult.h>
#include <aws/kinesis-video-archived-media/model/ListFragmentsResult.h>
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

namespace KinesisVideoArchivedMedia
{

namespace Model
{
        class GetMediaForFragmentListRequest;
        class ListFragmentsRequest;

        typedef Aws::Utils::Outcome<GetMediaForFragmentListResult, Aws::Client::AWSError<KinesisVideoArchivedMediaErrors>> GetMediaForFragmentListOutcome;
        typedef Aws::Utils::Outcome<ListFragmentsResult, Aws::Client::AWSError<KinesisVideoArchivedMediaErrors>> ListFragmentsOutcome;

        typedef std::future<GetMediaForFragmentListOutcome> GetMediaForFragmentListOutcomeCallable;
        typedef std::future<ListFragmentsOutcome> ListFragmentsOutcomeCallable;
} // namespace Model

  class KinesisVideoArchivedMediaClient;

    typedef std::function<void(const KinesisVideoArchivedMediaClient*, const Model::GetMediaForFragmentListRequest&, const Model::GetMediaForFragmentListOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetMediaForFragmentListResponseReceivedHandler;
    typedef std::function<void(const KinesisVideoArchivedMediaClient*, const Model::ListFragmentsRequest&, const Model::ListFragmentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListFragmentsResponseReceivedHandler;

  /**
   * <p/>
   */
  class AWS_KINESISVIDEOARCHIVEDMEDIA_API KinesisVideoArchivedMediaClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        KinesisVideoArchivedMediaClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        KinesisVideoArchivedMediaClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        KinesisVideoArchivedMediaClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~KinesisVideoArchivedMediaClient();

        inline virtual const char* GetServiceClientName() const override { return "kinesisvideo"; }


        /**
         * <p>Gets media for a list of fragments (specified by fragment number) from the
         * archived data in a Kinesis video stream.</p> <note> <p>This operation is only
         * available for the AWS SDK for Java. It is not supported in AWS SDKs for other
         * languages.</p> </note> <p>The following limits apply when using the
         * <code>GetMediaForFragmentList</code> API:</p> <ul> <li> <p>A client can call
         * <code>GetMediaForFragmentList</code> up to five times per second per stream.
         * </p> </li> <li> <p>Kinesis Video Streams sends media data at a rate of up to 25
         * megabytes per second (or 200 megabits per second) during a
         * <code>GetMediaForFragmentList</code> session. </p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesis-video-archived-media-2017-09-30/GetMediaForFragmentList">AWS
         * API Reference</a></p>
         */
        virtual Model::GetMediaForFragmentListOutcome GetMediaForFragmentList(const Model::GetMediaForFragmentListRequest& request) const;

        /**
         * <p>Gets media for a list of fragments (specified by fragment number) from the
         * archived data in a Kinesis video stream.</p> <note> <p>This operation is only
         * available for the AWS SDK for Java. It is not supported in AWS SDKs for other
         * languages.</p> </note> <p>The following limits apply when using the
         * <code>GetMediaForFragmentList</code> API:</p> <ul> <li> <p>A client can call
         * <code>GetMediaForFragmentList</code> up to five times per second per stream.
         * </p> </li> <li> <p>Kinesis Video Streams sends media data at a rate of up to 25
         * megabytes per second (or 200 megabits per second) during a
         * <code>GetMediaForFragmentList</code> session. </p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesis-video-archived-media-2017-09-30/GetMediaForFragmentList">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetMediaForFragmentListOutcomeCallable GetMediaForFragmentListCallable(const Model::GetMediaForFragmentListRequest& request) const;

        /**
         * <p>Gets media for a list of fragments (specified by fragment number) from the
         * archived data in a Kinesis video stream.</p> <note> <p>This operation is only
         * available for the AWS SDK for Java. It is not supported in AWS SDKs for other
         * languages.</p> </note> <p>The following limits apply when using the
         * <code>GetMediaForFragmentList</code> API:</p> <ul> <li> <p>A client can call
         * <code>GetMediaForFragmentList</code> up to five times per second per stream.
         * </p> </li> <li> <p>Kinesis Video Streams sends media data at a rate of up to 25
         * megabytes per second (or 200 megabits per second) during a
         * <code>GetMediaForFragmentList</code> session. </p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesis-video-archived-media-2017-09-30/GetMediaForFragmentList">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetMediaForFragmentListAsync(const Model::GetMediaForFragmentListRequest& request, const GetMediaForFragmentListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of <a>Fragment</a> objects from the specified stream and start
         * location within the archived data.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesis-video-archived-media-2017-09-30/ListFragments">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFragmentsOutcome ListFragments(const Model::ListFragmentsRequest& request) const;

        /**
         * <p>Returns a list of <a>Fragment</a> objects from the specified stream and start
         * location within the archived data.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesis-video-archived-media-2017-09-30/ListFragments">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListFragmentsOutcomeCallable ListFragmentsCallable(const Model::ListFragmentsRequest& request) const;

        /**
         * <p>Returns a list of <a>Fragment</a> objects from the specified stream and start
         * location within the archived data.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesis-video-archived-media-2017-09-30/ListFragments">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListFragmentsAsync(const Model::ListFragmentsRequest& request, const ListFragmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);

        /**Async helpers**/
        void GetMediaForFragmentListAsyncHelper(const Model::GetMediaForFragmentListRequest& request, const GetMediaForFragmentListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListFragmentsAsyncHelper(const Model::ListFragmentsRequest& request, const ListFragmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace KinesisVideoArchivedMedia
} // namespace Aws
