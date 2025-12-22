/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gameliftstreams/GameLiftStreams_EXPORTS.h>
#include <aws/gameliftstreams/model/ExportFilesMetadata.h>
#include <aws/gameliftstreams/model/Protocol.h>
#include <aws/gameliftstreams/model/StreamSessionStatus.h>
#include <aws/gameliftstreams/model/StreamSessionStatusReason.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace GameLiftStreams {
namespace Model {

/**
 * <p>Describes an Amazon GameLift Streams stream session. To retrieve additional
 * details for the stream session, call <a
 * href="https://docs.aws.amazon.com/gameliftstreams/latest/apireference/API_GetStreamSession.html">GetStreamSession</a>.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/gameliftstreams-2018-05-10/StreamSessionSummary">AWS
 * API Reference</a></p>
 */
class StreamSessionSummary {
 public:
  AWS_GAMELIFTSTREAMS_API StreamSessionSummary() = default;
  AWS_GAMELIFTSTREAMS_API StreamSessionSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_GAMELIFTSTREAMS_API StreamSessionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GAMELIFTSTREAMS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>An <a
   * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference-arns.html">Amazon
   * Resource Name (ARN)</a> that uniquely identifies the stream session resource.
   * Example ARN:
   * <code>arn:aws:gameliftstreams:us-west-2:111122223333:streamsession/sg-1AB2C3De4/ABC123def4567</code>.
   * </p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  StreamSessionSummary& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> An opaque, unique identifier for an end-user, defined by the developer. </p>
   */
  inline const Aws::String& GetUserId() const { return m_userId; }
  inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }
  template <typename UserIdT = Aws::String>
  void SetUserId(UserIdT&& value) {
    m_userIdHasBeenSet = true;
    m_userId = std::forward<UserIdT>(value);
  }
  template <typename UserIdT = Aws::String>
  StreamSessionSummary& WithUserId(UserIdT&& value) {
    SetUserId(std::forward<UserIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the stream session resource.</p> <ul> <li> <p>
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
   * <code>ERROR</code>: The stream session failed to activate. See
   * <code>StatusReason</code> (returned by <code>GetStreamSession</code> and
   * <code>StartStreamSession</code>) for more information.</p> </li> <li> <p>
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
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(StreamSessionStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline StreamSessionSummary& WithStatus(StreamSessionStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A short description of the reason the stream session is in <code>ERROR</code>
   * status or <code>TERMINATED</code> status.</p> <p> <code>ERROR</code> status
   * reasons:</p> <ul> <li> <p> <code>applicationLogS3DestinationError</code>: Could
   * not write the application log to the Amazon S3 bucket that is configured for the
   * streaming application. Make sure the bucket still exists.</p> </li> <li> <p>
   * <code>internalError</code>: An internal service error occurred. Start a new
   * stream session to continue streaming.</p> </li> <li> <p>
   * <code>invalidSignalRequest</code>: The WebRTC signal request that was sent is
   * not valid. When starting or reconnecting to a stream session, use
   * <code>generateSignalRequest</code> in the Amazon GameLift Streams Web SDK to
   * generate a new signal request.</p> </li> <li> <p> <code>placementTimeout</code>:
   * Amazon GameLift Streams could not find available stream capacity to start a
   * stream session. Increase the stream capacity in the stream group or wait until
   * capacity becomes available.</p> </li> </ul> <p> <code>TERMINATED</code> status
   * reasons:</p> <ul> <li> <p> <code>apiTerminated</code>: The stream session was
   * terminated by an API call to <a
   * href="https://docs.aws.amazon.com/gameliftstreams/latest/apireference/API_TerminateStreamSession.html">TerminateStreamSession</a>.</p>
   * </li> <li> <p> <code>applicationExit</code>: The streaming application exited or
   * crashed. The stream session was terminated because the application is no longer
   * running.</p> </li> <li> <p> <code>connectionTimeout</code>: The stream session
   * was terminated because the client failed to connect within the connection
   * timeout period specified by <code>ConnectionTimeoutSeconds</code>.</p> </li>
   * <li> <p> <code>idleTimeout</code>: The stream session was terminated because it
   * exceeded the idle timeout period of 60 minutes with no user input activity.</p>
   * </li> <li> <p> <code>maxSessionLengthTimeout</code>: The stream session was
   * terminated because it exceeded the maximum session length timeout period
   * specified by <code>SessionLengthSeconds</code>.</p> </li> <li> <p>
   * <code>reconnectionTimeout</code>: The stream session was terminated because the
   * client failed to reconnect within the reconnection timeout period specified by
   * <code>ConnectionTimeoutSeconds</code> after losing connection.</p> </li> </ul>
   */
  inline StreamSessionStatusReason GetStatusReason() const { return m_statusReason; }
  inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
  inline void SetStatusReason(StreamSessionStatusReason value) {
    m_statusReasonHasBeenSet = true;
    m_statusReason = value;
  }
  inline StreamSessionSummary& WithStatusReason(StreamSessionStatusReason value) {
    SetStatusReason(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The data transfer protocol in use with the stream session.</p>
   */
  inline Protocol GetProtocol() const { return m_protocol; }
  inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
  inline void SetProtocol(Protocol value) {
    m_protocolHasBeenSet = true;
    m_protocol = value;
  }
  inline StreamSessionSummary& WithProtocol(Protocol value) {
    SetProtocol(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A timestamp that indicates when this resource was last updated. Timestamps
   * are expressed using in ISO8601 format, such as:
   * <code>2022-12-27T22:29:40+00:00</code> (UTC).</p>
   */
  inline const Aws::Utils::DateTime& GetLastUpdatedAt() const { return m_lastUpdatedAt; }
  inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }
  template <typename LastUpdatedAtT = Aws::Utils::DateTime>
  void SetLastUpdatedAt(LastUpdatedAtT&& value) {
    m_lastUpdatedAtHasBeenSet = true;
    m_lastUpdatedAt = std::forward<LastUpdatedAtT>(value);
  }
  template <typename LastUpdatedAtT = Aws::Utils::DateTime>
  StreamSessionSummary& WithLastUpdatedAt(LastUpdatedAtT&& value) {
    SetLastUpdatedAt(std::forward<LastUpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A timestamp that indicates when this resource was created. Timestamps are
   * expressed using in ISO8601 format, such as:
   * <code>2022-12-27T22:29:40+00:00</code> (UTC).</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  StreamSessionSummary& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An <a
   * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference-arns.html">Amazon
   * Resource Name (ARN)</a> that uniquely identifies the application resource.
   * Example ARN:
   * <code>arn:aws:gameliftstreams:us-west-2:111122223333:application/a-9ZY8X7Wv6</code>.
   * </p>
   */
  inline const Aws::String& GetApplicationArn() const { return m_applicationArn; }
  inline bool ApplicationArnHasBeenSet() const { return m_applicationArnHasBeenSet; }
  template <typename ApplicationArnT = Aws::String>
  void SetApplicationArn(ApplicationArnT&& value) {
    m_applicationArnHasBeenSet = true;
    m_applicationArn = std::forward<ApplicationArnT>(value);
  }
  template <typename ApplicationArnT = Aws::String>
  StreamSessionSummary& WithApplicationArn(ApplicationArnT&& value) {
    SetApplicationArn(std::forward<ApplicationArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Provides details about the stream session's exported files. </p>
   */
  inline const ExportFilesMetadata& GetExportFilesMetadata() const { return m_exportFilesMetadata; }
  inline bool ExportFilesMetadataHasBeenSet() const { return m_exportFilesMetadataHasBeenSet; }
  template <typename ExportFilesMetadataT = ExportFilesMetadata>
  void SetExportFilesMetadata(ExportFilesMetadataT&& value) {
    m_exportFilesMetadataHasBeenSet = true;
    m_exportFilesMetadata = std::forward<ExportFilesMetadataT>(value);
  }
  template <typename ExportFilesMetadataT = ExportFilesMetadata>
  StreamSessionSummary& WithExportFilesMetadata(ExportFilesMetadataT&& value) {
    SetExportFilesMetadata(std::forward<ExportFilesMetadataT>(value));
    return *this;
  }
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
  inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
  template <typename LocationT = Aws::String>
  void SetLocation(LocationT&& value) {
    m_locationHasBeenSet = true;
    m_location = std::forward<LocationT>(value);
  }
  template <typename LocationT = Aws::String>
  StreamSessionSummary& WithLocation(LocationT&& value) {
    SetLocation(std::forward<LocationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_arn;

  Aws::String m_userId;

  StreamSessionStatus m_status{StreamSessionStatus::NOT_SET};

  StreamSessionStatusReason m_statusReason{StreamSessionStatusReason::NOT_SET};

  Protocol m_protocol{Protocol::NOT_SET};

  Aws::Utils::DateTime m_lastUpdatedAt{};

  Aws::Utils::DateTime m_createdAt{};

  Aws::String m_applicationArn;

  ExportFilesMetadata m_exportFilesMetadata;

  Aws::String m_location;
  bool m_arnHasBeenSet = false;
  bool m_userIdHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_statusReasonHasBeenSet = false;
  bool m_protocolHasBeenSet = false;
  bool m_lastUpdatedAtHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_applicationArnHasBeenSet = false;
  bool m_exportFilesMetadataHasBeenSet = false;
  bool m_locationHasBeenSet = false;
};

}  // namespace Model
}  // namespace GameLiftStreams
}  // namespace Aws
