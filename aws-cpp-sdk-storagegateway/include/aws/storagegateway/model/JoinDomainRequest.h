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
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/storagegateway/StorageGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace StorageGateway
{
namespace Model
{

  /**
   * <p>JoinDomainInput</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/JoinDomainInput">AWS
   * API Reference</a></p>
   */
  class AWS_STORAGEGATEWAY_API JoinDomainRequest : public StorageGatewayRequest
  {
  public:
    JoinDomainRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "JoinDomain"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The unique Amazon Resource Name (ARN) of the file gateway you want to add to
     * the Active Directory domain. </p>
     */
    inline const Aws::String& GetGatewayARN() const{ return m_gatewayARN; }

    /**
     * <p>The unique Amazon Resource Name (ARN) of the file gateway you want to add to
     * the Active Directory domain. </p>
     */
    inline void SetGatewayARN(const Aws::String& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = value; }

    /**
     * <p>The unique Amazon Resource Name (ARN) of the file gateway you want to add to
     * the Active Directory domain. </p>
     */
    inline void SetGatewayARN(Aws::String&& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = std::move(value); }

    /**
     * <p>The unique Amazon Resource Name (ARN) of the file gateway you want to add to
     * the Active Directory domain. </p>
     */
    inline void SetGatewayARN(const char* value) { m_gatewayARNHasBeenSet = true; m_gatewayARN.assign(value); }

    /**
     * <p>The unique Amazon Resource Name (ARN) of the file gateway you want to add to
     * the Active Directory domain. </p>
     */
    inline JoinDomainRequest& WithGatewayARN(const Aws::String& value) { SetGatewayARN(value); return *this;}

    /**
     * <p>The unique Amazon Resource Name (ARN) of the file gateway you want to add to
     * the Active Directory domain. </p>
     */
    inline JoinDomainRequest& WithGatewayARN(Aws::String&& value) { SetGatewayARN(std::move(value)); return *this;}

    /**
     * <p>The unique Amazon Resource Name (ARN) of the file gateway you want to add to
     * the Active Directory domain. </p>
     */
    inline JoinDomainRequest& WithGatewayARN(const char* value) { SetGatewayARN(value); return *this;}


    /**
     * <p>The name of the domain that you want the gateway to join.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>The name of the domain that you want the gateway to join.</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>The name of the domain that you want the gateway to join.</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * <p>The name of the domain that you want the gateway to join.</p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p>The name of the domain that you want the gateway to join.</p>
     */
    inline JoinDomainRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>The name of the domain that you want the gateway to join.</p>
     */
    inline JoinDomainRequest& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p>The name of the domain that you want the gateway to join.</p>
     */
    inline JoinDomainRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * <p>Sets the user name of user who has permission to add the gateway to the
     * Active Directory domain.</p>
     */
    inline const Aws::String& GetUserName() const{ return m_userName; }

    /**
     * <p>Sets the user name of user who has permission to add the gateway to the
     * Active Directory domain.</p>
     */
    inline void SetUserName(const Aws::String& value) { m_userNameHasBeenSet = true; m_userName = value; }

    /**
     * <p>Sets the user name of user who has permission to add the gateway to the
     * Active Directory domain.</p>
     */
    inline void SetUserName(Aws::String&& value) { m_userNameHasBeenSet = true; m_userName = std::move(value); }

    /**
     * <p>Sets the user name of user who has permission to add the gateway to the
     * Active Directory domain.</p>
     */
    inline void SetUserName(const char* value) { m_userNameHasBeenSet = true; m_userName.assign(value); }

    /**
     * <p>Sets the user name of user who has permission to add the gateway to the
     * Active Directory domain.</p>
     */
    inline JoinDomainRequest& WithUserName(const Aws::String& value) { SetUserName(value); return *this;}

    /**
     * <p>Sets the user name of user who has permission to add the gateway to the
     * Active Directory domain.</p>
     */
    inline JoinDomainRequest& WithUserName(Aws::String&& value) { SetUserName(std::move(value)); return *this;}

    /**
     * <p>Sets the user name of user who has permission to add the gateway to the
     * Active Directory domain.</p>
     */
    inline JoinDomainRequest& WithUserName(const char* value) { SetUserName(value); return *this;}


    /**
     * <p>Sets the password of the user who has permission to add the gateway to the
     * Active Directory domain.</p>
     */
    inline const Aws::String& GetPassword() const{ return m_password; }

    /**
     * <p>Sets the password of the user who has permission to add the gateway to the
     * Active Directory domain.</p>
     */
    inline void SetPassword(const Aws::String& value) { m_passwordHasBeenSet = true; m_password = value; }

    /**
     * <p>Sets the password of the user who has permission to add the gateway to the
     * Active Directory domain.</p>
     */
    inline void SetPassword(Aws::String&& value) { m_passwordHasBeenSet = true; m_password = std::move(value); }

    /**
     * <p>Sets the password of the user who has permission to add the gateway to the
     * Active Directory domain.</p>
     */
    inline void SetPassword(const char* value) { m_passwordHasBeenSet = true; m_password.assign(value); }

    /**
     * <p>Sets the password of the user who has permission to add the gateway to the
     * Active Directory domain.</p>
     */
    inline JoinDomainRequest& WithPassword(const Aws::String& value) { SetPassword(value); return *this;}

    /**
     * <p>Sets the password of the user who has permission to add the gateway to the
     * Active Directory domain.</p>
     */
    inline JoinDomainRequest& WithPassword(Aws::String&& value) { SetPassword(std::move(value)); return *this;}

    /**
     * <p>Sets the password of the user who has permission to add the gateway to the
     * Active Directory domain.</p>
     */
    inline JoinDomainRequest& WithPassword(const char* value) { SetPassword(value); return *this;}

  private:

    Aws::String m_gatewayARN;
    bool m_gatewayARNHasBeenSet;

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet;

    Aws::String m_userName;
    bool m_userNameHasBeenSet;

    Aws::String m_password;
    bool m_passwordHasBeenSet;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
