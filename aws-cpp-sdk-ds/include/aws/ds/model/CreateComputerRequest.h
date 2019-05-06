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
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/ds/DirectoryServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ds/model/Attribute.h>
#include <utility>

namespace Aws
{
namespace DirectoryService
{
namespace Model
{

  /**
   * <p>Contains the inputs for the <a>CreateComputer</a> operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/CreateComputerRequest">AWS
   * API Reference</a></p>
   */
  class AWS_DIRECTORYSERVICE_API CreateComputerRequest : public DirectoryServiceRequest
  {
  public:
    CreateComputerRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateComputer"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The identifier of the directory in which to create the computer account.</p>
     */
    inline const Aws::String& GetDirectoryId() const{ return m_directoryId; }

    /**
     * <p>The identifier of the directory in which to create the computer account.</p>
     */
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }

    /**
     * <p>The identifier of the directory in which to create the computer account.</p>
     */
    inline void SetDirectoryId(const Aws::String& value) { m_directoryIdHasBeenSet = true; m_directoryId = value; }

    /**
     * <p>The identifier of the directory in which to create the computer account.</p>
     */
    inline void SetDirectoryId(Aws::String&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::move(value); }

    /**
     * <p>The identifier of the directory in which to create the computer account.</p>
     */
    inline void SetDirectoryId(const char* value) { m_directoryIdHasBeenSet = true; m_directoryId.assign(value); }

    /**
     * <p>The identifier of the directory in which to create the computer account.</p>
     */
    inline CreateComputerRequest& WithDirectoryId(const Aws::String& value) { SetDirectoryId(value); return *this;}

    /**
     * <p>The identifier of the directory in which to create the computer account.</p>
     */
    inline CreateComputerRequest& WithDirectoryId(Aws::String&& value) { SetDirectoryId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the directory in which to create the computer account.</p>
     */
    inline CreateComputerRequest& WithDirectoryId(const char* value) { SetDirectoryId(value); return *this;}


    /**
     * <p>The name of the computer account.</p>
     */
    inline const Aws::String& GetComputerName() const{ return m_computerName; }

    /**
     * <p>The name of the computer account.</p>
     */
    inline bool ComputerNameHasBeenSet() const { return m_computerNameHasBeenSet; }

    /**
     * <p>The name of the computer account.</p>
     */
    inline void SetComputerName(const Aws::String& value) { m_computerNameHasBeenSet = true; m_computerName = value; }

    /**
     * <p>The name of the computer account.</p>
     */
    inline void SetComputerName(Aws::String&& value) { m_computerNameHasBeenSet = true; m_computerName = std::move(value); }

    /**
     * <p>The name of the computer account.</p>
     */
    inline void SetComputerName(const char* value) { m_computerNameHasBeenSet = true; m_computerName.assign(value); }

    /**
     * <p>The name of the computer account.</p>
     */
    inline CreateComputerRequest& WithComputerName(const Aws::String& value) { SetComputerName(value); return *this;}

    /**
     * <p>The name of the computer account.</p>
     */
    inline CreateComputerRequest& WithComputerName(Aws::String&& value) { SetComputerName(std::move(value)); return *this;}

    /**
     * <p>The name of the computer account.</p>
     */
    inline CreateComputerRequest& WithComputerName(const char* value) { SetComputerName(value); return *this;}


    /**
     * <p>A one-time password that is used to join the computer to the directory. You
     * should generate a random, strong password to use for this parameter.</p>
     */
    inline const Aws::String& GetPassword() const{ return m_password; }

    /**
     * <p>A one-time password that is used to join the computer to the directory. You
     * should generate a random, strong password to use for this parameter.</p>
     */
    inline bool PasswordHasBeenSet() const { return m_passwordHasBeenSet; }

    /**
     * <p>A one-time password that is used to join the computer to the directory. You
     * should generate a random, strong password to use for this parameter.</p>
     */
    inline void SetPassword(const Aws::String& value) { m_passwordHasBeenSet = true; m_password = value; }

    /**
     * <p>A one-time password that is used to join the computer to the directory. You
     * should generate a random, strong password to use for this parameter.</p>
     */
    inline void SetPassword(Aws::String&& value) { m_passwordHasBeenSet = true; m_password = std::move(value); }

    /**
     * <p>A one-time password that is used to join the computer to the directory. You
     * should generate a random, strong password to use for this parameter.</p>
     */
    inline void SetPassword(const char* value) { m_passwordHasBeenSet = true; m_password.assign(value); }

    /**
     * <p>A one-time password that is used to join the computer to the directory. You
     * should generate a random, strong password to use for this parameter.</p>
     */
    inline CreateComputerRequest& WithPassword(const Aws::String& value) { SetPassword(value); return *this;}

    /**
     * <p>A one-time password that is used to join the computer to the directory. You
     * should generate a random, strong password to use for this parameter.</p>
     */
    inline CreateComputerRequest& WithPassword(Aws::String&& value) { SetPassword(std::move(value)); return *this;}

    /**
     * <p>A one-time password that is used to join the computer to the directory. You
     * should generate a random, strong password to use for this parameter.</p>
     */
    inline CreateComputerRequest& WithPassword(const char* value) { SetPassword(value); return *this;}


    /**
     * <p>The fully-qualified distinguished name of the organizational unit to place
     * the computer account in.</p>
     */
    inline const Aws::String& GetOrganizationalUnitDistinguishedName() const{ return m_organizationalUnitDistinguishedName; }

    /**
     * <p>The fully-qualified distinguished name of the organizational unit to place
     * the computer account in.</p>
     */
    inline bool OrganizationalUnitDistinguishedNameHasBeenSet() const { return m_organizationalUnitDistinguishedNameHasBeenSet; }

    /**
     * <p>The fully-qualified distinguished name of the organizational unit to place
     * the computer account in.</p>
     */
    inline void SetOrganizationalUnitDistinguishedName(const Aws::String& value) { m_organizationalUnitDistinguishedNameHasBeenSet = true; m_organizationalUnitDistinguishedName = value; }

    /**
     * <p>The fully-qualified distinguished name of the organizational unit to place
     * the computer account in.</p>
     */
    inline void SetOrganizationalUnitDistinguishedName(Aws::String&& value) { m_organizationalUnitDistinguishedNameHasBeenSet = true; m_organizationalUnitDistinguishedName = std::move(value); }

    /**
     * <p>The fully-qualified distinguished name of the organizational unit to place
     * the computer account in.</p>
     */
    inline void SetOrganizationalUnitDistinguishedName(const char* value) { m_organizationalUnitDistinguishedNameHasBeenSet = true; m_organizationalUnitDistinguishedName.assign(value); }

    /**
     * <p>The fully-qualified distinguished name of the organizational unit to place
     * the computer account in.</p>
     */
    inline CreateComputerRequest& WithOrganizationalUnitDistinguishedName(const Aws::String& value) { SetOrganizationalUnitDistinguishedName(value); return *this;}

    /**
     * <p>The fully-qualified distinguished name of the organizational unit to place
     * the computer account in.</p>
     */
    inline CreateComputerRequest& WithOrganizationalUnitDistinguishedName(Aws::String&& value) { SetOrganizationalUnitDistinguishedName(std::move(value)); return *this;}

    /**
     * <p>The fully-qualified distinguished name of the organizational unit to place
     * the computer account in.</p>
     */
    inline CreateComputerRequest& WithOrganizationalUnitDistinguishedName(const char* value) { SetOrganizationalUnitDistinguishedName(value); return *this;}


    /**
     * <p>An array of <a>Attribute</a> objects that contain any LDAP attributes to
     * apply to the computer account.</p>
     */
    inline const Aws::Vector<Attribute>& GetComputerAttributes() const{ return m_computerAttributes; }

    /**
     * <p>An array of <a>Attribute</a> objects that contain any LDAP attributes to
     * apply to the computer account.</p>
     */
    inline bool ComputerAttributesHasBeenSet() const { return m_computerAttributesHasBeenSet; }

    /**
     * <p>An array of <a>Attribute</a> objects that contain any LDAP attributes to
     * apply to the computer account.</p>
     */
    inline void SetComputerAttributes(const Aws::Vector<Attribute>& value) { m_computerAttributesHasBeenSet = true; m_computerAttributes = value; }

    /**
     * <p>An array of <a>Attribute</a> objects that contain any LDAP attributes to
     * apply to the computer account.</p>
     */
    inline void SetComputerAttributes(Aws::Vector<Attribute>&& value) { m_computerAttributesHasBeenSet = true; m_computerAttributes = std::move(value); }

    /**
     * <p>An array of <a>Attribute</a> objects that contain any LDAP attributes to
     * apply to the computer account.</p>
     */
    inline CreateComputerRequest& WithComputerAttributes(const Aws::Vector<Attribute>& value) { SetComputerAttributes(value); return *this;}

    /**
     * <p>An array of <a>Attribute</a> objects that contain any LDAP attributes to
     * apply to the computer account.</p>
     */
    inline CreateComputerRequest& WithComputerAttributes(Aws::Vector<Attribute>&& value) { SetComputerAttributes(std::move(value)); return *this;}

    /**
     * <p>An array of <a>Attribute</a> objects that contain any LDAP attributes to
     * apply to the computer account.</p>
     */
    inline CreateComputerRequest& AddComputerAttributes(const Attribute& value) { m_computerAttributesHasBeenSet = true; m_computerAttributes.push_back(value); return *this; }

    /**
     * <p>An array of <a>Attribute</a> objects that contain any LDAP attributes to
     * apply to the computer account.</p>
     */
    inline CreateComputerRequest& AddComputerAttributes(Attribute&& value) { m_computerAttributesHasBeenSet = true; m_computerAttributes.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_directoryId;
    bool m_directoryIdHasBeenSet;

    Aws::String m_computerName;
    bool m_computerNameHasBeenSet;

    Aws::String m_password;
    bool m_passwordHasBeenSet;

    Aws::String m_organizationalUnitDistinguishedName;
    bool m_organizationalUnitDistinguishedNameHasBeenSet;

    Aws::Vector<Attribute> m_computerAttributes;
    bool m_computerAttributesHasBeenSet;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
