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
    AWS_CONFIGSERVICE_API CustomPolicyDetails();
    AWS_CONFIGSERVICE_API CustomPolicyDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API CustomPolicyDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The runtime system for your Config Custom Policy rule. Guard is a
     * policy-as-code language that allows you to write policies that are enforced by
     * Config Custom Policy rules. For more information about Guard, see the <a
     * href="https://github.com/aws-cloudformation/cloudformation-guard">Guard GitHub
     * Repository</a>.</p>
     */
    inline const Aws::String& GetPolicyRuntime() const{ return m_policyRuntime; }

    /**
     * <p>The runtime system for your Config Custom Policy rule. Guard is a
     * policy-as-code language that allows you to write policies that are enforced by
     * Config Custom Policy rules. For more information about Guard, see the <a
     * href="https://github.com/aws-cloudformation/cloudformation-guard">Guard GitHub
     * Repository</a>.</p>
     */
    inline bool PolicyRuntimeHasBeenSet() const { return m_policyRuntimeHasBeenSet; }

    /**
     * <p>The runtime system for your Config Custom Policy rule. Guard is a
     * policy-as-code language that allows you to write policies that are enforced by
     * Config Custom Policy rules. For more information about Guard, see the <a
     * href="https://github.com/aws-cloudformation/cloudformation-guard">Guard GitHub
     * Repository</a>.</p>
     */
    inline void SetPolicyRuntime(const Aws::String& value) { m_policyRuntimeHasBeenSet = true; m_policyRuntime = value; }

    /**
     * <p>The runtime system for your Config Custom Policy rule. Guard is a
     * policy-as-code language that allows you to write policies that are enforced by
     * Config Custom Policy rules. For more information about Guard, see the <a
     * href="https://github.com/aws-cloudformation/cloudformation-guard">Guard GitHub
     * Repository</a>.</p>
     */
    inline void SetPolicyRuntime(Aws::String&& value) { m_policyRuntimeHasBeenSet = true; m_policyRuntime = std::move(value); }

    /**
     * <p>The runtime system for your Config Custom Policy rule. Guard is a
     * policy-as-code language that allows you to write policies that are enforced by
     * Config Custom Policy rules. For more information about Guard, see the <a
     * href="https://github.com/aws-cloudformation/cloudformation-guard">Guard GitHub
     * Repository</a>.</p>
     */
    inline void SetPolicyRuntime(const char* value) { m_policyRuntimeHasBeenSet = true; m_policyRuntime.assign(value); }

    /**
     * <p>The runtime system for your Config Custom Policy rule. Guard is a
     * policy-as-code language that allows you to write policies that are enforced by
     * Config Custom Policy rules. For more information about Guard, see the <a
     * href="https://github.com/aws-cloudformation/cloudformation-guard">Guard GitHub
     * Repository</a>.</p>
     */
    inline CustomPolicyDetails& WithPolicyRuntime(const Aws::String& value) { SetPolicyRuntime(value); return *this;}

    /**
     * <p>The runtime system for your Config Custom Policy rule. Guard is a
     * policy-as-code language that allows you to write policies that are enforced by
     * Config Custom Policy rules. For more information about Guard, see the <a
     * href="https://github.com/aws-cloudformation/cloudformation-guard">Guard GitHub
     * Repository</a>.</p>
     */
    inline CustomPolicyDetails& WithPolicyRuntime(Aws::String&& value) { SetPolicyRuntime(std::move(value)); return *this;}

    /**
     * <p>The runtime system for your Config Custom Policy rule. Guard is a
     * policy-as-code language that allows you to write policies that are enforced by
     * Config Custom Policy rules. For more information about Guard, see the <a
     * href="https://github.com/aws-cloudformation/cloudformation-guard">Guard GitHub
     * Repository</a>.</p>
     */
    inline CustomPolicyDetails& WithPolicyRuntime(const char* value) { SetPolicyRuntime(value); return *this;}


    /**
     * <p>The policy definition containing the logic for your Config Custom Policy
     * rule.</p>
     */
    inline const Aws::String& GetPolicyText() const{ return m_policyText; }

    /**
     * <p>The policy definition containing the logic for your Config Custom Policy
     * rule.</p>
     */
    inline bool PolicyTextHasBeenSet() const { return m_policyTextHasBeenSet; }

    /**
     * <p>The policy definition containing the logic for your Config Custom Policy
     * rule.</p>
     */
    inline void SetPolicyText(const Aws::String& value) { m_policyTextHasBeenSet = true; m_policyText = value; }

    /**
     * <p>The policy definition containing the logic for your Config Custom Policy
     * rule.</p>
     */
    inline void SetPolicyText(Aws::String&& value) { m_policyTextHasBeenSet = true; m_policyText = std::move(value); }

    /**
     * <p>The policy definition containing the logic for your Config Custom Policy
     * rule.</p>
     */
    inline void SetPolicyText(const char* value) { m_policyTextHasBeenSet = true; m_policyText.assign(value); }

    /**
     * <p>The policy definition containing the logic for your Config Custom Policy
     * rule.</p>
     */
    inline CustomPolicyDetails& WithPolicyText(const Aws::String& value) { SetPolicyText(value); return *this;}

    /**
     * <p>The policy definition containing the logic for your Config Custom Policy
     * rule.</p>
     */
    inline CustomPolicyDetails& WithPolicyText(Aws::String&& value) { SetPolicyText(std::move(value)); return *this;}

    /**
     * <p>The policy definition containing the logic for your Config Custom Policy
     * rule.</p>
     */
    inline CustomPolicyDetails& WithPolicyText(const char* value) { SetPolicyText(value); return *this;}


    /**
     * <p>The boolean expression for enabling debug logging for your Config Custom
     * Policy rule. The default value is <code>false</code>.</p>
     */
    inline bool GetEnableDebugLogDelivery() const{ return m_enableDebugLogDelivery; }

    /**
     * <p>The boolean expression for enabling debug logging for your Config Custom
     * Policy rule. The default value is <code>false</code>.</p>
     */
    inline bool EnableDebugLogDeliveryHasBeenSet() const { return m_enableDebugLogDeliveryHasBeenSet; }

    /**
     * <p>The boolean expression for enabling debug logging for your Config Custom
     * Policy rule. The default value is <code>false</code>.</p>
     */
    inline void SetEnableDebugLogDelivery(bool value) { m_enableDebugLogDeliveryHasBeenSet = true; m_enableDebugLogDelivery = value; }

    /**
     * <p>The boolean expression for enabling debug logging for your Config Custom
     * Policy rule. The default value is <code>false</code>.</p>
     */
    inline CustomPolicyDetails& WithEnableDebugLogDelivery(bool value) { SetEnableDebugLogDelivery(value); return *this;}

  private:

    Aws::String m_policyRuntime;
    bool m_policyRuntimeHasBeenSet = false;

    Aws::String m_policyText;
    bool m_policyTextHasBeenSet = false;

    bool m_enableDebugLogDelivery;
    bool m_enableDebugLogDeliveryHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
