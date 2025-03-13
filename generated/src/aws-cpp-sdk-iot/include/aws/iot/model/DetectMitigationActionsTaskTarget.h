/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace IoT
{
namespace Model
{

  /**
   * <p> The target of a mitigation action task. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DetectMitigationActionsTaskTarget">AWS
   * API Reference</a></p>
   */
  class DetectMitigationActionsTaskTarget
  {
  public:
    AWS_IOT_API DetectMitigationActionsTaskTarget() = default;
    AWS_IOT_API DetectMitigationActionsTaskTarget(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API DetectMitigationActionsTaskTarget& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The unique identifiers of the violations. </p>
     */
    inline const Aws::Vector<Aws::String>& GetViolationIds() const { return m_violationIds; }
    inline bool ViolationIdsHasBeenSet() const { return m_violationIdsHasBeenSet; }
    template<typename ViolationIdsT = Aws::Vector<Aws::String>>
    void SetViolationIds(ViolationIdsT&& value) { m_violationIdsHasBeenSet = true; m_violationIds = std::forward<ViolationIdsT>(value); }
    template<typename ViolationIdsT = Aws::Vector<Aws::String>>
    DetectMitigationActionsTaskTarget& WithViolationIds(ViolationIdsT&& value) { SetViolationIds(std::forward<ViolationIdsT>(value)); return *this;}
    template<typename ViolationIdsT = Aws::String>
    DetectMitigationActionsTaskTarget& AddViolationIds(ViolationIdsT&& value) { m_violationIdsHasBeenSet = true; m_violationIds.emplace_back(std::forward<ViolationIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The name of the security profile. </p>
     */
    inline const Aws::String& GetSecurityProfileName() const { return m_securityProfileName; }
    inline bool SecurityProfileNameHasBeenSet() const { return m_securityProfileNameHasBeenSet; }
    template<typename SecurityProfileNameT = Aws::String>
    void SetSecurityProfileName(SecurityProfileNameT&& value) { m_securityProfileNameHasBeenSet = true; m_securityProfileName = std::forward<SecurityProfileNameT>(value); }
    template<typename SecurityProfileNameT = Aws::String>
    DetectMitigationActionsTaskTarget& WithSecurityProfileName(SecurityProfileNameT&& value) { SetSecurityProfileName(std::forward<SecurityProfileNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the behavior. </p>
     */
    inline const Aws::String& GetBehaviorName() const { return m_behaviorName; }
    inline bool BehaviorNameHasBeenSet() const { return m_behaviorNameHasBeenSet; }
    template<typename BehaviorNameT = Aws::String>
    void SetBehaviorName(BehaviorNameT&& value) { m_behaviorNameHasBeenSet = true; m_behaviorName = std::forward<BehaviorNameT>(value); }
    template<typename BehaviorNameT = Aws::String>
    DetectMitigationActionsTaskTarget& WithBehaviorName(BehaviorNameT&& value) { SetBehaviorName(std::forward<BehaviorNameT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_violationIds;
    bool m_violationIdsHasBeenSet = false;

    Aws::String m_securityProfileName;
    bool m_securityProfileNameHasBeenSet = false;

    Aws::String m_behaviorName;
    bool m_behaviorNameHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
