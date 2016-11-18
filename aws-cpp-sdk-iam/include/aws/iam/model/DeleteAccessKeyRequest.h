/*
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
  class AWS_IAM_API DeleteAccessKeyRequest : public IAMRequest
  {
  public:
    DeleteAccessKeyRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The name of the user whose access key pair you want to delete.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for this parameter is a
     * string of characters consisting of upper and lowercase alphanumeric characters
     * with no spaces. You can also include any of the following characters: =,.@-</p>
     */
    inline const Aws::String& GetUserName() const{ return m_userName; }

    /**
     * <p>The name of the user whose access key pair you want to delete.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for this parameter is a
     * string of characters consisting of upper and lowercase alphanumeric characters
     * with no spaces. You can also include any of the following characters: =,.@-</p>
     */
    inline void SetUserName(const Aws::String& value) { m_userNameHasBeenSet = true; m_userName = value; }

    /**
     * <p>The name of the user whose access key pair you want to delete.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for this parameter is a
     * string of characters consisting of upper and lowercase alphanumeric characters
     * with no spaces. You can also include any of the following characters: =,.@-</p>
     */
    inline void SetUserName(Aws::String&& value) { m_userNameHasBeenSet = true; m_userName = value; }

    /**
     * <p>The name of the user whose access key pair you want to delete.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for this parameter is a
     * string of characters consisting of upper and lowercase alphanumeric characters
     * with no spaces. You can also include any of the following characters: =,.@-</p>
     */
    inline void SetUserName(const char* value) { m_userNameHasBeenSet = true; m_userName.assign(value); }

    /**
     * <p>The name of the user whose access key pair you want to delete.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for this parameter is a
     * string of characters consisting of upper and lowercase alphanumeric characters
     * with no spaces. You can also include any of the following characters: =,.@-</p>
     */
    inline DeleteAccessKeyRequest& WithUserName(const Aws::String& value) { SetUserName(value); return *this;}

    /**
     * <p>The name of the user whose access key pair you want to delete.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for this parameter is a
     * string of characters consisting of upper and lowercase alphanumeric characters
     * with no spaces. You can also include any of the following characters: =,.@-</p>
     */
    inline DeleteAccessKeyRequest& WithUserName(Aws::String&& value) { SetUserName(value); return *this;}

    /**
     * <p>The name of the user whose access key pair you want to delete.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for this parameter is a
     * string of characters consisting of upper and lowercase alphanumeric characters
     * with no spaces. You can also include any of the following characters: =,.@-</p>
     */
    inline DeleteAccessKeyRequest& WithUserName(const char* value) { SetUserName(value); return *this;}

    /**
     * <p>The access key ID for the access key ID and secret access key you want to
     * delete.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex pattern</a>
     * for this parameter is a string of characters that can consist of any upper or
     * lowercased letter or digit.</p>
     */
    inline const Aws::String& GetAccessKeyId() const{ return m_accessKeyId; }

    /**
     * <p>The access key ID for the access key ID and secret access key you want to
     * delete.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex pattern</a>
     * for this parameter is a string of characters that can consist of any upper or
     * lowercased letter or digit.</p>
     */
    inline void SetAccessKeyId(const Aws::String& value) { m_accessKeyIdHasBeenSet = true; m_accessKeyId = value; }

    /**
     * <p>The access key ID for the access key ID and secret access key you want to
     * delete.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex pattern</a>
     * for this parameter is a string of characters that can consist of any upper or
     * lowercased letter or digit.</p>
     */
    inline void SetAccessKeyId(Aws::String&& value) { m_accessKeyIdHasBeenSet = true; m_accessKeyId = value; }

    /**
     * <p>The access key ID for the access key ID and secret access key you want to
     * delete.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex pattern</a>
     * for this parameter is a string of characters that can consist of any upper or
     * lowercased letter or digit.</p>
     */
    inline void SetAccessKeyId(const char* value) { m_accessKeyIdHasBeenSet = true; m_accessKeyId.assign(value); }

    /**
     * <p>The access key ID for the access key ID and secret access key you want to
     * delete.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex pattern</a>
     * for this parameter is a string of characters that can consist of any upper or
     * lowercased letter or digit.</p>
     */
    inline DeleteAccessKeyRequest& WithAccessKeyId(const Aws::String& value) { SetAccessKeyId(value); return *this;}

    /**
     * <p>The access key ID for the access key ID and secret access key you want to
     * delete.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex pattern</a>
     * for this parameter is a string of characters that can consist of any upper or
     * lowercased letter or digit.</p>
     */
    inline DeleteAccessKeyRequest& WithAccessKeyId(Aws::String&& value) { SetAccessKeyId(value); return *this;}

    /**
     * <p>The access key ID for the access key ID and secret access key you want to
     * delete.</p> <p>The <a href="http://wikipedia.org/wiki/regex">regex pattern</a>
     * for this parameter is a string of characters that can consist of any upper or
     * lowercased letter or digit.</p>
     */
    inline DeleteAccessKeyRequest& WithAccessKeyId(const char* value) { SetAccessKeyId(value); return *this;}

  private:
    Aws::String m_userName;
    bool m_userNameHasBeenSet;
    Aws::String m_accessKeyId;
    bool m_accessKeyIdHasBeenSet;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
