﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs/IVS_EXPORTS.h>
#include <aws/ivs/IVSErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ivs/model/BatchGetChannelResult.h>
#include <aws/ivs/model/BatchGetStreamKeyResult.h>
#include <aws/ivs/model/CreateChannelResult.h>
#include <aws/ivs/model/CreateRecordingConfigurationResult.h>
#include <aws/ivs/model/CreateStreamKeyResult.h>
#include <aws/ivs/model/DeletePlaybackKeyPairResult.h>
#include <aws/ivs/model/GetChannelResult.h>
#include <aws/ivs/model/GetPlaybackKeyPairResult.h>
#include <aws/ivs/model/GetRecordingConfigurationResult.h>
#include <aws/ivs/model/GetStreamResult.h>
#include <aws/ivs/model/GetStreamKeyResult.h>
#include <aws/ivs/model/GetStreamSessionResult.h>
#include <aws/ivs/model/ImportPlaybackKeyPairResult.h>
#include <aws/ivs/model/ListChannelsResult.h>
#include <aws/ivs/model/ListPlaybackKeyPairsResult.h>
#include <aws/ivs/model/ListRecordingConfigurationsResult.h>
#include <aws/ivs/model/ListStreamKeysResult.h>
#include <aws/ivs/model/ListStreamSessionsResult.h>
#include <aws/ivs/model/ListStreamsResult.h>
#include <aws/ivs/model/ListTagsForResourceResult.h>
#include <aws/ivs/model/StopStreamResult.h>
#include <aws/ivs/model/TagResourceResult.h>
#include <aws/ivs/model/UntagResourceResult.h>
#include <aws/ivs/model/UpdateChannelResult.h>
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

namespace IVS
{

namespace Model
{
        class BatchGetChannelRequest;
        class BatchGetStreamKeyRequest;
        class CreateChannelRequest;
        class CreateRecordingConfigurationRequest;
        class CreateStreamKeyRequest;
        class DeleteChannelRequest;
        class DeletePlaybackKeyPairRequest;
        class DeleteRecordingConfigurationRequest;
        class DeleteStreamKeyRequest;
        class GetChannelRequest;
        class GetPlaybackKeyPairRequest;
        class GetRecordingConfigurationRequest;
        class GetStreamRequest;
        class GetStreamKeyRequest;
        class GetStreamSessionRequest;
        class ImportPlaybackKeyPairRequest;
        class ListChannelsRequest;
        class ListPlaybackKeyPairsRequest;
        class ListRecordingConfigurationsRequest;
        class ListStreamKeysRequest;
        class ListStreamSessionsRequest;
        class ListStreamsRequest;
        class ListTagsForResourceRequest;
        class PutMetadataRequest;
        class StopStreamRequest;
        class TagResourceRequest;
        class UntagResourceRequest;
        class UpdateChannelRequest;

        typedef Aws::Utils::Outcome<BatchGetChannelResult, IVSError> BatchGetChannelOutcome;
        typedef Aws::Utils::Outcome<BatchGetStreamKeyResult, IVSError> BatchGetStreamKeyOutcome;
        typedef Aws::Utils::Outcome<CreateChannelResult, IVSError> CreateChannelOutcome;
        typedef Aws::Utils::Outcome<CreateRecordingConfigurationResult, IVSError> CreateRecordingConfigurationOutcome;
        typedef Aws::Utils::Outcome<CreateStreamKeyResult, IVSError> CreateStreamKeyOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, IVSError> DeleteChannelOutcome;
        typedef Aws::Utils::Outcome<DeletePlaybackKeyPairResult, IVSError> DeletePlaybackKeyPairOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, IVSError> DeleteRecordingConfigurationOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, IVSError> DeleteStreamKeyOutcome;
        typedef Aws::Utils::Outcome<GetChannelResult, IVSError> GetChannelOutcome;
        typedef Aws::Utils::Outcome<GetPlaybackKeyPairResult, IVSError> GetPlaybackKeyPairOutcome;
        typedef Aws::Utils::Outcome<GetRecordingConfigurationResult, IVSError> GetRecordingConfigurationOutcome;
        typedef Aws::Utils::Outcome<GetStreamResult, IVSError> GetStreamOutcome;
        typedef Aws::Utils::Outcome<GetStreamKeyResult, IVSError> GetStreamKeyOutcome;
        typedef Aws::Utils::Outcome<GetStreamSessionResult, IVSError> GetStreamSessionOutcome;
        typedef Aws::Utils::Outcome<ImportPlaybackKeyPairResult, IVSError> ImportPlaybackKeyPairOutcome;
        typedef Aws::Utils::Outcome<ListChannelsResult, IVSError> ListChannelsOutcome;
        typedef Aws::Utils::Outcome<ListPlaybackKeyPairsResult, IVSError> ListPlaybackKeyPairsOutcome;
        typedef Aws::Utils::Outcome<ListRecordingConfigurationsResult, IVSError> ListRecordingConfigurationsOutcome;
        typedef Aws::Utils::Outcome<ListStreamKeysResult, IVSError> ListStreamKeysOutcome;
        typedef Aws::Utils::Outcome<ListStreamSessionsResult, IVSError> ListStreamSessionsOutcome;
        typedef Aws::Utils::Outcome<ListStreamsResult, IVSError> ListStreamsOutcome;
        typedef Aws::Utils::Outcome<ListTagsForResourceResult, IVSError> ListTagsForResourceOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, IVSError> PutMetadataOutcome;
        typedef Aws::Utils::Outcome<StopStreamResult, IVSError> StopStreamOutcome;
        typedef Aws::Utils::Outcome<TagResourceResult, IVSError> TagResourceOutcome;
        typedef Aws::Utils::Outcome<UntagResourceResult, IVSError> UntagResourceOutcome;
        typedef Aws::Utils::Outcome<UpdateChannelResult, IVSError> UpdateChannelOutcome;

        typedef std::future<BatchGetChannelOutcome> BatchGetChannelOutcomeCallable;
        typedef std::future<BatchGetStreamKeyOutcome> BatchGetStreamKeyOutcomeCallable;
        typedef std::future<CreateChannelOutcome> CreateChannelOutcomeCallable;
        typedef std::future<CreateRecordingConfigurationOutcome> CreateRecordingConfigurationOutcomeCallable;
        typedef std::future<CreateStreamKeyOutcome> CreateStreamKeyOutcomeCallable;
        typedef std::future<DeleteChannelOutcome> DeleteChannelOutcomeCallable;
        typedef std::future<DeletePlaybackKeyPairOutcome> DeletePlaybackKeyPairOutcomeCallable;
        typedef std::future<DeleteRecordingConfigurationOutcome> DeleteRecordingConfigurationOutcomeCallable;
        typedef std::future<DeleteStreamKeyOutcome> DeleteStreamKeyOutcomeCallable;
        typedef std::future<GetChannelOutcome> GetChannelOutcomeCallable;
        typedef std::future<GetPlaybackKeyPairOutcome> GetPlaybackKeyPairOutcomeCallable;
        typedef std::future<GetRecordingConfigurationOutcome> GetRecordingConfigurationOutcomeCallable;
        typedef std::future<GetStreamOutcome> GetStreamOutcomeCallable;
        typedef std::future<GetStreamKeyOutcome> GetStreamKeyOutcomeCallable;
        typedef std::future<GetStreamSessionOutcome> GetStreamSessionOutcomeCallable;
        typedef std::future<ImportPlaybackKeyPairOutcome> ImportPlaybackKeyPairOutcomeCallable;
        typedef std::future<ListChannelsOutcome> ListChannelsOutcomeCallable;
        typedef std::future<ListPlaybackKeyPairsOutcome> ListPlaybackKeyPairsOutcomeCallable;
        typedef std::future<ListRecordingConfigurationsOutcome> ListRecordingConfigurationsOutcomeCallable;
        typedef std::future<ListStreamKeysOutcome> ListStreamKeysOutcomeCallable;
        typedef std::future<ListStreamSessionsOutcome> ListStreamSessionsOutcomeCallable;
        typedef std::future<ListStreamsOutcome> ListStreamsOutcomeCallable;
        typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
        typedef std::future<PutMetadataOutcome> PutMetadataOutcomeCallable;
        typedef std::future<StopStreamOutcome> StopStreamOutcomeCallable;
        typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
        typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
        typedef std::future<UpdateChannelOutcome> UpdateChannelOutcomeCallable;
} // namespace Model

  class IVSClient;

    typedef std::function<void(const IVSClient*, const Model::BatchGetChannelRequest&, const Model::BatchGetChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchGetChannelResponseReceivedHandler;
    typedef std::function<void(const IVSClient*, const Model::BatchGetStreamKeyRequest&, const Model::BatchGetStreamKeyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchGetStreamKeyResponseReceivedHandler;
    typedef std::function<void(const IVSClient*, const Model::CreateChannelRequest&, const Model::CreateChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateChannelResponseReceivedHandler;
    typedef std::function<void(const IVSClient*, const Model::CreateRecordingConfigurationRequest&, const Model::CreateRecordingConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateRecordingConfigurationResponseReceivedHandler;
    typedef std::function<void(const IVSClient*, const Model::CreateStreamKeyRequest&, const Model::CreateStreamKeyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateStreamKeyResponseReceivedHandler;
    typedef std::function<void(const IVSClient*, const Model::DeleteChannelRequest&, const Model::DeleteChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteChannelResponseReceivedHandler;
    typedef std::function<void(const IVSClient*, const Model::DeletePlaybackKeyPairRequest&, const Model::DeletePlaybackKeyPairOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePlaybackKeyPairResponseReceivedHandler;
    typedef std::function<void(const IVSClient*, const Model::DeleteRecordingConfigurationRequest&, const Model::DeleteRecordingConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRecordingConfigurationResponseReceivedHandler;
    typedef std::function<void(const IVSClient*, const Model::DeleteStreamKeyRequest&, const Model::DeleteStreamKeyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteStreamKeyResponseReceivedHandler;
    typedef std::function<void(const IVSClient*, const Model::GetChannelRequest&, const Model::GetChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetChannelResponseReceivedHandler;
    typedef std::function<void(const IVSClient*, const Model::GetPlaybackKeyPairRequest&, const Model::GetPlaybackKeyPairOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPlaybackKeyPairResponseReceivedHandler;
    typedef std::function<void(const IVSClient*, const Model::GetRecordingConfigurationRequest&, const Model::GetRecordingConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRecordingConfigurationResponseReceivedHandler;
    typedef std::function<void(const IVSClient*, const Model::GetStreamRequest&, const Model::GetStreamOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetStreamResponseReceivedHandler;
    typedef std::function<void(const IVSClient*, const Model::GetStreamKeyRequest&, const Model::GetStreamKeyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetStreamKeyResponseReceivedHandler;
    typedef std::function<void(const IVSClient*, const Model::GetStreamSessionRequest&, const Model::GetStreamSessionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetStreamSessionResponseReceivedHandler;
    typedef std::function<void(const IVSClient*, const Model::ImportPlaybackKeyPairRequest&, const Model::ImportPlaybackKeyPairOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ImportPlaybackKeyPairResponseReceivedHandler;
    typedef std::function<void(const IVSClient*, const Model::ListChannelsRequest&, const Model::ListChannelsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListChannelsResponseReceivedHandler;
    typedef std::function<void(const IVSClient*, const Model::ListPlaybackKeyPairsRequest&, const Model::ListPlaybackKeyPairsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPlaybackKeyPairsResponseReceivedHandler;
    typedef std::function<void(const IVSClient*, const Model::ListRecordingConfigurationsRequest&, const Model::ListRecordingConfigurationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRecordingConfigurationsResponseReceivedHandler;
    typedef std::function<void(const IVSClient*, const Model::ListStreamKeysRequest&, const Model::ListStreamKeysOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListStreamKeysResponseReceivedHandler;
    typedef std::function<void(const IVSClient*, const Model::ListStreamSessionsRequest&, const Model::ListStreamSessionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListStreamSessionsResponseReceivedHandler;
    typedef std::function<void(const IVSClient*, const Model::ListStreamsRequest&, const Model::ListStreamsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListStreamsResponseReceivedHandler;
    typedef std::function<void(const IVSClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const IVSClient*, const Model::PutMetadataRequest&, const Model::PutMetadataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutMetadataResponseReceivedHandler;
    typedef std::function<void(const IVSClient*, const Model::StopStreamRequest&, const Model::StopStreamOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopStreamResponseReceivedHandler;
    typedef std::function<void(const IVSClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const IVSClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const IVSClient*, const Model::UpdateChannelRequest&, const Model::UpdateChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateChannelResponseReceivedHandler;

  /**
   * <p> <b>Introduction</b> </p> <p>The Amazon Interactive Video Service (IVS) API
   * is REST compatible, using a standard HTTP API and an Amazon Web Services
   * EventBridge event stream for responses. JSON is used for both requests and
   * responses, including errors.</p> <p>The API is an Amazon Web Services regional
   * service. For a list of supported regions and Amazon IVS HTTPS service endpoints,
   * see the <a href="https://docs.aws.amazon.com/general/latest/gr/ivs.html">Amazon
   * IVS page</a> in the <i>Amazon Web Services General Reference</i>.</p> <p> <i>
   * <b>All API request parameters and URLs are case sensitive. </b> </i> </p> <p>For
   * a summary of notable documentation changes in each release, see <a
   * href="https://docs.aws.amazon.com/ivs/latest/userguide/doc-history.html">
   * Document History</a>.</p> <p> <b>Allowed Header Values</b> </p> <ul> <li> <p>
   * <code> <b>Accept:</b> </code> application/json</p> </li> <li> <p> <code>
   * <b>Accept-Encoding:</b> </code> gzip, deflate</p> </li> <li> <p> <code>
   * <b>Content-Type:</b> </code>application/json</p> </li> </ul> <p>
   * <b>Resources</b> </p> <p>The following resources contain information about your
   * IVS live stream (see <a
   * href="https://docs.aws.amazon.com/ivs/latest/userguide/getting-started.html">
   * Getting Started with Amazon IVS</a>):</p> <ul> <li> <p>Channel — Stores
   * configuration data related to your live stream. You first create a channel and
   * then use the channel’s stream key to start your live stream. See the Channel
   * endpoints for more information. </p> </li> <li> <p>Stream key — An identifier
   * assigned by Amazon IVS when you create a channel, which is then used to
   * authorize streaming. See the StreamKey endpoints for more information. <i>
   * <b>Treat the stream key like a secret, since it allows anyone to stream to the
   * channel.</b> </i> </p> </li> <li> <p>Playback key pair — Video playback may be
   * restricted using playback-authorization tokens, which use public-key encryption.
   * A playback key pair is the public-private pair of keys used to sign and validate
   * the playback-authorization token. See the PlaybackKeyPair endpoints for more
   * information.</p> </li> <li> <p>Recording configuration — Stores configuration
   * related to recording a live stream and where to store the recorded content.
   * Multiple channels can reference the same recording configuration. See the
   * Recording Configuration endpoints for more information.</p> </li> </ul> <p>
   * <b>Tagging</b> </p> <p>A <i>tag</i> is a metadata label that you assign to an
   * Amazon Web Services resource. A tag comprises a <i>key</i> and a <i>value</i>,
   * both set by you. For example, you might set a tag as <code>topic:nature</code>
   * to label a particular video category. See <a
   * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
   * Amazon Web Services Resources</a> for more information, including restrictions
   * that apply to tags.</p> <p>Tags can help you identify and organize your Amazon
   * Web Services resources. For example, you can use the same tag for different
   * resources to indicate that they are related. You can also use tags to manage
   * access (see <a
   * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_tags.html"> Access
   * Tags</a>). </p> <p>The Amazon IVS API has these tag-related endpoints:
   * <a>TagResource</a>, <a>UntagResource</a>, and <a>ListTagsForResource</a>. The
   * following resources support tagging: Channels, Stream Keys, Playback Key Pairs,
   * and Recording Configurations.</p> <p>At most 50 tags can be applied to a
   * resource. </p> <p> <b>Authentication versus Authorization</b> </p> <p>Note the
   * differences between these concepts:</p> <ul> <li> <p> <i>Authentication</i> is
   * about verifying identity. You need to be authenticated to sign Amazon IVS API
   * requests.</p> </li> <li> <p> <i>Authorization</i> is about granting permissions.
   * You need to be authorized to view <a
   * href="https://docs.aws.amazon.com/ivs/latest/userguide/private-channels.html">Amazon
   * IVS private channels</a>. (Private channels are channels that are enabled for
   * "playback authorization.")</p> </li> </ul> <p> <b>Authentication</b> </p> <p>All
   * Amazon IVS API requests must be authenticated with a signature. The Amazon Web
   * Services Command-Line Interface (CLI) and Amazon IVS Player SDKs take care of
   * signing the underlying API calls for you. However, if your application calls the
   * Amazon IVS API directly, it’s your responsibility to sign the requests.</p>
   * <p>You generate a signature using valid Amazon Web Services credentials that
   * have permission to perform the requested action. For example, you must sign
   * PutMetadata requests with a signature generated from an IAM user account that
   * has the <code>ivs:PutMetadata</code> permission.</p> <p>For more
   * information:</p> <ul> <li> <p>Authentication and generating signatures — See <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/API/sig-v4-authenticating-requests.html">Authenticating
   * Requests (Amazon Web Services Signature Version 4)</a> in the <i>Amazon Web
   * Services General Reference</i>.</p> </li> <li> <p>Managing Amazon IVS
   * permissions — See <a
   * href="https://docs.aws.amazon.com/ivs/latest/userguide/security-iam.html">Identity
   * and Access Management</a> on the Security page of the <i>Amazon IVS User
   * Guide</i>.</p> </li> </ul> <p> <b>Channel Endpoints</b> </p> <ul> <li> <p>
   * <a>CreateChannel</a> — Creates a new channel and an associated stream key to
   * start streaming.</p> </li> <li> <p> <a>GetChannel</a> — Gets the channel
   * configuration for the specified channel ARN (Amazon Resource Name).</p> </li>
   * <li> <p> <a>BatchGetChannel</a> — Performs <a>GetChannel</a> on multiple ARNs
   * simultaneously.</p> </li> <li> <p> <a>ListChannels</a> — Gets summary
   * information about all channels in your account, in the Amazon Web Services
   * region where the API request is processed. This list can be filtered to match a
   * specified name or recording-configuration ARN. Filters are mutually exclusive
   * and cannot be used together. If you try to use both filters, you will get an
   * error (409 Conflict Exception).</p> </li> <li> <p> <a>UpdateChannel</a> —
   * Updates a channel's configuration. This does not affect an ongoing stream of
   * this channel. You must stop and restart the stream for the changes to take
   * effect.</p> </li> <li> <p> <a>DeleteChannel</a> — Deletes the specified
   * channel.</p> </li> </ul> <p> <b>StreamKey Endpoints</b> </p> <ul> <li> <p>
   * <a>CreateStreamKey</a> — Creates a stream key, used to initiate a stream, for
   * the specified channel ARN.</p> </li> <li> <p> <a>GetStreamKey</a> — Gets stream
   * key information for the specified ARN.</p> </li> <li> <p>
   * <a>BatchGetStreamKey</a> — Performs <a>GetStreamKey</a> on multiple ARNs
   * simultaneously.</p> </li> <li> <p> <a>ListStreamKeys</a> — Gets summary
   * information about stream keys for the specified channel.</p> </li> <li> <p>
   * <a>DeleteStreamKey</a> — Deletes the stream key for the specified ARN, so it can
   * no longer be used to stream.</p> </li> </ul> <p> <b>Stream Endpoints</b> </p>
   * <ul> <li> <p> <a>GetStream</a> — Gets information about the active (live) stream
   * on a specified channel.</p> </li> <li> <p> <a>GetStreamSession</a> — Gets
   * metadata on a specified stream.</p> </li> <li> <p> <a>ListStreams</a> — Gets
   * summary information about live streams in your account, in the Amazon Web
   * Services region where the API request is processed.</p> </li> <li> <p>
   * <a>ListStreamSessions</a> — Gets a summary of current and previous streams for a
   * specified channel in your account, in the AWS region where the API request is
   * processed.</p> </li> <li> <p> <a>StopStream</a> — Disconnects the incoming RTMPS
   * stream for the specified channel. Can be used in conjunction with
   * <a>DeleteStreamKey</a> to prevent further streaming to a channel.</p> </li> <li>
   * <p> <a>PutMetadata</a> — Inserts metadata into the active stream of the
   * specified channel. At most 5 requests per second per channel are allowed, each
   * with a maximum 1 KB payload. (If 5 TPS is not sufficient for your needs, we
   * recommend batching your data into a single PutMetadata call.) At most 155
   * requests per second per account are allowed.</p> </li> </ul> <p>
   * <b>PlaybackKeyPair Endpoints</b> </p> <p>For more information, see <a
   * href="https://docs.aws.amazon.com/ivs/latest/userguide/private-channels.html">Setting
   * Up Private Channels</a> in the <i>Amazon IVS User Guide</i>.</p> <ul> <li> <p>
   * <a>ImportPlaybackKeyPair</a> — Imports the public portion of a new key pair and
   * returns its <code>arn</code> and <code>fingerprint</code>. The
   * <code>privateKey</code> can then be used to generate viewer authorization
   * tokens, to grant viewers access to private channels (channels enabled for
   * playback authorization).</p> </li> <li> <p> <a>GetPlaybackKeyPair</a> — Gets a
   * specified playback authorization key pair and returns the <code>arn</code> and
   * <code>fingerprint</code>. The <code>privateKey</code> held by the caller can be
   * used to generate viewer authorization tokens, to grant viewers access to private
   * channels.</p> </li> <li> <p> <a>ListPlaybackKeyPairs</a> — Gets summary
   * information about playback key pairs.</p> </li> <li> <p>
   * <a>DeletePlaybackKeyPair</a> — Deletes a specified authorization key pair. This
   * invalidates future viewer tokens generated using the key pair’s
   * <code>privateKey</code>.</p> </li> </ul> <p> <b>RecordingConfiguration
   * Endpoints</b> </p> <ul> <li> <p> <a>CreateRecordingConfiguration</a> — Creates a
   * new recording configuration, used to enable recording to Amazon S3.</p> </li>
   * <li> <p> <a>GetRecordingConfiguration</a> — Gets the recording-configuration
   * metadata for the specified ARN.</p> </li> <li> <p>
   * <a>ListRecordingConfigurations</a> — Gets summary information about all
   * recording configurations in your account, in the Amazon Web Services region
   * where the API request is processed.</p> </li> <li> <p>
   * <a>DeleteRecordingConfiguration</a> — Deletes the recording configuration for
   * the specified ARN.</p> </li> </ul> <p> <b>Amazon Web Services Tags Endpoints</b>
   * </p> <ul> <li> <p> <a>TagResource</a> — Adds or updates tags for the Amazon Web
   * Services resource with the specified ARN.</p> </li> <li> <p>
   * <a>UntagResource</a> — Removes tags from the resource with the specified
   * ARN.</p> </li> <li> <p> <a>ListTagsForResource</a> — Gets information about
   * Amazon Web Services tags for the specified ARN.</p> </li> </ul>
   */
  class AWS_IVS_API IVSClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IVSClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IVSClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        IVSClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~IVSClient();


        /**
         * <p>Performs <a>GetChannel</a> on multiple ARNs simultaneously.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/BatchGetChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetChannelOutcome BatchGetChannel(const Model::BatchGetChannelRequest& request) const;

        /**
         * <p>Performs <a>GetChannel</a> on multiple ARNs simultaneously.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/BatchGetChannel">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchGetChannelOutcomeCallable BatchGetChannelCallable(const Model::BatchGetChannelRequest& request) const;

        /**
         * <p>Performs <a>GetChannel</a> on multiple ARNs simultaneously.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/BatchGetChannel">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchGetChannelAsync(const Model::BatchGetChannelRequest& request, const BatchGetChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Performs <a>GetStreamKey</a> on multiple ARNs simultaneously.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/BatchGetStreamKey">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetStreamKeyOutcome BatchGetStreamKey(const Model::BatchGetStreamKeyRequest& request) const;

        /**
         * <p>Performs <a>GetStreamKey</a> on multiple ARNs simultaneously.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/BatchGetStreamKey">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::BatchGetStreamKeyOutcomeCallable BatchGetStreamKeyCallable(const Model::BatchGetStreamKeyRequest& request) const;

        /**
         * <p>Performs <a>GetStreamKey</a> on multiple ARNs simultaneously.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/BatchGetStreamKey">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void BatchGetStreamKeyAsync(const Model::BatchGetStreamKeyRequest& request, const BatchGetStreamKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new channel and an associated stream key to start
         * streaming.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/CreateChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateChannelOutcome CreateChannel(const Model::CreateChannelRequest& request) const;

        /**
         * <p>Creates a new channel and an associated stream key to start
         * streaming.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/CreateChannel">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateChannelOutcomeCallable CreateChannelCallable(const Model::CreateChannelRequest& request) const;

        /**
         * <p>Creates a new channel and an associated stream key to start
         * streaming.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/CreateChannel">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateChannelAsync(const Model::CreateChannelRequest& request, const CreateChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new recording configuration, used to enable recording to Amazon
         * S3.</p> <p> <b>Known issue:</b> In the us-east-1 region, if you use the Amazon
         * Web Services CLI to create a recording configuration, it returns success even if
         * the S3 bucket is in a different region. In this case, the <code>state</code> of
         * the recording configuration is <code>CREATE_FAILED</code> (instead of
         * <code>ACTIVE</code>). (In other regions, the CLI correctly returns failure if
         * the bucket is in a different region.)</p> <p> <b>Workaround:</b> Ensure that
         * your S3 bucket is in the same region as the recording configuration. If you
         * create a recording configuration in a different region as your S3 bucket, delete
         * that recording configuration and create a new one with an S3 bucket from the
         * correct region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/CreateRecordingConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRecordingConfigurationOutcome CreateRecordingConfiguration(const Model::CreateRecordingConfigurationRequest& request) const;

        /**
         * <p>Creates a new recording configuration, used to enable recording to Amazon
         * S3.</p> <p> <b>Known issue:</b> In the us-east-1 region, if you use the Amazon
         * Web Services CLI to create a recording configuration, it returns success even if
         * the S3 bucket is in a different region. In this case, the <code>state</code> of
         * the recording configuration is <code>CREATE_FAILED</code> (instead of
         * <code>ACTIVE</code>). (In other regions, the CLI correctly returns failure if
         * the bucket is in a different region.)</p> <p> <b>Workaround:</b> Ensure that
         * your S3 bucket is in the same region as the recording configuration. If you
         * create a recording configuration in a different region as your S3 bucket, delete
         * that recording configuration and create a new one with an S3 bucket from the
         * correct region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/CreateRecordingConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateRecordingConfigurationOutcomeCallable CreateRecordingConfigurationCallable(const Model::CreateRecordingConfigurationRequest& request) const;

        /**
         * <p>Creates a new recording configuration, used to enable recording to Amazon
         * S3.</p> <p> <b>Known issue:</b> In the us-east-1 region, if you use the Amazon
         * Web Services CLI to create a recording configuration, it returns success even if
         * the S3 bucket is in a different region. In this case, the <code>state</code> of
         * the recording configuration is <code>CREATE_FAILED</code> (instead of
         * <code>ACTIVE</code>). (In other regions, the CLI correctly returns failure if
         * the bucket is in a different region.)</p> <p> <b>Workaround:</b> Ensure that
         * your S3 bucket is in the same region as the recording configuration. If you
         * create a recording configuration in a different region as your S3 bucket, delete
         * that recording configuration and create a new one with an S3 bucket from the
         * correct region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/CreateRecordingConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateRecordingConfigurationAsync(const Model::CreateRecordingConfigurationRequest& request, const CreateRecordingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a stream key, used to initiate a stream, for the specified channel
         * ARN.</p> <p>Note that <a>CreateChannel</a> creates a stream key. If you
         * subsequently use CreateStreamKey on the same channel, it will fail because a
         * stream key already exists and there is a limit of 1 stream key per channel. To
         * reset the stream key on a channel, use <a>DeleteStreamKey</a> and then
         * CreateStreamKey.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/CreateStreamKey">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateStreamKeyOutcome CreateStreamKey(const Model::CreateStreamKeyRequest& request) const;

        /**
         * <p>Creates a stream key, used to initiate a stream, for the specified channel
         * ARN.</p> <p>Note that <a>CreateChannel</a> creates a stream key. If you
         * subsequently use CreateStreamKey on the same channel, it will fail because a
         * stream key already exists and there is a limit of 1 stream key per channel. To
         * reset the stream key on a channel, use <a>DeleteStreamKey</a> and then
         * CreateStreamKey.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/CreateStreamKey">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateStreamKeyOutcomeCallable CreateStreamKeyCallable(const Model::CreateStreamKeyRequest& request) const;

        /**
         * <p>Creates a stream key, used to initiate a stream, for the specified channel
         * ARN.</p> <p>Note that <a>CreateChannel</a> creates a stream key. If you
         * subsequently use CreateStreamKey on the same channel, it will fail because a
         * stream key already exists and there is a limit of 1 stream key per channel. To
         * reset the stream key on a channel, use <a>DeleteStreamKey</a> and then
         * CreateStreamKey.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/CreateStreamKey">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateStreamKeyAsync(const Model::CreateStreamKeyRequest& request, const CreateStreamKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified channel and its associated stream keys.</p> <p>If you
         * try to delete a live channel, you will get an error (409 ConflictException). To
         * delete a channel that is live, call <a>StopStream</a>, wait for the Amazon
         * EventBridge "Stream End" event (to verify that the stream's state was changed
         * from Live to Offline), then call DeleteChannel. (See <a
         * href="https://docs.aws.amazon.com/ivs/latest/userguide/eventbridge.html"> Using
         * EventBridge with Amazon IVS</a>.) </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/DeleteChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteChannelOutcome DeleteChannel(const Model::DeleteChannelRequest& request) const;

        /**
         * <p>Deletes the specified channel and its associated stream keys.</p> <p>If you
         * try to delete a live channel, you will get an error (409 ConflictException). To
         * delete a channel that is live, call <a>StopStream</a>, wait for the Amazon
         * EventBridge "Stream End" event (to verify that the stream's state was changed
         * from Live to Offline), then call DeleteChannel. (See <a
         * href="https://docs.aws.amazon.com/ivs/latest/userguide/eventbridge.html"> Using
         * EventBridge with Amazon IVS</a>.) </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/DeleteChannel">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteChannelOutcomeCallable DeleteChannelCallable(const Model::DeleteChannelRequest& request) const;

        /**
         * <p>Deletes the specified channel and its associated stream keys.</p> <p>If you
         * try to delete a live channel, you will get an error (409 ConflictException). To
         * delete a channel that is live, call <a>StopStream</a>, wait for the Amazon
         * EventBridge "Stream End" event (to verify that the stream's state was changed
         * from Live to Offline), then call DeleteChannel. (See <a
         * href="https://docs.aws.amazon.com/ivs/latest/userguide/eventbridge.html"> Using
         * EventBridge with Amazon IVS</a>.) </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/DeleteChannel">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteChannelAsync(const Model::DeleteChannelRequest& request, const DeleteChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a specified authorization key pair. This invalidates future viewer
         * tokens generated using the key pair’s <code>privateKey</code>. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/ivs/latest/userguide/private-channels.html">Setting
         * Up Private Channels</a> in the <i>Amazon IVS User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/DeletePlaybackKeyPair">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePlaybackKeyPairOutcome DeletePlaybackKeyPair(const Model::DeletePlaybackKeyPairRequest& request) const;

        /**
         * <p>Deletes a specified authorization key pair. This invalidates future viewer
         * tokens generated using the key pair’s <code>privateKey</code>. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/ivs/latest/userguide/private-channels.html">Setting
         * Up Private Channels</a> in the <i>Amazon IVS User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/DeletePlaybackKeyPair">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeletePlaybackKeyPairOutcomeCallable DeletePlaybackKeyPairCallable(const Model::DeletePlaybackKeyPairRequest& request) const;

        /**
         * <p>Deletes a specified authorization key pair. This invalidates future viewer
         * tokens generated using the key pair’s <code>privateKey</code>. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/ivs/latest/userguide/private-channels.html">Setting
         * Up Private Channels</a> in the <i>Amazon IVS User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/DeletePlaybackKeyPair">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeletePlaybackKeyPairAsync(const Model::DeletePlaybackKeyPairRequest& request, const DeletePlaybackKeyPairResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the recording configuration for the specified ARN.</p> <p>If you try
         * to delete a recording configuration that is associated with a channel, you will
         * get an error (409 ConflictException). To avoid this, for all channels that
         * reference the recording configuration, first use <a>UpdateChannel</a> to set the
         * <code>recordingConfigurationArn</code> field to an empty string, then use
         * DeleteRecordingConfiguration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/DeleteRecordingConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRecordingConfigurationOutcome DeleteRecordingConfiguration(const Model::DeleteRecordingConfigurationRequest& request) const;

        /**
         * <p>Deletes the recording configuration for the specified ARN.</p> <p>If you try
         * to delete a recording configuration that is associated with a channel, you will
         * get an error (409 ConflictException). To avoid this, for all channels that
         * reference the recording configuration, first use <a>UpdateChannel</a> to set the
         * <code>recordingConfigurationArn</code> field to an empty string, then use
         * DeleteRecordingConfiguration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/DeleteRecordingConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteRecordingConfigurationOutcomeCallable DeleteRecordingConfigurationCallable(const Model::DeleteRecordingConfigurationRequest& request) const;

        /**
         * <p>Deletes the recording configuration for the specified ARN.</p> <p>If you try
         * to delete a recording configuration that is associated with a channel, you will
         * get an error (409 ConflictException). To avoid this, for all channels that
         * reference the recording configuration, first use <a>UpdateChannel</a> to set the
         * <code>recordingConfigurationArn</code> field to an empty string, then use
         * DeleteRecordingConfiguration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/DeleteRecordingConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteRecordingConfigurationAsync(const Model::DeleteRecordingConfigurationRequest& request, const DeleteRecordingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the stream key for the specified ARN, so it can no longer be used to
         * stream.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/DeleteStreamKey">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteStreamKeyOutcome DeleteStreamKey(const Model::DeleteStreamKeyRequest& request) const;

        /**
         * <p>Deletes the stream key for the specified ARN, so it can no longer be used to
         * stream.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/DeleteStreamKey">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteStreamKeyOutcomeCallable DeleteStreamKeyCallable(const Model::DeleteStreamKeyRequest& request) const;

        /**
         * <p>Deletes the stream key for the specified ARN, so it can no longer be used to
         * stream.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/DeleteStreamKey">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteStreamKeyAsync(const Model::DeleteStreamKeyRequest& request, const DeleteStreamKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the channel configuration for the specified channel ARN. See also
         * <a>BatchGetChannel</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/GetChannel">AWS API
         * Reference</a></p>
         */
        virtual Model::GetChannelOutcome GetChannel(const Model::GetChannelRequest& request) const;

        /**
         * <p>Gets the channel configuration for the specified channel ARN. See also
         * <a>BatchGetChannel</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/GetChannel">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetChannelOutcomeCallable GetChannelCallable(const Model::GetChannelRequest& request) const;

        /**
         * <p>Gets the channel configuration for the specified channel ARN. See also
         * <a>BatchGetChannel</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/GetChannel">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetChannelAsync(const Model::GetChannelRequest& request, const GetChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a specified playback authorization key pair and returns the
         * <code>arn</code> and <code>fingerprint</code>. The <code>privateKey</code> held
         * by the caller can be used to generate viewer authorization tokens, to grant
         * viewers access to private channels. For more information, see <a
         * href="https://docs.aws.amazon.com/ivs/latest/userguide/private-channels.html">Setting
         * Up Private Channels</a> in the <i>Amazon IVS User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/GetPlaybackKeyPair">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPlaybackKeyPairOutcome GetPlaybackKeyPair(const Model::GetPlaybackKeyPairRequest& request) const;

        /**
         * <p>Gets a specified playback authorization key pair and returns the
         * <code>arn</code> and <code>fingerprint</code>. The <code>privateKey</code> held
         * by the caller can be used to generate viewer authorization tokens, to grant
         * viewers access to private channels. For more information, see <a
         * href="https://docs.aws.amazon.com/ivs/latest/userguide/private-channels.html">Setting
         * Up Private Channels</a> in the <i>Amazon IVS User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/GetPlaybackKeyPair">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetPlaybackKeyPairOutcomeCallable GetPlaybackKeyPairCallable(const Model::GetPlaybackKeyPairRequest& request) const;

        /**
         * <p>Gets a specified playback authorization key pair and returns the
         * <code>arn</code> and <code>fingerprint</code>. The <code>privateKey</code> held
         * by the caller can be used to generate viewer authorization tokens, to grant
         * viewers access to private channels. For more information, see <a
         * href="https://docs.aws.amazon.com/ivs/latest/userguide/private-channels.html">Setting
         * Up Private Channels</a> in the <i>Amazon IVS User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/GetPlaybackKeyPair">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetPlaybackKeyPairAsync(const Model::GetPlaybackKeyPairRequest& request, const GetPlaybackKeyPairResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the recording configuration for the specified ARN.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/GetRecordingConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRecordingConfigurationOutcome GetRecordingConfiguration(const Model::GetRecordingConfigurationRequest& request) const;

        /**
         * <p>Gets the recording configuration for the specified ARN.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/GetRecordingConfiguration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRecordingConfigurationOutcomeCallable GetRecordingConfigurationCallable(const Model::GetRecordingConfigurationRequest& request) const;

        /**
         * <p>Gets the recording configuration for the specified ARN.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/GetRecordingConfiguration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetRecordingConfigurationAsync(const Model::GetRecordingConfigurationRequest& request, const GetRecordingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about the active (live) stream on a specified
         * channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/GetStream">AWS API
         * Reference</a></p>
         */
        virtual Model::GetStreamOutcome GetStream(const Model::GetStreamRequest& request) const;

        /**
         * <p>Gets information about the active (live) stream on a specified
         * channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/GetStream">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetStreamOutcomeCallable GetStreamCallable(const Model::GetStreamRequest& request) const;

        /**
         * <p>Gets information about the active (live) stream on a specified
         * channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/GetStream">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetStreamAsync(const Model::GetStreamRequest& request, const GetStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets stream-key information for a specified ARN.</p><p><h3>See Also:</h3>  
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/GetStreamKey">AWS
         * API Reference</a></p>
         */
        virtual Model::GetStreamKeyOutcome GetStreamKey(const Model::GetStreamKeyRequest& request) const;

        /**
         * <p>Gets stream-key information for a specified ARN.</p><p><h3>See Also:</h3>  
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/GetStreamKey">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetStreamKeyOutcomeCallable GetStreamKeyCallable(const Model::GetStreamKeyRequest& request) const;

        /**
         * <p>Gets stream-key information for a specified ARN.</p><p><h3>See Also:</h3>  
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/GetStreamKey">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetStreamKeyAsync(const Model::GetStreamKeyRequest& request, const GetStreamKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets metadata on a specified stream.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/GetStreamSession">AWS
         * API Reference</a></p>
         */
        virtual Model::GetStreamSessionOutcome GetStreamSession(const Model::GetStreamSessionRequest& request) const;

        /**
         * <p>Gets metadata on a specified stream.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/GetStreamSession">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetStreamSessionOutcomeCallable GetStreamSessionCallable(const Model::GetStreamSessionRequest& request) const;

        /**
         * <p>Gets metadata on a specified stream.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/GetStreamSession">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetStreamSessionAsync(const Model::GetStreamSessionRequest& request, const GetStreamSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Imports the public portion of a new key pair and returns its <code>arn</code>
         * and <code>fingerprint</code>. The <code>privateKey</code> can then be used to
         * generate viewer authorization tokens, to grant viewers access to private
         * channels. For more information, see <a
         * href="https://docs.aws.amazon.com/ivs/latest/userguide/private-channels.html">Setting
         * Up Private Channels</a> in the <i>Amazon IVS User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/ImportPlaybackKeyPair">AWS
         * API Reference</a></p>
         */
        virtual Model::ImportPlaybackKeyPairOutcome ImportPlaybackKeyPair(const Model::ImportPlaybackKeyPairRequest& request) const;

        /**
         * <p>Imports the public portion of a new key pair and returns its <code>arn</code>
         * and <code>fingerprint</code>. The <code>privateKey</code> can then be used to
         * generate viewer authorization tokens, to grant viewers access to private
         * channels. For more information, see <a
         * href="https://docs.aws.amazon.com/ivs/latest/userguide/private-channels.html">Setting
         * Up Private Channels</a> in the <i>Amazon IVS User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/ImportPlaybackKeyPair">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ImportPlaybackKeyPairOutcomeCallable ImportPlaybackKeyPairCallable(const Model::ImportPlaybackKeyPairRequest& request) const;

        /**
         * <p>Imports the public portion of a new key pair and returns its <code>arn</code>
         * and <code>fingerprint</code>. The <code>privateKey</code> can then be used to
         * generate viewer authorization tokens, to grant viewers access to private
         * channels. For more information, see <a
         * href="https://docs.aws.amazon.com/ivs/latest/userguide/private-channels.html">Setting
         * Up Private Channels</a> in the <i>Amazon IVS User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/ImportPlaybackKeyPair">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ImportPlaybackKeyPairAsync(const Model::ImportPlaybackKeyPairRequest& request, const ImportPlaybackKeyPairResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets summary information about all channels in your account, in the Amazon
         * Web Services region where the API request is processed. This list can be
         * filtered to match a specified name or recording-configuration ARN. Filters are
         * mutually exclusive and cannot be used together. If you try to use both filters,
         * you will get an error (409 ConflictException).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/ListChannels">AWS
         * API Reference</a></p>
         */
        virtual Model::ListChannelsOutcome ListChannels(const Model::ListChannelsRequest& request) const;

        /**
         * <p>Gets summary information about all channels in your account, in the Amazon
         * Web Services region where the API request is processed. This list can be
         * filtered to match a specified name or recording-configuration ARN. Filters are
         * mutually exclusive and cannot be used together. If you try to use both filters,
         * you will get an error (409 ConflictException).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/ListChannels">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListChannelsOutcomeCallable ListChannelsCallable(const Model::ListChannelsRequest& request) const;

        /**
         * <p>Gets summary information about all channels in your account, in the Amazon
         * Web Services region where the API request is processed. This list can be
         * filtered to match a specified name or recording-configuration ARN. Filters are
         * mutually exclusive and cannot be used together. If you try to use both filters,
         * you will get an error (409 ConflictException).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/ListChannels">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListChannelsAsync(const Model::ListChannelsRequest& request, const ListChannelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets summary information about playback key pairs. For more information, see
         * <a
         * href="https://docs.aws.amazon.com/ivs/latest/userguide/private-channels.html">Setting
         * Up Private Channels</a> in the <i>Amazon IVS User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/ListPlaybackKeyPairs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPlaybackKeyPairsOutcome ListPlaybackKeyPairs(const Model::ListPlaybackKeyPairsRequest& request) const;

        /**
         * <p>Gets summary information about playback key pairs. For more information, see
         * <a
         * href="https://docs.aws.amazon.com/ivs/latest/userguide/private-channels.html">Setting
         * Up Private Channels</a> in the <i>Amazon IVS User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/ListPlaybackKeyPairs">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPlaybackKeyPairsOutcomeCallable ListPlaybackKeyPairsCallable(const Model::ListPlaybackKeyPairsRequest& request) const;

        /**
         * <p>Gets summary information about playback key pairs. For more information, see
         * <a
         * href="https://docs.aws.amazon.com/ivs/latest/userguide/private-channels.html">Setting
         * Up Private Channels</a> in the <i>Amazon IVS User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/ListPlaybackKeyPairs">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPlaybackKeyPairsAsync(const Model::ListPlaybackKeyPairsRequest& request, const ListPlaybackKeyPairsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets summary information about all recording configurations in your account,
         * in the Amazon Web Services region where the API request is
         * processed.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/ListRecordingConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRecordingConfigurationsOutcome ListRecordingConfigurations(const Model::ListRecordingConfigurationsRequest& request) const;

        /**
         * <p>Gets summary information about all recording configurations in your account,
         * in the Amazon Web Services region where the API request is
         * processed.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/ListRecordingConfigurations">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListRecordingConfigurationsOutcomeCallable ListRecordingConfigurationsCallable(const Model::ListRecordingConfigurationsRequest& request) const;

        /**
         * <p>Gets summary information about all recording configurations in your account,
         * in the Amazon Web Services region where the API request is
         * processed.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/ListRecordingConfigurations">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListRecordingConfigurationsAsync(const Model::ListRecordingConfigurationsRequest& request, const ListRecordingConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets summary information about stream keys for the specified
         * channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/ListStreamKeys">AWS
         * API Reference</a></p>
         */
        virtual Model::ListStreamKeysOutcome ListStreamKeys(const Model::ListStreamKeysRequest& request) const;

        /**
         * <p>Gets summary information about stream keys for the specified
         * channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/ListStreamKeys">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListStreamKeysOutcomeCallable ListStreamKeysCallable(const Model::ListStreamKeysRequest& request) const;

        /**
         * <p>Gets summary information about stream keys for the specified
         * channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/ListStreamKeys">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListStreamKeysAsync(const Model::ListStreamKeysRequest& request, const ListStreamKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a summary of current and previous streams for a specified channel in
         * your account, in the AWS region where the API request is
         * processed.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/ListStreamSessions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListStreamSessionsOutcome ListStreamSessions(const Model::ListStreamSessionsRequest& request) const;

        /**
         * <p>Gets a summary of current and previous streams for a specified channel in
         * your account, in the AWS region where the API request is
         * processed.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/ListStreamSessions">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListStreamSessionsOutcomeCallable ListStreamSessionsCallable(const Model::ListStreamSessionsRequest& request) const;

        /**
         * <p>Gets a summary of current and previous streams for a specified channel in
         * your account, in the AWS region where the API request is
         * processed.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/ListStreamSessions">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListStreamSessionsAsync(const Model::ListStreamSessionsRequest& request, const ListStreamSessionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets summary information about live streams in your account, in the Amazon
         * Web Services region where the API request is processed.</p><p><h3>See Also:</h3>
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/ListStreams">AWS
         * API Reference</a></p>
         */
        virtual Model::ListStreamsOutcome ListStreams(const Model::ListStreamsRequest& request) const;

        /**
         * <p>Gets summary information about live streams in your account, in the Amazon
         * Web Services region where the API request is processed.</p><p><h3>See Also:</h3>
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/ListStreams">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListStreamsOutcomeCallable ListStreamsCallable(const Model::ListStreamsRequest& request) const;

        /**
         * <p>Gets summary information about live streams in your account, in the Amazon
         * Web Services region where the API request is processed.</p><p><h3>See Also:</h3>
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/ListStreams">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListStreamsAsync(const Model::ListStreamsRequest& request, const ListStreamsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about Amazon Web Services tags for the specified
         * ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Gets information about Amazon Web Services tags for the specified
         * ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * <p>Gets information about Amazon Web Services tags for the specified
         * ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/ListTagsForResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Inserts metadata into the active stream of the specified channel. At most 5
         * requests per second per channel are allowed, each with a maximum 1 KB payload.
         * (If 5 TPS is not sufficient for your needs, we recommend batching your data into
         * a single PutMetadata call.) At most 155 requests per second per account are
         * allowed. Also see <a
         * href="https://docs.aws.amazon.com/ivs/latest/userguide/metadata.html">Embedding
         * Metadata within a Video Stream</a> in the <i>Amazon IVS User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/PutMetadata">AWS API
         * Reference</a></p>
         */
        virtual Model::PutMetadataOutcome PutMetadata(const Model::PutMetadataRequest& request) const;

        /**
         * <p>Inserts metadata into the active stream of the specified channel. At most 5
         * requests per second per channel are allowed, each with a maximum 1 KB payload.
         * (If 5 TPS is not sufficient for your needs, we recommend batching your data into
         * a single PutMetadata call.) At most 155 requests per second per account are
         * allowed. Also see <a
         * href="https://docs.aws.amazon.com/ivs/latest/userguide/metadata.html">Embedding
         * Metadata within a Video Stream</a> in the <i>Amazon IVS User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/PutMetadata">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutMetadataOutcomeCallable PutMetadataCallable(const Model::PutMetadataRequest& request) const;

        /**
         * <p>Inserts metadata into the active stream of the specified channel. At most 5
         * requests per second per channel are allowed, each with a maximum 1 KB payload.
         * (If 5 TPS is not sufficient for your needs, we recommend batching your data into
         * a single PutMetadata call.) At most 155 requests per second per account are
         * allowed. Also see <a
         * href="https://docs.aws.amazon.com/ivs/latest/userguide/metadata.html">Embedding
         * Metadata within a Video Stream</a> in the <i>Amazon IVS User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/PutMetadata">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutMetadataAsync(const Model::PutMetadataRequest& request, const PutMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disconnects the incoming RTMPS stream for the specified channel. Can be used
         * in conjunction with <a>DeleteStreamKey</a> to prevent further streaming to a
         * channel.</p>  <p>Many streaming client-software libraries automatically
         * reconnect a dropped RTMPS session, so to stop the stream permanently, you may
         * want to first revoke the <code>streamKey</code> attached to the channel.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/StopStream">AWS API
         * Reference</a></p>
         */
        virtual Model::StopStreamOutcome StopStream(const Model::StopStreamRequest& request) const;

        /**
         * <p>Disconnects the incoming RTMPS stream for the specified channel. Can be used
         * in conjunction with <a>DeleteStreamKey</a> to prevent further streaming to a
         * channel.</p>  <p>Many streaming client-software libraries automatically
         * reconnect a dropped RTMPS session, so to stop the stream permanently, you may
         * want to first revoke the <code>streamKey</code> attached to the channel.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/StopStream">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopStreamOutcomeCallable StopStreamCallable(const Model::StopStreamRequest& request) const;

        /**
         * <p>Disconnects the incoming RTMPS stream for the specified channel. Can be used
         * in conjunction with <a>DeleteStreamKey</a> to prevent further streaming to a
         * channel.</p>  <p>Many streaming client-software libraries automatically
         * reconnect a dropped RTMPS session, so to stop the stream permanently, you may
         * want to first revoke the <code>streamKey</code> attached to the channel.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/StopStream">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopStreamAsync(const Model::StopStreamRequest& request, const StopStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds or updates tags for the Amazon Web Services resource with the specified
         * ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/TagResource">AWS API
         * Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * <p>Adds or updates tags for the Amazon Web Services resource with the specified
         * ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/TagResource">AWS API
         * Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * <p>Adds or updates tags for the Amazon Web Services resource with the specified
         * ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/TagResource">AWS API
         * Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes tags from the resource with the specified ARN.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes tags from the resource with the specified ARN.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/UntagResource">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * <p>Removes tags from the resource with the specified ARN.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/UntagResource">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a channel's configuration. This does not affect an ongoing stream of
         * this channel. You must stop and restart the stream for the changes to take
         * effect.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/UpdateChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateChannelOutcome UpdateChannel(const Model::UpdateChannelRequest& request) const;

        /**
         * <p>Updates a channel's configuration. This does not affect an ongoing stream of
         * this channel. You must stop and restart the stream for the changes to take
         * effect.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/UpdateChannel">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateChannelOutcomeCallable UpdateChannelCallable(const Model::UpdateChannelRequest& request) const;

        /**
         * <p>Updates a channel's configuration. This does not affect an ongoing stream of
         * this channel. You must stop and restart the stream for the changes to take
         * effect.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/UpdateChannel">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateChannelAsync(const Model::UpdateChannelRequest& request, const UpdateChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void BatchGetChannelAsyncHelper(const Model::BatchGetChannelRequest& request, const BatchGetChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void BatchGetStreamKeyAsyncHelper(const Model::BatchGetStreamKeyRequest& request, const BatchGetStreamKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateChannelAsyncHelper(const Model::CreateChannelRequest& request, const CreateChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateRecordingConfigurationAsyncHelper(const Model::CreateRecordingConfigurationRequest& request, const CreateRecordingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateStreamKeyAsyncHelper(const Model::CreateStreamKeyRequest& request, const CreateStreamKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteChannelAsyncHelper(const Model::DeleteChannelRequest& request, const DeleteChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeletePlaybackKeyPairAsyncHelper(const Model::DeletePlaybackKeyPairRequest& request, const DeletePlaybackKeyPairResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteRecordingConfigurationAsyncHelper(const Model::DeleteRecordingConfigurationRequest& request, const DeleteRecordingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteStreamKeyAsyncHelper(const Model::DeleteStreamKeyRequest& request, const DeleteStreamKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetChannelAsyncHelper(const Model::GetChannelRequest& request, const GetChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetPlaybackKeyPairAsyncHelper(const Model::GetPlaybackKeyPairRequest& request, const GetPlaybackKeyPairResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetRecordingConfigurationAsyncHelper(const Model::GetRecordingConfigurationRequest& request, const GetRecordingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetStreamAsyncHelper(const Model::GetStreamRequest& request, const GetStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetStreamKeyAsyncHelper(const Model::GetStreamKeyRequest& request, const GetStreamKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetStreamSessionAsyncHelper(const Model::GetStreamSessionRequest& request, const GetStreamSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ImportPlaybackKeyPairAsyncHelper(const Model::ImportPlaybackKeyPairRequest& request, const ImportPlaybackKeyPairResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListChannelsAsyncHelper(const Model::ListChannelsRequest& request, const ListChannelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListPlaybackKeyPairsAsyncHelper(const Model::ListPlaybackKeyPairsRequest& request, const ListPlaybackKeyPairsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListRecordingConfigurationsAsyncHelper(const Model::ListRecordingConfigurationsRequest& request, const ListRecordingConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListStreamKeysAsyncHelper(const Model::ListStreamKeysRequest& request, const ListStreamKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListStreamSessionsAsyncHelper(const Model::ListStreamSessionsRequest& request, const ListStreamSessionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListStreamsAsyncHelper(const Model::ListStreamsRequest& request, const ListStreamsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListTagsForResourceAsyncHelper(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutMetadataAsyncHelper(const Model::PutMetadataRequest& request, const PutMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopStreamAsyncHelper(const Model::StopStreamRequest& request, const StopStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void TagResourceAsyncHelper(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UntagResourceAsyncHelper(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateChannelAsyncHelper(const Model::UpdateChannelRequest& request, const UpdateChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace IVS
} // namespace Aws
