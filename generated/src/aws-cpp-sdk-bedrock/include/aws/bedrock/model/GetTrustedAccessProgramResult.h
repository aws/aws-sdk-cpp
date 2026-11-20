/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/model/TrustedAccessProgramOptIn.h>
#include <aws/bedrock/model/TrustedAccessProgramScope.h>
#include <aws/bedrock/model/TrustedAccessProgramStatus.h>
#include <aws/bedrock/model/TrustedAccessResolutionContext.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace Bedrock {
namespace Model {
/**
 * <p>The program's details and participation resolved for the calling account or
 * requested project.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/GetTrustedAccessProgramResponse">AWS
 * API Reference</a></p>
 */
class GetTrustedAccessProgramResult {
 public:
  AWS_BEDROCK_API GetTrustedAccessProgramResult() = default;
  AWS_BEDROCK_API GetTrustedAccessProgramResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_BEDROCK_API GetTrustedAccessProgramResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>Identifier of the trusted access program.</p>
   */
  inline const Aws::String& GetProgramId() const { return m_programId; }
  template <typename ProgramIdT = Aws::String>
  void SetProgramId(ProgramIdT&& value) {
    m_programIdHasBeenSet = true;
    m_programId = std::forward<ProgramIdT>(value);
  }
  template <typename ProgramIdT = Aws::String>
  GetTrustedAccessProgramResult& WithProgramId(ProgramIdT&& value) {
    SetProgramId(std::forward<ProgramIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Display name of the program.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  GetTrustedAccessProgramResult& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Description of the program and its effects on model access or data
   * handling.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  GetTrustedAccessProgramResult& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Name of the model provider offering the program.</p>
   */
  inline const Aws::String& GetProviderName() const { return m_providerName; }
  template <typename ProviderNameT = Aws::String>
  void SetProviderName(ProviderNameT&& value) {
    m_providerNameHasBeenSet = true;
    m_providerName = std::forward<ProviderNameT>(value);
  }
  template <typename ProviderNameT = Aws::String>
  GetTrustedAccessProgramResult& WithProviderName(ProviderNameT&& value) {
    SetProviderName(std::forward<ProviderNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>URL with program details, terms, and instructions for obtaining access.</p>
   */
  inline const Aws::String& GetDetailsUrl() const { return m_detailsUrl; }
  template <typename DetailsUrlT = Aws::String>
  void SetDetailsUrl(DetailsUrlT&& value) {
    m_detailsUrlHasBeenSet = true;
    m_detailsUrl = std::forward<DetailsUrlT>(value);
  }
  template <typename DetailsUrlT = Aws::String>
  GetTrustedAccessProgramResult& WithDetailsUrl(DetailsUrlT&& value) {
    SetDetailsUrl(std::forward<DetailsUrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Provider application intake URL. Omitted when the program has no
   * customer-facing intake URL.</p>
   */
  inline const Aws::String& GetEnrollmentUrl() const { return m_enrollmentUrl; }
  template <typename EnrollmentUrlT = Aws::String>
  void SetEnrollmentUrl(EnrollmentUrlT&& value) {
    m_enrollmentUrlHasBeenSet = true;
    m_enrollmentUrl = std::forward<EnrollmentUrlT>(value);
  }
  template <typename EnrollmentUrlT = Aws::String>
  GetTrustedAccessProgramResult& WithEnrollmentUrl(EnrollmentUrlT&& value) {
    SetEnrollmentUrl(std::forward<EnrollmentUrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Participation status resolved for the account and optional project
   * context.</p>
   */
  inline TrustedAccessProgramStatus GetStatus() const { return m_status; }
  inline void SetStatus(TrustedAccessProgramStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline GetTrustedAccessProgramResult& WithStatus(TrustedAccessProgramStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Nonempty explanation for requestable or revoked status. Omitted for other
   * statuses.</p>
   */
  inline const Aws::String& GetStatusReason() const { return m_statusReason; }
  template <typename StatusReasonT = Aws::String>
  void SetStatusReason(StatusReasonT&& value) {
    m_statusReasonHasBeenSet = true;
    m_statusReason = std::forward<StatusReasonT>(value);
  }
  template <typename StatusReasonT = Aws::String>
  GetTrustedAccessProgramResult& WithStatusReason(StatusReasonT&& value) {
    SetStatusReason(std::forward<StatusReasonT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Scope deciding the status. This can differ from the scope supplying the
   * resolved opt-in preference and enrollment timestamps.</p>
   */
  inline TrustedAccessProgramScope GetSource() const { return m_source; }
  inline void SetSource(TrustedAccessProgramScope value) {
    m_sourceHasBeenSet = true;
    m_source = value;
  }
  inline GetTrustedAccessProgramResult& WithSource(TrustedAccessProgramScope value) {
    SetSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Scope supplying the applicable approval or most-specific revocation. Omitted
   * when no approval or revocation applies.</p>
   */
  inline TrustedAccessProgramScope GetEligibilityScope() const { return m_eligibilityScope; }
  inline void SetEligibilityScope(TrustedAccessProgramScope value) {
    m_eligibilityScopeHasBeenSet = true;
    m_eligibilityScope = value;
  }
  inline GetTrustedAccessProgramResult& WithEligibilityScope(TrustedAccessProgramScope value) {
    SetEligibilityScope(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Account and optional project context for which participation was
   * resolved.</p>
   */
  inline const TrustedAccessResolutionContext& GetResolvedFor() const { return m_resolvedFor; }
  template <typename ResolvedForT = TrustedAccessResolutionContext>
  void SetResolvedFor(ResolvedForT&& value) {
    m_resolvedForHasBeenSet = true;
    m_resolvedFor = std::forward<ResolvedForT>(value);
  }
  template <typename ResolvedForT = TrustedAccessResolutionContext>
  GetTrustedAccessProgramResult& WithResolvedFor(ResolvedForT&& value) {
    SetResolvedFor(std::forward<ResolvedForT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Resolved customer preference, preserved independently of eligibility,
   * including while revoked.</p>
   */
  inline TrustedAccessProgramOptIn GetOptIn() const { return m_optIn; }
  inline void SetOptIn(TrustedAccessProgramOptIn value) {
    m_optInHasBeenSet = true;
    m_optIn = value;
  }
  inline GetTrustedAccessProgramResult& WithOptIn(TrustedAccessProgramOptIn value) {
    SetOptIn(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Last change to the enrollment supplying the resolved opt-in. Present for
   * enabled or disabled, including while revoked; omitted for inherit.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  GetTrustedAccessProgramResult& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
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
  GetTrustedAccessProgramResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_programId;

  Aws::String m_name;

  Aws::String m_description;

  Aws::String m_providerName;

  Aws::String m_detailsUrl;

  Aws::String m_enrollmentUrl;

  TrustedAccessProgramStatus m_status{TrustedAccessProgramStatus::NOT_SET};

  Aws::String m_statusReason;

  TrustedAccessProgramScope m_source{TrustedAccessProgramScope::NOT_SET};

  TrustedAccessProgramScope m_eligibilityScope{TrustedAccessProgramScope::NOT_SET};

  TrustedAccessResolutionContext m_resolvedFor;

  TrustedAccessProgramOptIn m_optIn{TrustedAccessProgramOptIn::NOT_SET};

  Aws::Utils::DateTime m_updatedAt{};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_programIdHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_providerNameHasBeenSet = false;
  bool m_detailsUrlHasBeenSet = false;
  bool m_enrollmentUrlHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_statusReasonHasBeenSet = false;
  bool m_sourceHasBeenSet = false;
  bool m_eligibilityScopeHasBeenSet = false;
  bool m_resolvedForHasBeenSet = false;
  bool m_optInHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws
