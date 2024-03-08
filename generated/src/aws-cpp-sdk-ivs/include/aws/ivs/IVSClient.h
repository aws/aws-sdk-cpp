/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs/IVS_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ivs/IVSServiceClientModel.h>

namespace Aws
{
namespace IVS
{
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
   * Getting Started with Amazon IVS</a>):</p> <ul> <li> <p> <b>Channel</b> — Stores
   * configuration data related to your live stream. You first create a channel and
   * then use the channel’s stream key to start your live stream. See the Channel
   * endpoints for more information. </p> </li> <li> <p> <b>Stream key</b> — An
   * identifier assigned by Amazon IVS when you create a channel, which is then used
   * to authorize streaming. See the StreamKey endpoints for more information. <i>
   * <b>Treat the stream key like a secret, since it allows anyone to stream to the
   * channel.</b> </i> </p> </li> <li> <p> <b>Playback key pair</b> — Video playback
   * may be restricted using playback-authorization tokens, which use public-key
   * encryption. A playback key pair is the public-private pair of keys used to sign
   * and validate the playback-authorization token. See the PlaybackKeyPair endpoints
   * for more information.</p> </li> <li> <p> <b>Recording configuration</b> — Stores
   * configuration related to recording a live stream and where to store the recorded
   * content. Multiple channels can reference the same recording configuration. See
   * the Recording Configuration endpoints for more information.</p> </li> <li> <p>
   * <b>Playback restriction policy</b> — Restricts playback by countries and/or
   * origin sites. See the Playback Restriction Policy endpoints for more
   * information.</p> </li> </ul> <p> <b>Tagging</b> </p> <p>A <i>tag</i> is a
   * metadata label that you assign to an Amazon Web Services resource. A tag
   * comprises a <i>key</i> and a <i>value</i>, both set by you. For example, you
   * might set a tag as <code>topic:nature</code> to label a particular video
   * category. See <a
   * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
   * Amazon Web Services Resources</a> for more information, including restrictions
   * that apply to tags and "Tag naming limits and requirements"; Amazon IVS has no
   * service-specific constraints beyond what is documented there.</p> <p>Tags can
   * help you identify and organize your Amazon Web Services resources. For example,
   * you can use the same tag for different resources to indicate that they are
   * related. You can also use tags to manage access (see <a
   * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_tags.html"> Access
   * Tags</a>). </p> <p>The Amazon IVS API has these tag-related endpoints:
   * <a>TagResource</a>, <a>UntagResource</a>, and <a>ListTagsForResource</a>. The
   * following resources support tagging: Channels, Stream Keys, Playback Key Pairs,
   * and Recording Configurations.</p> <p>At most 50 tags can be applied to a
   * resource. </p> <p> <b>Authentication versus Authorization</b> </p> <p>Note the
   * differences between these concepts:</p> <ul> <li> <p> <i>Authentication</i> is
   * about verifying identity. You need to be authenticated to sign Amazon IVS API
   * requests.</p> </li> <li> <p> <i>Authorization</i> is about granting permissions.
   * Your IAM roles need to have permissions for Amazon IVS API requests. In
   * addition, authorization is needed to view <a
   * href="https://docs.aws.amazon.com/ivs/latest/userguide/private-channels.html">Amazon
   * IVS private channels</a>. (Private channels are channels that are enabled for
   * "playback authorization.")</p> </li> </ul> <p> <b>Authentication</b> </p> <p>All
   * Amazon IVS API requests must be authenticated with a signature. The Amazon Web
   * Services Command-Line Interface (CLI) and Amazon IVS Player SDKs take care of
   * signing the underlying API calls for you. However, if your application calls the
   * Amazon IVS API directly, it’s your responsibility to sign the requests.</p>
   * <p>You generate a signature using valid Amazon Web Services credentials that
   * have permission to perform the requested action. For example, you must sign
   * PutMetadata requests with a signature generated from a user account that has the
   * <code>ivs:PutMetadata</code> permission.</p> <p>For more information:</p> <ul>
   * <li> <p>Authentication and generating signatures — See <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/API/sig-v4-authenticating-requests.html">Authenticating
   * Requests (Amazon Web Services Signature Version 4)</a> in the <i>Amazon Web
   * Services General Reference</i>.</p> </li> <li> <p>Managing Amazon IVS
   * permissions — See <a
   * href="https://docs.aws.amazon.com/ivs/latest/userguide/security-iam.html">Identity
   * and Access Management</a> on the Security page of the <i>Amazon IVS User
   * Guide</i>.</p> </li> </ul> <p> <b>Amazon Resource Names (ARNs)</b> </p> <p>ARNs
   * uniquely identify AWS resources. An ARN is required when you need to specify a
   * resource unambiguously across all of AWS, such as in IAM policies and API calls.
   * For more information, see <a
   * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
   * Resource Names</a> in the <i>AWS General Reference</i>.</p> <p> <b>Channel
   * Endpoints</b> </p> <ul> <li> <p> <a>CreateChannel</a> — Creates a new channel
   * and an associated stream key to start streaming.</p> </li> <li> <p>
   * <a>GetChannel</a> — Gets the channel configuration for the specified channel
   * ARN.</p> </li> <li> <p> <a>BatchGetChannel</a> — Performs <a>GetChannel</a> on
   * multiple ARNs simultaneously.</p> </li> <li> <p> <a>ListChannels</a> — Gets
   * summary information about all channels in your account, in the Amazon Web
   * Services region where the API request is processed. This list can be filtered to
   * match a specified name or recording-configuration ARN. Filters are mutually
   * exclusive and cannot be used together. If you try to use both filters, you will
   * get an error (409 Conflict Exception).</p> </li> <li> <p> <a>UpdateChannel</a> —
   * Updates a channel's configuration. This does not affect an ongoing stream of
   * this channel. You must stop and restart the stream for the changes to take
   * effect.</p> </li> <li> <p> <a>DeleteChannel</a> — Deletes the specified
   * channel.</p> </li> </ul> <p> <b>Playback Restriction Policy Endpoints</b> </p>
   * <ul> <li> <p> <a>CreatePlaybackRestrictionPolicy</a> — Creates a new playback
   * restriction policy, for constraining playback by countries and/or origins.</p>
   * </li> <li> <p> <a>DeletePlaybackRestrictionPolicy</a> — Deletes the specified
   * playback restriction policy</p> </li> <li> <p>
   * <a>GetPlaybackRestrictionPolicy</a> — Gets the specified playback restriction
   * policy.</p> </li> <li> <p> <a>ListPlaybackRestrictionPolicies</a> — Gets summary
   * information about playback restriction policies.</p> </li> <li> <p>
   * <a>UpdatePlaybackRestrictionPolicy</a> — Updates a specified playback
   * restriction policy.</p> </li> </ul> <p> <b>Private Channel Endpoints</b> </p>
   * <p>For more information, see <a
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
   * <code>privateKey</code>.</p> </li> <li> <p> <a>StartViewerSessionRevocation</a>
   * — Starts the process of revoking the viewer session associated with a specified
   * channel ARN and viewer ID. Optionally, you can provide a version to revoke
   * viewer sessions less than and including that version.</p> </li> <li> <p>
   * <a>BatchStartViewerSessionRevocation</a> — Performs
   * <a>StartViewerSessionRevocation</a> on multiple channel ARN and viewer ID pairs
   * simultaneously.</p> </li> </ul> <p> <b>RecordingConfiguration Endpoints</b> </p>
   * <ul> <li> <p> <a>CreateRecordingConfiguration</a> — Creates a new recording
   * configuration, used to enable recording to Amazon S3.</p> </li> <li> <p>
   * <a>GetRecordingConfiguration</a> — Gets the recording-configuration metadata for
   * the specified ARN.</p> </li> <li> <p> <a>ListRecordingConfigurations</a> — Gets
   * summary information about all recording configurations in your account, in the
   * Amazon Web Services region where the API request is processed.</p> </li> <li>
   * <p> <a>DeleteRecordingConfiguration</a> — Deletes the recording configuration
   * for the specified ARN.</p> </li> </ul> <p> <b>Stream Endpoints</b> </p> <ul>
   * <li> <p> <a>GetStream</a> — Gets information about the active (live) stream on a
   * specified channel.</p> </li> <li> <p> <a>GetStreamSession</a> — Gets metadata on
   * a specified stream.</p> </li> <li> <p> <a>ListStreams</a> — Gets summary
   * information about live streams in your account, in the Amazon Web Services
   * region where the API request is processed.</p> </li> <li> <p>
   * <a>ListStreamSessions</a> — Gets a summary of current and previous streams for a
   * specified channel in your account, in the AWS region where the API request is
   * processed.</p> </li> <li> <p> <a>StopStream</a> — Disconnects the incoming RTMPS
   * stream for the specified channel. Can be used in conjunction with
   * <a>DeleteStreamKey</a> to prevent further streaming to a channel.</p> </li> <li>
   * <p> <a>PutMetadata</a> — Inserts metadata into the active stream of the
   * specified channel. At most 5 requests per second per channel are allowed, each
   * with a maximum 1 KB payload. (If 5 TPS is not sufficient for your needs, we
   * recommend batching your data into a single PutMetadata call.) At most 155
   * requests per second per account are allowed.</p> </li> </ul> <p> <b>StreamKey
   * Endpoints</b> </p> <ul> <li> <p> <a>CreateStreamKey</a> — Creates a stream key,
   * used to initiate a stream, for the specified channel ARN.</p> </li> <li> <p>
   * <a>GetStreamKey</a> — Gets stream key information for the specified ARN.</p>
   * </li> <li> <p> <a>BatchGetStreamKey</a> — Performs <a>GetStreamKey</a> on
   * multiple ARNs simultaneously.</p> </li> <li> <p> <a>ListStreamKeys</a> — Gets
   * summary information about stream keys for the specified channel.</p> </li> <li>
   * <p> <a>DeleteStreamKey</a> — Deletes the stream key for the specified ARN, so it
   * can no longer be used to stream.</p> </li> </ul> <p> <b>Amazon Web Services Tags
   * Endpoints</b> </p> <ul> <li> <p> <a>TagResource</a> — Adds or updates tags for
   * the Amazon Web Services resource with the specified ARN.</p> </li> <li> <p>
   * <a>UntagResource</a> — Removes tags from the resource with the specified
   * ARN.</p> </li> <li> <p> <a>ListTagsForResource</a> — Gets information about
   * Amazon Web Services tags for the specified ARN.</p> </li> </ul>
   */
  class AWS_IVS_API IVSClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<IVSClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef IVSClientConfiguration ClientConfigurationType;
      typedef IVSEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IVSClient(const Aws::IVS::IVSClientConfiguration& clientConfiguration = Aws::IVS::IVSClientConfiguration(),
                  std::shared_ptr<IVSEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IVSClient(const Aws::Auth::AWSCredentials& credentials,
                  std::shared_ptr<IVSEndpointProviderBase> endpointProvider = nullptr,
                  const Aws::IVS::IVSClientConfiguration& clientConfiguration = Aws::IVS::IVSClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        IVSClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                  std::shared_ptr<IVSEndpointProviderBase> endpointProvider = nullptr,
                  const Aws::IVS::IVSClientConfiguration& clientConfiguration = Aws::IVS::IVSClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IVSClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IVSClient(const Aws::Auth::AWSCredentials& credentials,
                  const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        IVSClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                  const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~IVSClient();

        /**
         * <p>Performs <a>GetChannel</a> on multiple ARNs simultaneously.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/BatchGetChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetChannelOutcome BatchGetChannel(const Model::BatchGetChannelRequest& request) const;

        /**
         * A Callable wrapper for BatchGetChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchGetChannelRequestT = Model::BatchGetChannelRequest>
        Model::BatchGetChannelOutcomeCallable BatchGetChannelCallable(const BatchGetChannelRequestT& request) const
        {
            return SubmitCallable(&IVSClient::BatchGetChannel, request);
        }

        /**
         * An Async wrapper for BatchGetChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchGetChannelRequestT = Model::BatchGetChannelRequest>
        void BatchGetChannelAsync(const BatchGetChannelRequestT& request, const BatchGetChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IVSClient::BatchGetChannel, request, handler, context);
        }

        /**
         * <p>Performs <a>GetStreamKey</a> on multiple ARNs simultaneously.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/BatchGetStreamKey">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetStreamKeyOutcome BatchGetStreamKey(const Model::BatchGetStreamKeyRequest& request) const;

        /**
         * A Callable wrapper for BatchGetStreamKey that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchGetStreamKeyRequestT = Model::BatchGetStreamKeyRequest>
        Model::BatchGetStreamKeyOutcomeCallable BatchGetStreamKeyCallable(const BatchGetStreamKeyRequestT& request) const
        {
            return SubmitCallable(&IVSClient::BatchGetStreamKey, request);
        }

        /**
         * An Async wrapper for BatchGetStreamKey that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchGetStreamKeyRequestT = Model::BatchGetStreamKeyRequest>
        void BatchGetStreamKeyAsync(const BatchGetStreamKeyRequestT& request, const BatchGetStreamKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IVSClient::BatchGetStreamKey, request, handler, context);
        }

        /**
         * <p>Performs <a>StartViewerSessionRevocation</a> on multiple channel ARN and
         * viewer ID pairs simultaneously.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/BatchStartViewerSessionRevocation">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchStartViewerSessionRevocationOutcome BatchStartViewerSessionRevocation(const Model::BatchStartViewerSessionRevocationRequest& request) const;

        /**
         * A Callable wrapper for BatchStartViewerSessionRevocation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchStartViewerSessionRevocationRequestT = Model::BatchStartViewerSessionRevocationRequest>
        Model::BatchStartViewerSessionRevocationOutcomeCallable BatchStartViewerSessionRevocationCallable(const BatchStartViewerSessionRevocationRequestT& request) const
        {
            return SubmitCallable(&IVSClient::BatchStartViewerSessionRevocation, request);
        }

        /**
         * An Async wrapper for BatchStartViewerSessionRevocation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchStartViewerSessionRevocationRequestT = Model::BatchStartViewerSessionRevocationRequest>
        void BatchStartViewerSessionRevocationAsync(const BatchStartViewerSessionRevocationRequestT& request, const BatchStartViewerSessionRevocationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IVSClient::BatchStartViewerSessionRevocation, request, handler, context);
        }

        /**
         * <p>Creates a new channel and an associated stream key to start
         * streaming.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/CreateChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateChannelOutcome CreateChannel(const Model::CreateChannelRequest& request) const;

        /**
         * A Callable wrapper for CreateChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateChannelRequestT = Model::CreateChannelRequest>
        Model::CreateChannelOutcomeCallable CreateChannelCallable(const CreateChannelRequestT& request) const
        {
            return SubmitCallable(&IVSClient::CreateChannel, request);
        }

        /**
         * An Async wrapper for CreateChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateChannelRequestT = Model::CreateChannelRequest>
        void CreateChannelAsync(const CreateChannelRequestT& request, const CreateChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IVSClient::CreateChannel, request, handler, context);
        }

        /**
         * <p>Creates a new playback restriction policy, for constraining playback by
         * countries and/or origins.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/CreatePlaybackRestrictionPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePlaybackRestrictionPolicyOutcome CreatePlaybackRestrictionPolicy(const Model::CreatePlaybackRestrictionPolicyRequest& request) const;

        /**
         * A Callable wrapper for CreatePlaybackRestrictionPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreatePlaybackRestrictionPolicyRequestT = Model::CreatePlaybackRestrictionPolicyRequest>
        Model::CreatePlaybackRestrictionPolicyOutcomeCallable CreatePlaybackRestrictionPolicyCallable(const CreatePlaybackRestrictionPolicyRequestT& request) const
        {
            return SubmitCallable(&IVSClient::CreatePlaybackRestrictionPolicy, request);
        }

        /**
         * An Async wrapper for CreatePlaybackRestrictionPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreatePlaybackRestrictionPolicyRequestT = Model::CreatePlaybackRestrictionPolicyRequest>
        void CreatePlaybackRestrictionPolicyAsync(const CreatePlaybackRestrictionPolicyRequestT& request, const CreatePlaybackRestrictionPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IVSClient::CreatePlaybackRestrictionPolicy, request, handler, context);
        }

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
         * A Callable wrapper for CreateRecordingConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateRecordingConfigurationRequestT = Model::CreateRecordingConfigurationRequest>
        Model::CreateRecordingConfigurationOutcomeCallable CreateRecordingConfigurationCallable(const CreateRecordingConfigurationRequestT& request) const
        {
            return SubmitCallable(&IVSClient::CreateRecordingConfiguration, request);
        }

        /**
         * An Async wrapper for CreateRecordingConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateRecordingConfigurationRequestT = Model::CreateRecordingConfigurationRequest>
        void CreateRecordingConfigurationAsync(const CreateRecordingConfigurationRequestT& request, const CreateRecordingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IVSClient::CreateRecordingConfiguration, request, handler, context);
        }

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
         * A Callable wrapper for CreateStreamKey that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateStreamKeyRequestT = Model::CreateStreamKeyRequest>
        Model::CreateStreamKeyOutcomeCallable CreateStreamKeyCallable(const CreateStreamKeyRequestT& request) const
        {
            return SubmitCallable(&IVSClient::CreateStreamKey, request);
        }

        /**
         * An Async wrapper for CreateStreamKey that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateStreamKeyRequestT = Model::CreateStreamKeyRequest>
        void CreateStreamKeyAsync(const CreateStreamKeyRequestT& request, const CreateStreamKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IVSClient::CreateStreamKey, request, handler, context);
        }

        /**
         * <p>Deletes the specified channel and its associated stream keys.</p> <p>If you
         * try to delete a live channel, you will get an error (409 ConflictException). To
         * delete a channel that is live, call <a>StopStream</a>, wait for the Amazon
         * EventBridge "Stream End" event (to verify that the stream's state is no longer
         * Live), then call DeleteChannel. (See <a
         * href="https://docs.aws.amazon.com/ivs/latest/userguide/eventbridge.html"> Using
         * EventBridge with Amazon IVS</a>.) </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/DeleteChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteChannelOutcome DeleteChannel(const Model::DeleteChannelRequest& request) const;

        /**
         * A Callable wrapper for DeleteChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteChannelRequestT = Model::DeleteChannelRequest>
        Model::DeleteChannelOutcomeCallable DeleteChannelCallable(const DeleteChannelRequestT& request) const
        {
            return SubmitCallable(&IVSClient::DeleteChannel, request);
        }

        /**
         * An Async wrapper for DeleteChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteChannelRequestT = Model::DeleteChannelRequest>
        void DeleteChannelAsync(const DeleteChannelRequestT& request, const DeleteChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IVSClient::DeleteChannel, request, handler, context);
        }

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
         * A Callable wrapper for DeletePlaybackKeyPair that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeletePlaybackKeyPairRequestT = Model::DeletePlaybackKeyPairRequest>
        Model::DeletePlaybackKeyPairOutcomeCallable DeletePlaybackKeyPairCallable(const DeletePlaybackKeyPairRequestT& request) const
        {
            return SubmitCallable(&IVSClient::DeletePlaybackKeyPair, request);
        }

        /**
         * An Async wrapper for DeletePlaybackKeyPair that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeletePlaybackKeyPairRequestT = Model::DeletePlaybackKeyPairRequest>
        void DeletePlaybackKeyPairAsync(const DeletePlaybackKeyPairRequestT& request, const DeletePlaybackKeyPairResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IVSClient::DeletePlaybackKeyPair, request, handler, context);
        }

        /**
         * <p>Deletes the specified playback restriction policy.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/DeletePlaybackRestrictionPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePlaybackRestrictionPolicyOutcome DeletePlaybackRestrictionPolicy(const Model::DeletePlaybackRestrictionPolicyRequest& request) const;

        /**
         * A Callable wrapper for DeletePlaybackRestrictionPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeletePlaybackRestrictionPolicyRequestT = Model::DeletePlaybackRestrictionPolicyRequest>
        Model::DeletePlaybackRestrictionPolicyOutcomeCallable DeletePlaybackRestrictionPolicyCallable(const DeletePlaybackRestrictionPolicyRequestT& request) const
        {
            return SubmitCallable(&IVSClient::DeletePlaybackRestrictionPolicy, request);
        }

        /**
         * An Async wrapper for DeletePlaybackRestrictionPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeletePlaybackRestrictionPolicyRequestT = Model::DeletePlaybackRestrictionPolicyRequest>
        void DeletePlaybackRestrictionPolicyAsync(const DeletePlaybackRestrictionPolicyRequestT& request, const DeletePlaybackRestrictionPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IVSClient::DeletePlaybackRestrictionPolicy, request, handler, context);
        }

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
         * A Callable wrapper for DeleteRecordingConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteRecordingConfigurationRequestT = Model::DeleteRecordingConfigurationRequest>
        Model::DeleteRecordingConfigurationOutcomeCallable DeleteRecordingConfigurationCallable(const DeleteRecordingConfigurationRequestT& request) const
        {
            return SubmitCallable(&IVSClient::DeleteRecordingConfiguration, request);
        }

        /**
         * An Async wrapper for DeleteRecordingConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteRecordingConfigurationRequestT = Model::DeleteRecordingConfigurationRequest>
        void DeleteRecordingConfigurationAsync(const DeleteRecordingConfigurationRequestT& request, const DeleteRecordingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IVSClient::DeleteRecordingConfiguration, request, handler, context);
        }

        /**
         * <p>Deletes the stream key for the specified ARN, so it can no longer be used to
         * stream.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/DeleteStreamKey">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteStreamKeyOutcome DeleteStreamKey(const Model::DeleteStreamKeyRequest& request) const;

        /**
         * A Callable wrapper for DeleteStreamKey that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteStreamKeyRequestT = Model::DeleteStreamKeyRequest>
        Model::DeleteStreamKeyOutcomeCallable DeleteStreamKeyCallable(const DeleteStreamKeyRequestT& request) const
        {
            return SubmitCallable(&IVSClient::DeleteStreamKey, request);
        }

        /**
         * An Async wrapper for DeleteStreamKey that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteStreamKeyRequestT = Model::DeleteStreamKeyRequest>
        void DeleteStreamKeyAsync(const DeleteStreamKeyRequestT& request, const DeleteStreamKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IVSClient::DeleteStreamKey, request, handler, context);
        }

        /**
         * <p>Gets the channel configuration for the specified channel ARN. See also
         * <a>BatchGetChannel</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/GetChannel">AWS API
         * Reference</a></p>
         */
        virtual Model::GetChannelOutcome GetChannel(const Model::GetChannelRequest& request) const;

        /**
         * A Callable wrapper for GetChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetChannelRequestT = Model::GetChannelRequest>
        Model::GetChannelOutcomeCallable GetChannelCallable(const GetChannelRequestT& request) const
        {
            return SubmitCallable(&IVSClient::GetChannel, request);
        }

        /**
         * An Async wrapper for GetChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetChannelRequestT = Model::GetChannelRequest>
        void GetChannelAsync(const GetChannelRequestT& request, const GetChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IVSClient::GetChannel, request, handler, context);
        }

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
         * A Callable wrapper for GetPlaybackKeyPair that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetPlaybackKeyPairRequestT = Model::GetPlaybackKeyPairRequest>
        Model::GetPlaybackKeyPairOutcomeCallable GetPlaybackKeyPairCallable(const GetPlaybackKeyPairRequestT& request) const
        {
            return SubmitCallable(&IVSClient::GetPlaybackKeyPair, request);
        }

        /**
         * An Async wrapper for GetPlaybackKeyPair that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetPlaybackKeyPairRequestT = Model::GetPlaybackKeyPairRequest>
        void GetPlaybackKeyPairAsync(const GetPlaybackKeyPairRequestT& request, const GetPlaybackKeyPairResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IVSClient::GetPlaybackKeyPair, request, handler, context);
        }

        /**
         * <p>Gets the specified playback restriction policy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/GetPlaybackRestrictionPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPlaybackRestrictionPolicyOutcome GetPlaybackRestrictionPolicy(const Model::GetPlaybackRestrictionPolicyRequest& request) const;

        /**
         * A Callable wrapper for GetPlaybackRestrictionPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetPlaybackRestrictionPolicyRequestT = Model::GetPlaybackRestrictionPolicyRequest>
        Model::GetPlaybackRestrictionPolicyOutcomeCallable GetPlaybackRestrictionPolicyCallable(const GetPlaybackRestrictionPolicyRequestT& request) const
        {
            return SubmitCallable(&IVSClient::GetPlaybackRestrictionPolicy, request);
        }

        /**
         * An Async wrapper for GetPlaybackRestrictionPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetPlaybackRestrictionPolicyRequestT = Model::GetPlaybackRestrictionPolicyRequest>
        void GetPlaybackRestrictionPolicyAsync(const GetPlaybackRestrictionPolicyRequestT& request, const GetPlaybackRestrictionPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IVSClient::GetPlaybackRestrictionPolicy, request, handler, context);
        }

        /**
         * <p>Gets the recording configuration for the specified ARN.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/GetRecordingConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRecordingConfigurationOutcome GetRecordingConfiguration(const Model::GetRecordingConfigurationRequest& request) const;

        /**
         * A Callable wrapper for GetRecordingConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetRecordingConfigurationRequestT = Model::GetRecordingConfigurationRequest>
        Model::GetRecordingConfigurationOutcomeCallable GetRecordingConfigurationCallable(const GetRecordingConfigurationRequestT& request) const
        {
            return SubmitCallable(&IVSClient::GetRecordingConfiguration, request);
        }

        /**
         * An Async wrapper for GetRecordingConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetRecordingConfigurationRequestT = Model::GetRecordingConfigurationRequest>
        void GetRecordingConfigurationAsync(const GetRecordingConfigurationRequestT& request, const GetRecordingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IVSClient::GetRecordingConfiguration, request, handler, context);
        }

        /**
         * <p>Gets information about the active (live) stream on a specified
         * channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/GetStream">AWS API
         * Reference</a></p>
         */
        virtual Model::GetStreamOutcome GetStream(const Model::GetStreamRequest& request) const;

        /**
         * A Callable wrapper for GetStream that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetStreamRequestT = Model::GetStreamRequest>
        Model::GetStreamOutcomeCallable GetStreamCallable(const GetStreamRequestT& request) const
        {
            return SubmitCallable(&IVSClient::GetStream, request);
        }

        /**
         * An Async wrapper for GetStream that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetStreamRequestT = Model::GetStreamRequest>
        void GetStreamAsync(const GetStreamRequestT& request, const GetStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IVSClient::GetStream, request, handler, context);
        }

        /**
         * <p>Gets stream-key information for a specified ARN.</p><p><h3>See Also:</h3>  
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/GetStreamKey">AWS
         * API Reference</a></p>
         */
        virtual Model::GetStreamKeyOutcome GetStreamKey(const Model::GetStreamKeyRequest& request) const;

        /**
         * A Callable wrapper for GetStreamKey that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetStreamKeyRequestT = Model::GetStreamKeyRequest>
        Model::GetStreamKeyOutcomeCallable GetStreamKeyCallable(const GetStreamKeyRequestT& request) const
        {
            return SubmitCallable(&IVSClient::GetStreamKey, request);
        }

        /**
         * An Async wrapper for GetStreamKey that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetStreamKeyRequestT = Model::GetStreamKeyRequest>
        void GetStreamKeyAsync(const GetStreamKeyRequestT& request, const GetStreamKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IVSClient::GetStreamKey, request, handler, context);
        }

        /**
         * <p>Gets metadata on a specified stream.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/GetStreamSession">AWS
         * API Reference</a></p>
         */
        virtual Model::GetStreamSessionOutcome GetStreamSession(const Model::GetStreamSessionRequest& request) const;

        /**
         * A Callable wrapper for GetStreamSession that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetStreamSessionRequestT = Model::GetStreamSessionRequest>
        Model::GetStreamSessionOutcomeCallable GetStreamSessionCallable(const GetStreamSessionRequestT& request) const
        {
            return SubmitCallable(&IVSClient::GetStreamSession, request);
        }

        /**
         * An Async wrapper for GetStreamSession that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetStreamSessionRequestT = Model::GetStreamSessionRequest>
        void GetStreamSessionAsync(const GetStreamSessionRequestT& request, const GetStreamSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IVSClient::GetStreamSession, request, handler, context);
        }

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
         * A Callable wrapper for ImportPlaybackKeyPair that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ImportPlaybackKeyPairRequestT = Model::ImportPlaybackKeyPairRequest>
        Model::ImportPlaybackKeyPairOutcomeCallable ImportPlaybackKeyPairCallable(const ImportPlaybackKeyPairRequestT& request) const
        {
            return SubmitCallable(&IVSClient::ImportPlaybackKeyPair, request);
        }

        /**
         * An Async wrapper for ImportPlaybackKeyPair that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ImportPlaybackKeyPairRequestT = Model::ImportPlaybackKeyPairRequest>
        void ImportPlaybackKeyPairAsync(const ImportPlaybackKeyPairRequestT& request, const ImportPlaybackKeyPairResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IVSClient::ImportPlaybackKeyPair, request, handler, context);
        }

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
         * A Callable wrapper for ListChannels that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListChannelsRequestT = Model::ListChannelsRequest>
        Model::ListChannelsOutcomeCallable ListChannelsCallable(const ListChannelsRequestT& request) const
        {
            return SubmitCallable(&IVSClient::ListChannels, request);
        }

        /**
         * An Async wrapper for ListChannels that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListChannelsRequestT = Model::ListChannelsRequest>
        void ListChannelsAsync(const ListChannelsRequestT& request, const ListChannelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IVSClient::ListChannels, request, handler, context);
        }

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
         * A Callable wrapper for ListPlaybackKeyPairs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListPlaybackKeyPairsRequestT = Model::ListPlaybackKeyPairsRequest>
        Model::ListPlaybackKeyPairsOutcomeCallable ListPlaybackKeyPairsCallable(const ListPlaybackKeyPairsRequestT& request) const
        {
            return SubmitCallable(&IVSClient::ListPlaybackKeyPairs, request);
        }

        /**
         * An Async wrapper for ListPlaybackKeyPairs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListPlaybackKeyPairsRequestT = Model::ListPlaybackKeyPairsRequest>
        void ListPlaybackKeyPairsAsync(const ListPlaybackKeyPairsRequestT& request, const ListPlaybackKeyPairsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IVSClient::ListPlaybackKeyPairs, request, handler, context);
        }

        /**
         * <p>Gets summary information about playback restriction policies.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/ListPlaybackRestrictionPolicies">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPlaybackRestrictionPoliciesOutcome ListPlaybackRestrictionPolicies(const Model::ListPlaybackRestrictionPoliciesRequest& request) const;

        /**
         * A Callable wrapper for ListPlaybackRestrictionPolicies that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListPlaybackRestrictionPoliciesRequestT = Model::ListPlaybackRestrictionPoliciesRequest>
        Model::ListPlaybackRestrictionPoliciesOutcomeCallable ListPlaybackRestrictionPoliciesCallable(const ListPlaybackRestrictionPoliciesRequestT& request) const
        {
            return SubmitCallable(&IVSClient::ListPlaybackRestrictionPolicies, request);
        }

        /**
         * An Async wrapper for ListPlaybackRestrictionPolicies that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListPlaybackRestrictionPoliciesRequestT = Model::ListPlaybackRestrictionPoliciesRequest>
        void ListPlaybackRestrictionPoliciesAsync(const ListPlaybackRestrictionPoliciesRequestT& request, const ListPlaybackRestrictionPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IVSClient::ListPlaybackRestrictionPolicies, request, handler, context);
        }

        /**
         * <p>Gets summary information about all recording configurations in your account,
         * in the Amazon Web Services region where the API request is
         * processed.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/ListRecordingConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRecordingConfigurationsOutcome ListRecordingConfigurations(const Model::ListRecordingConfigurationsRequest& request) const;

        /**
         * A Callable wrapper for ListRecordingConfigurations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListRecordingConfigurationsRequestT = Model::ListRecordingConfigurationsRequest>
        Model::ListRecordingConfigurationsOutcomeCallable ListRecordingConfigurationsCallable(const ListRecordingConfigurationsRequestT& request) const
        {
            return SubmitCallable(&IVSClient::ListRecordingConfigurations, request);
        }

        /**
         * An Async wrapper for ListRecordingConfigurations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListRecordingConfigurationsRequestT = Model::ListRecordingConfigurationsRequest>
        void ListRecordingConfigurationsAsync(const ListRecordingConfigurationsRequestT& request, const ListRecordingConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IVSClient::ListRecordingConfigurations, request, handler, context);
        }

        /**
         * <p>Gets summary information about stream keys for the specified
         * channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/ListStreamKeys">AWS
         * API Reference</a></p>
         */
        virtual Model::ListStreamKeysOutcome ListStreamKeys(const Model::ListStreamKeysRequest& request) const;

        /**
         * A Callable wrapper for ListStreamKeys that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListStreamKeysRequestT = Model::ListStreamKeysRequest>
        Model::ListStreamKeysOutcomeCallable ListStreamKeysCallable(const ListStreamKeysRequestT& request) const
        {
            return SubmitCallable(&IVSClient::ListStreamKeys, request);
        }

        /**
         * An Async wrapper for ListStreamKeys that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListStreamKeysRequestT = Model::ListStreamKeysRequest>
        void ListStreamKeysAsync(const ListStreamKeysRequestT& request, const ListStreamKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IVSClient::ListStreamKeys, request, handler, context);
        }

        /**
         * <p>Gets a summary of current and previous streams for a specified channel in
         * your account, in the AWS region where the API request is
         * processed.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/ListStreamSessions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListStreamSessionsOutcome ListStreamSessions(const Model::ListStreamSessionsRequest& request) const;

        /**
         * A Callable wrapper for ListStreamSessions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListStreamSessionsRequestT = Model::ListStreamSessionsRequest>
        Model::ListStreamSessionsOutcomeCallable ListStreamSessionsCallable(const ListStreamSessionsRequestT& request) const
        {
            return SubmitCallable(&IVSClient::ListStreamSessions, request);
        }

        /**
         * An Async wrapper for ListStreamSessions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListStreamSessionsRequestT = Model::ListStreamSessionsRequest>
        void ListStreamSessionsAsync(const ListStreamSessionsRequestT& request, const ListStreamSessionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IVSClient::ListStreamSessions, request, handler, context);
        }

        /**
         * <p>Gets summary information about live streams in your account, in the Amazon
         * Web Services region where the API request is processed.</p><p><h3>See Also:</h3>
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/ListStreams">AWS
         * API Reference</a></p>
         */
        virtual Model::ListStreamsOutcome ListStreams(const Model::ListStreamsRequest& request) const;

        /**
         * A Callable wrapper for ListStreams that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListStreamsRequestT = Model::ListStreamsRequest>
        Model::ListStreamsOutcomeCallable ListStreamsCallable(const ListStreamsRequestT& request) const
        {
            return SubmitCallable(&IVSClient::ListStreams, request);
        }

        /**
         * An Async wrapper for ListStreams that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListStreamsRequestT = Model::ListStreamsRequest>
        void ListStreamsAsync(const ListStreamsRequestT& request, const ListStreamsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IVSClient::ListStreams, request, handler, context);
        }

        /**
         * <p>Gets information about Amazon Web Services tags for the specified
         * ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&IVSClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IVSClient::ListTagsForResource, request, handler, context);
        }

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
         * A Callable wrapper for PutMetadata that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutMetadataRequestT = Model::PutMetadataRequest>
        Model::PutMetadataOutcomeCallable PutMetadataCallable(const PutMetadataRequestT& request) const
        {
            return SubmitCallable(&IVSClient::PutMetadata, request);
        }

        /**
         * An Async wrapper for PutMetadata that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutMetadataRequestT = Model::PutMetadataRequest>
        void PutMetadataAsync(const PutMetadataRequestT& request, const PutMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IVSClient::PutMetadata, request, handler, context);
        }

        /**
         * <p>Starts the process of revoking the viewer session associated with a specified
         * channel ARN and viewer ID. Optionally, you can provide a version to revoke
         * viewer sessions less than and including that version. For instructions on
         * associating a viewer ID with a viewer session, see <a
         * href="https://docs.aws.amazon.com/ivs/latest/userguide/private-channels.html">Setting
         * Up Private Channels</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/StartViewerSessionRevocation">AWS
         * API Reference</a></p>
         */
        virtual Model::StartViewerSessionRevocationOutcome StartViewerSessionRevocation(const Model::StartViewerSessionRevocationRequest& request) const;

        /**
         * A Callable wrapper for StartViewerSessionRevocation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartViewerSessionRevocationRequestT = Model::StartViewerSessionRevocationRequest>
        Model::StartViewerSessionRevocationOutcomeCallable StartViewerSessionRevocationCallable(const StartViewerSessionRevocationRequestT& request) const
        {
            return SubmitCallable(&IVSClient::StartViewerSessionRevocation, request);
        }

        /**
         * An Async wrapper for StartViewerSessionRevocation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartViewerSessionRevocationRequestT = Model::StartViewerSessionRevocationRequest>
        void StartViewerSessionRevocationAsync(const StartViewerSessionRevocationRequestT& request, const StartViewerSessionRevocationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IVSClient::StartViewerSessionRevocation, request, handler, context);
        }

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
         * A Callable wrapper for StopStream that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopStreamRequestT = Model::StopStreamRequest>
        Model::StopStreamOutcomeCallable StopStreamCallable(const StopStreamRequestT& request) const
        {
            return SubmitCallable(&IVSClient::StopStream, request);
        }

        /**
         * An Async wrapper for StopStream that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopStreamRequestT = Model::StopStreamRequest>
        void StopStreamAsync(const StopStreamRequestT& request, const StopStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IVSClient::StopStream, request, handler, context);
        }

        /**
         * <p>Adds or updates tags for the Amazon Web Services resource with the specified
         * ARN.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/TagResource">AWS API
         * Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&IVSClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IVSClient::TagResource, request, handler, context);
        }

        /**
         * <p>Removes tags from the resource with the specified ARN.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&IVSClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IVSClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Updates a channel's configuration. Live channels cannot be updated. You must
         * stop the ongoing stream, update the channel, and restart the stream for the
         * changes to take effect.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/UpdateChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateChannelOutcome UpdateChannel(const Model::UpdateChannelRequest& request) const;

        /**
         * A Callable wrapper for UpdateChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateChannelRequestT = Model::UpdateChannelRequest>
        Model::UpdateChannelOutcomeCallable UpdateChannelCallable(const UpdateChannelRequestT& request) const
        {
            return SubmitCallable(&IVSClient::UpdateChannel, request);
        }

        /**
         * An Async wrapper for UpdateChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateChannelRequestT = Model::UpdateChannelRequest>
        void UpdateChannelAsync(const UpdateChannelRequestT& request, const UpdateChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IVSClient::UpdateChannel, request, handler, context);
        }

        /**
         * <p>Updates a specified playback restriction policy.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-2020-07-14/UpdatePlaybackRestrictionPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePlaybackRestrictionPolicyOutcome UpdatePlaybackRestrictionPolicy(const Model::UpdatePlaybackRestrictionPolicyRequest& request) const;

        /**
         * A Callable wrapper for UpdatePlaybackRestrictionPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdatePlaybackRestrictionPolicyRequestT = Model::UpdatePlaybackRestrictionPolicyRequest>
        Model::UpdatePlaybackRestrictionPolicyOutcomeCallable UpdatePlaybackRestrictionPolicyCallable(const UpdatePlaybackRestrictionPolicyRequestT& request) const
        {
            return SubmitCallable(&IVSClient::UpdatePlaybackRestrictionPolicy, request);
        }

        /**
         * An Async wrapper for UpdatePlaybackRestrictionPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdatePlaybackRestrictionPolicyRequestT = Model::UpdatePlaybackRestrictionPolicyRequest>
        void UpdatePlaybackRestrictionPolicyAsync(const UpdatePlaybackRestrictionPolicyRequestT& request, const UpdatePlaybackRestrictionPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IVSClient::UpdatePlaybackRestrictionPolicy, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<IVSEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<IVSClient>;
      void init(const IVSClientConfiguration& clientConfiguration);

      IVSClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<IVSEndpointProviderBase> m_endpointProvider;
  };

} // namespace IVS
} // namespace Aws
