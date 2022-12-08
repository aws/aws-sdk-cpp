/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/nimble/NimbleStudio_EXPORTS.h>
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
namespace NimbleStudio
{
namespace Model
{

  /**
   * <p>An LDAP attribute of an Active Directory computer account, in the form of a
   * name:value pair.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/nimble-2020-08-01/ActiveDirectoryComputerAttribute">AWS
   * API Reference</a></p>
   */
  class ActiveDirectoryComputerAttribute
  {
  public:
    AWS_NIMBLESTUDIO_API ActiveDirectoryComputerAttribute();
    AWS_NIMBLESTUDIO_API ActiveDirectoryComputerAttribute(Aws::Utils::Json::JsonView jsonValue);
    AWS_NIMBLESTUDIO_API ActiveDirectoryComputerAttribute& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NIMBLESTUDIO_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name for the LDAP attribute.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name for the LDAP attribute.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name for the LDAP attribute.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name for the LDAP attribute.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name for the LDAP attribute.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name for the LDAP attribute.</p>
     */
    inline ActiveDirectoryComputerAttribute& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name for the LDAP attribute.</p>
     */
    inline ActiveDirectoryComputerAttribute& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name for the LDAP attribute.</p>
     */
    inline ActiveDirectoryComputerAttribute& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The value for the LDAP attribute.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The value for the LDAP attribute.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value for the LDAP attribute.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value for the LDAP attribute.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value for the LDAP attribute.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The value for the LDAP attribute.</p>
     */
    inline ActiveDirectoryComputerAttribute& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The value for the LDAP attribute.</p>
     */
    inline ActiveDirectoryComputerAttribute& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The value for the LDAP attribute.</p>
     */
    inline ActiveDirectoryComputerAttribute& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace NimbleStudio
} // namespace Aws
