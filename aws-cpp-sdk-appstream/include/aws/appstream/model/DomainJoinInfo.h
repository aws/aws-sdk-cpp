/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   * <p>Describes the configuration information required to join fleets and image
   * builders to Microsoft Active Directory domains.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/DomainJoinInfo">AWS
   * API Reference</a></p>
   */
  class AWS_APPSTREAM_API DomainJoinInfo
  {
  public:
    DomainJoinInfo();
    DomainJoinInfo(Aws::Utils::Json::JsonView jsonValue);
    DomainJoinInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The fully qualified name of the directory (for example,
     * corp.example.com).</p>
     */
    inline const Aws::String& GetDirectoryName() const{ return m_directoryName; }

    /**
     * <p>The fully qualified name of the directory (for example,
     * corp.example.com).</p>
     */
    inline bool DirectoryNameHasBeenSet() const { return m_directoryNameHasBeenSet; }

    /**
     * <p>The fully qualified name of the directory (for example,
     * corp.example.com).</p>
     */
    inline void SetDirectoryName(const Aws::String& value) { m_directoryNameHasBeenSet = true; m_directoryName = value; }

    /**
     * <p>The fully qualified name of the directory (for example,
     * corp.example.com).</p>
     */
    inline void SetDirectoryName(Aws::String&& value) { m_directoryNameHasBeenSet = true; m_directoryName = std::move(value); }

    /**
     * <p>The fully qualified name of the directory (for example,
     * corp.example.com).</p>
     */
    inline void SetDirectoryName(const char* value) { m_directoryNameHasBeenSet = true; m_directoryName.assign(value); }

    /**
     * <p>The fully qualified name of the directory (for example,
     * corp.example.com).</p>
     */
    inline DomainJoinInfo& WithDirectoryName(const Aws::String& value) { SetDirectoryName(value); return *this;}

    /**
     * <p>The fully qualified name of the directory (for example,
     * corp.example.com).</p>
     */
    inline DomainJoinInfo& WithDirectoryName(Aws::String&& value) { SetDirectoryName(std::move(value)); return *this;}

    /**
     * <p>The fully qualified name of the directory (for example,
     * corp.example.com).</p>
     */
    inline DomainJoinInfo& WithDirectoryName(const char* value) { SetDirectoryName(value); return *this;}


    /**
     * <p>The distinguished name of the organizational unit for computer accounts.</p>
     */
    inline const Aws::String& GetOrganizationalUnitDistinguishedName() const{ return m_organizationalUnitDistinguishedName; }

    /**
     * <p>The distinguished name of the organizational unit for computer accounts.</p>
     */
    inline bool OrganizationalUnitDistinguishedNameHasBeenSet() const { return m_organizationalUnitDistinguishedNameHasBeenSet; }

    /**
     * <p>The distinguished name of the organizational unit for computer accounts.</p>
     */
    inline void SetOrganizationalUnitDistinguishedName(const Aws::String& value) { m_organizationalUnitDistinguishedNameHasBeenSet = true; m_organizationalUnitDistinguishedName = value; }

    /**
     * <p>The distinguished name of the organizational unit for computer accounts.</p>
     */
    inline void SetOrganizationalUnitDistinguishedName(Aws::String&& value) { m_organizationalUnitDistinguishedNameHasBeenSet = true; m_organizationalUnitDistinguishedName = std::move(value); }

    /**
     * <p>The distinguished name of the organizational unit for computer accounts.</p>
     */
    inline void SetOrganizationalUnitDistinguishedName(const char* value) { m_organizationalUnitDistinguishedNameHasBeenSet = true; m_organizationalUnitDistinguishedName.assign(value); }

    /**
     * <p>The distinguished name of the organizational unit for computer accounts.</p>
     */
    inline DomainJoinInfo& WithOrganizationalUnitDistinguishedName(const Aws::String& value) { SetOrganizationalUnitDistinguishedName(value); return *this;}

    /**
     * <p>The distinguished name of the organizational unit for computer accounts.</p>
     */
    inline DomainJoinInfo& WithOrganizationalUnitDistinguishedName(Aws::String&& value) { SetOrganizationalUnitDistinguishedName(std::move(value)); return *this;}

    /**
     * <p>The distinguished name of the organizational unit for computer accounts.</p>
     */
    inline DomainJoinInfo& WithOrganizationalUnitDistinguishedName(const char* value) { SetOrganizationalUnitDistinguishedName(value); return *this;}

  private:

    Aws::String m_directoryName;
    bool m_directoryNameHasBeenSet;

    Aws::String m_organizationalUnitDistinguishedName;
    bool m_organizationalUnitDistinguishedNameHasBeenSet;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
