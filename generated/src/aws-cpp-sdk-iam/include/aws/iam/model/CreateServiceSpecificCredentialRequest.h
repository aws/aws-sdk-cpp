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
  class CreateServiceSpecificCredentialRequest : public IAMRequest
  {
  public:
    AWS_IAM_API CreateServiceSpecificCredentialRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateServiceSpecificCredential"; }

    AWS_IAM_API Aws::String SerializePayload() const override;

  protected:
    AWS_IAM_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The name of the IAM user that is to be associated with the credentials. The
     * new service-specific credentials have the same permissions as the associated
     * user except that they can be used only to access the specified service.</p>
     * <p>This parameter allows (through its <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string of characters
     * consisting of upper and lowercase alphanumeric characters with no spaces. You
     * can also include any of the following characters: _+=,.@-</p>
     */
    inline const Aws::String& GetUserName() const { return m_userName; }
    inline bool UserNameHasBeenSet() const { return m_userNameHasBeenSet; }
    template<typename UserNameT = Aws::String>
    void SetUserName(UserNameT&& value) { m_userNameHasBeenSet = true; m_userName = std::forward<UserNameT>(value); }
    template<typename UserNameT = Aws::String>
    CreateServiceSpecificCredentialRequest& WithUserName(UserNameT&& value) { SetUserName(std::forward<UserNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Amazon Web Services service that is to be associated with the
     * credentials. The service you specify here is the only service that can be
     * accessed using these credentials.</p>
     */
    inline const Aws::String& GetServiceName() const { return m_serviceName; }
    inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }
    template<typename ServiceNameT = Aws::String>
    void SetServiceName(ServiceNameT&& value) { m_serviceNameHasBeenSet = true; m_serviceName = std::forward<ServiceNameT>(value); }
    template<typename ServiceNameT = Aws::String>
    CreateServiceSpecificCredentialRequest& WithServiceName(ServiceNameT&& value) { SetServiceName(std::forward<ServiceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of days until the service specific credential expires. This field
     * is only valid for Bedrock API keys and must be a positive integer. When not
     * specified, the credential will not expire.</p>
     */
    inline int GetCredentialAgeDays() const { return m_credentialAgeDays; }
    inline bool CredentialAgeDaysHasBeenSet() const { return m_credentialAgeDaysHasBeenSet; }
    inline void SetCredentialAgeDays(int value) { m_credentialAgeDaysHasBeenSet = true; m_credentialAgeDays = value; }
    inline CreateServiceSpecificCredentialRequest& WithCredentialAgeDays(int value) { SetCredentialAgeDays(value); return *this;}
    ///@}
  private:

    Aws::String m_userName;
    bool m_userNameHasBeenSet = false;

    Aws::String m_serviceName;
    bool m_serviceNameHasBeenSet = false;

    int m_credentialAgeDays{0};
    bool m_credentialAgeDaysHasBeenSet = false;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
