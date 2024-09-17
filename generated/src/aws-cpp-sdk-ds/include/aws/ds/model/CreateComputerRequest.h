/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class CreateComputerRequest : public DirectoryServiceRequest
  {
  public:
    AWS_DIRECTORYSERVICE_API CreateComputerRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateComputer"; }

    AWS_DIRECTORYSERVICE_API Aws::String SerializePayload() const override;

    AWS_DIRECTORYSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The identifier of the directory in which to create the computer account.</p>
     */
    inline const Aws::String& GetDirectoryId() const{ return m_directoryId; }
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }
    inline void SetDirectoryId(const Aws::String& value) { m_directoryIdHasBeenSet = true; m_directoryId = value; }
    inline void SetDirectoryId(Aws::String&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::move(value); }
    inline void SetDirectoryId(const char* value) { m_directoryIdHasBeenSet = true; m_directoryId.assign(value); }
    inline CreateComputerRequest& WithDirectoryId(const Aws::String& value) { SetDirectoryId(value); return *this;}
    inline CreateComputerRequest& WithDirectoryId(Aws::String&& value) { SetDirectoryId(std::move(value)); return *this;}
    inline CreateComputerRequest& WithDirectoryId(const char* value) { SetDirectoryId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the computer account.</p>
     */
    inline const Aws::String& GetComputerName() const{ return m_computerName; }
    inline bool ComputerNameHasBeenSet() const { return m_computerNameHasBeenSet; }
    inline void SetComputerName(const Aws::String& value) { m_computerNameHasBeenSet = true; m_computerName = value; }
    inline void SetComputerName(Aws::String&& value) { m_computerNameHasBeenSet = true; m_computerName = std::move(value); }
    inline void SetComputerName(const char* value) { m_computerNameHasBeenSet = true; m_computerName.assign(value); }
    inline CreateComputerRequest& WithComputerName(const Aws::String& value) { SetComputerName(value); return *this;}
    inline CreateComputerRequest& WithComputerName(Aws::String&& value) { SetComputerName(std::move(value)); return *this;}
    inline CreateComputerRequest& WithComputerName(const char* value) { SetComputerName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A one-time password that is used to join the computer to the directory. You
     * should generate a random, strong password to use for this parameter.</p>
     */
    inline const Aws::String& GetPassword() const{ return m_password; }
    inline bool PasswordHasBeenSet() const { return m_passwordHasBeenSet; }
    inline void SetPassword(const Aws::String& value) { m_passwordHasBeenSet = true; m_password = value; }
    inline void SetPassword(Aws::String&& value) { m_passwordHasBeenSet = true; m_password = std::move(value); }
    inline void SetPassword(const char* value) { m_passwordHasBeenSet = true; m_password.assign(value); }
    inline CreateComputerRequest& WithPassword(const Aws::String& value) { SetPassword(value); return *this;}
    inline CreateComputerRequest& WithPassword(Aws::String&& value) { SetPassword(std::move(value)); return *this;}
    inline CreateComputerRequest& WithPassword(const char* value) { SetPassword(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The fully-qualified distinguished name of the organizational unit to place
     * the computer account in.</p>
     */
    inline const Aws::String& GetOrganizationalUnitDistinguishedName() const{ return m_organizationalUnitDistinguishedName; }
    inline bool OrganizationalUnitDistinguishedNameHasBeenSet() const { return m_organizationalUnitDistinguishedNameHasBeenSet; }
    inline void SetOrganizationalUnitDistinguishedName(const Aws::String& value) { m_organizationalUnitDistinguishedNameHasBeenSet = true; m_organizationalUnitDistinguishedName = value; }
    inline void SetOrganizationalUnitDistinguishedName(Aws::String&& value) { m_organizationalUnitDistinguishedNameHasBeenSet = true; m_organizationalUnitDistinguishedName = std::move(value); }
    inline void SetOrganizationalUnitDistinguishedName(const char* value) { m_organizationalUnitDistinguishedNameHasBeenSet = true; m_organizationalUnitDistinguishedName.assign(value); }
    inline CreateComputerRequest& WithOrganizationalUnitDistinguishedName(const Aws::String& value) { SetOrganizationalUnitDistinguishedName(value); return *this;}
    inline CreateComputerRequest& WithOrganizationalUnitDistinguishedName(Aws::String&& value) { SetOrganizationalUnitDistinguishedName(std::move(value)); return *this;}
    inline CreateComputerRequest& WithOrganizationalUnitDistinguishedName(const char* value) { SetOrganizationalUnitDistinguishedName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of <a>Attribute</a> objects that contain any LDAP attributes to
     * apply to the computer account.</p>
     */
    inline const Aws::Vector<Attribute>& GetComputerAttributes() const{ return m_computerAttributes; }
    inline bool ComputerAttributesHasBeenSet() const { return m_computerAttributesHasBeenSet; }
    inline void SetComputerAttributes(const Aws::Vector<Attribute>& value) { m_computerAttributesHasBeenSet = true; m_computerAttributes = value; }
    inline void SetComputerAttributes(Aws::Vector<Attribute>&& value) { m_computerAttributesHasBeenSet = true; m_computerAttributes = std::move(value); }
    inline CreateComputerRequest& WithComputerAttributes(const Aws::Vector<Attribute>& value) { SetComputerAttributes(value); return *this;}
    inline CreateComputerRequest& WithComputerAttributes(Aws::Vector<Attribute>&& value) { SetComputerAttributes(std::move(value)); return *this;}
    inline CreateComputerRequest& AddComputerAttributes(const Attribute& value) { m_computerAttributesHasBeenSet = true; m_computerAttributes.push_back(value); return *this; }
    inline CreateComputerRequest& AddComputerAttributes(Attribute&& value) { m_computerAttributesHasBeenSet = true; m_computerAttributes.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_directoryId;
    bool m_directoryIdHasBeenSet = false;

    Aws::String m_computerName;
    bool m_computerNameHasBeenSet = false;

    Aws::String m_password;
    bool m_passwordHasBeenSet = false;

    Aws::String m_organizationalUnitDistinguishedName;
    bool m_organizationalUnitDistinguishedNameHasBeenSet = false;

    Aws::Vector<Attribute> m_computerAttributes;
    bool m_computerAttributesHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
