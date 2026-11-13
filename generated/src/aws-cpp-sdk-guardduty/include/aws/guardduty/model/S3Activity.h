/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/ActivityWindow.h>
#include <aws/guardduty/model/Enrichment.h>
#include <aws/guardduty/model/InvestigationActor.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace GuardDuty {
namespace Model {

/**
 * <p>Contains details about Amazon S3 activity.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/S3Activity">AWS
 * API Reference</a></p>
 */
class S3Activity {
 public:
  AWS_GUARDDUTY_API S3Activity() = default;
  AWS_GUARDDUTY_API S3Activity(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API S3Activity& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon S3 API operation that was called.</p>
   */
  inline const Aws::String& GetApi() const { return m_api; }
  inline bool ApiHasBeenSet() const { return m_apiHasBeenSet; }
  template <typename ApiT = Aws::String>
  void SetApi(ApiT&& value) {
    m_apiHasBeenSet = true;
    m_api = std::forward<ApiT>(value);
  }
  template <typename ApiT = Aws::String>
  S3Activity& WithApi(ApiT&& value) {
    SetApi(std::forward<ApiT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the affected bucket, or <code>account-wide</code> if the activity
   * isn't limited to one bucket.</p>
   */
  inline const Aws::String& GetAffectedBucket() const { return m_affectedBucket; }
  inline bool AffectedBucketHasBeenSet() const { return m_affectedBucketHasBeenSet; }
  template <typename AffectedBucketT = Aws::String>
  void SetAffectedBucket(AffectedBucketT&& value) {
    m_affectedBucketHasBeenSet = true;
    m_affectedBucket = std::forward<AffectedBucketT>(value);
  }
  template <typename AffectedBucketT = Aws::String>
  S3Activity& WithAffectedBucket(AffectedBucketT&& value) {
    SetAffectedBucket(std::forward<AffectedBucketT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Other Amazon S3 activity that is related to the observation.</p>
   */
  inline const Aws::String& GetOtherS3Activity() const { return m_otherS3Activity; }
  inline bool OtherS3ActivityHasBeenSet() const { return m_otherS3ActivityHasBeenSet; }
  template <typename OtherS3ActivityT = Aws::String>
  void SetOtherS3Activity(OtherS3ActivityT&& value) {
    m_otherS3ActivityHasBeenSet = true;
    m_otherS3Activity = std::forward<OtherS3ActivityT>(value);
  }
  template <typename OtherS3ActivityT = Aws::String>
  S3Activity& WithOtherS3Activity(OtherS3ActivityT&& value) {
    SetOtherS3Activity(std::forward<OtherS3ActivityT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Related activity on Amazon Web Services services other than Amazon S3.</p>
   */
  inline const Aws::String& GetNonS3Activity() const { return m_nonS3Activity; }
  inline bool NonS3ActivityHasBeenSet() const { return m_nonS3ActivityHasBeenSet; }
  template <typename NonS3ActivityT = Aws::String>
  void SetNonS3Activity(NonS3ActivityT&& value) {
    m_nonS3ActivityHasBeenSet = true;
    m_nonS3Activity = std::forward<NonS3ActivityT>(value);
  }
  template <typename NonS3ActivityT = Aws::String>
  S3Activity& WithNonS3Activity(NonS3ActivityT&& value) {
    SetNonS3Activity(std::forward<NonS3ActivityT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An assessment of the session in which the activity occurred.</p>
   */
  inline const Aws::String& GetSessionAssessment() const { return m_sessionAssessment; }
  inline bool SessionAssessmentHasBeenSet() const { return m_sessionAssessmentHasBeenSet; }
  template <typename SessionAssessmentT = Aws::String>
  void SetSessionAssessment(SessionAssessmentT&& value) {
    m_sessionAssessmentHasBeenSet = true;
    m_sessionAssessment = std::forward<SessionAssessmentT>(value);
  }
  template <typename SessionAssessmentT = Aws::String>
  S3Activity& WithSessionAssessment(SessionAssessmentT&& value) {
    SetSessionAssessment(std::forward<SessionAssessmentT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of events.</p>
   */
  inline long long GetEventCount() const { return m_eventCount; }
  inline bool EventCountHasBeenSet() const { return m_eventCountHasBeenSet; }
  inline void SetEventCount(long long value) {
    m_eventCountHasBeenSet = true;
    m_eventCount = value;
  }
  inline S3Activity& WithEventCount(long long value) {
    SetEventCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identity that performed the activity.</p>
   */
  inline const InvestigationActor& GetActor() const { return m_actor; }
  inline bool ActorHasBeenSet() const { return m_actorHasBeenSet; }
  template <typename ActorT = InvestigationActor>
  void SetActor(ActorT&& value) {
    m_actorHasBeenSet = true;
    m_actor = std::forward<ActorT>(value);
  }
  template <typename ActorT = InvestigationActor>
  S3Activity& WithActor(ActorT&& value) {
    SetActor(std::forward<ActorT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The source address of the activity, or a description of the source.</p>
   */
  inline const Aws::String& GetSourceIp() const { return m_sourceIp; }
  inline bool SourceIpHasBeenSet() const { return m_sourceIpHasBeenSet; }
  template <typename SourceIpT = Aws::String>
  void SetSourceIp(SourceIpT&& value) {
    m_sourceIpHasBeenSet = true;
    m_sourceIp = std::forward<SourceIpT>(value);
  }
  template <typename SourceIpT = Aws::String>
  S3Activity& WithSourceIp(SourceIpT&& value) {
    SetSourceIp(std::forward<SourceIpT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Additional context about the activity, such as geolocation information.</p>
   */
  inline const Enrichment& GetEnrichment() const { return m_enrichment; }
  inline bool EnrichmentHasBeenSet() const { return m_enrichmentHasBeenSet; }
  template <typename EnrichmentT = Enrichment>
  void SetEnrichment(EnrichmentT&& value) {
    m_enrichmentHasBeenSet = true;
    m_enrichment = std::forward<EnrichmentT>(value);
  }
  template <typename EnrichmentT = Enrichment>
  S3Activity& WithEnrichment(EnrichmentT&& value) {
    SetEnrichment(std::forward<EnrichmentT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time range of the activity.</p>
   */
  inline const ActivityWindow& GetActivityWindow() const { return m_activityWindow; }
  inline bool ActivityWindowHasBeenSet() const { return m_activityWindowHasBeenSet; }
  template <typename ActivityWindowT = ActivityWindow>
  void SetActivityWindow(ActivityWindowT&& value) {
    m_activityWindowHasBeenSet = true;
    m_activityWindow = std::forward<ActivityWindowT>(value);
  }
  template <typename ActivityWindowT = ActivityWindow>
  S3Activity& WithActivityWindow(ActivityWindowT&& value) {
    SetActivityWindow(std::forward<ActivityWindowT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_api;

  Aws::String m_affectedBucket;

  Aws::String m_otherS3Activity;

  Aws::String m_nonS3Activity;

  Aws::String m_sessionAssessment;

  long long m_eventCount{0};

  InvestigationActor m_actor;

  Aws::String m_sourceIp;

  Enrichment m_enrichment;

  ActivityWindow m_activityWindow;
  bool m_apiHasBeenSet = false;
  bool m_affectedBucketHasBeenSet = false;
  bool m_otherS3ActivityHasBeenSet = false;
  bool m_nonS3ActivityHasBeenSet = false;
  bool m_sessionAssessmentHasBeenSet = false;
  bool m_eventCountHasBeenSet = false;
  bool m_actorHasBeenSet = false;
  bool m_sourceIpHasBeenSet = false;
  bool m_enrichmentHasBeenSet = false;
  bool m_activityWindowHasBeenSet = false;
};

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
