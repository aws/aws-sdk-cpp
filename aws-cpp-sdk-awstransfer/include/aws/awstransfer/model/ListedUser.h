/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/awstransfer/model/HomeDirectoryType.h>
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
     * <p>Provides the unique Amazon Resource Name (ARN) for the user that you want to
     * learn about.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>Provides the unique Amazon Resource Name (ARN) for the user that you want to
     * learn about.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>Provides the unique Amazon Resource Name (ARN) for the user that you want to
     * learn about.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>Provides the unique Amazon Resource Name (ARN) for the user that you want to
     * learn about.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>Provides the unique Amazon Resource Name (ARN) for the user that you want to
     * learn about.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>Provides the unique Amazon Resource Name (ARN) for the user that you want to
     * learn about.</p>
     */
    inline ListedUser& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>Provides the unique Amazon Resource Name (ARN) for the user that you want to
     * learn about.</p>
     */
    inline ListedUser& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>Provides the unique Amazon Resource Name (ARN) for the user that you want to
     * learn about.</p>
     */
    inline ListedUser& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>Specifies the location that files are written to or read from an Amazon S3
     * bucket for the user you specify by their ARN.</p>
     */
    inline const Aws::String& GetHomeDirectory() const{ return m_homeDirectory; }

    /**
     * <p>Specifies the location that files are written to or read from an Amazon S3
     * bucket for the user you specify by their ARN.</p>
     */
    inline bool HomeDirectoryHasBeenSet() const { return m_homeDirectoryHasBeenSet; }

    /**
     * <p>Specifies the location that files are written to or read from an Amazon S3
     * bucket for the user you specify by their ARN.</p>
     */
    inline void SetHomeDirectory(const Aws::String& value) { m_homeDirectoryHasBeenSet = true; m_homeDirectory = value; }

    /**
     * <p>Specifies the location that files are written to or read from an Amazon S3
     * bucket for the user you specify by their ARN.</p>
     */
    inline void SetHomeDirectory(Aws::String&& value) { m_homeDirectoryHasBeenSet = true; m_homeDirectory = std::move(value); }

    /**
     * <p>Specifies the location that files are written to or read from an Amazon S3
     * bucket for the user you specify by their ARN.</p>
     */
    inline void SetHomeDirectory(const char* value) { m_homeDirectoryHasBeenSet = true; m_homeDirectory.assign(value); }

    /**
     * <p>Specifies the location that files are written to or read from an Amazon S3
     * bucket for the user you specify by their ARN.</p>
     */
    inline ListedUser& WithHomeDirectory(const Aws::String& value) { SetHomeDirectory(value); return *this;}

    /**
     * <p>Specifies the location that files are written to or read from an Amazon S3
     * bucket for the user you specify by their ARN.</p>
     */
    inline ListedUser& WithHomeDirectory(Aws::String&& value) { SetHomeDirectory(std::move(value)); return *this;}

    /**
     * <p>Specifies the location that files are written to or read from an Amazon S3
     * bucket for the user you specify by their ARN.</p>
     */
    inline ListedUser& WithHomeDirectory(const char* value) { SetHomeDirectory(value); return *this;}


    /**
     * <p>Specifies the type of landing directory (folder) you mapped for your users'
     * home directory. If you set it to <code>PATH</code>, the user will see the
     * absolute Amazon S3 bucket paths as is in their file transfer protocol clients.
     * If you set it <code>LOGICAL</code>, you will need to provide mappings in the
     * <code>HomeDirectoryMappings</code> for how you want to make Amazon S3 paths
     * visible to your users.</p>
     */
    inline const HomeDirectoryType& GetHomeDirectoryType() const{ return m_homeDirectoryType; }

    /**
     * <p>Specifies the type of landing directory (folder) you mapped for your users'
     * home directory. If you set it to <code>PATH</code>, the user will see the
     * absolute Amazon S3 bucket paths as is in their file transfer protocol clients.
     * If you set it <code>LOGICAL</code>, you will need to provide mappings in the
     * <code>HomeDirectoryMappings</code> for how you want to make Amazon S3 paths
     * visible to your users.</p>
     */
    inline bool HomeDirectoryTypeHasBeenSet() const { return m_homeDirectoryTypeHasBeenSet; }

    /**
     * <p>Specifies the type of landing directory (folder) you mapped for your users'
     * home directory. If you set it to <code>PATH</code>, the user will see the
     * absolute Amazon S3 bucket paths as is in their file transfer protocol clients.
     * If you set it <code>LOGICAL</code>, you will need to provide mappings in the
     * <code>HomeDirectoryMappings</code> for how you want to make Amazon S3 paths
     * visible to your users.</p>
     */
    inline void SetHomeDirectoryType(const HomeDirectoryType& value) { m_homeDirectoryTypeHasBeenSet = true; m_homeDirectoryType = value; }

    /**
     * <p>Specifies the type of landing directory (folder) you mapped for your users'
     * home directory. If you set it to <code>PATH</code>, the user will see the
     * absolute Amazon S3 bucket paths as is in their file transfer protocol clients.
     * If you set it <code>LOGICAL</code>, you will need to provide mappings in the
     * <code>HomeDirectoryMappings</code> for how you want to make Amazon S3 paths
     * visible to your users.</p>
     */
    inline void SetHomeDirectoryType(HomeDirectoryType&& value) { m_homeDirectoryTypeHasBeenSet = true; m_homeDirectoryType = std::move(value); }

    /**
     * <p>Specifies the type of landing directory (folder) you mapped for your users'
     * home directory. If you set it to <code>PATH</code>, the user will see the
     * absolute Amazon S3 bucket paths as is in their file transfer protocol clients.
     * If you set it <code>LOGICAL</code>, you will need to provide mappings in the
     * <code>HomeDirectoryMappings</code> for how you want to make Amazon S3 paths
     * visible to your users.</p>
     */
    inline ListedUser& WithHomeDirectoryType(const HomeDirectoryType& value) { SetHomeDirectoryType(value); return *this;}

    /**
     * <p>Specifies the type of landing directory (folder) you mapped for your users'
     * home directory. If you set it to <code>PATH</code>, the user will see the
     * absolute Amazon S3 bucket paths as is in their file transfer protocol clients.
     * If you set it <code>LOGICAL</code>, you will need to provide mappings in the
     * <code>HomeDirectoryMappings</code> for how you want to make Amazon S3 paths
     * visible to your users.</p>
     */
    inline ListedUser& WithHomeDirectoryType(HomeDirectoryType&& value) { SetHomeDirectoryType(std::move(value)); return *this;}


    /**
     * <p>Specifies the role that is in use by this user. A <i>role</i> is an AWS
     * Identity and Access Management (IAM) entity that, in this case, allows a file
     * transfer protocol-enabled server to act on a user's behalf. It allows the server
     * to inherit the trust relationship that enables that user to perform file
     * operations to their Amazon S3 bucket.</p>
     */
    inline const Aws::String& GetRole() const{ return m_role; }

    /**
     * <p>Specifies the role that is in use by this user. A <i>role</i> is an AWS
     * Identity and Access Management (IAM) entity that, in this case, allows a file
     * transfer protocol-enabled server to act on a user's behalf. It allows the server
     * to inherit the trust relationship that enables that user to perform file
     * operations to their Amazon S3 bucket.</p>
     */
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }

    /**
     * <p>Specifies the role that is in use by this user. A <i>role</i> is an AWS
     * Identity and Access Management (IAM) entity that, in this case, allows a file
     * transfer protocol-enabled server to act on a user's behalf. It allows the server
     * to inherit the trust relationship that enables that user to perform file
     * operations to their Amazon S3 bucket.</p>
     */
    inline void SetRole(const Aws::String& value) { m_roleHasBeenSet = true; m_role = value; }

    /**
     * <p>Specifies the role that is in use by this user. A <i>role</i> is an AWS
     * Identity and Access Management (IAM) entity that, in this case, allows a file
     * transfer protocol-enabled server to act on a user's behalf. It allows the server
     * to inherit the trust relationship that enables that user to perform file
     * operations to their Amazon S3 bucket.</p>
     */
    inline void SetRole(Aws::String&& value) { m_roleHasBeenSet = true; m_role = std::move(value); }

    /**
     * <p>Specifies the role that is in use by this user. A <i>role</i> is an AWS
     * Identity and Access Management (IAM) entity that, in this case, allows a file
     * transfer protocol-enabled server to act on a user's behalf. It allows the server
     * to inherit the trust relationship that enables that user to perform file
     * operations to their Amazon S3 bucket.</p>
     */
    inline void SetRole(const char* value) { m_roleHasBeenSet = true; m_role.assign(value); }

    /**
     * <p>Specifies the role that is in use by this user. A <i>role</i> is an AWS
     * Identity and Access Management (IAM) entity that, in this case, allows a file
     * transfer protocol-enabled server to act on a user's behalf. It allows the server
     * to inherit the trust relationship that enables that user to perform file
     * operations to their Amazon S3 bucket.</p>
     */
    inline ListedUser& WithRole(const Aws::String& value) { SetRole(value); return *this;}

    /**
     * <p>Specifies the role that is in use by this user. A <i>role</i> is an AWS
     * Identity and Access Management (IAM) entity that, in this case, allows a file
     * transfer protocol-enabled server to act on a user's behalf. It allows the server
     * to inherit the trust relationship that enables that user to perform file
     * operations to their Amazon S3 bucket.</p>
     */
    inline ListedUser& WithRole(Aws::String&& value) { SetRole(std::move(value)); return *this;}

    /**
     * <p>Specifies the role that is in use by this user. A <i>role</i> is an AWS
     * Identity and Access Management (IAM) entity that, in this case, allows a file
     * transfer protocol-enabled server to act on a user's behalf. It allows the server
     * to inherit the trust relationship that enables that user to perform file
     * operations to their Amazon S3 bucket.</p>
     */
    inline ListedUser& WithRole(const char* value) { SetRole(value); return *this;}


    /**
     * <p>Specifies the number of SSH public keys stored for the user you
     * specified.</p>
     */
    inline int GetSshPublicKeyCount() const{ return m_sshPublicKeyCount; }

    /**
     * <p>Specifies the number of SSH public keys stored for the user you
     * specified.</p>
     */
    inline bool SshPublicKeyCountHasBeenSet() const { return m_sshPublicKeyCountHasBeenSet; }

    /**
     * <p>Specifies the number of SSH public keys stored for the user you
     * specified.</p>
     */
    inline void SetSshPublicKeyCount(int value) { m_sshPublicKeyCountHasBeenSet = true; m_sshPublicKeyCount = value; }

    /**
     * <p>Specifies the number of SSH public keys stored for the user you
     * specified.</p>
     */
    inline ListedUser& WithSshPublicKeyCount(int value) { SetSshPublicKeyCount(value); return *this;}


    /**
     * <p>Specifies the name of the user whose ARN was specified. User names are used
     * for authentication purposes.</p>
     */
    inline const Aws::String& GetUserName() const{ return m_userName; }

    /**
     * <p>Specifies the name of the user whose ARN was specified. User names are used
     * for authentication purposes.</p>
     */
    inline bool UserNameHasBeenSet() const { return m_userNameHasBeenSet; }

    /**
     * <p>Specifies the name of the user whose ARN was specified. User names are used
     * for authentication purposes.</p>
     */
    inline void SetUserName(const Aws::String& value) { m_userNameHasBeenSet = true; m_userName = value; }

    /**
     * <p>Specifies the name of the user whose ARN was specified. User names are used
     * for authentication purposes.</p>
     */
    inline void SetUserName(Aws::String&& value) { m_userNameHasBeenSet = true; m_userName = std::move(value); }

    /**
     * <p>Specifies the name of the user whose ARN was specified. User names are used
     * for authentication purposes.</p>
     */
    inline void SetUserName(const char* value) { m_userNameHasBeenSet = true; m_userName.assign(value); }

    /**
     * <p>Specifies the name of the user whose ARN was specified. User names are used
     * for authentication purposes.</p>
     */
    inline ListedUser& WithUserName(const Aws::String& value) { SetUserName(value); return *this;}

    /**
     * <p>Specifies the name of the user whose ARN was specified. User names are used
     * for authentication purposes.</p>
     */
    inline ListedUser& WithUserName(Aws::String&& value) { SetUserName(std::move(value)); return *this;}

    /**
     * <p>Specifies the name of the user whose ARN was specified. User names are used
     * for authentication purposes.</p>
     */
    inline ListedUser& WithUserName(const char* value) { SetUserName(value); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    Aws::String m_homeDirectory;
    bool m_homeDirectoryHasBeenSet;

    HomeDirectoryType m_homeDirectoryType;
    bool m_homeDirectoryTypeHasBeenSet;

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
