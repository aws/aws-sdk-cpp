/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/evs/EVS_EXPORTS.h>
#include <aws/evs/model/CheckResult.h>
#include <aws/evs/model/CheckType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace EVS {
namespace Model {

/**
 * <p>A check on the environment to identify environment health and validate VMware
 * VCF licensing compliance.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/evs-2023-07-27/Check">AWS API
 * Reference</a></p>
 */
class Check {
 public:
  AWS_EVS_API Check() = default;
  AWS_EVS_API Check(Aws::Utils::Json::JsonView jsonValue);
  AWS_EVS_API Check& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_EVS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The check type. Amazon EVS performs the following checks:</p> <ul> <li> <p>
   * <code>KEY_REUSE</code>: Verifies that the VCF license key is not used by another
   * Amazon EVS environment.</p> </li> <li> <p> <code>KEY_COVERAGE</code>: Verifies
   * that the VCF license key allocates sufficient vCPU cores for all deployed
   * hosts.</p> </li> <li> <p> <code>REACHABILITY</code>: Verifies that the Amazon
   * EVS control plane has a persistent connection to SDDC Manager.</p> </li> <li>
   * <p> <code>HOST_COUNT</code>: Verifies that the environment meets the minimum
   * host count.</p> </li> <li> <p> <code>VCENTER_REACHABILITY</code>: Verifies
   * vCenter Server reachability through the vCenter connector.</p> </li> <li> <p>
   * <code>VCENTER_VM_SYNC</code>: Verifies that the vCenter connector can
   * synchronize VM inventory from vCenter Server.</p> </li> <li> <p>
   * <code>VCENTER_VM_EVENT</code>: Verifies that the vCenter connector can receive
   * VM lifecycle events from vCenter Server.</p> </li> <li> <p>
   * <code>OPERATIONS_MANAGER_REACHABILITY</code>: Verifies Operations Manager
   * reachability through the Operations Manager connector.</p> </li> <li> <p>
   * <code>SDDC_MANAGER_REACHABILITY</code>: Verifies SDDC Manager reachability
   * through the SDDC Manager connector.</p> </li> <li> <p>
   * <code>SDDC_MANAGER_HOST_COUNT</code>: Verifies that the host count reported by
   * SDDC Manager meets Amazon EVS minimum requirements.</p> </li> <li> <p>
   * <code>SDDC_MANAGER_KEY_COVERAGE</code>: Verifies that the VCF license key
   * configured in SDDC Manager covers all deployed hosts.</p> </li> <li> <p>
   * <code>SDDC_MANAGER_KEY_REUSE</code>: Verifies that the VCF license key
   * configured in SDDC Manager is not used by another Amazon EVS environment.</p>
   * </li> <li> <p> <code>CONNECTOR_HEALTH</code>: Aggregate health across all
   * connectors in the environment.</p> </li> </ul>
   */
  inline CheckType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(CheckType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline Check& WithType(CheckType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique ID for the check.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  Check& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The check result.</p>
   */
  inline CheckResult GetResult() const { return m_result; }
  inline bool ResultHasBeenSet() const { return m_resultHasBeenSet; }
  inline void SetResult(CheckResult value) {
    m_resultHasBeenSet = true;
    m_result = value;
  }
  inline Check& WithResult(CheckResult value) {
    SetResult(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time when environment health began to be impaired.</p>
   */
  inline const Aws::Utils::DateTime& GetImpairedSince() const { return m_impairedSince; }
  inline bool ImpairedSinceHasBeenSet() const { return m_impairedSinceHasBeenSet; }
  template <typename ImpairedSinceT = Aws::Utils::DateTime>
  void SetImpairedSince(ImpairedSinceT&& value) {
    m_impairedSinceHasBeenSet = true;
    m_impairedSince = std::forward<ImpairedSinceT>(value);
  }
  template <typename ImpairedSinceT = Aws::Utils::DateTime>
  Check& WithImpairedSince(ImpairedSinceT&& value) {
    SetImpairedSince(std::forward<ImpairedSinceT>(value));
    return *this;
  }
  ///@}
 private:
  CheckType m_type{CheckType::NOT_SET};

  Aws::String m_id;

  CheckResult m_result{CheckResult::NOT_SET};

  Aws::Utils::DateTime m_impairedSince{};
  bool m_typeHasBeenSet = false;
  bool m_idHasBeenSet = false;
  bool m_resultHasBeenSet = false;
  bool m_impairedSinceHasBeenSet = false;
};

}  // namespace Model
}  // namespace EVS
}  // namespace Aws
