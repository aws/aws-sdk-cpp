/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/iam/IAMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace IAM
{
namespace Model
{

  /**
   */
  class DeleteServiceSpecificCredentialRequest : public IAMRequest
  {
  public:
    AWS_IAM_API DeleteServiceSpecificCredentialRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteServiceSpecificCredential"; }

    AWS_IAM_API Aws::String SerializePayload() const override;

  protected:
    AWS_IAM_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The name of the IAM user associated with the service-specific credential. If
     * this value is not specified, then the operation assumes the user whose
     * credentials are used to call the operation.</p> <p>This parameter allows
     * (through its <a href="http://wikipedia.org/wiki/regex">regex pattern</a>) a
     * string of characters consisting of upper and lowercase alphanumeric characters
     * with no spaces. You can also include any of the following characters:
     * _+=,.@-</p>
     */
    inline const Aws::String& GetUserName() const { return m_userName; }
    inline bool UserNameHasBeenSet() const { return m_userNameHasBeenSet; }
    template<typename UserNameT = Aws::String>
    void SetUserName(UserNameT&& value) { m_userNameHasBeenSet = true; m_userName = std::forward<UserNameT>(value); }
    template<typename UserNameT = Aws::String>
    DeleteServiceSpecificCredentialRequest& WithUserName(UserNameT&& value) { SetUserName(std::forward<UserNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the service-specific credential. You can get this
     * value by calling <a
     * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_ListServiceSpecificCredentials.html">ListServiceSpecificCredentials</a>.</p>
     * <p>This parameter allows (through its <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string of characters
     * that can consist of any upper or lowercased letter or digit.</p>
     */
    inline const Aws::String& GetServiceSpecificCredentialId() const { return m_serviceSpecificCredentialId; }
    inline bool ServiceSpecificCredentialIdHasBeenSet() const { return m_serviceSpecificCredentialIdHasBeenSet; }
    template<typename ServiceSpecificCredentialIdT = Aws::String>
    void SetServiceSpecificCredentialId(ServiceSpecificCredentialIdT&& value) { m_serviceSpecificCredentialIdHasBeenSet = true; m_serviceSpecificCredentialId = std::forward<ServiceSpecificCredentialIdT>(value); }
    template<typename ServiceSpecificCredentialIdT = Aws::String>
    DeleteServiceSpecificCredentialRequest& WithServiceSpecificCredentialId(ServiceSpecificCredentialIdT&& value) { SetServiceSpecificCredentialId(std::forward<ServiceSpecificCredentialIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_userName;
    bool m_userNameHasBeenSet = false;

    Aws::String m_serviceSpecificCredentialId;
    bool m_serviceSpecificCredentialIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
