/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer-automation/ComputeOptimizerAutomation_EXPORTS.h>
#include <aws/compute-optimizer-automation/model/OrganizationRuleModeSourceType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace ComputeOptimizerAutomation {
namespace Model {

/**
 * <p>Information about the source of an effective organization rule
 * mode.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-automation-2025-09-22/OrganizationRuleModeSource">AWS
 * API Reference</a></p>
 */
class OrganizationRuleModeSource {
 public:
  AWS_COMPUTEOPTIMIZERAUTOMATION_API OrganizationRuleModeSource() = default;
  AWS_COMPUTEOPTIMIZERAUTOMATION_API OrganizationRuleModeSource(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_COMPUTEOPTIMIZERAUTOMATION_API OrganizationRuleModeSource& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_COMPUTEOPTIMIZERAUTOMATION_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>How the effective organization rule mode is supplied.</p> <ul> <li> <p>
   * <code>Applied</code> - An organization enrollment configuration is on this
   * organizational unit or account.</p> </li> <li> <p> <code>Inherited</code> - The
   * organization enrollment configuration is on the parent organizational unit or
   * root.</p> </li> <li> <p> <code>Direct</code> - The organization rule mode is set
   * on the account itself, with no organization enrollment configuration
   * applied.</p> </li> <li> <p> <code>Default</code> - No organization enrollment
   * configuration applies, so the organization rule mode is None allowed.</p> </li>
   * </ul>
   */
  inline OrganizationRuleModeSourceType GetSourceType() const { return m_sourceType; }
  inline bool SourceTypeHasBeenSet() const { return m_sourceTypeHasBeenSet; }
  inline void SetSourceType(OrganizationRuleModeSourceType value) {
    m_sourceTypeHasBeenSet = true;
    m_sourceType = value;
  }
  inline OrganizationRuleModeSource& WithSourceType(OrganizationRuleModeSourceType value) {
    SetSourceType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the account, organizational unit (OU), or organization root that
   * has the organization enrollment configuration. This field is omitted when
   * <code>sourceType</code> is <code>Direct</code> or <code>Default</code>.</p>
   */
  inline const Aws::String& GetSourceTargetId() const { return m_sourceTargetId; }
  inline bool SourceTargetIdHasBeenSet() const { return m_sourceTargetIdHasBeenSet; }
  template <typename SourceTargetIdT = Aws::String>
  void SetSourceTargetId(SourceTargetIdT&& value) {
    m_sourceTargetIdHasBeenSet = true;
    m_sourceTargetId = std::forward<SourceTargetIdT>(value);
  }
  template <typename SourceTargetIdT = Aws::String>
  OrganizationRuleModeSource& WithSourceTargetId(SourceTargetIdT&& value) {
    SetSourceTargetId(std::forward<SourceTargetIdT>(value));
    return *this;
  }
  ///@}
 private:
  OrganizationRuleModeSourceType m_sourceType{OrganizationRuleModeSourceType::NOT_SET};

  Aws::String m_sourceTargetId;
  bool m_sourceTypeHasBeenSet = false;
  bool m_sourceTargetIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ComputeOptimizerAutomation
}  // namespace Aws
