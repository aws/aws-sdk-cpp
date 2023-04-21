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
    AWS_FMS_API PolicyTypeScope();
    AWS_FMS_API PolicyTypeScope(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API PolicyTypeScope& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The list of policy types that the specified Firewall Manager administrator
     * can manage.</p>
     */
    inline const Aws::Vector<SecurityServiceType>& GetPolicyTypes() const{ return m_policyTypes; }

    /**
     * <p>The list of policy types that the specified Firewall Manager administrator
     * can manage.</p>
     */
    inline bool PolicyTypesHasBeenSet() const { return m_policyTypesHasBeenSet; }

    /**
     * <p>The list of policy types that the specified Firewall Manager administrator
     * can manage.</p>
     */
    inline void SetPolicyTypes(const Aws::Vector<SecurityServiceType>& value) { m_policyTypesHasBeenSet = true; m_policyTypes = value; }

    /**
     * <p>The list of policy types that the specified Firewall Manager administrator
     * can manage.</p>
     */
    inline void SetPolicyTypes(Aws::Vector<SecurityServiceType>&& value) { m_policyTypesHasBeenSet = true; m_policyTypes = std::move(value); }

    /**
     * <p>The list of policy types that the specified Firewall Manager administrator
     * can manage.</p>
     */
    inline PolicyTypeScope& WithPolicyTypes(const Aws::Vector<SecurityServiceType>& value) { SetPolicyTypes(value); return *this;}

    /**
     * <p>The list of policy types that the specified Firewall Manager administrator
     * can manage.</p>
     */
    inline PolicyTypeScope& WithPolicyTypes(Aws::Vector<SecurityServiceType>&& value) { SetPolicyTypes(std::move(value)); return *this;}

    /**
     * <p>The list of policy types that the specified Firewall Manager administrator
     * can manage.</p>
     */
    inline PolicyTypeScope& AddPolicyTypes(const SecurityServiceType& value) { m_policyTypesHasBeenSet = true; m_policyTypes.push_back(value); return *this; }

    /**
     * <p>The list of policy types that the specified Firewall Manager administrator
     * can manage.</p>
     */
    inline PolicyTypeScope& AddPolicyTypes(SecurityServiceType&& value) { m_policyTypesHasBeenSet = true; m_policyTypes.push_back(std::move(value)); return *this; }


    /**
     * <p>Allows the specified Firewall Manager administrator to manage all Firewall
     * Manager policy types, except for third-party policy types. Third-party policy
     * types can only be managed by the Firewall Manager default administrator.</p>
     */
    inline bool GetAllPolicyTypesEnabled() const{ return m_allPolicyTypesEnabled; }

    /**
     * <p>Allows the specified Firewall Manager administrator to manage all Firewall
     * Manager policy types, except for third-party policy types. Third-party policy
     * types can only be managed by the Firewall Manager default administrator.</p>
     */
    inline bool AllPolicyTypesEnabledHasBeenSet() const { return m_allPolicyTypesEnabledHasBeenSet; }

    /**
     * <p>Allows the specified Firewall Manager administrator to manage all Firewall
     * Manager policy types, except for third-party policy types. Third-party policy
     * types can only be managed by the Firewall Manager default administrator.</p>
     */
    inline void SetAllPolicyTypesEnabled(bool value) { m_allPolicyTypesEnabledHasBeenSet = true; m_allPolicyTypesEnabled = value; }

    /**
     * <p>Allows the specified Firewall Manager administrator to manage all Firewall
     * Manager policy types, except for third-party policy types. Third-party policy
     * types can only be managed by the Firewall Manager default administrator.</p>
     */
    inline PolicyTypeScope& WithAllPolicyTypesEnabled(bool value) { SetAllPolicyTypesEnabled(value); return *this;}

  private:

    Aws::Vector<SecurityServiceType> m_policyTypes;
    bool m_policyTypesHasBeenSet = false;

    bool m_allPolicyTypesEnabled;
    bool m_allPolicyTypesEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace FMS
} // namespace Aws
