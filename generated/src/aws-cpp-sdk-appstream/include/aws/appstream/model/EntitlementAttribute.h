/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
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
namespace AppStream
{
namespace Model
{

  /**
   * <p>An attribute associated with an entitlement. Application entitlements work by
   * matching a supported SAML 2.0 attribute name to a value when a user identity
   * federates to an Amazon AppStream 2.0 SAML application.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/EntitlementAttribute">AWS
   * API Reference</a></p>
   */
  class EntitlementAttribute
  {
  public:
    AWS_APPSTREAM_API EntitlementAttribute();
    AWS_APPSTREAM_API EntitlementAttribute(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSTREAM_API EntitlementAttribute& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSTREAM_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A supported AWS IAM SAML <code>PrincipalTag</code> attribute that is matched
     * to the associated value when a user identity federates into an Amazon AppStream
     * 2.0 SAML application.</p> <p>The following are valid values:</p> <ul> <li>
     * <p>roles</p> </li> <li> <p>department </p> </li> <li> <p>organization </p> </li>
     * <li> <p>groups </p> </li> <li> <p>title </p> </li> <li> <p>costCenter </p> </li>
     * <li> <p>userType</p> </li> </ul> <p> </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A supported AWS IAM SAML <code>PrincipalTag</code> attribute that is matched
     * to the associated value when a user identity federates into an Amazon AppStream
     * 2.0 SAML application.</p> <p>The following are valid values:</p> <ul> <li>
     * <p>roles</p> </li> <li> <p>department </p> </li> <li> <p>organization </p> </li>
     * <li> <p>groups </p> </li> <li> <p>title </p> </li> <li> <p>costCenter </p> </li>
     * <li> <p>userType</p> </li> </ul> <p> </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A supported AWS IAM SAML <code>PrincipalTag</code> attribute that is matched
     * to the associated value when a user identity federates into an Amazon AppStream
     * 2.0 SAML application.</p> <p>The following are valid values:</p> <ul> <li>
     * <p>roles</p> </li> <li> <p>department </p> </li> <li> <p>organization </p> </li>
     * <li> <p>groups </p> </li> <li> <p>title </p> </li> <li> <p>costCenter </p> </li>
     * <li> <p>userType</p> </li> </ul> <p> </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A supported AWS IAM SAML <code>PrincipalTag</code> attribute that is matched
     * to the associated value when a user identity federates into an Amazon AppStream
     * 2.0 SAML application.</p> <p>The following are valid values:</p> <ul> <li>
     * <p>roles</p> </li> <li> <p>department </p> </li> <li> <p>organization </p> </li>
     * <li> <p>groups </p> </li> <li> <p>title </p> </li> <li> <p>costCenter </p> </li>
     * <li> <p>userType</p> </li> </ul> <p> </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A supported AWS IAM SAML <code>PrincipalTag</code> attribute that is matched
     * to the associated value when a user identity federates into an Amazon AppStream
     * 2.0 SAML application.</p> <p>The following are valid values:</p> <ul> <li>
     * <p>roles</p> </li> <li> <p>department </p> </li> <li> <p>organization </p> </li>
     * <li> <p>groups </p> </li> <li> <p>title </p> </li> <li> <p>costCenter </p> </li>
     * <li> <p>userType</p> </li> </ul> <p> </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A supported AWS IAM SAML <code>PrincipalTag</code> attribute that is matched
     * to the associated value when a user identity federates into an Amazon AppStream
     * 2.0 SAML application.</p> <p>The following are valid values:</p> <ul> <li>
     * <p>roles</p> </li> <li> <p>department </p> </li> <li> <p>organization </p> </li>
     * <li> <p>groups </p> </li> <li> <p>title </p> </li> <li> <p>costCenter </p> </li>
     * <li> <p>userType</p> </li> </ul> <p> </p>
     */
    inline EntitlementAttribute& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A supported AWS IAM SAML <code>PrincipalTag</code> attribute that is matched
     * to the associated value when a user identity federates into an Amazon AppStream
     * 2.0 SAML application.</p> <p>The following are valid values:</p> <ul> <li>
     * <p>roles</p> </li> <li> <p>department </p> </li> <li> <p>organization </p> </li>
     * <li> <p>groups </p> </li> <li> <p>title </p> </li> <li> <p>costCenter </p> </li>
     * <li> <p>userType</p> </li> </ul> <p> </p>
     */
    inline EntitlementAttribute& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A supported AWS IAM SAML <code>PrincipalTag</code> attribute that is matched
     * to the associated value when a user identity federates into an Amazon AppStream
     * 2.0 SAML application.</p> <p>The following are valid values:</p> <ul> <li>
     * <p>roles</p> </li> <li> <p>department </p> </li> <li> <p>organization </p> </li>
     * <li> <p>groups </p> </li> <li> <p>title </p> </li> <li> <p>costCenter </p> </li>
     * <li> <p>userType</p> </li> </ul> <p> </p>
     */
    inline EntitlementAttribute& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A value that is matched to a supported SAML attribute name when a user
     * identity federates into an Amazon AppStream 2.0 SAML application. </p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>A value that is matched to a supported SAML attribute name when a user
     * identity federates into an Amazon AppStream 2.0 SAML application. </p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>A value that is matched to a supported SAML attribute name when a user
     * identity federates into an Amazon AppStream 2.0 SAML application. </p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>A value that is matched to a supported SAML attribute name when a user
     * identity federates into an Amazon AppStream 2.0 SAML application. </p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>A value that is matched to a supported SAML attribute name when a user
     * identity federates into an Amazon AppStream 2.0 SAML application. </p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>A value that is matched to a supported SAML attribute name when a user
     * identity federates into an Amazon AppStream 2.0 SAML application. </p>
     */
    inline EntitlementAttribute& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>A value that is matched to a supported SAML attribute name when a user
     * identity federates into an Amazon AppStream 2.0 SAML application. </p>
     */
    inline EntitlementAttribute& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>A value that is matched to a supported SAML attribute name when a user
     * identity federates into an Amazon AppStream 2.0 SAML application. </p>
     */
    inline EntitlementAttribute& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
