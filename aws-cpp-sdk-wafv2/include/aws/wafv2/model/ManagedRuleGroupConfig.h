/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wafv2/model/PayloadType.h>
#include <aws/wafv2/model/UsernameField.h>
#include <aws/wafv2/model/PasswordField.h>
#include <aws/wafv2/model/AWSManagedRulesBotControlRuleSet.h>
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
namespace WAFV2
{
namespace Model
{

  /**
   * <p>Additional information that's used by a managed rule group. Many managed rule
   * groups don't require this.</p> <p>Use the
   * <code>AWSManagedRulesBotControlRuleSet</code> configuration object to configure
   * the protection level that you want the Bot Control rule group to use. </p>
   * <p>For example specifications, see the examples section of
   * <a>CreateWebACL</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/ManagedRuleGroupConfig">AWS
   * API Reference</a></p>
   */
  class ManagedRuleGroupConfig
  {
  public:
    AWS_WAFV2_API ManagedRuleGroupConfig();
    AWS_WAFV2_API ManagedRuleGroupConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API ManagedRuleGroupConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The path of the login endpoint for your application. For example, for the URL
     * <code>https://example.com/web/login</code>, you would provide the path
     * <code>/web/login</code>.</p>
     */
    inline const Aws::String& GetLoginPath() const{ return m_loginPath; }

    /**
     * <p>The path of the login endpoint for your application. For example, for the URL
     * <code>https://example.com/web/login</code>, you would provide the path
     * <code>/web/login</code>.</p>
     */
    inline bool LoginPathHasBeenSet() const { return m_loginPathHasBeenSet; }

    /**
     * <p>The path of the login endpoint for your application. For example, for the URL
     * <code>https://example.com/web/login</code>, you would provide the path
     * <code>/web/login</code>.</p>
     */
    inline void SetLoginPath(const Aws::String& value) { m_loginPathHasBeenSet = true; m_loginPath = value; }

    /**
     * <p>The path of the login endpoint for your application. For example, for the URL
     * <code>https://example.com/web/login</code>, you would provide the path
     * <code>/web/login</code>.</p>
     */
    inline void SetLoginPath(Aws::String&& value) { m_loginPathHasBeenSet = true; m_loginPath = std::move(value); }

    /**
     * <p>The path of the login endpoint for your application. For example, for the URL
     * <code>https://example.com/web/login</code>, you would provide the path
     * <code>/web/login</code>.</p>
     */
    inline void SetLoginPath(const char* value) { m_loginPathHasBeenSet = true; m_loginPath.assign(value); }

    /**
     * <p>The path of the login endpoint for your application. For example, for the URL
     * <code>https://example.com/web/login</code>, you would provide the path
     * <code>/web/login</code>.</p>
     */
    inline ManagedRuleGroupConfig& WithLoginPath(const Aws::String& value) { SetLoginPath(value); return *this;}

    /**
     * <p>The path of the login endpoint for your application. For example, for the URL
     * <code>https://example.com/web/login</code>, you would provide the path
     * <code>/web/login</code>.</p>
     */
    inline ManagedRuleGroupConfig& WithLoginPath(Aws::String&& value) { SetLoginPath(std::move(value)); return *this;}

    /**
     * <p>The path of the login endpoint for your application. For example, for the URL
     * <code>https://example.com/web/login</code>, you would provide the path
     * <code>/web/login</code>.</p>
     */
    inline ManagedRuleGroupConfig& WithLoginPath(const char* value) { SetLoginPath(value); return *this;}


    /**
     * <p>The payload type for your login endpoint, either JSON or form encoded.</p>
     */
    inline const PayloadType& GetPayloadType() const{ return m_payloadType; }

    /**
     * <p>The payload type for your login endpoint, either JSON or form encoded.</p>
     */
    inline bool PayloadTypeHasBeenSet() const { return m_payloadTypeHasBeenSet; }

    /**
     * <p>The payload type for your login endpoint, either JSON or form encoded.</p>
     */
    inline void SetPayloadType(const PayloadType& value) { m_payloadTypeHasBeenSet = true; m_payloadType = value; }

    /**
     * <p>The payload type for your login endpoint, either JSON or form encoded.</p>
     */
    inline void SetPayloadType(PayloadType&& value) { m_payloadTypeHasBeenSet = true; m_payloadType = std::move(value); }

    /**
     * <p>The payload type for your login endpoint, either JSON or form encoded.</p>
     */
    inline ManagedRuleGroupConfig& WithPayloadType(const PayloadType& value) { SetPayloadType(value); return *this;}

    /**
     * <p>The payload type for your login endpoint, either JSON or form encoded.</p>
     */
    inline ManagedRuleGroupConfig& WithPayloadType(PayloadType&& value) { SetPayloadType(std::move(value)); return *this;}


    /**
     * <p>Details about your login page username field. </p>
     */
    inline const UsernameField& GetUsernameField() const{ return m_usernameField; }

    /**
     * <p>Details about your login page username field. </p>
     */
    inline bool UsernameFieldHasBeenSet() const { return m_usernameFieldHasBeenSet; }

    /**
     * <p>Details about your login page username field. </p>
     */
    inline void SetUsernameField(const UsernameField& value) { m_usernameFieldHasBeenSet = true; m_usernameField = value; }

    /**
     * <p>Details about your login page username field. </p>
     */
    inline void SetUsernameField(UsernameField&& value) { m_usernameFieldHasBeenSet = true; m_usernameField = std::move(value); }

    /**
     * <p>Details about your login page username field. </p>
     */
    inline ManagedRuleGroupConfig& WithUsernameField(const UsernameField& value) { SetUsernameField(value); return *this;}

    /**
     * <p>Details about your login page username field. </p>
     */
    inline ManagedRuleGroupConfig& WithUsernameField(UsernameField&& value) { SetUsernameField(std::move(value)); return *this;}


    /**
     * <p>Details about your login page password field. </p>
     */
    inline const PasswordField& GetPasswordField() const{ return m_passwordField; }

    /**
     * <p>Details about your login page password field. </p>
     */
    inline bool PasswordFieldHasBeenSet() const { return m_passwordFieldHasBeenSet; }

    /**
     * <p>Details about your login page password field. </p>
     */
    inline void SetPasswordField(const PasswordField& value) { m_passwordFieldHasBeenSet = true; m_passwordField = value; }

    /**
     * <p>Details about your login page password field. </p>
     */
    inline void SetPasswordField(PasswordField&& value) { m_passwordFieldHasBeenSet = true; m_passwordField = std::move(value); }

    /**
     * <p>Details about your login page password field. </p>
     */
    inline ManagedRuleGroupConfig& WithPasswordField(const PasswordField& value) { SetPasswordField(value); return *this;}

    /**
     * <p>Details about your login page password field. </p>
     */
    inline ManagedRuleGroupConfig& WithPasswordField(PasswordField&& value) { SetPasswordField(std::move(value)); return *this;}


    /**
     * <p>Additional configuration for using the Bot Control managed rule group. Use
     * this to specify the inspection level that you want to use. For information about
     * using the Bot Control managed rule group, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/aws-managed-rule-groups-bot.html">WAF
     * Bot Control rule group</a> and <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-bot-control.html">WAF
     * Bot Control</a> in the <i>WAF Developer Guide</i>.</p>
     */
    inline const AWSManagedRulesBotControlRuleSet& GetAWSManagedRulesBotControlRuleSet() const{ return m_aWSManagedRulesBotControlRuleSet; }

    /**
     * <p>Additional configuration for using the Bot Control managed rule group. Use
     * this to specify the inspection level that you want to use. For information about
     * using the Bot Control managed rule group, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/aws-managed-rule-groups-bot.html">WAF
     * Bot Control rule group</a> and <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-bot-control.html">WAF
     * Bot Control</a> in the <i>WAF Developer Guide</i>.</p>
     */
    inline bool AWSManagedRulesBotControlRuleSetHasBeenSet() const { return m_aWSManagedRulesBotControlRuleSetHasBeenSet; }

    /**
     * <p>Additional configuration for using the Bot Control managed rule group. Use
     * this to specify the inspection level that you want to use. For information about
     * using the Bot Control managed rule group, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/aws-managed-rule-groups-bot.html">WAF
     * Bot Control rule group</a> and <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-bot-control.html">WAF
     * Bot Control</a> in the <i>WAF Developer Guide</i>.</p>
     */
    inline void SetAWSManagedRulesBotControlRuleSet(const AWSManagedRulesBotControlRuleSet& value) { m_aWSManagedRulesBotControlRuleSetHasBeenSet = true; m_aWSManagedRulesBotControlRuleSet = value; }

    /**
     * <p>Additional configuration for using the Bot Control managed rule group. Use
     * this to specify the inspection level that you want to use. For information about
     * using the Bot Control managed rule group, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/aws-managed-rule-groups-bot.html">WAF
     * Bot Control rule group</a> and <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-bot-control.html">WAF
     * Bot Control</a> in the <i>WAF Developer Guide</i>.</p>
     */
    inline void SetAWSManagedRulesBotControlRuleSet(AWSManagedRulesBotControlRuleSet&& value) { m_aWSManagedRulesBotControlRuleSetHasBeenSet = true; m_aWSManagedRulesBotControlRuleSet = std::move(value); }

    /**
     * <p>Additional configuration for using the Bot Control managed rule group. Use
     * this to specify the inspection level that you want to use. For information about
     * using the Bot Control managed rule group, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/aws-managed-rule-groups-bot.html">WAF
     * Bot Control rule group</a> and <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-bot-control.html">WAF
     * Bot Control</a> in the <i>WAF Developer Guide</i>.</p>
     */
    inline ManagedRuleGroupConfig& WithAWSManagedRulesBotControlRuleSet(const AWSManagedRulesBotControlRuleSet& value) { SetAWSManagedRulesBotControlRuleSet(value); return *this;}

    /**
     * <p>Additional configuration for using the Bot Control managed rule group. Use
     * this to specify the inspection level that you want to use. For information about
     * using the Bot Control managed rule group, see <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/aws-managed-rule-groups-bot.html">WAF
     * Bot Control rule group</a> and <a
     * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-bot-control.html">WAF
     * Bot Control</a> in the <i>WAF Developer Guide</i>.</p>
     */
    inline ManagedRuleGroupConfig& WithAWSManagedRulesBotControlRuleSet(AWSManagedRulesBotControlRuleSet&& value) { SetAWSManagedRulesBotControlRuleSet(std::move(value)); return *this;}

  private:

    Aws::String m_loginPath;
    bool m_loginPathHasBeenSet = false;

    PayloadType m_payloadType;
    bool m_payloadTypeHasBeenSet = false;

    UsernameField m_usernameField;
    bool m_usernameFieldHasBeenSet = false;

    PasswordField m_passwordField;
    bool m_passwordFieldHasBeenSet = false;

    AWSManagedRulesBotControlRuleSet m_aWSManagedRulesBotControlRuleSet;
    bool m_aWSManagedRulesBotControlRuleSetHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
