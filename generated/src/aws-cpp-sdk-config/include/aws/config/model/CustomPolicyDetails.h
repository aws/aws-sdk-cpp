/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
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
namespace ConfigService
{
namespace Model
{

  /**
   * <p>Provides the runtime system, policy definition, and whether debug logging
   * enabled. You can specify the following CustomPolicyDetails parameter values only
   * for Config Custom Policy rules.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/CustomPolicyDetails">AWS
   * API Reference</a></p>
   */
  class CustomPolicyDetails
  {
  public:
    AWS_CONFIGSERVICE_API CustomPolicyDetails() = default;
    AWS_CONFIGSERVICE_API CustomPolicyDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API CustomPolicyDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The runtime system for your Config Custom Policy rule. Guard is a
     * policy-as-code language that allows you to write policies that are enforced by
     * Config Custom Policy rules. For more information about Guard, see the <a
     * href="https://github.com/aws-cloudformation/cloudformation-guard">Guard GitHub
     * Repository</a>.</p>
     */
    inline const Aws::String& GetPolicyRuntime() const { return m_policyRuntime; }
    inline bool PolicyRuntimeHasBeenSet() const { return m_policyRuntimeHasBeenSet; }
    template<typename PolicyRuntimeT = Aws::String>
    void SetPolicyRuntime(PolicyRuntimeT&& value) { m_policyRuntimeHasBeenSet = true; m_policyRuntime = std::forward<PolicyRuntimeT>(value); }
    template<typename PolicyRuntimeT = Aws::String>
    CustomPolicyDetails& WithPolicyRuntime(PolicyRuntimeT&& value) { SetPolicyRuntime(std::forward<PolicyRuntimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The policy definition containing the logic for your Config Custom Policy
     * rule.</p>
     */
    inline const Aws::String& GetPolicyText() const { return m_policyText; }
    inline bool PolicyTextHasBeenSet() const { return m_policyTextHasBeenSet; }
    template<typename PolicyTextT = Aws::String>
    void SetPolicyText(PolicyTextT&& value) { m_policyTextHasBeenSet = true; m_policyText = std::forward<PolicyTextT>(value); }
    template<typename PolicyTextT = Aws::String>
    CustomPolicyDetails& WithPolicyText(PolicyTextT&& value) { SetPolicyText(std::forward<PolicyTextT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The boolean expression for enabling debug logging for your Config Custom
     * Policy rule. The default value is <code>false</code>.</p>
     */
    inline bool GetEnableDebugLogDelivery() const { return m_enableDebugLogDelivery; }
    inline bool EnableDebugLogDeliveryHasBeenSet() const { return m_enableDebugLogDeliveryHasBeenSet; }
    inline void SetEnableDebugLogDelivery(bool value) { m_enableDebugLogDeliveryHasBeenSet = true; m_enableDebugLogDelivery = value; }
    inline CustomPolicyDetails& WithEnableDebugLogDelivery(bool value) { SetEnableDebugLogDelivery(value); return *this;}
    ///@}
  private:

    Aws::String m_policyRuntime;
    bool m_policyRuntimeHasBeenSet = false;

    Aws::String m_policyText;
    bool m_policyTextHasBeenSet = false;

    bool m_enableDebugLogDelivery{false};
    bool m_enableDebugLogDeliveryHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
