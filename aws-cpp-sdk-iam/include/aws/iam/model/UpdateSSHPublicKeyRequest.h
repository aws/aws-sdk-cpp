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
#include <aws/iam/model/StatusType.h>

namespace Aws
{
namespace IAM
{
namespace Model
{

  /**
   */
  class AWS_IAM_API UpdateSSHPublicKeyRequest : public IAMRequest
  {
  public:
    UpdateSSHPublicKeyRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The name of the IAM user associated with the SSH public key.</p> <p>This
     * parameter allows (per its <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a>) a string of characters consisting of upper and lowercase
     * alphanumeric characters with no spaces. You can also include any of the
     * following characters: =,.@-</p>
     */
    inline const Aws::String& GetUserName() const{ return m_userName; }

    /**
     * <p>The name of the IAM user associated with the SSH public key.</p> <p>This
     * parameter allows (per its <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a>) a string of characters consisting of upper and lowercase
     * alphanumeric characters with no spaces. You can also include any of the
     * following characters: =,.@-</p>
     */
    inline void SetUserName(const Aws::String& value) { m_userNameHasBeenSet = true; m_userName = value; }

    /**
     * <p>The name of the IAM user associated with the SSH public key.</p> <p>This
     * parameter allows (per its <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a>) a string of characters consisting of upper and lowercase
     * alphanumeric characters with no spaces. You can also include any of the
     * following characters: =,.@-</p>
     */
    inline void SetUserName(Aws::String&& value) { m_userNameHasBeenSet = true; m_userName = value; }

    /**
     * <p>The name of the IAM user associated with the SSH public key.</p> <p>This
     * parameter allows (per its <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a>) a string of characters consisting of upper and lowercase
     * alphanumeric characters with no spaces. You can also include any of the
     * following characters: =,.@-</p>
     */
    inline void SetUserName(const char* value) { m_userNameHasBeenSet = true; m_userName.assign(value); }

    /**
     * <p>The name of the IAM user associated with the SSH public key.</p> <p>This
     * parameter allows (per its <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a>) a string of characters consisting of upper and lowercase
     * alphanumeric characters with no spaces. You can also include any of the
     * following characters: =,.@-</p>
     */
    inline UpdateSSHPublicKeyRequest& WithUserName(const Aws::String& value) { SetUserName(value); return *this;}

    /**
     * <p>The name of the IAM user associated with the SSH public key.</p> <p>This
     * parameter allows (per its <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a>) a string of characters consisting of upper and lowercase
     * alphanumeric characters with no spaces. You can also include any of the
     * following characters: =,.@-</p>
     */
    inline UpdateSSHPublicKeyRequest& WithUserName(Aws::String&& value) { SetUserName(value); return *this;}

    /**
     * <p>The name of the IAM user associated with the SSH public key.</p> <p>This
     * parameter allows (per its <a href="http://wikipedia.org/wiki/regex">regex
     * pattern</a>) a string of characters consisting of upper and lowercase
     * alphanumeric characters with no spaces. You can also include any of the
     * following characters: =,.@-</p>
     */
    inline UpdateSSHPublicKeyRequest& WithUserName(const char* value) { SetUserName(value); return *this;}

    /**
     * <p>The unique identifier for the SSH public key.</p> <p>This parameter allows
     * (per its <a href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string
     * of characters that can consist of any upper or lowercased letter or digit.</p>
     */
    inline const Aws::String& GetSSHPublicKeyId() const{ return m_sSHPublicKeyId; }

    /**
     * <p>The unique identifier for the SSH public key.</p> <p>This parameter allows
     * (per its <a href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string
     * of characters that can consist of any upper or lowercased letter or digit.</p>
     */
    inline void SetSSHPublicKeyId(const Aws::String& value) { m_sSHPublicKeyIdHasBeenSet = true; m_sSHPublicKeyId = value; }

    /**
     * <p>The unique identifier for the SSH public key.</p> <p>This parameter allows
     * (per its <a href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string
     * of characters that can consist of any upper or lowercased letter or digit.</p>
     */
    inline void SetSSHPublicKeyId(Aws::String&& value) { m_sSHPublicKeyIdHasBeenSet = true; m_sSHPublicKeyId = value; }

    /**
     * <p>The unique identifier for the SSH public key.</p> <p>This parameter allows
     * (per its <a href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string
     * of characters that can consist of any upper or lowercased letter or digit.</p>
     */
    inline void SetSSHPublicKeyId(const char* value) { m_sSHPublicKeyIdHasBeenSet = true; m_sSHPublicKeyId.assign(value); }

    /**
     * <p>The unique identifier for the SSH public key.</p> <p>This parameter allows
     * (per its <a href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string
     * of characters that can consist of any upper or lowercased letter or digit.</p>
     */
    inline UpdateSSHPublicKeyRequest& WithSSHPublicKeyId(const Aws::String& value) { SetSSHPublicKeyId(value); return *this;}

    /**
     * <p>The unique identifier for the SSH public key.</p> <p>This parameter allows
     * (per its <a href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string
     * of characters that can consist of any upper or lowercased letter or digit.</p>
     */
    inline UpdateSSHPublicKeyRequest& WithSSHPublicKeyId(Aws::String&& value) { SetSSHPublicKeyId(value); return *this;}

    /**
     * <p>The unique identifier for the SSH public key.</p> <p>This parameter allows
     * (per its <a href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string
     * of characters that can consist of any upper or lowercased letter or digit.</p>
     */
    inline UpdateSSHPublicKeyRequest& WithSSHPublicKeyId(const char* value) { SetSSHPublicKeyId(value); return *this;}

    /**
     * <p>The status to assign to the SSH public key. <code>Active</code> means the key
     * can be used for authentication with an AWS CodeCommit repository.
     * <code>Inactive</code> means the key cannot be used.</p>
     */
    inline const StatusType& GetStatus() const{ return m_status; }

    /**
     * <p>The status to assign to the SSH public key. <code>Active</code> means the key
     * can be used for authentication with an AWS CodeCommit repository.
     * <code>Inactive</code> means the key cannot be used.</p>
     */
    inline void SetStatus(const StatusType& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status to assign to the SSH public key. <code>Active</code> means the key
     * can be used for authentication with an AWS CodeCommit repository.
     * <code>Inactive</code> means the key cannot be used.</p>
     */
    inline void SetStatus(StatusType&& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status to assign to the SSH public key. <code>Active</code> means the key
     * can be used for authentication with an AWS CodeCommit repository.
     * <code>Inactive</code> means the key cannot be used.</p>
     */
    inline UpdateSSHPublicKeyRequest& WithStatus(const StatusType& value) { SetStatus(value); return *this;}

    /**
     * <p>The status to assign to the SSH public key. <code>Active</code> means the key
     * can be used for authentication with an AWS CodeCommit repository.
     * <code>Inactive</code> means the key cannot be used.</p>
     */
    inline UpdateSSHPublicKeyRequest& WithStatus(StatusType&& value) { SetStatus(value); return *this;}

  private:
    Aws::String m_userName;
    bool m_userNameHasBeenSet;
    Aws::String m_sSHPublicKeyId;
    bool m_sSHPublicKeyIdHasBeenSet;
    StatusType m_status;
    bool m_statusHasBeenSet;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
