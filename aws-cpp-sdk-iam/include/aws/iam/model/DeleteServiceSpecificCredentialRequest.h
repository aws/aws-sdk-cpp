﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/iam/IAMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IAM
{
namespace Model
{

  /**
   */
  class AWS_IAM_API DeleteServiceSpecificCredentialRequest : public IAMRequest
  {
  public:
    DeleteServiceSpecificCredentialRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The name of the IAM user associated with the service-specific credential. If
     * this value is not specified, then the operation assumes the user whose
     * credentials are used to call the operation.</p> <p>This parameter allows (per
     * its <a href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string of
     * characters consisting of upper and lowercase alphanumeric characters with no
     * spaces. You can also include any of the following characters: =,.@-</p>
     */
    inline const Aws::String& GetUserName() const{ return m_userName; }

    /**
     * <p>The name of the IAM user associated with the service-specific credential. If
     * this value is not specified, then the operation assumes the user whose
     * credentials are used to call the operation.</p> <p>This parameter allows (per
     * its <a href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string of
     * characters consisting of upper and lowercase alphanumeric characters with no
     * spaces. You can also include any of the following characters: =,.@-</p>
     */
    inline void SetUserName(const Aws::String& value) { m_userNameHasBeenSet = true; m_userName = value; }

    /**
     * <p>The name of the IAM user associated with the service-specific credential. If
     * this value is not specified, then the operation assumes the user whose
     * credentials are used to call the operation.</p> <p>This parameter allows (per
     * its <a href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string of
     * characters consisting of upper and lowercase alphanumeric characters with no
     * spaces. You can also include any of the following characters: =,.@-</p>
     */
    inline void SetUserName(Aws::String&& value) { m_userNameHasBeenSet = true; m_userName = value; }

    /**
     * <p>The name of the IAM user associated with the service-specific credential. If
     * this value is not specified, then the operation assumes the user whose
     * credentials are used to call the operation.</p> <p>This parameter allows (per
     * its <a href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string of
     * characters consisting of upper and lowercase alphanumeric characters with no
     * spaces. You can also include any of the following characters: =,.@-</p>
     */
    inline void SetUserName(const char* value) { m_userNameHasBeenSet = true; m_userName.assign(value); }

    /**
     * <p>The name of the IAM user associated with the service-specific credential. If
     * this value is not specified, then the operation assumes the user whose
     * credentials are used to call the operation.</p> <p>This parameter allows (per
     * its <a href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string of
     * characters consisting of upper and lowercase alphanumeric characters with no
     * spaces. You can also include any of the following characters: =,.@-</p>
     */
    inline DeleteServiceSpecificCredentialRequest& WithUserName(const Aws::String& value) { SetUserName(value); return *this;}

    /**
     * <p>The name of the IAM user associated with the service-specific credential. If
     * this value is not specified, then the operation assumes the user whose
     * credentials are used to call the operation.</p> <p>This parameter allows (per
     * its <a href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string of
     * characters consisting of upper and lowercase alphanumeric characters with no
     * spaces. You can also include any of the following characters: =,.@-</p>
     */
    inline DeleteServiceSpecificCredentialRequest& WithUserName(Aws::String&& value) { SetUserName(value); return *this;}

    /**
     * <p>The name of the IAM user associated with the service-specific credential. If
     * this value is not specified, then the operation assumes the user whose
     * credentials are used to call the operation.</p> <p>This parameter allows (per
     * its <a href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string of
     * characters consisting of upper and lowercase alphanumeric characters with no
     * spaces. You can also include any of the following characters: =,.@-</p>
     */
    inline DeleteServiceSpecificCredentialRequest& WithUserName(const char* value) { SetUserName(value); return *this;}

    /**
     * <p>The unique identifier of the service-specific credential. You can get this
     * value by calling <a>ListServiceSpecificCredentials</a>.</p> <p>This parameter
     * allows (per its <a href="http://wikipedia.org/wiki/regex">regex pattern</a>) a
     * string of characters that can consist of any upper or lowercased letter or
     * digit.</p>
     */
    inline const Aws::String& GetServiceSpecificCredentialId() const{ return m_serviceSpecificCredentialId; }

    /**
     * <p>The unique identifier of the service-specific credential. You can get this
     * value by calling <a>ListServiceSpecificCredentials</a>.</p> <p>This parameter
     * allows (per its <a href="http://wikipedia.org/wiki/regex">regex pattern</a>) a
     * string of characters that can consist of any upper or lowercased letter or
     * digit.</p>
     */
    inline void SetServiceSpecificCredentialId(const Aws::String& value) { m_serviceSpecificCredentialIdHasBeenSet = true; m_serviceSpecificCredentialId = value; }

    /**
     * <p>The unique identifier of the service-specific credential. You can get this
     * value by calling <a>ListServiceSpecificCredentials</a>.</p> <p>This parameter
     * allows (per its <a href="http://wikipedia.org/wiki/regex">regex pattern</a>) a
     * string of characters that can consist of any upper or lowercased letter or
     * digit.</p>
     */
    inline void SetServiceSpecificCredentialId(Aws::String&& value) { m_serviceSpecificCredentialIdHasBeenSet = true; m_serviceSpecificCredentialId = value; }

    /**
     * <p>The unique identifier of the service-specific credential. You can get this
     * value by calling <a>ListServiceSpecificCredentials</a>.</p> <p>This parameter
     * allows (per its <a href="http://wikipedia.org/wiki/regex">regex pattern</a>) a
     * string of characters that can consist of any upper or lowercased letter or
     * digit.</p>
     */
    inline void SetServiceSpecificCredentialId(const char* value) { m_serviceSpecificCredentialIdHasBeenSet = true; m_serviceSpecificCredentialId.assign(value); }

    /**
     * <p>The unique identifier of the service-specific credential. You can get this
     * value by calling <a>ListServiceSpecificCredentials</a>.</p> <p>This parameter
     * allows (per its <a href="http://wikipedia.org/wiki/regex">regex pattern</a>) a
     * string of characters that can consist of any upper or lowercased letter or
     * digit.</p>
     */
    inline DeleteServiceSpecificCredentialRequest& WithServiceSpecificCredentialId(const Aws::String& value) { SetServiceSpecificCredentialId(value); return *this;}

    /**
     * <p>The unique identifier of the service-specific credential. You can get this
     * value by calling <a>ListServiceSpecificCredentials</a>.</p> <p>This parameter
     * allows (per its <a href="http://wikipedia.org/wiki/regex">regex pattern</a>) a
     * string of characters that can consist of any upper or lowercased letter or
     * digit.</p>
     */
    inline DeleteServiceSpecificCredentialRequest& WithServiceSpecificCredentialId(Aws::String&& value) { SetServiceSpecificCredentialId(value); return *this;}

    /**
     * <p>The unique identifier of the service-specific credential. You can get this
     * value by calling <a>ListServiceSpecificCredentials</a>.</p> <p>This parameter
     * allows (per its <a href="http://wikipedia.org/wiki/regex">regex pattern</a>) a
     * string of characters that can consist of any upper or lowercased letter or
     * digit.</p>
     */
    inline DeleteServiceSpecificCredentialRequest& WithServiceSpecificCredentialId(const char* value) { SetServiceSpecificCredentialId(value); return *this;}

  private:
    Aws::String m_userName;
    bool m_userNameHasBeenSet;
    Aws::String m_serviceSpecificCredentialId;
    bool m_serviceSpecificCredentialIdHasBeenSet;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
