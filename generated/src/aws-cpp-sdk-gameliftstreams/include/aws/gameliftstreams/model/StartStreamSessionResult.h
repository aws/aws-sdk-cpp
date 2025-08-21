/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gameliftstreams/GameLiftStreams_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gameliftstreams/model/StreamSessionStatus.h>
#include <aws/gameliftstreams/model/StreamSessionStatusReason.h>
#include <aws/gameliftstreams/model/Protocol.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/DateTime.h>
#include <aws/gameliftstreams/model/ExportFilesMetadata.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace GameLiftStreams
{
namespace Model
{
  class StartStreamSessionResult
  {
  public:
    AWS_GAMELIFTSTREAMS_API StartStreamSessionResult() = default;
    AWS_GAMELIFTSTREAMS_API StartStreamSessionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMELIFTSTREAMS_API StartStreamSessionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference-arns.html">Amazon
     * Resource Name (ARN)</a> that's assigned to a stream session resource. When
     * combined with the stream group resource ID, this value uniquely identifies the
     * stream session across all Amazon Web Services Regions. Format is
     * <code>arn:aws:gameliftstreams:[AWS Region]:[AWS account]:streamsession/[stream
     * group resource ID]/[stream session resource ID]</code>.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    StartStreamSessionResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A human-readable label for the stream session. You can update this value at
     * any time.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    StartStreamSessionResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the Amazon GameLift Streams stream group that is
     * hosting the stream session. Format example: <code>sg-1AB2C3De4</code>.</p>
     */
    inline const Aws::String& GetStreamGroupId() const { return m_streamGroupId; }
    template<typename StreamGroupIdT = Aws::String>
    void SetStreamGroupId(StreamGroupIdT&& value) { m_streamGroupIdHasBeenSet = true; m_streamGroupId = std::forward<StreamGroupIdT>(value); }
    template<typename StreamGroupIdT = Aws::String>
    StartStreamSessionResult& WithStreamGroupId(StreamGroupIdT&& value) { SetStreamGroupId(std::forward<StreamGroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> An opaque, unique identifier for an end-user, defined by the developer. </p>
     */
    inline const Aws::String& GetUserId() const { return m_userId; }
    template<typename UserIdT = Aws::String>
    void SetUserId(UserIdT&& value) { m_userIdHasBeenSet = true; m_userId = std::forward<UserIdT>(value); }
    template<typename UserIdT = Aws::String>
    StartStreamSessionResult& WithUserId(UserIdT&& value) { SetUserId(std::forward<UserIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the stream session. A stream session is ready for a
     * client to connect when in <code>ACTIVE</code> status.</p> <ul> <li> <p>
     * <code>ACTIVATING</code>: The stream session is starting and preparing to
     * stream.</p> </li> <li> <p> <code>ACTIVE</code>: The stream session is ready and
     * waiting for a client connection. A client has
     * <code>ConnectionTimeoutSeconds</code> (specified in
     * <code>StartStreamSession</code>) from when the session reaches
     * <code>ACTIVE</code> state to establish a connection. If no client connects
     * within this timeframe, the session automatically terminates.</p> </li> <li> <p>
     * <code>CONNECTED</code>: The stream session has a connected client. A session
     * will automatically terminate if there is no user input for 60 minutes, or if the
     * maximum length of a session specified by <code>SessionLengthSeconds</code> in
     * <code>StartStreamSession</code> is exceeded.</p> </li> <li> <p>
     * <code>ERROR</code>: The stream session failed to activate.</p> </li> <li> <p>
     * <code>PENDING_CLIENT_RECONNECTION</code>: A client has recently disconnected and
     * the stream session is waiting for the client to reconnect. A client has
     * <code>ConnectionTimeoutSeconds</code> (specified in
     * <code>StartStreamSession</code>) from when the session reaches
     * <code>PENDING_CLIENT_RECONNECTION</code> state to re-establish a connection. If
     * no client connects within this timeframe, the session automatically
     * terminates.</p> </li> <li> <p> <code>RECONNECTING</code>: A client has initiated
     * a reconnect to a session that was in <code>PENDING_CLIENT_RECONNECTION</code>
     * state.</p> </li> <li> <p> <code>TERMINATING</code>: The stream session is
     * ending.</p> </li> <li> <p> <code>TERMINATED</code>: The stream session has
     * ended.</p> </li> </ul>
     */
    inline StreamSessionStatus GetStatus() const { return m_status; }
    inline void SetStatus(StreamSessionStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline StartStreamSessionResult& WithStatus(StreamSessionStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A short description of the reason the stream session is in <code>ERROR</code>
     * status.</p>
     */
    inline StreamSessionStatusReason GetStatusReason() const { return m_statusReason; }
    inline void SetStatusReason(StreamSessionStatusReason value) { m_statusReasonHasBeenSet = true; m_statusReason = value; }
    inline StartStreamSessionResult& WithStatusReason(StreamSessionStatusReason value) { SetStatusReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data transfer protocol in use with the stream session.</p>
     */
    inline Protocol GetProtocol() const { return m_protocol; }
    inline void SetProtocol(Protocol value) { m_protocolHasBeenSet = true; m_protocol = value; }
    inline StartStreamSessionResult& WithProtocol(Protocol value) { SetProtocol(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location where Amazon GameLift Streams hosts and streams your
     * application. For example, <code>us-east-1</code>. For a complete list of
     * locations that Amazon GameLift Streams supports, refer to <a
     * href="https://docs.aws.amazon.com/gameliftstreams/latest/developerguide/regions-quotas.html">Regions,
     * quotas, and limitations</a> in the <i>Amazon GameLift Streams Developer
     * Guide</i>. </p>
     */
    inline const Aws::String& GetLocation() const { return m_location; }
    template<typename LocationT = Aws::String>
    void SetLocation(LocationT&& value) { m_locationHasBeenSet = true; m_location = std::forward<LocationT>(value); }
    template<typename LocationT = Aws::String>
    StartStreamSessionResult& WithLocation(LocationT&& value) { SetLocation(std::forward<LocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The WebRTC ICE offer string that a client generates to initiate a connection
     * to the stream session.</p>
     */
    inline const Aws::String& GetSignalRequest() const { return m_signalRequest; }
    template<typename SignalRequestT = Aws::String>
    void SetSignalRequest(SignalRequestT&& value) { m_signalRequestHasBeenSet = true; m_signalRequest = std::forward<SignalRequestT>(value); }
    template<typename SignalRequestT = Aws::String>
    StartStreamSessionResult& WithSignalRequest(SignalRequestT&& value) { SetSignalRequest(std::forward<SignalRequestT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The WebRTC answer string that the stream server generates in response to the
     * <code>SignalRequest</code>.</p>
     */
    inline const Aws::String& GetSignalResponse() const { return m_signalResponse; }
    template<typename SignalResponseT = Aws::String>
    void SetSignalResponse(SignalResponseT&& value) { m_signalResponseHasBeenSet = true; m_signalResponse = std::forward<SignalResponseT>(value); }
    template<typename SignalResponseT = Aws::String>
    StartStreamSessionResult& WithSignalResponse(SignalResponseT&& value) { SetSignalResponse(std::forward<SignalResponseT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The length of time that Amazon GameLift Streams should wait for a client to
     * connect or reconnect to the stream session. This time span starts when the
     * stream session reaches <code>ACTIVE</code> or
     * <code>PENDING_CLIENT_RECONNECTION</code> state. If no client connects (or
     * reconnects) before the timeout, Amazon GameLift Streams terminates the stream
     * session.</p>
     */
    inline int GetConnectionTimeoutSeconds() const { return m_connectionTimeoutSeconds; }
    inline void SetConnectionTimeoutSeconds(int value) { m_connectionTimeoutSecondsHasBeenSet = true; m_connectionTimeoutSeconds = value; }
    inline StartStreamSessionResult& WithConnectionTimeoutSeconds(int value) { SetConnectionTimeoutSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum duration of a session. Amazon GameLift Streams will automatically
     * terminate a session after this amount of time has elapsed, regardless of any
     * existing client connections.</p>
     */
    inline int GetSessionLengthSeconds() const { return m_sessionLengthSeconds; }
    inline void SetSessionLengthSeconds(int value) { m_sessionLengthSecondsHasBeenSet = true; m_sessionLengthSeconds = value; }
    inline StartStreamSessionResult& WithSessionLengthSeconds(int value) { SetSessionLengthSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of CLI arguments that are sent to the streaming server when a stream
     * session launches. You can use this to configure the application or stream
     * session details. You can also provide custom arguments that Amazon GameLift
     * Streams passes to your game client.</p> <p>
     * <code>AdditionalEnvironmentVariables</code> and
     * <code>AdditionalLaunchArgs</code> have similar purposes.
     * <code>AdditionalEnvironmentVariables</code> passes data using environment
     * variables; while <code>AdditionalLaunchArgs</code> passes data using
     * command-line arguments.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAdditionalLaunchArgs() const { return m_additionalLaunchArgs; }
    template<typename AdditionalLaunchArgsT = Aws::Vector<Aws::String>>
    void SetAdditionalLaunchArgs(AdditionalLaunchArgsT&& value) { m_additionalLaunchArgsHasBeenSet = true; m_additionalLaunchArgs = std::forward<AdditionalLaunchArgsT>(value); }
    template<typename AdditionalLaunchArgsT = Aws::Vector<Aws::String>>
    StartStreamSessionResult& WithAdditionalLaunchArgs(AdditionalLaunchArgsT&& value) { SetAdditionalLaunchArgs(std::forward<AdditionalLaunchArgsT>(value)); return *this;}
    template<typename AdditionalLaunchArgsT = Aws::String>
    StartStreamSessionResult& AddAdditionalLaunchArgs(AdditionalLaunchArgsT&& value) { m_additionalLaunchArgsHasBeenSet = true; m_additionalLaunchArgs.emplace_back(std::forward<AdditionalLaunchArgsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A set of options that you can use to control the stream session runtime
     * environment, expressed as a set of key-value pairs. You can use this to
     * configure the application or stream session details. You can also provide custom
     * environment variables that Amazon GameLift Streams passes to your game
     * client.</p>  <p>If you want to debug your application with environment
     * variables, we recommend that you do so in a local environment outside of Amazon
     * GameLift Streams. For more information, refer to the Compatibility Guidance in
     * the troubleshooting section of the Developer Guide.</p>  <p>
     * <code>AdditionalEnvironmentVariables</code> and
     * <code>AdditionalLaunchArgs</code> have similar purposes.
     * <code>AdditionalEnvironmentVariables</code> passes data using environment
     * variables; while <code>AdditionalLaunchArgs</code> passes data using
     * command-line arguments.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAdditionalEnvironmentVariables() const { return m_additionalEnvironmentVariables; }
    template<typename AdditionalEnvironmentVariablesT = Aws::Map<Aws::String, Aws::String>>
    void SetAdditionalEnvironmentVariables(AdditionalEnvironmentVariablesT&& value) { m_additionalEnvironmentVariablesHasBeenSet = true; m_additionalEnvironmentVariables = std::forward<AdditionalEnvironmentVariablesT>(value); }
    template<typename AdditionalEnvironmentVariablesT = Aws::Map<Aws::String, Aws::String>>
    StartStreamSessionResult& WithAdditionalEnvironmentVariables(AdditionalEnvironmentVariablesT&& value) { SetAdditionalEnvironmentVariables(std::forward<AdditionalEnvironmentVariablesT>(value)); return *this;}
    template<typename AdditionalEnvironmentVariablesKeyT = Aws::String, typename AdditionalEnvironmentVariablesValueT = Aws::String>
    StartStreamSessionResult& AddAdditionalEnvironmentVariables(AdditionalEnvironmentVariablesKeyT&& key, AdditionalEnvironmentVariablesValueT&& value) {
      m_additionalEnvironmentVariablesHasBeenSet = true; m_additionalEnvironmentVariables.emplace(std::forward<AdditionalEnvironmentVariablesKeyT>(key), std::forward<AdditionalEnvironmentVariablesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Access location for log files that your content generates during a stream
     * session. These log files are uploaded to cloud storage location at the end of a
     * stream session. The Amazon GameLift Streams application resource defines which
     * log files to upload.</p>
     */
    inline const Aws::String& GetLogFileLocationUri() const { return m_logFileLocationUri; }
    template<typename LogFileLocationUriT = Aws::String>
    void SetLogFileLocationUri(LogFileLocationUriT&& value) { m_logFileLocationUriHasBeenSet = true; m_logFileLocationUri = std::forward<LogFileLocationUriT>(value); }
    template<typename LogFileLocationUriT = Aws::String>
    StartStreamSessionResult& WithLogFileLocationUri(LogFileLocationUriT&& value) { SetLogFileLocationUri(std::forward<LogFileLocationUriT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL of an S3 bucket that stores Amazon GameLift Streams WebSDK files. The
     * URL is used to establish connection with the client.</p>
     */
    inline const Aws::String& GetWebSdkProtocolUrl() const { return m_webSdkProtocolUrl; }
    template<typename WebSdkProtocolUrlT = Aws::String>
    void SetWebSdkProtocolUrl(WebSdkProtocolUrlT&& value) { m_webSdkProtocolUrlHasBeenSet = true; m_webSdkProtocolUrl = std::forward<WebSdkProtocolUrlT>(value); }
    template<typename WebSdkProtocolUrlT = Aws::String>
    StartStreamSessionResult& WithWebSdkProtocolUrl(WebSdkProtocolUrlT&& value) { SetWebSdkProtocolUrl(std::forward<WebSdkProtocolUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp that indicates when this resource was last updated. Timestamps
     * are expressed using in ISO8601 format, such as:
     * <code>2022-12-27T22:29:40+00:00</code> (UTC).</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const { return m_lastUpdatedAt; }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    void SetLastUpdatedAt(LastUpdatedAtT&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::forward<LastUpdatedAtT>(value); }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    StartStreamSessionResult& WithLastUpdatedAt(LastUpdatedAtT&& value) { SetLastUpdatedAt(std::forward<LastUpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp that indicates when this resource was created. Timestamps are
     * expressed using in ISO8601 format, such as:
     * <code>2022-12-27T22:29:40+00:00</code> (UTC).</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    StartStreamSessionResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The application streaming in this session.</p> <p>This value is an <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference-arns.html">Amazon
     * Resource Name (ARN)</a> that uniquely identifies the application resource.
     * Example ARN:
     * <code>arn:aws:gameliftstreams:us-west-2:111122223333:application/a-9ZY8X7Wv6</code>.
     * </p>
     */
    inline const Aws::String& GetApplicationArn() const { return m_applicationArn; }
    template<typename ApplicationArnT = Aws::String>
    void SetApplicationArn(ApplicationArnT&& value) { m_applicationArnHasBeenSet = true; m_applicationArn = std::forward<ApplicationArnT>(value); }
    template<typename ApplicationArnT = Aws::String>
    StartStreamSessionResult& WithApplicationArn(ApplicationArnT&& value) { SetApplicationArn(std::forward<ApplicationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides details about the stream session's exported files. </p>
     */
    inline const ExportFilesMetadata& GetExportFilesMetadata() const { return m_exportFilesMetadata; }
    template<typename ExportFilesMetadataT = ExportFilesMetadata>
    void SetExportFilesMetadata(ExportFilesMetadataT&& value) { m_exportFilesMetadataHasBeenSet = true; m_exportFilesMetadata = std::forward<ExportFilesMetadataT>(value); }
    template<typename ExportFilesMetadataT = ExportFilesMetadata>
    StartStreamSessionResult& WithExportFilesMetadata(ExportFilesMetadataT&& value) { SetExportFilesMetadata(std::forward<ExportFilesMetadataT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    StartStreamSessionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_streamGroupId;
    bool m_streamGroupIdHasBeenSet = false;

    Aws::String m_userId;
    bool m_userIdHasBeenSet = false;

    StreamSessionStatus m_status{StreamSessionStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    StreamSessionStatusReason m_statusReason{StreamSessionStatusReason::NOT_SET};
    bool m_statusReasonHasBeenSet = false;

    Protocol m_protocol{Protocol::NOT_SET};
    bool m_protocolHasBeenSet = false;

    Aws::String m_location;
    bool m_locationHasBeenSet = false;

    Aws::String m_signalRequest;
    bool m_signalRequestHasBeenSet = false;

    Aws::String m_signalResponse;
    bool m_signalResponseHasBeenSet = false;

    int m_connectionTimeoutSeconds{0};
    bool m_connectionTimeoutSecondsHasBeenSet = false;

    int m_sessionLengthSeconds{0};
    bool m_sessionLengthSecondsHasBeenSet = false;

    Aws::Vector<Aws::String> m_additionalLaunchArgs;
    bool m_additionalLaunchArgsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_additionalEnvironmentVariables;
    bool m_additionalEnvironmentVariablesHasBeenSet = false;

    Aws::String m_logFileLocationUri;
    bool m_logFileLocationUriHasBeenSet = false;

    Aws::String m_webSdkProtocolUrl;
    bool m_webSdkProtocolUrlHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedAt{};
    bool m_lastUpdatedAtHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::String m_applicationArn;
    bool m_applicationArnHasBeenSet = false;

    ExportFilesMetadata m_exportFilesMetadata;
    bool m_exportFilesMetadataHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLiftStreams
} // namespace Aws
