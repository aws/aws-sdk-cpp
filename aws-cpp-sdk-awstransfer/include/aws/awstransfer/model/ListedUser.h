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
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Transfer
{
namespace Model
{

  /**
   * <p>Returns properties of the user that you specify.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/ListedUser">AWS
   * API Reference</a></p>
   */
  class AWS_TRANSFER_API ListedUser
  {
  public:
    ListedUser();
    ListedUser(Aws::Utils::Json::JsonView jsonValue);
    ListedUser& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>This property is the unique Amazon Resource Name (ARN) for the user that you
     * wish to learn about.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>This property is the unique Amazon Resource Name (ARN) for the user that you
     * wish to learn about.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>This property is the unique Amazon Resource Name (ARN) for the user that you
     * wish to learn about.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>This property is the unique Amazon Resource Name (ARN) for the user that you
     * wish to learn about.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>This property is the unique Amazon Resource Name (ARN) for the user that you
     * wish to learn about.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>This property is the unique Amazon Resource Name (ARN) for the user that you
     * wish to learn about.</p>
     */
    inline ListedUser& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>This property is the unique Amazon Resource Name (ARN) for the user that you
     * wish to learn about.</p>
     */
    inline ListedUser& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>This property is the unique Amazon Resource Name (ARN) for the user that you
     * wish to learn about.</p>
     */
    inline ListedUser& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>This value specifies the location that files are written to or read from an
     * Amazon S3 bucket for the user you specify by their ARN.</p>
     */
    inline const Aws::String& GetHomeDirectory() const{ return m_homeDirectory; }

    /**
     * <p>This value specifies the location that files are written to or read from an
     * Amazon S3 bucket for the user you specify by their ARN.</p>
     */
    inline bool HomeDirectoryHasBeenSet() const { return m_homeDirectoryHasBeenSet; }

    /**
     * <p>This value specifies the location that files are written to or read from an
     * Amazon S3 bucket for the user you specify by their ARN.</p>
     */
    inline void SetHomeDirectory(const Aws::String& value) { m_homeDirectoryHasBeenSet = true; m_homeDirectory = value; }

    /**
     * <p>This value specifies the location that files are written to or read from an
     * Amazon S3 bucket for the user you specify by their ARN.</p>
     */
    inline void SetHomeDirectory(Aws::String&& value) { m_homeDirectoryHasBeenSet = true; m_homeDirectory = std::move(value); }

    /**
     * <p>This value specifies the location that files are written to or read from an
     * Amazon S3 bucket for the user you specify by their ARN.</p>
     */
    inline void SetHomeDirectory(const char* value) { m_homeDirectoryHasBeenSet = true; m_homeDirectory.assign(value); }

    /**
     * <p>This value specifies the location that files are written to or read from an
     * Amazon S3 bucket for the user you specify by their ARN.</p>
     */
    inline ListedUser& WithHomeDirectory(const Aws::String& value) { SetHomeDirectory(value); return *this;}

    /**
     * <p>This value specifies the location that files are written to or read from an
     * Amazon S3 bucket for the user you specify by their ARN.</p>
     */
    inline ListedUser& WithHomeDirectory(Aws::String&& value) { SetHomeDirectory(std::move(value)); return *this;}

    /**
     * <p>This value specifies the location that files are written to or read from an
     * Amazon S3 bucket for the user you specify by their ARN.</p>
     */
    inline ListedUser& WithHomeDirectory(const char* value) { SetHomeDirectory(value); return *this;}


    /**
     * <p>The role in use by this user. A <i>role</i> is an AWS Identity and Access
     * Management (IAM) entity that in this case allows the SFTP server to act on a
     * user's behalf. It allows the server to inherit the trust relationship that
     * enables that user to perform file operations to their Amazon S3 bucket.</p>
     */
    inline const Aws::String& GetRole() const{ return m_role; }

    /**
     * <p>The role in use by this user. A <i>role</i> is an AWS Identity and Access
     * Management (IAM) entity that in this case allows the SFTP server to act on a
     * user's behalf. It allows the server to inherit the trust relationship that
     * enables that user to perform file operations to their Amazon S3 bucket.</p>
     */
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }

    /**
     * <p>The role in use by this user. A <i>role</i> is an AWS Identity and Access
     * Management (IAM) entity that in this case allows the SFTP server to act on a
     * user's behalf. It allows the server to inherit the trust relationship that
     * enables that user to perform file operations to their Amazon S3 bucket.</p>
     */
    inline void SetRole(const Aws::String& value) { m_roleHasBeenSet = true; m_role = value; }

    /**
     * <p>The role in use by this user. A <i>role</i> is an AWS Identity and Access
     * Management (IAM) entity that in this case allows the SFTP server to act on a
     * user's behalf. It allows the server to inherit the trust relationship that
     * enables that user to perform file operations to their Amazon S3 bucket.</p>
     */
    inline void SetRole(Aws::String&& value) { m_roleHasBeenSet = true; m_role = std::move(value); }

    /**
     * <p>The role in use by this user. A <i>role</i> is an AWS Identity and Access
     * Management (IAM) entity that in this case allows the SFTP server to act on a
     * user's behalf. It allows the server to inherit the trust relationship that
     * enables that user to perform file operations to their Amazon S3 bucket.</p>
     */
    inline void SetRole(const char* value) { m_roleHasBeenSet = true; m_role.assign(value); }

    /**
     * <p>The role in use by this user. A <i>role</i> is an AWS Identity and Access
     * Management (IAM) entity that in this case allows the SFTP server to act on a
     * user's behalf. It allows the server to inherit the trust relationship that
     * enables that user to perform file operations to their Amazon S3 bucket.</p>
     */
    inline ListedUser& WithRole(const Aws::String& value) { SetRole(value); return *this;}

    /**
     * <p>The role in use by this user. A <i>role</i> is an AWS Identity and Access
     * Management (IAM) entity that in this case allows the SFTP server to act on a
     * user's behalf. It allows the server to inherit the trust relationship that
     * enables that user to perform file operations to their Amazon S3 bucket.</p>
     */
    inline ListedUser& WithRole(Aws::String&& value) { SetRole(std::move(value)); return *this;}

    /**
     * <p>The role in use by this user. A <i>role</i> is an AWS Identity and Access
     * Management (IAM) entity that in this case allows the SFTP server to act on a
     * user's behalf. It allows the server to inherit the trust relationship that
     * enables that user to perform file operations to their Amazon S3 bucket.</p>
     */
    inline ListedUser& WithRole(const char* value) { SetRole(value); return *this;}


    /**
     * <p>This value is the number of SSH public keys stored for the user you
     * specified.</p>
     */
    inline int GetSshPublicKeyCount() const{ return m_sshPublicKeyCount; }

    /**
     * <p>This value is the number of SSH public keys stored for the user you
     * specified.</p>
     */
    inline bool SshPublicKeyCountHasBeenSet() const { return m_sshPublicKeyCountHasBeenSet; }

    /**
     * <p>This value is the number of SSH public keys stored for the user you
     * specified.</p>
     */
    inline void SetSshPublicKeyCount(int value) { m_sshPublicKeyCountHasBeenSet = true; m_sshPublicKeyCount = value; }

    /**
     * <p>This value is the number of SSH public keys stored for the user you
     * specified.</p>
     */
    inline ListedUser& WithSshPublicKeyCount(int value) { SetSshPublicKeyCount(value); return *this;}


    /**
     * <p>The name of the user whose ARN was specified. User names are used for
     * authentication purposes.</p>
     */
    inline const Aws::String& GetUserName() const{ return m_userName; }

    /**
     * <p>The name of the user whose ARN was specified. User names are used for
     * authentication purposes.</p>
     */
    inline bool UserNameHasBeenSet() const { return m_userNameHasBeenSet; }

    /**
     * <p>The name of the user whose ARN was specified. User names are used for
     * authentication purposes.</p>
     */
    inline void SetUserName(const Aws::String& value) { m_userNameHasBeenSet = true; m_userName = value; }

    /**
     * <p>The name of the user whose ARN was specified. User names are used for
     * authentication purposes.</p>
     */
    inline void SetUserName(Aws::String&& value) { m_userNameHasBeenSet = true; m_userName = std::move(value); }

    /**
     * <p>The name of the user whose ARN was specified. User names are used for
     * authentication purposes.</p>
     */
    inline void SetUserName(const char* value) { m_userNameHasBeenSet = true; m_userName.assign(value); }

    /**
     * <p>The name of the user whose ARN was specified. User names are used for
     * authentication purposes.</p>
     */
    inline ListedUser& WithUserName(const Aws::String& value) { SetUserName(value); return *this;}

    /**
     * <p>The name of the user whose ARN was specified. User names are used for
     * authentication purposes.</p>
     */
    inline ListedUser& WithUserName(Aws::String&& value) { SetUserName(std::move(value)); return *this;}

    /**
     * <p>The name of the user whose ARN was specified. User names are used for
     * authentication purposes.</p>
     */
    inline ListedUser& WithUserName(const char* value) { SetUserName(value); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    Aws::String m_homeDirectory;
    bool m_homeDirectoryHasBeenSet;

    Aws::String m_role;
    bool m_roleHasBeenSet;

    int m_sshPublicKeyCount;
    bool m_sshPublicKeyCountHasBeenSet;

    Aws::String m_userName;
    bool m_userNameHasBeenSet;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
