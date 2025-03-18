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
   * <p>Describes the configuration information required to join fleets and image
   * builders to Microsoft Active Directory domains.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/DomainJoinInfo">AWS
   * API Reference</a></p>
   */
  class DomainJoinInfo
  {
  public:
    AWS_APPSTREAM_API DomainJoinInfo() = default;
    AWS_APPSTREAM_API DomainJoinInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSTREAM_API DomainJoinInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSTREAM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The fully qualified name of the directory (for example,
     * corp.example.com).</p>
     */
    inline const Aws::String& GetDirectoryName() const { return m_directoryName; }
    inline bool DirectoryNameHasBeenSet() const { return m_directoryNameHasBeenSet; }
    template<typename DirectoryNameT = Aws::String>
    void SetDirectoryName(DirectoryNameT&& value) { m_directoryNameHasBeenSet = true; m_directoryName = std::forward<DirectoryNameT>(value); }
    template<typename DirectoryNameT = Aws::String>
    DomainJoinInfo& WithDirectoryName(DirectoryNameT&& value) { SetDirectoryName(std::forward<DirectoryNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The distinguished name of the organizational unit for computer accounts.</p>
     */
    inline const Aws::String& GetOrganizationalUnitDistinguishedName() const { return m_organizationalUnitDistinguishedName; }
    inline bool OrganizationalUnitDistinguishedNameHasBeenSet() const { return m_organizationalUnitDistinguishedNameHasBeenSet; }
    template<typename OrganizationalUnitDistinguishedNameT = Aws::String>
    void SetOrganizationalUnitDistinguishedName(OrganizationalUnitDistinguishedNameT&& value) { m_organizationalUnitDistinguishedNameHasBeenSet = true; m_organizationalUnitDistinguishedName = std::forward<OrganizationalUnitDistinguishedNameT>(value); }
    template<typename OrganizationalUnitDistinguishedNameT = Aws::String>
    DomainJoinInfo& WithOrganizationalUnitDistinguishedName(OrganizationalUnitDistinguishedNameT&& value) { SetOrganizationalUnitDistinguishedName(std::forward<OrganizationalUnitDistinguishedNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_directoryName;
    bool m_directoryNameHasBeenSet = false;

    Aws::String m_organizationalUnitDistinguishedName;
    bool m_organizationalUnitDistinguishedNameHasBeenSet = false;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
