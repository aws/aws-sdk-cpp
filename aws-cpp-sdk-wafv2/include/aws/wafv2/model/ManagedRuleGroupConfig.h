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
   * <p>Additional information that's used by a managed rule group. Most managed rule
   * groups don't require this.</p> <p>Use this for the account takeover prevention
   * managed rule group <code>AWSManagedRulesATPRuleSet</code>, to provide
   * information about the sign-in page of your application. </p> <p>You can provide
   * multiple individual <code>ManagedRuleGroupConfig</code> objects for any rule
   * group configuration, for example <code>UsernameField</code> and
   * <code>PasswordField</code>. The configuration that you provide depends on the
   * needs of the managed rule group. For the ATP managed rule group, you provide the
   * following individual configuration objects: <code>LoginPath</code>,
   * <code>PasswordField</code>, <code>PayloadType</code> and
   * <code>UsernameField</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/ManagedRuleGroupConfig">AWS
   * API Reference</a></p>
   */
  class AWS_WAFV2_API ManagedRuleGroupConfig
  {
  public:
    ManagedRuleGroupConfig();
    ManagedRuleGroupConfig(Aws::Utils::Json::JsonView jsonValue);
    ManagedRuleGroupConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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

  private:

    Aws::String m_loginPath;
    bool m_loginPathHasBeenSet;

    PayloadType m_payloadType;
    bool m_payloadTypeHasBeenSet;

    UsernameField m_usernameField;
    bool m_usernameFieldHasBeenSet;

    PasswordField m_passwordField;
    bool m_passwordFieldHasBeenSet;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
