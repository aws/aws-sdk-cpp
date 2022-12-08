/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-admin/SSOAdmin_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sso-admin/model/AccessControlAttributeValue.h>
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
namespace SSOAdmin
{
namespace Model
{

  /**
   * <p>These are IAM Identity Center identity store attributes that you can
   * configure for use in attributes-based access control (ABAC). You can create
   * permissions policies that determine who can access your AWS resources based upon
   * the configured attribute values. When you enable ABAC and specify
   * <code>AccessControlAttributes</code>, IAM Identity Center passes the attribute
   * values of the authenticated user into IAM for use in policy
   * evaluation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sso-admin-2020-07-20/AccessControlAttribute">AWS
   * API Reference</a></p>
   */
  class AccessControlAttribute
  {
  public:
    AWS_SSOADMIN_API AccessControlAttribute();
    AWS_SSOADMIN_API AccessControlAttribute(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSOADMIN_API AccessControlAttribute& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSOADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the attribute associated with your identities in your identity
     * source. This is used to map a specified attribute in your identity source with
     * an attribute in IAM Identity Center.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>The name of the attribute associated with your identities in your identity
     * source. This is used to map a specified attribute in your identity source with
     * an attribute in IAM Identity Center.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The name of the attribute associated with your identities in your identity
     * source. This is used to map a specified attribute in your identity source with
     * an attribute in IAM Identity Center.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The name of the attribute associated with your identities in your identity
     * source. This is used to map a specified attribute in your identity source with
     * an attribute in IAM Identity Center.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The name of the attribute associated with your identities in your identity
     * source. This is used to map a specified attribute in your identity source with
     * an attribute in IAM Identity Center.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>The name of the attribute associated with your identities in your identity
     * source. This is used to map a specified attribute in your identity source with
     * an attribute in IAM Identity Center.</p>
     */
    inline AccessControlAttribute& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>The name of the attribute associated with your identities in your identity
     * source. This is used to map a specified attribute in your identity source with
     * an attribute in IAM Identity Center.</p>
     */
    inline AccessControlAttribute& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>The name of the attribute associated with your identities in your identity
     * source. This is used to map a specified attribute in your identity source with
     * an attribute in IAM Identity Center.</p>
     */
    inline AccessControlAttribute& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>The value used for mapping a specified attribute to an identity source.</p>
     */
    inline const AccessControlAttributeValue& GetValue() const{ return m_value; }

    /**
     * <p>The value used for mapping a specified attribute to an identity source.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value used for mapping a specified attribute to an identity source.</p>
     */
    inline void SetValue(const AccessControlAttributeValue& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value used for mapping a specified attribute to an identity source.</p>
     */
    inline void SetValue(AccessControlAttributeValue&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value used for mapping a specified attribute to an identity source.</p>
     */
    inline AccessControlAttribute& WithValue(const AccessControlAttributeValue& value) { SetValue(value); return *this;}

    /**
     * <p>The value used for mapping a specified attribute to an identity source.</p>
     */
    inline AccessControlAttribute& WithValue(AccessControlAttributeValue&& value) { SetValue(std::move(value)); return *this;}

  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    AccessControlAttributeValue m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace SSOAdmin
} // namespace Aws
