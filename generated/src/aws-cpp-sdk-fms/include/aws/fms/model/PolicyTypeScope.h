/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fms/FMS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/fms/model/SecurityServiceType.h>
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
namespace FMS
{
namespace Model
{

  /**
   * <p>Defines the policy types that the specified Firewall Manager administrator
   * can manage.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fms-2018-01-01/PolicyTypeScope">AWS
   * API Reference</a></p>
   */
  class PolicyTypeScope
  {
  public:
    AWS_FMS_API PolicyTypeScope() = default;
    AWS_FMS_API PolicyTypeScope(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API PolicyTypeScope& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The list of policy types that the specified Firewall Manager administrator
     * can manage.</p>
     */
    inline const Aws::Vector<SecurityServiceType>& GetPolicyTypes() const { return m_policyTypes; }
    inline bool PolicyTypesHasBeenSet() const { return m_policyTypesHasBeenSet; }
    template<typename PolicyTypesT = Aws::Vector<SecurityServiceType>>
    void SetPolicyTypes(PolicyTypesT&& value) { m_policyTypesHasBeenSet = true; m_policyTypes = std::forward<PolicyTypesT>(value); }
    template<typename PolicyTypesT = Aws::Vector<SecurityServiceType>>
    PolicyTypeScope& WithPolicyTypes(PolicyTypesT&& value) { SetPolicyTypes(std::forward<PolicyTypesT>(value)); return *this;}
    inline PolicyTypeScope& AddPolicyTypes(SecurityServiceType value) { m_policyTypesHasBeenSet = true; m_policyTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Allows the specified Firewall Manager administrator to manage all Firewall
     * Manager policy types, except for third-party policy types. Third-party policy
     * types can only be managed by the Firewall Manager default administrator.</p>
     */
    inline bool GetAllPolicyTypesEnabled() const { return m_allPolicyTypesEnabled; }
    inline bool AllPolicyTypesEnabledHasBeenSet() const { return m_allPolicyTypesEnabledHasBeenSet; }
    inline void SetAllPolicyTypesEnabled(bool value) { m_allPolicyTypesEnabledHasBeenSet = true; m_allPolicyTypesEnabled = value; }
    inline PolicyTypeScope& WithAllPolicyTypesEnabled(bool value) { SetAllPolicyTypesEnabled(value); return *this;}
    ///@}
  private:

    Aws::Vector<SecurityServiceType> m_policyTypes;
    bool m_policyTypesHasBeenSet = false;

    bool m_allPolicyTypesEnabled{false};
    bool m_allPolicyTypesEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
