/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gameliftstreams/GameLiftStreams_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/gameliftstreams/model/ExportFilesMetadata.h>
#include <aws/gameliftstreams/model/Protocol.h>
#include <aws/gameliftstreams/model/StreamSessionStatus.h>
#include <aws/gameliftstreams/model/StreamSessionStatusReason.h>
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
  class GetStreamSessionResult
  {
  public:
    AWS_GAMELIFTSTREAMS_API GetStreamSessionResult();
    AWS_GAMELIFTSTREAMS_API GetStreamSessionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMELIFTSTREAMS_API GetStreamSessionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline const Aws::Map<Aws::String, Aws::String>& GetAdditionalEnvironmentVariables() const{ return m_additionalEnvironmentVariables; }
    inline void SetAdditionalEnvironmentVariables(const Aws::Map<Aws::String, Aws::String>& value) { m_additionalEnvironmentVariables = value; }
    inline void SetAdditionalEnvironmentVariables(Aws::Map<Aws::String, Aws::String>&& value) { m_additionalEnvironmentVariables = std::move(value); }
    inline GetStreamSessionResult& WithAdditionalEnvironmentVariables(const Aws::Map<Aws::String, Aws::String>& value) { SetAdditionalEnvironmentVariables(value); return *this;}
    inline GetStreamSessionResult& WithAdditionalEnvironmentVariables(Aws::Map<Aws::String, Aws::String>&& value) { SetAdditionalEnvironmentVariables(std::move(value)); return *this;}
    inline GetStreamSessionResult& AddAdditionalEnvironmentVariables(const Aws::String& key, const Aws::String& value) { m_additionalEnvironmentVariables.emplace(key, value); return *this; }
    inline GetStreamSessionResult& AddAdditionalEnvironmentVariables(Aws::String&& key, const Aws::String& value) { m_additionalEnvironmentVariables.emplace(std::move(key), value); return *this; }
    inline GetStreamSessionResult& AddAdditionalEnvironmentVariables(const Aws::String& key, Aws::String&& value) { m_additionalEnvironmentVariables.emplace(key, std::move(value)); return *this; }
    inline GetStreamSessionResult& AddAdditionalEnvironmentVariables(Aws::String&& key, Aws::String&& value) { m_additionalEnvironmentVariables.emplace(std::move(key), std::move(value)); return *this; }
    inline GetStreamSessionResult& AddAdditionalEnvironmentVariables(const char* key, Aws::String&& value) { m_additionalEnvironmentVariables.emplace(key, std::move(value)); return *this; }
    inline GetStreamSessionResult& AddAdditionalEnvironmentVariables(Aws::String&& key, const char* value) { m_additionalEnvironmentVariables.emplace(std::move(key), value); return *this; }
    inline GetStreamSessionResult& AddAdditionalEnvironmentVariables(const char* key, const char* value) { m_additionalEnvironmentVariables.emplace(key, value); return *this; }
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
    inline const Aws::Vector<Aws::String>& GetAdditionalLaunchArgs() const{ return m_additionalLaunchArgs; }
    inline void SetAdditionalLaunchArgs(const Aws::Vector<Aws::String>& value) { m_additionalLaunchArgs = value; }
    inline void SetAdditionalLaunchArgs(Aws::Vector<Aws::String>&& value) { m_additionalLaunchArgs = std::move(value); }
    inline GetStreamSessionResult& WithAdditionalLaunchArgs(const Aws::Vector<Aws::String>& value) { SetAdditionalLaunchArgs(value); return *this;}
    inline GetStreamSessionResult& WithAdditionalLaunchArgs(Aws::Vector<Aws::String>&& value) { SetAdditionalLaunchArgs(std::move(value)); return *this;}
    inline GetStreamSessionResult& AddAdditionalLaunchArgs(const Aws::String& value) { m_additionalLaunchArgs.push_back(value); return *this; }
    inline GetStreamSessionResult& AddAdditionalLaunchArgs(Aws::String&& value) { m_additionalLaunchArgs.push_back(std::move(value)); return *this; }
    inline GetStreamSessionResult& AddAdditionalLaunchArgs(const char* value) { m_additionalLaunchArgs.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The application streaming in this session.</p> <p>This value is an <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference-arns.html">Amazon
     * Resource Name (ARN)</a> that uniquely identifies the application resource.
     * Format example:
     * <code>arn:aws:gameliftstreams:us-west-2:123456789012:application/9ZY8X7Wv6</code>.
     * </p>
     */
    inline const Aws::String& GetApplicationArn() const{ return m_applicationArn; }
    inline void SetApplicationArn(const Aws::String& value) { m_applicationArn = value; }
    inline void SetApplicationArn(Aws::String&& value) { m_applicationArn = std::move(value); }
    inline void SetApplicationArn(const char* value) { m_applicationArn.assign(value); }
    inline GetStreamSessionResult& WithApplicationArn(const Aws::String& value) { SetApplicationArn(value); return *this;}
    inline GetStreamSessionResult& WithApplicationArn(Aws::String&& value) { SetApplicationArn(std::move(value)); return *this;}
    inline GetStreamSessionResult& WithApplicationArn(const char* value) { SetApplicationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) assigned to the stream session resource. When
     * combined with the stream group ARN, this value uniquely identifies it across all
     * Amazon Web Services Regions. Format is <code>arn:aws:gameliftstreams:[AWS
     * Region]:[AWS account]:streamsession/[resource ID]</code>.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline GetStreamSessionResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline GetStreamSessionResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline GetStreamSessionResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum length of time (in seconds) that Amazon GameLift Streams keeps
     * the stream session open. At this point, Amazon GameLift Streams ends the stream
     * session regardless of any existing client connections.</p>
     */
    inline int GetConnectionTimeoutSeconds() const{ return m_connectionTimeoutSeconds; }
    inline void SetConnectionTimeoutSeconds(int value) { m_connectionTimeoutSeconds = value; }
    inline GetStreamSessionResult& WithConnectionTimeoutSeconds(int value) { SetConnectionTimeoutSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp that indicates when this resource was created. Timestamps are
     * expressed using in ISO8601 format, such as:
     * <code>2022-12-27T22:29:40+00:00</code> (UTC).</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }
    inline GetStreamSessionResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline GetStreamSessionResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A human-readable label for the stream session. You can update this value at
     * any time.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline GetStreamSessionResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline GetStreamSessionResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline GetStreamSessionResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides details about the stream session's exported files. </p>
     */
    inline const ExportFilesMetadata& GetExportFilesMetadata() const{ return m_exportFilesMetadata; }
    inline void SetExportFilesMetadata(const ExportFilesMetadata& value) { m_exportFilesMetadata = value; }
    inline void SetExportFilesMetadata(ExportFilesMetadata&& value) { m_exportFilesMetadata = std::move(value); }
    inline GetStreamSessionResult& WithExportFilesMetadata(const ExportFilesMetadata& value) { SetExportFilesMetadata(value); return *this;}
    inline GetStreamSessionResult& WithExportFilesMetadata(ExportFilesMetadata&& value) { SetExportFilesMetadata(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp that indicates when this resource was last updated. Timestamps
     * are expressed using in ISO8601 format, such as:
     * <code>2022-12-27T22:29:40+00:00</code> (UTC).</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAt = value; }
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAt = std::move(value); }
    inline GetStreamSessionResult& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}
    inline GetStreamSessionResult& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location where Amazon GameLift Streams is hosting the stream session.</p>
     * <p> A location's name. For example, <code>us-east-1</code>. For a complete list
     * of locations that Amazon GameLift Streams supports, see the Regions and quotas
     * section in the Amazon GameLift Streams Developer Guide . </p>
     */
    inline const Aws::String& GetLocation() const{ return m_location; }
    inline void SetLocation(const Aws::String& value) { m_location = value; }
    inline void SetLocation(Aws::String&& value) { m_location = std::move(value); }
    inline void SetLocation(const char* value) { m_location.assign(value); }
    inline GetStreamSessionResult& WithLocation(const Aws::String& value) { SetLocation(value); return *this;}
    inline GetStreamSessionResult& WithLocation(Aws::String&& value) { SetLocation(std::move(value)); return *this;}
    inline GetStreamSessionResult& WithLocation(const char* value) { SetLocation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Access location for log files that your content generates during a stream
     * session. These log files are uploaded to cloud storage location at the end of a
     * stream session. The Amazon GameLift Streams application resource defines which
     * log files to upload.</p>
     */
    inline const Aws::String& GetLogFileLocationUri() const{ return m_logFileLocationUri; }
    inline void SetLogFileLocationUri(const Aws::String& value) { m_logFileLocationUri = value; }
    inline void SetLogFileLocationUri(Aws::String&& value) { m_logFileLocationUri = std::move(value); }
    inline void SetLogFileLocationUri(const char* value) { m_logFileLocationUri.assign(value); }
    inline GetStreamSessionResult& WithLogFileLocationUri(const Aws::String& value) { SetLogFileLocationUri(value); return *this;}
    inline GetStreamSessionResult& WithLogFileLocationUri(Aws::String&& value) { SetLogFileLocationUri(std::move(value)); return *this;}
    inline GetStreamSessionResult& WithLogFileLocationUri(const char* value) { SetLogFileLocationUri(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data transfer protocol in use with the stream session.</p>
     */
    inline const Protocol& GetProtocol() const{ return m_protocol; }
    inline void SetProtocol(const Protocol& value) { m_protocol = value; }
    inline void SetProtocol(Protocol&& value) { m_protocol = std::move(value); }
    inline GetStreamSessionResult& WithProtocol(const Protocol& value) { SetProtocol(value); return *this;}
    inline GetStreamSessionResult& WithProtocol(Protocol&& value) { SetProtocol(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The length of time that Amazon GameLift Streams keeps the game session
     * open.</p>
     */
    inline int GetSessionLengthSeconds() const{ return m_sessionLengthSeconds; }
    inline void SetSessionLengthSeconds(int value) { m_sessionLengthSeconds = value; }
    inline GetStreamSessionResult& WithSessionLengthSeconds(int value) { SetSessionLengthSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The WebRTC ICE offer string that a client generates to initiate a connection
     * to the stream session.</p>
     */
    inline const Aws::String& GetSignalRequest() const{ return m_signalRequest; }
    inline void SetSignalRequest(const Aws::String& value) { m_signalRequest = value; }
    inline void SetSignalRequest(Aws::String&& value) { m_signalRequest = std::move(value); }
    inline void SetSignalRequest(const char* value) { m_signalRequest.assign(value); }
    inline GetStreamSessionResult& WithSignalRequest(const Aws::String& value) { SetSignalRequest(value); return *this;}
    inline GetStreamSessionResult& WithSignalRequest(Aws::String&& value) { SetSignalRequest(std::move(value)); return *this;}
    inline GetStreamSessionResult& WithSignalRequest(const char* value) { SetSignalRequest(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The WebRTC answer string that the stream server generates in response to the
     * <code>SignalRequest</code>.</p>
     */
    inline const Aws::String& GetSignalResponse() const{ return m_signalResponse; }
    inline void SetSignalResponse(const Aws::String& value) { m_signalResponse = value; }
    inline void SetSignalResponse(Aws::String&& value) { m_signalResponse = std::move(value); }
    inline void SetSignalResponse(const char* value) { m_signalResponse.assign(value); }
    inline GetStreamSessionResult& WithSignalResponse(const Aws::String& value) { SetSignalResponse(value); return *this;}
    inline GetStreamSessionResult& WithSignalResponse(Aws::String&& value) { SetSignalResponse(std::move(value)); return *this;}
    inline GetStreamSessionResult& WithSignalResponse(const char* value) { SetSignalResponse(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the stream session. A stream session can host clients
     * when in <code>ACTIVE</code> status.</p>
     */
    inline const StreamSessionStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const StreamSessionStatus& value) { m_status = value; }
    inline void SetStatus(StreamSessionStatus&& value) { m_status = std::move(value); }
    inline GetStreamSessionResult& WithStatus(const StreamSessionStatus& value) { SetStatus(value); return *this;}
    inline GetStreamSessionResult& WithStatus(StreamSessionStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A short description of the reason the stream session is in <code>ERROR</code>
     * status.</p>
     */
    inline const StreamSessionStatusReason& GetStatusReason() const{ return m_statusReason; }
    inline void SetStatusReason(const StreamSessionStatusReason& value) { m_statusReason = value; }
    inline void SetStatusReason(StreamSessionStatusReason&& value) { m_statusReason = std::move(value); }
    inline GetStreamSessionResult& WithStatusReason(const StreamSessionStatusReason& value) { SetStatusReason(value); return *this;}
    inline GetStreamSessionResult& WithStatusReason(StreamSessionStatusReason&& value) { SetStatusReason(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the Amazon GameLift Streams stream group that is
     * hosting the stream session.</p>
     */
    inline const Aws::String& GetStreamGroupId() const{ return m_streamGroupId; }
    inline void SetStreamGroupId(const Aws::String& value) { m_streamGroupId = value; }
    inline void SetStreamGroupId(Aws::String&& value) { m_streamGroupId = std::move(value); }
    inline void SetStreamGroupId(const char* value) { m_streamGroupId.assign(value); }
    inline GetStreamSessionResult& WithStreamGroupId(const Aws::String& value) { SetStreamGroupId(value); return *this;}
    inline GetStreamSessionResult& WithStreamGroupId(Aws::String&& value) { SetStreamGroupId(std::move(value)); return *this;}
    inline GetStreamSessionResult& WithStreamGroupId(const char* value) { SetStreamGroupId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> An opaque, unique identifier for an end-user, defined by the developer. </p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }
    inline void SetUserId(const Aws::String& value) { m_userId = value; }
    inline void SetUserId(Aws::String&& value) { m_userId = std::move(value); }
    inline void SetUserId(const char* value) { m_userId.assign(value); }
    inline GetStreamSessionResult& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}
    inline GetStreamSessionResult& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}
    inline GetStreamSessionResult& WithUserId(const char* value) { SetUserId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL of an S3 bucket that stores Amazon GameLift Streams WebSDK files. The
     * URL is used to establish connection with the client.</p>
     */
    inline const Aws::String& GetWebSdkProtocolUrl() const{ return m_webSdkProtocolUrl; }
    inline void SetWebSdkProtocolUrl(const Aws::String& value) { m_webSdkProtocolUrl = value; }
    inline void SetWebSdkProtocolUrl(Aws::String&& value) { m_webSdkProtocolUrl = std::move(value); }
    inline void SetWebSdkProtocolUrl(const char* value) { m_webSdkProtocolUrl.assign(value); }
    inline GetStreamSessionResult& WithWebSdkProtocolUrl(const Aws::String& value) { SetWebSdkProtocolUrl(value); return *this;}
    inline GetStreamSessionResult& WithWebSdkProtocolUrl(Aws::String&& value) { SetWebSdkProtocolUrl(std::move(value)); return *this;}
    inline GetStreamSessionResult& WithWebSdkProtocolUrl(const char* value) { SetWebSdkProtocolUrl(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetStreamSessionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetStreamSessionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetStreamSessionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Map<Aws::String, Aws::String> m_additionalEnvironmentVariables;

    Aws::Vector<Aws::String> m_additionalLaunchArgs;

    Aws::String m_applicationArn;

    Aws::String m_arn;

    int m_connectionTimeoutSeconds;

    Aws::Utils::DateTime m_createdAt;

    Aws::String m_description;

    ExportFilesMetadata m_exportFilesMetadata;

    Aws::Utils::DateTime m_lastUpdatedAt;

    Aws::String m_location;

    Aws::String m_logFileLocationUri;

    Protocol m_protocol;

    int m_sessionLengthSeconds;

    Aws::String m_signalRequest;

    Aws::String m_signalResponse;

    StreamSessionStatus m_status;

    StreamSessionStatusReason m_statusReason;

    Aws::String m_streamGroupId;

    Aws::String m_userId;

    Aws::String m_webSdkProtocolUrl;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GameLiftStreams
} // namespace Aws
