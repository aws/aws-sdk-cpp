/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/gameliftstreams/GameLiftStreams_EXPORTS.h>
#include <aws/gameliftstreams/model/DisplayConfiguration.h>
#include <aws/gameliftstreams/model/Protocol.h>
#include <aws/gameliftstreams/model/StreamSessionSummary.h>
#include <aws/gameliftstreams/model/StreamUrlStatus.h>
#include <aws/gameliftstreams/model/StreamUrlStatusReason.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace GameLiftStreams {
namespace Model {
class GetStreamUrlResult {
 public:
  AWS_GAMELIFTSTREAMS_API GetStreamUrlResult() = default;
  AWS_GAMELIFTSTREAMS_API GetStreamUrlResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_GAMELIFTSTREAMS_API GetStreamUrlResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The <a
   * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference-arns.html">Amazon
   * Resource Name (ARN)</a> that uniquely identifies the stream URL across all
   * Amazon Web Services Regions. Format is <code>arn:aws:gameliftstreams:[AWS
   * Region]:[AWS account]:streamurl/[stream group resource ID]/[stream URL resource
   * ID]</code>.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  GetStreamUrlResult& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier for the stream URL resource, for example
   * <code>su-1AB2C3De4</code>.</p>
   */
  inline const Aws::String& GetStreamUrlId() const { return m_streamUrlId; }
  template <typename StreamUrlIdT = Aws::String>
  void SetStreamUrlId(StreamUrlIdT&& value) {
    m_streamUrlIdHasBeenSet = true;
    m_streamUrlId = std::forward<StreamUrlIdT>(value);
  }
  template <typename StreamUrlIdT = Aws::String>
  GetStreamUrlResult& WithStreamUrlId(StreamUrlIdT&& value) {
    SetStreamUrlId(std::forward<StreamUrlIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The shareable stream URL. Distribute this URL to end users so that they can
   * start and play a stream session in a hosted web player. Treat the stream URL as
   * a secret. Anyone who has it can start a stream session until the stream URL
   * expires, is revoked, or reaches its usage limit.</p>
   */
  inline const Aws::String& GetStreamUrl() const { return m_streamUrl; }
  template <typename StreamUrlT = Aws::String>
  void SetStreamUrl(StreamUrlT&& value) {
    m_streamUrlHasBeenSet = true;
    m_streamUrl = std::forward<StreamUrlT>(value);
  }
  template <typename StreamUrlT = Aws::String>
  GetStreamUrlResult& WithStreamUrl(StreamUrlT&& value) {
    SetStreamUrl(std::forward<StreamUrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the stream URL. Possible statuses include the
   * following:</p> <ul> <li> <p> <code>ACTIVE</code>: The stream URL is valid and
   * can start stream sessions.</p> </li> <li> <p> <code>EXPIRED</code>: The stream
   * URL has passed its expiration time and can no longer start stream sessions.</p>
   * </li> <li> <p> <code>REVOKED</code>: The stream URL was revoked and can no
   * longer start stream sessions.</p> </li> <li> <p> <code>LIMIT_REACHED</code>: The
   * stream URL has been used the maximum number of times and can no longer start
   * stream sessions.</p> </li> </ul>
   */
  inline StreamUrlStatus GetStatus() const { return m_status; }
  inline void SetStatus(StreamUrlStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline GetStreamUrlResult& WithStatus(StreamUrlStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Additional information about why the stream URL is in its current status.
   * Amazon GameLift Streams populates this value when the status is
   * <code>REVOKED</code>. Possible values include the following:</p> <ul> <li> <p>
   * <code>userRevoked</code>: You revoked the stream URL.</p> </li> <li> <p>
   * <code>revokedAndTerminatingSessions</code>: You revoked the stream URL and
   * Amazon GameLift Streams is ending its running stream sessions.</p> </li> <li>
   * <p> <code>revokedAndSessionsTerminated</code>: You revoked the stream URL and
   * its running stream sessions have ended.</p> </li> <li> <p>
   * <code>streamGroupDeleted</code>: The stream group was deleted, which revoked the
   * stream URL.</p> </li> <li> <p> <code>applicationDeleted</code>: The application
   * was deleted, which revoked the stream URL.</p> </li> </ul>
   */
  inline StreamUrlStatusReason GetStatusReason() const { return m_statusReason; }
  inline void SetStatusReason(StreamUrlStatusReason value) {
    m_statusReasonHasBeenSet = true;
    m_statusReason = value;
  }
  inline GetStreamUrlResult& WithStatusReason(StreamUrlStatusReason value) {
    SetStatusReason(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the stream URL expires and stops accepting new stream
   * sessions. Timestamps are expressed using in ISO8601 format, such as:
   * <code>2022-12-27T22:29:40+00:00</code> (UTC).</p>
   */
  inline const Aws::Utils::DateTime& GetExpiresAt() const { return m_expiresAt; }
  template <typename ExpiresAtT = Aws::Utils::DateTime>
  void SetExpiresAt(ExpiresAtT&& value) {
    m_expiresAtHasBeenSet = true;
    m_expiresAt = std::forward<ExpiresAtT>(value);
  }
  template <typename ExpiresAtT = Aws::Utils::DateTime>
  GetStreamUrlResult& WithExpiresAt(ExpiresAtT&& value) {
    SetExpiresAt(std::forward<ExpiresAtT>(value));
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
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  GetStreamUrlResult& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of times the stream URL can start a stream session.</p>
   */
  inline int GetUsageLimit() const { return m_usageLimit; }
  inline void SetUsageLimit(int value) {
    m_usageLimitHasBeenSet = true;
    m_usageLimit = value;
  }
  inline GetStreamUrlResult& WithUsageLimit(int value) {
    SetUsageLimit(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of times the stream URL can still be used to start a stream
   * session.</p>
   */
  inline int GetRemainingUses() const { return m_remainingUses; }
  inline void SetRemainingUses(int value) {
    m_remainingUsesHasBeenSet = true;
    m_remainingUses = value;
  }
  inline GetStreamUrlResult& WithRemainingUses(int value) {
    SetRemainingUses(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The stream group that runs the stream sessions.</p> <p>This value is an <a
   * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference-arns.html">Amazon
   * Resource Name (ARN)</a> that uniquely identifies the stream group resource.
   * Example ARN:
   * <code>arn:aws:gameliftstreams:us-west-2:111122223333:streamgroup/sg-1AB2C3De4</code>.
   * </p>
   */
  inline const Aws::String& GetStreamGroupArn() const { return m_streamGroupArn; }
  template <typename StreamGroupArnT = Aws::String>
  void SetStreamGroupArn(StreamGroupArnT&& value) {
    m_streamGroupArnHasBeenSet = true;
    m_streamGroupArn = std::forward<StreamGroupArnT>(value);
  }
  template <typename StreamGroupArnT = Aws::String>
  GetStreamUrlResult& WithStreamGroupArn(StreamGroupArnT&& value) {
    SetStreamGroupArn(std::forward<StreamGroupArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The application that runs in the stream sessions.</p> <p>This value is an <a
   * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference-arns.html">Amazon
   * Resource Name (ARN)</a> that uniquely identifies the application resource.
   * Example ARN:
   * <code>arn:aws:gameliftstreams:us-west-2:111122223333:application/a-9ZY8X7Wv6</code>.
   * </p>
   */
  inline const Aws::String& GetApplicationArn() const { return m_applicationArn; }
  template <typename ApplicationArnT = Aws::String>
  void SetApplicationArn(ApplicationArnT&& value) {
    m_applicationArnHasBeenSet = true;
    m_applicationArn = std::forward<ApplicationArnT>(value);
  }
  template <typename ApplicationArnT = Aws::String>
  GetStreamUrlResult& WithApplicationArn(ApplicationArnT&& value) {
    SetApplicationArn(std::forward<ApplicationArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The data transport protocol used for stream sessions started from this stream
   * URL.</p>
   */
  inline Protocol GetProtocol() const { return m_protocol; }
  inline void SetProtocol(Protocol value) {
    m_protocolHasBeenSet = true;
    m_protocol = value;
  }
  inline GetStreamUrlResult& WithProtocol(Protocol value) {
    SetProtocol(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of locations, in order of preference, where Amazon GameLift Streams
   * places the stream session. For a complete list of locations that Amazon GameLift
   * Streams supports, refer to <a
   * href="https://docs.aws.amazon.com/gameliftstreams/latest/developerguide/regions-quotas.html">Regions,
   * quotas, and limitations</a> in the <i>Amazon GameLift Streams Developer
   * Guide</i>. </p>
   */
  inline const Aws::Vector<Aws::String>& GetLocations() const { return m_locations; }
  template <typename LocationsT = Aws::Vector<Aws::String>>
  void SetLocations(LocationsT&& value) {
    m_locationsHasBeenSet = true;
    m_locations = std::forward<LocationsT>(value);
  }
  template <typename LocationsT = Aws::Vector<Aws::String>>
  GetStreamUrlResult& WithLocations(LocationsT&& value) {
    SetLocations(std::forward<LocationsT>(value));
    return *this;
  }
  template <typename LocationsT = Aws::String>
  GetStreamUrlResult& AddLocations(LocationsT&& value) {
    m_locationsHasBeenSet = true;
    m_locations.emplace_back(std::forward<LocationsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum length of time, in seconds, that a stream session started from
   * this stream URL can run.</p>
   */
  inline int GetSessionLengthSeconds() const { return m_sessionLengthSeconds; }
  inline void SetSessionLengthSeconds(int value) {
    m_sessionLengthSecondsHasBeenSet = true;
    m_sessionLengthSeconds = value;
  }
  inline GetStreamUrlResult& WithSessionLengthSeconds(int value) {
    SetSessionLengthSeconds(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The descriptive label for the stream URL.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  GetStreamUrlResult& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The command-line arguments passed to the application when a stream session
   * starts.</p>
   */
  inline const Aws::Vector<Aws::String>& GetAdditionalLaunchArgs() const { return m_additionalLaunchArgs; }
  template <typename AdditionalLaunchArgsT = Aws::Vector<Aws::String>>
  void SetAdditionalLaunchArgs(AdditionalLaunchArgsT&& value) {
    m_additionalLaunchArgsHasBeenSet = true;
    m_additionalLaunchArgs = std::forward<AdditionalLaunchArgsT>(value);
  }
  template <typename AdditionalLaunchArgsT = Aws::Vector<Aws::String>>
  GetStreamUrlResult& WithAdditionalLaunchArgs(AdditionalLaunchArgsT&& value) {
    SetAdditionalLaunchArgs(std::forward<AdditionalLaunchArgsT>(value));
    return *this;
  }
  template <typename AdditionalLaunchArgsT = Aws::String>
  GetStreamUrlResult& AddAdditionalLaunchArgs(AdditionalLaunchArgsT&& value) {
    m_additionalLaunchArgsHasBeenSet = true;
    m_additionalLaunchArgs.emplace_back(std::forward<AdditionalLaunchArgsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The environment variables made available to the application when a stream
   * session starts.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetAdditionalEnvironmentVariables() const { return m_additionalEnvironmentVariables; }
  template <typename AdditionalEnvironmentVariablesT = Aws::Map<Aws::String, Aws::String>>
  void SetAdditionalEnvironmentVariables(AdditionalEnvironmentVariablesT&& value) {
    m_additionalEnvironmentVariablesHasBeenSet = true;
    m_additionalEnvironmentVariables = std::forward<AdditionalEnvironmentVariablesT>(value);
  }
  template <typename AdditionalEnvironmentVariablesT = Aws::Map<Aws::String, Aws::String>>
  GetStreamUrlResult& WithAdditionalEnvironmentVariables(AdditionalEnvironmentVariablesT&& value) {
    SetAdditionalEnvironmentVariables(std::forward<AdditionalEnvironmentVariablesT>(value));
    return *this;
  }
  template <typename AdditionalEnvironmentVariablesKeyT = Aws::String, typename AdditionalEnvironmentVariablesValueT = Aws::String>
  GetStreamUrlResult& AddAdditionalEnvironmentVariables(AdditionalEnvironmentVariablesKeyT&& key,
                                                        AdditionalEnvironmentVariablesValueT&& value) {
    m_additionalEnvironmentVariablesHasBeenSet = true;
    m_additionalEnvironmentVariables.emplace(std::forward<AdditionalEnvironmentVariablesKeyT>(key),
                                             std::forward<AdditionalEnvironmentVariablesValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the IAM role that Amazon GameLift Streams
   * assumes during stream sessions started from this stream URL. For more
   * information, see <a
   * href="https://docs.aws.amazon.com/gameliftstreams/latest/developerguide/session-credentials.html">Provide
   * AWS credentials to your streaming application</a> in the <i>Amazon GameLift
   * Streams Developer Guide</i>.</p>
   */
  inline const Aws::String& GetRoleArn() const { return m_roleArn; }
  template <typename RoleArnT = Aws::String>
  void SetRoleArn(RoleArnT&& value) {
    m_roleArnHasBeenSet = true;
    m_roleArn = std::forward<RoleArnT>(value);
  }
  template <typename RoleArnT = Aws::String>
  GetStreamUrlResult& WithRoleArn(RoleArnT&& value) {
    SetRoleArn(std::forward<RoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The display settings, such as resolution, for stream sessions started from
   * this stream URL.</p>
   */
  inline const DisplayConfiguration& GetDisplayConfiguration() const { return m_displayConfiguration; }
  template <typename DisplayConfigurationT = DisplayConfiguration>
  void SetDisplayConfiguration(DisplayConfigurationT&& value) {
    m_displayConfigurationHasBeenSet = true;
    m_displayConfiguration = std::forward<DisplayConfigurationT>(value);
  }
  template <typename DisplayConfigurationT = DisplayConfiguration>
  GetStreamUrlResult& WithDisplayConfiguration(DisplayConfigurationT&& value) {
    SetDisplayConfiguration(std::forward<DisplayConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of the stream sessions that have been started through this stream
   * URL.</p>
   */
  inline const Aws::Vector<StreamSessionSummary>& GetStreamSessions() const { return m_streamSessions; }
  template <typename StreamSessionsT = Aws::Vector<StreamSessionSummary>>
  void SetStreamSessions(StreamSessionsT&& value) {
    m_streamSessionsHasBeenSet = true;
    m_streamSessions = std::forward<StreamSessionsT>(value);
  }
  template <typename StreamSessionsT = Aws::Vector<StreamSessionSummary>>
  GetStreamUrlResult& WithStreamSessions(StreamSessionsT&& value) {
    SetStreamSessions(std::forward<StreamSessionsT>(value));
    return *this;
  }
  template <typename StreamSessionsT = StreamSessionSummary>
  GetStreamUrlResult& AddStreamSessions(StreamSessionsT&& value) {
    m_streamSessionsHasBeenSet = true;
    m_streamSessions.emplace_back(std::forward<StreamSessionsT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  GetStreamUrlResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_arn;

  Aws::String m_streamUrlId;

  Aws::String m_streamUrl;

  StreamUrlStatus m_status{StreamUrlStatus::NOT_SET};

  StreamUrlStatusReason m_statusReason{StreamUrlStatusReason::NOT_SET};

  Aws::Utils::DateTime m_expiresAt{};

  Aws::Utils::DateTime m_createdAt{};

  int m_usageLimit{0};

  int m_remainingUses{0};

  Aws::String m_streamGroupArn;

  Aws::String m_applicationArn;

  Protocol m_protocol{Protocol::NOT_SET};

  Aws::Vector<Aws::String> m_locations;

  int m_sessionLengthSeconds{0};

  Aws::String m_description;

  Aws::Vector<Aws::String> m_additionalLaunchArgs;

  Aws::Map<Aws::String, Aws::String> m_additionalEnvironmentVariables;

  Aws::String m_roleArn;

  DisplayConfiguration m_displayConfiguration;

  Aws::Vector<StreamSessionSummary> m_streamSessions;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_arnHasBeenSet = false;
  bool m_streamUrlIdHasBeenSet = false;
  bool m_streamUrlHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_statusReasonHasBeenSet = false;
  bool m_expiresAtHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_usageLimitHasBeenSet = false;
  bool m_remainingUsesHasBeenSet = false;
  bool m_streamGroupArnHasBeenSet = false;
  bool m_applicationArnHasBeenSet = false;
  bool m_protocolHasBeenSet = false;
  bool m_locationsHasBeenSet = false;
  bool m_sessionLengthSecondsHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_additionalLaunchArgsHasBeenSet = false;
  bool m_additionalEnvironmentVariablesHasBeenSet = false;
  bool m_roleArnHasBeenSet = false;
  bool m_displayConfigurationHasBeenSet = false;
  bool m_streamSessionsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace GameLiftStreams
}  // namespace Aws
