/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Bedrock {
namespace Model {

/**
 * <p>Information needed to continue an application with the
 * provider.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/TrustedAccessProgramProviderHandoff">AWS
 * API Reference</a></p>
 */
class TrustedAccessProgramProviderHandoff {
 public:
  AWS_BEDROCK_API TrustedAccessProgramProviderHandoff() = default;
  AWS_BEDROCK_API TrustedAccessProgramProviderHandoff(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCK_API TrustedAccessProgramProviderHandoff& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Provider intake URL. When present, open it and paste the complete application
   * token into the provider's token field. Omitted when the provider receives the
   * application token through a separate integration.</p>
   */
  inline const Aws::String& GetEnrollmentUrl() const { return m_enrollmentUrl; }
  inline bool EnrollmentUrlHasBeenSet() const { return m_enrollmentUrlHasBeenSet; }
  template <typename EnrollmentUrlT = Aws::String>
  void SetEnrollmentUrl(EnrollmentUrlT&& value) {
    m_enrollmentUrlHasBeenSet = true;
    m_enrollmentUrl = std::forward<EnrollmentUrlT>(value);
  }
  template <typename EnrollmentUrlT = Aws::String>
  TrustedAccessProgramProviderHandoff& WithEnrollmentUrl(EnrollmentUrlT&& value) {
    SetEnrollmentUrl(std::forward<EnrollmentUrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Opaque token binding the application to the authenticated customer, requested
   * program, and scope.</p>
   */
  inline const Aws::String& GetApplicationToken() const { return m_applicationToken; }
  inline bool ApplicationTokenHasBeenSet() const { return m_applicationTokenHasBeenSet; }
  template <typename ApplicationTokenT = Aws::String>
  void SetApplicationToken(ApplicationTokenT&& value) {
    m_applicationTokenHasBeenSet = true;
    m_applicationToken = std::forward<ApplicationTokenT>(value);
  }
  template <typename ApplicationTokenT = Aws::String>
  TrustedAccessProgramProviderHandoff& WithApplicationToken(ApplicationTokenT&& value) {
    SetApplicationToken(std::forward<ApplicationTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Deadline for the provider to accept the application context. Start another
   * application handoff if the token expires before acceptance.</p>
   */
  inline const Aws::Utils::DateTime& GetApplicationTokenExpiresAt() const { return m_applicationTokenExpiresAt; }
  inline bool ApplicationTokenExpiresAtHasBeenSet() const { return m_applicationTokenExpiresAtHasBeenSet; }
  template <typename ApplicationTokenExpiresAtT = Aws::Utils::DateTime>
  void SetApplicationTokenExpiresAt(ApplicationTokenExpiresAtT&& value) {
    m_applicationTokenExpiresAtHasBeenSet = true;
    m_applicationTokenExpiresAt = std::forward<ApplicationTokenExpiresAtT>(value);
  }
  template <typename ApplicationTokenExpiresAtT = Aws::Utils::DateTime>
  TrustedAccessProgramProviderHandoff& WithApplicationTokenExpiresAt(ApplicationTokenExpiresAtT&& value) {
    SetApplicationTokenExpiresAt(std::forward<ApplicationTokenExpiresAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_enrollmentUrl;

  Aws::String m_applicationToken;

  Aws::Utils::DateTime m_applicationTokenExpiresAt{};
  bool m_enrollmentUrlHasBeenSet = false;
  bool m_applicationTokenHasBeenSet = false;
  bool m_applicationTokenExpiresAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws
