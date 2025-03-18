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
    AWS_DIRECTORYSERVICE_API CreateComputerRequest() = default;

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
    inline const Aws::String& GetDirectoryId() const { return m_directoryId; }
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }
    template<typename DirectoryIdT = Aws::String>
    void SetDirectoryId(DirectoryIdT&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::forward<DirectoryIdT>(value); }
    template<typename DirectoryIdT = Aws::String>
    CreateComputerRequest& WithDirectoryId(DirectoryIdT&& value) { SetDirectoryId(std::forward<DirectoryIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the computer account.</p>
     */
    inline const Aws::String& GetComputerName() const { return m_computerName; }
    inline bool ComputerNameHasBeenSet() const { return m_computerNameHasBeenSet; }
    template<typename ComputerNameT = Aws::String>
    void SetComputerName(ComputerNameT&& value) { m_computerNameHasBeenSet = true; m_computerName = std::forward<ComputerNameT>(value); }
    template<typename ComputerNameT = Aws::String>
    CreateComputerRequest& WithComputerName(ComputerNameT&& value) { SetComputerName(std::forward<ComputerNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A one-time password that is used to join the computer to the directory. You
     * should generate a random, strong password to use for this parameter.</p>
     */
    inline const Aws::String& GetPassword() const { return m_password; }
    inline bool PasswordHasBeenSet() const { return m_passwordHasBeenSet; }
    template<typename PasswordT = Aws::String>
    void SetPassword(PasswordT&& value) { m_passwordHasBeenSet = true; m_password = std::forward<PasswordT>(value); }
    template<typename PasswordT = Aws::String>
    CreateComputerRequest& WithPassword(PasswordT&& value) { SetPassword(std::forward<PasswordT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The fully-qualified distinguished name of the organizational unit to place
     * the computer account in.</p>
     */
    inline const Aws::String& GetOrganizationalUnitDistinguishedName() const { return m_organizationalUnitDistinguishedName; }
    inline bool OrganizationalUnitDistinguishedNameHasBeenSet() const { return m_organizationalUnitDistinguishedNameHasBeenSet; }
    template<typename OrganizationalUnitDistinguishedNameT = Aws::String>
    void SetOrganizationalUnitDistinguishedName(OrganizationalUnitDistinguishedNameT&& value) { m_organizationalUnitDistinguishedNameHasBeenSet = true; m_organizationalUnitDistinguishedName = std::forward<OrganizationalUnitDistinguishedNameT>(value); }
    template<typename OrganizationalUnitDistinguishedNameT = Aws::String>
    CreateComputerRequest& WithOrganizationalUnitDistinguishedName(OrganizationalUnitDistinguishedNameT&& value) { SetOrganizationalUnitDistinguishedName(std::forward<OrganizationalUnitDistinguishedNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of <a>Attribute</a> objects that contain any LDAP attributes to
     * apply to the computer account.</p>
     */
    inline const Aws::Vector<Attribute>& GetComputerAttributes() const { return m_computerAttributes; }
    inline bool ComputerAttributesHasBeenSet() const { return m_computerAttributesHasBeenSet; }
    template<typename ComputerAttributesT = Aws::Vector<Attribute>>
    void SetComputerAttributes(ComputerAttributesT&& value) { m_computerAttributesHasBeenSet = true; m_computerAttributes = std::forward<ComputerAttributesT>(value); }
    template<typename ComputerAttributesT = Aws::Vector<Attribute>>
    CreateComputerRequest& WithComputerAttributes(ComputerAttributesT&& value) { SetComputerAttributes(std::forward<ComputerAttributesT>(value)); return *this;}
    template<typename ComputerAttributesT = Attribute>
    CreateComputerRequest& AddComputerAttributes(ComputerAttributesT&& value) { m_computerAttributesHasBeenSet = true; m_computerAttributes.emplace_back(std::forward<ComputerAttributesT>(value)); return *this; }
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
