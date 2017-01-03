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
  class AWS_IAM_API CreateUserRequest : public IAMRequest
  {
  public:
    CreateUserRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p> The path for the user name. For more information about paths, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>IAM User Guide</i>.</p> <p>This parameter is optional.
     * If it is not included, it defaults to a slash (/).</p> <p>This paramater allows
     * (per its <a href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string
     * of characters consisting of either a forward slash (/) by itself or a string
     * that must begin and end with forward slashes, containing any ASCII character
     * from the ! (\u0021) thru the DEL character (\u007F), including most punctuation
     * characters, digits, and upper and lowercased letters.</p>
     */
    inline const Aws::String& GetPath() const{ return m_path; }

    /**
     * <p> The path for the user name. For more information about paths, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>IAM User Guide</i>.</p> <p>This parameter is optional.
     * If it is not included, it defaults to a slash (/).</p> <p>This paramater allows
     * (per its <a href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string
     * of characters consisting of either a forward slash (/) by itself or a string
     * that must begin and end with forward slashes, containing any ASCII character
     * from the ! (\u0021) thru the DEL character (\u007F), including most punctuation
     * characters, digits, and upper and lowercased letters.</p>
     */
    inline void SetPath(const Aws::String& value) { m_pathHasBeenSet = true; m_path = value; }

    /**
     * <p> The path for the user name. For more information about paths, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>IAM User Guide</i>.</p> <p>This parameter is optional.
     * If it is not included, it defaults to a slash (/).</p> <p>This paramater allows
     * (per its <a href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string
     * of characters consisting of either a forward slash (/) by itself or a string
     * that must begin and end with forward slashes, containing any ASCII character
     * from the ! (\u0021) thru the DEL character (\u007F), including most punctuation
     * characters, digits, and upper and lowercased letters.</p>
     */
    inline void SetPath(Aws::String&& value) { m_pathHasBeenSet = true; m_path = value; }

    /**
     * <p> The path for the user name. For more information about paths, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>IAM User Guide</i>.</p> <p>This parameter is optional.
     * If it is not included, it defaults to a slash (/).</p> <p>This paramater allows
     * (per its <a href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string
     * of characters consisting of either a forward slash (/) by itself or a string
     * that must begin and end with forward slashes, containing any ASCII character
     * from the ! (\u0021) thru the DEL character (\u007F), including most punctuation
     * characters, digits, and upper and lowercased letters.</p>
     */
    inline void SetPath(const char* value) { m_pathHasBeenSet = true; m_path.assign(value); }

    /**
     * <p> The path for the user name. For more information about paths, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>IAM User Guide</i>.</p> <p>This parameter is optional.
     * If it is not included, it defaults to a slash (/).</p> <p>This paramater allows
     * (per its <a href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string
     * of characters consisting of either a forward slash (/) by itself or a string
     * that must begin and end with forward slashes, containing any ASCII character
     * from the ! (\u0021) thru the DEL character (\u007F), including most punctuation
     * characters, digits, and upper and lowercased letters.</p>
     */
    inline CreateUserRequest& WithPath(const Aws::String& value) { SetPath(value); return *this;}

    /**
     * <p> The path for the user name. For more information about paths, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>IAM User Guide</i>.</p> <p>This parameter is optional.
     * If it is not included, it defaults to a slash (/).</p> <p>This paramater allows
     * (per its <a href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string
     * of characters consisting of either a forward slash (/) by itself or a string
     * that must begin and end with forward slashes, containing any ASCII character
     * from the ! (\u0021) thru the DEL character (\u007F), including most punctuation
     * characters, digits, and upper and lowercased letters.</p>
     */
    inline CreateUserRequest& WithPath(Aws::String&& value) { SetPath(value); return *this;}

    /**
     * <p> The path for the user name. For more information about paths, see <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/Using_Identifiers.html">IAM
     * Identifiers</a> in the <i>IAM User Guide</i>.</p> <p>This parameter is optional.
     * If it is not included, it defaults to a slash (/).</p> <p>This paramater allows
     * (per its <a href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string
     * of characters consisting of either a forward slash (/) by itself or a string
     * that must begin and end with forward slashes, containing any ASCII character
     * from the ! (\u0021) thru the DEL character (\u007F), including most punctuation
     * characters, digits, and upper and lowercased letters.</p>
     */
    inline CreateUserRequest& WithPath(const char* value) { SetPath(value); return *this;}

    /**
     * <p>The name of the user to create.</p> <p>This parameter allows (per its <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string of characters
     * consisting of upper and lowercase alphanumeric characters with no spaces. You
     * can also include any of the following characters: =,.@-. User names are not
     * distinguished by case. For example, you cannot create users named both
     * "TESTUSER" and "testuser".</p>
     */
    inline const Aws::String& GetUserName() const{ return m_userName; }

    /**
     * <p>The name of the user to create.</p> <p>This parameter allows (per its <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string of characters
     * consisting of upper and lowercase alphanumeric characters with no spaces. You
     * can also include any of the following characters: =,.@-. User names are not
     * distinguished by case. For example, you cannot create users named both
     * "TESTUSER" and "testuser".</p>
     */
    inline void SetUserName(const Aws::String& value) { m_userNameHasBeenSet = true; m_userName = value; }

    /**
     * <p>The name of the user to create.</p> <p>This parameter allows (per its <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string of characters
     * consisting of upper and lowercase alphanumeric characters with no spaces. You
     * can also include any of the following characters: =,.@-. User names are not
     * distinguished by case. For example, you cannot create users named both
     * "TESTUSER" and "testuser".</p>
     */
    inline void SetUserName(Aws::String&& value) { m_userNameHasBeenSet = true; m_userName = value; }

    /**
     * <p>The name of the user to create.</p> <p>This parameter allows (per its <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string of characters
     * consisting of upper and lowercase alphanumeric characters with no spaces. You
     * can also include any of the following characters: =,.@-. User names are not
     * distinguished by case. For example, you cannot create users named both
     * "TESTUSER" and "testuser".</p>
     */
    inline void SetUserName(const char* value) { m_userNameHasBeenSet = true; m_userName.assign(value); }

    /**
     * <p>The name of the user to create.</p> <p>This parameter allows (per its <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string of characters
     * consisting of upper and lowercase alphanumeric characters with no spaces. You
     * can also include any of the following characters: =,.@-. User names are not
     * distinguished by case. For example, you cannot create users named both
     * "TESTUSER" and "testuser".</p>
     */
    inline CreateUserRequest& WithUserName(const Aws::String& value) { SetUserName(value); return *this;}

    /**
     * <p>The name of the user to create.</p> <p>This parameter allows (per its <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string of characters
     * consisting of upper and lowercase alphanumeric characters with no spaces. You
     * can also include any of the following characters: =,.@-. User names are not
     * distinguished by case. For example, you cannot create users named both
     * "TESTUSER" and "testuser".</p>
     */
    inline CreateUserRequest& WithUserName(Aws::String&& value) { SetUserName(value); return *this;}

    /**
     * <p>The name of the user to create.</p> <p>This parameter allows (per its <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a>) a string of characters
     * consisting of upper and lowercase alphanumeric characters with no spaces. You
     * can also include any of the following characters: =,.@-. User names are not
     * distinguished by case. For example, you cannot create users named both
     * "TESTUSER" and "testuser".</p>
     */
    inline CreateUserRequest& WithUserName(const char* value) { SetUserName(value); return *this;}

  private:
    Aws::String m_path;
    bool m_pathHasBeenSet;
    Aws::String m_userName;
    bool m_userNameHasBeenSet;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
