/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gameliftstreams/GameLiftStreams_EXPORTS.h>
#include <aws/gameliftstreams/model/StreamUrlStatus.h>
#include <aws/gameliftstreams/model/StreamUrlStatusReason.h>

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
 * <p>Describes a stream URL. This is a summary view that omits the full
 * configuration, such as launch arguments and display settings. To retrieve the
 * complete configuration, call <a
 * href="https://docs.aws.amazon.com/gameliftstreams/latest/apireference/API_GetStreamUrl.html">GetStreamUrl</a>.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/gameliftstreams-2018-05-10/StreamUrlSummary">AWS
 * API Reference</a></p>
 */
class StreamUrlSummary {
 public:
  AWS_GAMELIFTSTREAMS_API StreamUrlSummary() = default;
  AWS_GAMELIFTSTREAMS_API StreamUrlSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_GAMELIFTSTREAMS_API StreamUrlSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GAMELIFTSTREAMS_API Aws::Utils::Json::JsonValue Jsonize() const;

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
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  StreamUrlSummary& WithArn(ArnT&& value) {
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
  inline bool StreamUrlIdHasBeenSet() const { return m_streamUrlIdHasBeenSet; }
  template <typename StreamUrlIdT = Aws::String>
  void SetStreamUrlId(StreamUrlIdT&& value) {
    m_streamUrlIdHasBeenSet = true;
    m_streamUrlId = std::forward<StreamUrlIdT>(value);
  }
  template <typename StreamUrlIdT = Aws::String>
  StreamUrlSummary& WithStreamUrlId(StreamUrlIdT&& value) {
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
  inline bool StreamUrlHasBeenSet() const { return m_streamUrlHasBeenSet; }
  template <typename StreamUrlT = Aws::String>
  void SetStreamUrl(StreamUrlT&& value) {
    m_streamUrlHasBeenSet = true;
    m_streamUrl = std::forward<StreamUrlT>(value);
  }
  template <typename StreamUrlT = Aws::String>
  StreamUrlSummary& WithStreamUrl(StreamUrlT&& value) {
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
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(StreamUrlStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline StreamUrlSummary& WithStatus(StreamUrlStatus value) {
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
  inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
  inline void SetStatusReason(StreamUrlStatusReason value) {
    m_statusReasonHasBeenSet = true;
    m_statusReason = value;
  }
  inline StreamUrlSummary& WithStatusReason(StreamUrlStatusReason value) {
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
  inline bool ExpiresAtHasBeenSet() const { return m_expiresAtHasBeenSet; }
  template <typename ExpiresAtT = Aws::Utils::DateTime>
  void SetExpiresAt(ExpiresAtT&& value) {
    m_expiresAtHasBeenSet = true;
    m_expiresAt = std::forward<ExpiresAtT>(value);
  }
  template <typename ExpiresAtT = Aws::Utils::DateTime>
  StreamUrlSummary& WithExpiresAt(ExpiresAtT&& value) {
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
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  StreamUrlSummary& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of times the stream URL can start a stream session.</p>
   */
  inline int GetUsageLimit() const { return m_usageLimit; }
  inline bool UsageLimitHasBeenSet() const { return m_usageLimitHasBeenSet; }
  inline void SetUsageLimit(int value) {
    m_usageLimitHasBeenSet = true;
    m_usageLimit = value;
  }
  inline StreamUrlSummary& WithUsageLimit(int value) {
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
  inline bool RemainingUsesHasBeenSet() const { return m_remainingUsesHasBeenSet; }
  inline void SetRemainingUses(int value) {
    m_remainingUsesHasBeenSet = true;
    m_remainingUses = value;
  }
  inline StreamUrlSummary& WithRemainingUses(int value) {
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
  inline bool StreamGroupArnHasBeenSet() const { return m_streamGroupArnHasBeenSet; }
  template <typename StreamGroupArnT = Aws::String>
  void SetStreamGroupArn(StreamGroupArnT&& value) {
    m_streamGroupArnHasBeenSet = true;
    m_streamGroupArn = std::forward<StreamGroupArnT>(value);
  }
  template <typename StreamGroupArnT = Aws::String>
  StreamUrlSummary& WithStreamGroupArn(StreamGroupArnT&& value) {
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
  inline bool ApplicationArnHasBeenSet() const { return m_applicationArnHasBeenSet; }
  template <typename ApplicationArnT = Aws::String>
  void SetApplicationArn(ApplicationArnT&& value) {
    m_applicationArnHasBeenSet = true;
    m_applicationArn = std::forward<ApplicationArnT>(value);
  }
  template <typename ApplicationArnT = Aws::String>
  StreamUrlSummary& WithApplicationArn(ApplicationArnT&& value) {
    SetApplicationArn(std::forward<ApplicationArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum length of time, in seconds, that a stream session started from
   * this stream URL can run.</p>
   */
  inline int GetSessionLengthSeconds() const { return m_sessionLengthSeconds; }
  inline bool SessionLengthSecondsHasBeenSet() const { return m_sessionLengthSecondsHasBeenSet; }
  inline void SetSessionLengthSeconds(int value) {
    m_sessionLengthSecondsHasBeenSet = true;
    m_sessionLengthSeconds = value;
  }
  inline StreamUrlSummary& WithSessionLengthSeconds(int value) {
    SetSessionLengthSeconds(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The descriptive label for the stream URL.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  StreamUrlSummary& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}
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

  int m_sessionLengthSeconds{0};

  Aws::String m_description;
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
  bool m_sessionLengthSecondsHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
};

}  // namespace Model
}  // namespace GameLiftStreams
}  // namespace Aws
