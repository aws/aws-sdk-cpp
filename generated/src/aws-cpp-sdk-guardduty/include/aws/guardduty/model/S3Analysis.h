/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/GuardDuty_EXPORTS.h>

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
 * <p>Contains an analysis of Amazon S3 activity or exposure. The members that can
 * be set depend on <code>AnalysisType</code>: <code>S3_EXPOSURE</code>
 * (<code>FindingSubtype</code>, <code>EffectivePermission</code>,
 * <code>BlockPublicAccessSettings</code>, and <code>Exposure</code>),
 * <code>S3_ACTOR_CONTEXT</code> (<code>UserAgent</code>,
 * <code>UserAgentClassification</code>, <code>SourceIp</code>,
 * <code>IpReputation</code>, and <code>ActorAssessment</code>), and
 * <code>S3_PEN_TEST</code> (<code>UserAgent</code>, <code>S3ApiActivity</code>,
 * <code>SourceContext</code>, and
 * <code>AuthorizationAssessment</code>).</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/S3Analysis">AWS
 * API Reference</a></p>
 */
class S3Analysis {
 public:
  AWS_GUARDDUTY_API S3Analysis() = default;
  AWS_GUARDDUTY_API S3Analysis(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API S3Analysis& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The subtype of the finding.</p>
   */
  inline const Aws::String& GetFindingSubtype() const { return m_findingSubtype; }
  inline bool FindingSubtypeHasBeenSet() const { return m_findingSubtypeHasBeenSet; }
  template <typename FindingSubtypeT = Aws::String>
  void SetFindingSubtype(FindingSubtypeT&& value) {
    m_findingSubtypeHasBeenSet = true;
    m_findingSubtype = std::forward<FindingSubtypeT>(value);
  }
  template <typename FindingSubtypeT = Aws::String>
  S3Analysis& WithFindingSubtype(FindingSubtypeT&& value) {
    SetFindingSubtype(std::forward<FindingSubtypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The effective permission of the Amazon S3 resource.</p>
   */
  inline const Aws::String& GetEffectivePermission() const { return m_effectivePermission; }
  inline bool EffectivePermissionHasBeenSet() const { return m_effectivePermissionHasBeenSet; }
  template <typename EffectivePermissionT = Aws::String>
  void SetEffectivePermission(EffectivePermissionT&& value) {
    m_effectivePermissionHasBeenSet = true;
    m_effectivePermission = std::forward<EffectivePermissionT>(value);
  }
  template <typename EffectivePermissionT = Aws::String>
  S3Analysis& WithEffectivePermission(EffectivePermissionT&& value) {
    SetEffectivePermission(std::forward<EffectivePermissionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the Amazon S3 Block Public Access settings.</p>
   */
  inline const Aws::String& GetBlockPublicAccessSettings() const { return m_blockPublicAccessSettings; }
  inline bool BlockPublicAccessSettingsHasBeenSet() const { return m_blockPublicAccessSettingsHasBeenSet; }
  template <typename BlockPublicAccessSettingsT = Aws::String>
  void SetBlockPublicAccessSettings(BlockPublicAccessSettingsT&& value) {
    m_blockPublicAccessSettingsHasBeenSet = true;
    m_blockPublicAccessSettings = std::forward<BlockPublicAccessSettingsT>(value);
  }
  template <typename BlockPublicAccessSettingsT = Aws::String>
  S3Analysis& WithBlockPublicAccessSettings(BlockPublicAccessSettingsT&& value) {
    SetBlockPublicAccessSettings(std::forward<BlockPublicAccessSettingsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An assessment of the exposure of the Amazon S3 resource.</p>
   */
  inline const Aws::String& GetExposure() const { return m_exposure; }
  inline bool ExposureHasBeenSet() const { return m_exposureHasBeenSet; }
  template <typename ExposureT = Aws::String>
  void SetExposure(ExposureT&& value) {
    m_exposureHasBeenSet = true;
    m_exposure = std::forward<ExposureT>(value);
  }
  template <typename ExposureT = Aws::String>
  S3Analysis& WithExposure(ExposureT&& value) {
    SetExposure(std::forward<ExposureT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The user agent of the caller.</p>
   */
  inline const Aws::String& GetUserAgent() const { return m_userAgent; }
  inline bool UserAgentHasBeenSet() const { return m_userAgentHasBeenSet; }
  template <typename UserAgentT = Aws::String>
  void SetUserAgent(UserAgentT&& value) {
    m_userAgentHasBeenSet = true;
    m_userAgent = std::forward<UserAgentT>(value);
  }
  template <typename UserAgentT = Aws::String>
  S3Analysis& WithUserAgent(UserAgentT&& value) {
    SetUserAgent(std::forward<UserAgentT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The classification of the user agent.</p>
   */
  inline const Aws::String& GetUserAgentClassification() const { return m_userAgentClassification; }
  inline bool UserAgentClassificationHasBeenSet() const { return m_userAgentClassificationHasBeenSet; }
  template <typename UserAgentClassificationT = Aws::String>
  void SetUserAgentClassification(UserAgentClassificationT&& value) {
    m_userAgentClassificationHasBeenSet = true;
    m_userAgentClassification = std::forward<UserAgentClassificationT>(value);
  }
  template <typename UserAgentClassificationT = Aws::String>
  S3Analysis& WithUserAgentClassification(UserAgentClassificationT&& value) {
    SetUserAgentClassification(std::forward<UserAgentClassificationT>(value));
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
  S3Analysis& WithSourceIp(SourceIpT&& value) {
    SetSourceIp(std::forward<SourceIpT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The reputation of the source IP address.</p>
   */
  inline const Aws::String& GetIpReputation() const { return m_ipReputation; }
  inline bool IpReputationHasBeenSet() const { return m_ipReputationHasBeenSet; }
  template <typename IpReputationT = Aws::String>
  void SetIpReputation(IpReputationT&& value) {
    m_ipReputationHasBeenSet = true;
    m_ipReputation = std::forward<IpReputationT>(value);
  }
  template <typename IpReputationT = Aws::String>
  S3Analysis& WithIpReputation(IpReputationT&& value) {
    SetIpReputation(std::forward<IpReputationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An assessment of the identity that performed the activity.</p>
   */
  inline const Aws::String& GetActorAssessment() const { return m_actorAssessment; }
  inline bool ActorAssessmentHasBeenSet() const { return m_actorAssessmentHasBeenSet; }
  template <typename ActorAssessmentT = Aws::String>
  void SetActorAssessment(ActorAssessmentT&& value) {
    m_actorAssessmentHasBeenSet = true;
    m_actorAssessment = std::forward<ActorAssessmentT>(value);
  }
  template <typename ActorAssessmentT = Aws::String>
  S3Analysis& WithActorAssessment(ActorAssessmentT&& value) {
    SetActorAssessment(std::forward<ActorAssessmentT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A description of the Amazon S3 API activity.</p>
   */
  inline const Aws::String& GetS3ApiActivity() const { return m_s3ApiActivity; }
  inline bool S3ApiActivityHasBeenSet() const { return m_s3ApiActivityHasBeenSet; }
  template <typename S3ApiActivityT = Aws::String>
  void SetS3ApiActivity(S3ApiActivityT&& value) {
    m_s3ApiActivityHasBeenSet = true;
    m_s3ApiActivity = std::forward<S3ApiActivityT>(value);
  }
  template <typename S3ApiActivityT = Aws::String>
  S3Analysis& WithS3ApiActivity(S3ApiActivityT&& value) {
    SetS3ApiActivity(std::forward<S3ApiActivityT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Context about the source of the activity.</p>
   */
  inline const Aws::String& GetSourceContext() const { return m_sourceContext; }
  inline bool SourceContextHasBeenSet() const { return m_sourceContextHasBeenSet; }
  template <typename SourceContextT = Aws::String>
  void SetSourceContext(SourceContextT&& value) {
    m_sourceContextHasBeenSet = true;
    m_sourceContext = std::forward<SourceContextT>(value);
  }
  template <typename SourceContextT = Aws::String>
  S3Analysis& WithSourceContext(SourceContextT&& value) {
    SetSourceContext(std::forward<SourceContextT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An assessment of whether the activity was authorized.</p>
   */
  inline const Aws::String& GetAuthorizationAssessment() const { return m_authorizationAssessment; }
  inline bool AuthorizationAssessmentHasBeenSet() const { return m_authorizationAssessmentHasBeenSet; }
  template <typename AuthorizationAssessmentT = Aws::String>
  void SetAuthorizationAssessment(AuthorizationAssessmentT&& value) {
    m_authorizationAssessmentHasBeenSet = true;
    m_authorizationAssessment = std::forward<AuthorizationAssessmentT>(value);
  }
  template <typename AuthorizationAssessmentT = Aws::String>
  S3Analysis& WithAuthorizationAssessment(AuthorizationAssessmentT&& value) {
    SetAuthorizationAssessment(std::forward<AuthorizationAssessmentT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_findingSubtype;

  Aws::String m_effectivePermission;

  Aws::String m_blockPublicAccessSettings;

  Aws::String m_exposure;

  Aws::String m_userAgent;

  Aws::String m_userAgentClassification;

  Aws::String m_sourceIp;

  Aws::String m_ipReputation;

  Aws::String m_actorAssessment;

  Aws::String m_s3ApiActivity;

  Aws::String m_sourceContext;

  Aws::String m_authorizationAssessment;
  bool m_findingSubtypeHasBeenSet = false;
  bool m_effectivePermissionHasBeenSet = false;
  bool m_blockPublicAccessSettingsHasBeenSet = false;
  bool m_exposureHasBeenSet = false;
  bool m_userAgentHasBeenSet = false;
  bool m_userAgentClassificationHasBeenSet = false;
  bool m_sourceIpHasBeenSet = false;
  bool m_ipReputationHasBeenSet = false;
  bool m_actorAssessmentHasBeenSet = false;
  bool m_s3ApiActivityHasBeenSet = false;
  bool m_sourceContextHasBeenSet = false;
  bool m_authorizationAssessmentHasBeenSet = false;
};

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
