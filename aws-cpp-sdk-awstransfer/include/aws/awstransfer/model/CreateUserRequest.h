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
#include <aws/awstransfer/TransferRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/awstransfer/model/Tag.h>
#include <utility>

namespace Aws
{
namespace Transfer
{
namespace Model
{

  /**
   */
  class AWS_TRANSFER_API CreateUserRequest : public TransferRequest
  {
  public:
    CreateUserRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateUser"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The landing directory (folder) for a user when they log in to the server
     * using their SFTP client. An example is <code>/home/<i>username</i> </code>.</p>
     */
    inline const Aws::String& GetHomeDirectory() const{ return m_homeDirectory; }

    /**
     * <p>The landing directory (folder) for a user when they log in to the server
     * using their SFTP client. An example is <code>/home/<i>username</i> </code>.</p>
     */
    inline bool HomeDirectoryHasBeenSet() const { return m_homeDirectoryHasBeenSet; }

    /**
     * <p>The landing directory (folder) for a user when they log in to the server
     * using their SFTP client. An example is <code>/home/<i>username</i> </code>.</p>
     */
    inline void SetHomeDirectory(const Aws::String& value) { m_homeDirectoryHasBeenSet = true; m_homeDirectory = value; }

    /**
     * <p>The landing directory (folder) for a user when they log in to the server
     * using their SFTP client. An example is <code>/home/<i>username</i> </code>.</p>
     */
    inline void SetHomeDirectory(Aws::String&& value) { m_homeDirectoryHasBeenSet = true; m_homeDirectory = std::move(value); }

    /**
     * <p>The landing directory (folder) for a user when they log in to the server
     * using their SFTP client. An example is <code>/home/<i>username</i> </code>.</p>
     */
    inline void SetHomeDirectory(const char* value) { m_homeDirectoryHasBeenSet = true; m_homeDirectory.assign(value); }

    /**
     * <p>The landing directory (folder) for a user when they log in to the server
     * using their SFTP client. An example is <code>/home/<i>username</i> </code>.</p>
     */
    inline CreateUserRequest& WithHomeDirectory(const Aws::String& value) { SetHomeDirectory(value); return *this;}

    /**
     * <p>The landing directory (folder) for a user when they log in to the server
     * using their SFTP client. An example is <code>/home/<i>username</i> </code>.</p>
     */
    inline CreateUserRequest& WithHomeDirectory(Aws::String&& value) { SetHomeDirectory(std::move(value)); return *this;}

    /**
     * <p>The landing directory (folder) for a user when they log in to the server
     * using their SFTP client. An example is <code>/home/<i>username</i> </code>.</p>
     */
    inline CreateUserRequest& WithHomeDirectory(const char* value) { SetHomeDirectory(value); return *this;}


    /**
     * <p>A scope-down policy for your user so you can use the same IAM role across
     * multiple users. This policy scopes down user access to portions of their Amazon
     * S3 bucket. Variables you can use inside this policy include
     * <code>${Transfer:UserName}</code>, <code>${Transfer:HomeDirectory}</code>, and
     * <code>${Transfer:HomeBucket}</code>.</p>
     */
    inline const Aws::String& GetPolicy() const{ return m_policy; }

    /**
     * <p>A scope-down policy for your user so you can use the same IAM role across
     * multiple users. This policy scopes down user access to portions of their Amazon
     * S3 bucket. Variables you can use inside this policy include
     * <code>${Transfer:UserName}</code>, <code>${Transfer:HomeDirectory}</code>, and
     * <code>${Transfer:HomeBucket}</code>.</p>
     */
    inline bool PolicyHasBeenSet() const { return m_policyHasBeenSet; }

    /**
     * <p>A scope-down policy for your user so you can use the same IAM role across
     * multiple users. This policy scopes down user access to portions of their Amazon
     * S3 bucket. Variables you can use inside this policy include
     * <code>${Transfer:UserName}</code>, <code>${Transfer:HomeDirectory}</code>, and
     * <code>${Transfer:HomeBucket}</code>.</p>
     */
    inline void SetPolicy(const Aws::String& value) { m_policyHasBeenSet = true; m_policy = value; }

    /**
     * <p>A scope-down policy for your user so you can use the same IAM role across
     * multiple users. This policy scopes down user access to portions of their Amazon
     * S3 bucket. Variables you can use inside this policy include
     * <code>${Transfer:UserName}</code>, <code>${Transfer:HomeDirectory}</code>, and
     * <code>${Transfer:HomeBucket}</code>.</p>
     */
    inline void SetPolicy(Aws::String&& value) { m_policyHasBeenSet = true; m_policy = std::move(value); }

    /**
     * <p>A scope-down policy for your user so you can use the same IAM role across
     * multiple users. This policy scopes down user access to portions of their Amazon
     * S3 bucket. Variables you can use inside this policy include
     * <code>${Transfer:UserName}</code>, <code>${Transfer:HomeDirectory}</code>, and
     * <code>${Transfer:HomeBucket}</code>.</p>
     */
    inline void SetPolicy(const char* value) { m_policyHasBeenSet = true; m_policy.assign(value); }

    /**
     * <p>A scope-down policy for your user so you can use the same IAM role across
     * multiple users. This policy scopes down user access to portions of their Amazon
     * S3 bucket. Variables you can use inside this policy include
     * <code>${Transfer:UserName}</code>, <code>${Transfer:HomeDirectory}</code>, and
     * <code>${Transfer:HomeBucket}</code>.</p>
     */
    inline CreateUserRequest& WithPolicy(const Aws::String& value) { SetPolicy(value); return *this;}

    /**
     * <p>A scope-down policy for your user so you can use the same IAM role across
     * multiple users. This policy scopes down user access to portions of their Amazon
     * S3 bucket. Variables you can use inside this policy include
     * <code>${Transfer:UserName}</code>, <code>${Transfer:HomeDirectory}</code>, and
     * <code>${Transfer:HomeBucket}</code>.</p>
     */
    inline CreateUserRequest& WithPolicy(Aws::String&& value) { SetPolicy(std::move(value)); return *this;}

    /**
     * <p>A scope-down policy for your user so you can use the same IAM role across
     * multiple users. This policy scopes down user access to portions of their Amazon
     * S3 bucket. Variables you can use inside this policy include
     * <code>${Transfer:UserName}</code>, <code>${Transfer:HomeDirectory}</code>, and
     * <code>${Transfer:HomeBucket}</code>.</p>
     */
    inline CreateUserRequest& WithPolicy(const char* value) { SetPolicy(value); return *this;}


    /**
     * <p>The IAM role that controls your user's access to your Amazon S3 bucket. The
     * policies attached to this role will determine the level of access you want to
     * provide your users when transferring files into and out of your Amazon S3 bucket
     * or buckets. The IAM role should also contain a trust relationship that allows
     * the SFTP server to access your resources when servicing your SFTP user's
     * transfer requests.</p>
     */
    inline const Aws::String& GetRole() const{ return m_role; }

    /**
     * <p>The IAM role that controls your user's access to your Amazon S3 bucket. The
     * policies attached to this role will determine the level of access you want to
     * provide your users when transferring files into and out of your Amazon S3 bucket
     * or buckets. The IAM role should also contain a trust relationship that allows
     * the SFTP server to access your resources when servicing your SFTP user's
     * transfer requests.</p>
     */
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }

    /**
     * <p>The IAM role that controls your user's access to your Amazon S3 bucket. The
     * policies attached to this role will determine the level of access you want to
     * provide your users when transferring files into and out of your Amazon S3 bucket
     * or buckets. The IAM role should also contain a trust relationship that allows
     * the SFTP server to access your resources when servicing your SFTP user's
     * transfer requests.</p>
     */
    inline void SetRole(const Aws::String& value) { m_roleHasBeenSet = true; m_role = value; }

    /**
     * <p>The IAM role that controls your user's access to your Amazon S3 bucket. The
     * policies attached to this role will determine the level of access you want to
     * provide your users when transferring files into and out of your Amazon S3 bucket
     * or buckets. The IAM role should also contain a trust relationship that allows
     * the SFTP server to access your resources when servicing your SFTP user's
     * transfer requests.</p>
     */
    inline void SetRole(Aws::String&& value) { m_roleHasBeenSet = true; m_role = std::move(value); }

    /**
     * <p>The IAM role that controls your user's access to your Amazon S3 bucket. The
     * policies attached to this role will determine the level of access you want to
     * provide your users when transferring files into and out of your Amazon S3 bucket
     * or buckets. The IAM role should also contain a trust relationship that allows
     * the SFTP server to access your resources when servicing your SFTP user's
     * transfer requests.</p>
     */
    inline void SetRole(const char* value) { m_roleHasBeenSet = true; m_role.assign(value); }

    /**
     * <p>The IAM role that controls your user's access to your Amazon S3 bucket. The
     * policies attached to this role will determine the level of access you want to
     * provide your users when transferring files into and out of your Amazon S3 bucket
     * or buckets. The IAM role should also contain a trust relationship that allows
     * the SFTP server to access your resources when servicing your SFTP user's
     * transfer requests.</p>
     */
    inline CreateUserRequest& WithRole(const Aws::String& value) { SetRole(value); return *this;}

    /**
     * <p>The IAM role that controls your user's access to your Amazon S3 bucket. The
     * policies attached to this role will determine the level of access you want to
     * provide your users when transferring files into and out of your Amazon S3 bucket
     * or buckets. The IAM role should also contain a trust relationship that allows
     * the SFTP server to access your resources when servicing your SFTP user's
     * transfer requests.</p>
     */
    inline CreateUserRequest& WithRole(Aws::String&& value) { SetRole(std::move(value)); return *this;}

    /**
     * <p>The IAM role that controls your user's access to your Amazon S3 bucket. The
     * policies attached to this role will determine the level of access you want to
     * provide your users when transferring files into and out of your Amazon S3 bucket
     * or buckets. The IAM role should also contain a trust relationship that allows
     * the SFTP server to access your resources when servicing your SFTP user's
     * transfer requests.</p>
     */
    inline CreateUserRequest& WithRole(const char* value) { SetRole(value); return *this;}


    /**
     * <p>A system-assigned unique identifier for an SFTP server instance. This is the
     * specific SFTP server that you added your user to.</p>
     */
    inline const Aws::String& GetServerId() const{ return m_serverId; }

    /**
     * <p>A system-assigned unique identifier for an SFTP server instance. This is the
     * specific SFTP server that you added your user to.</p>
     */
    inline bool ServerIdHasBeenSet() const { return m_serverIdHasBeenSet; }

    /**
     * <p>A system-assigned unique identifier for an SFTP server instance. This is the
     * specific SFTP server that you added your user to.</p>
     */
    inline void SetServerId(const Aws::String& value) { m_serverIdHasBeenSet = true; m_serverId = value; }

    /**
     * <p>A system-assigned unique identifier for an SFTP server instance. This is the
     * specific SFTP server that you added your user to.</p>
     */
    inline void SetServerId(Aws::String&& value) { m_serverIdHasBeenSet = true; m_serverId = std::move(value); }

    /**
     * <p>A system-assigned unique identifier for an SFTP server instance. This is the
     * specific SFTP server that you added your user to.</p>
     */
    inline void SetServerId(const char* value) { m_serverIdHasBeenSet = true; m_serverId.assign(value); }

    /**
     * <p>A system-assigned unique identifier for an SFTP server instance. This is the
     * specific SFTP server that you added your user to.</p>
     */
    inline CreateUserRequest& WithServerId(const Aws::String& value) { SetServerId(value); return *this;}

    /**
     * <p>A system-assigned unique identifier for an SFTP server instance. This is the
     * specific SFTP server that you added your user to.</p>
     */
    inline CreateUserRequest& WithServerId(Aws::String&& value) { SetServerId(std::move(value)); return *this;}

    /**
     * <p>A system-assigned unique identifier for an SFTP server instance. This is the
     * specific SFTP server that you added your user to.</p>
     */
    inline CreateUserRequest& WithServerId(const char* value) { SetServerId(value); return *this;}


    /**
     * <p>The public portion of the Secure Shall (SSH) key used to authenticate the
     * user to the SFTP server.</p>
     */
    inline const Aws::String& GetSshPublicKeyBody() const{ return m_sshPublicKeyBody; }

    /**
     * <p>The public portion of the Secure Shall (SSH) key used to authenticate the
     * user to the SFTP server.</p>
     */
    inline bool SshPublicKeyBodyHasBeenSet() const { return m_sshPublicKeyBodyHasBeenSet; }

    /**
     * <p>The public portion of the Secure Shall (SSH) key used to authenticate the
     * user to the SFTP server.</p>
     */
    inline void SetSshPublicKeyBody(const Aws::String& value) { m_sshPublicKeyBodyHasBeenSet = true; m_sshPublicKeyBody = value; }

    /**
     * <p>The public portion of the Secure Shall (SSH) key used to authenticate the
     * user to the SFTP server.</p>
     */
    inline void SetSshPublicKeyBody(Aws::String&& value) { m_sshPublicKeyBodyHasBeenSet = true; m_sshPublicKeyBody = std::move(value); }

    /**
     * <p>The public portion of the Secure Shall (SSH) key used to authenticate the
     * user to the SFTP server.</p>
     */
    inline void SetSshPublicKeyBody(const char* value) { m_sshPublicKeyBodyHasBeenSet = true; m_sshPublicKeyBody.assign(value); }

    /**
     * <p>The public portion of the Secure Shall (SSH) key used to authenticate the
     * user to the SFTP server.</p>
     */
    inline CreateUserRequest& WithSshPublicKeyBody(const Aws::String& value) { SetSshPublicKeyBody(value); return *this;}

    /**
     * <p>The public portion of the Secure Shall (SSH) key used to authenticate the
     * user to the SFTP server.</p>
     */
    inline CreateUserRequest& WithSshPublicKeyBody(Aws::String&& value) { SetSshPublicKeyBody(std::move(value)); return *this;}

    /**
     * <p>The public portion of the Secure Shall (SSH) key used to authenticate the
     * user to the SFTP server.</p>
     */
    inline CreateUserRequest& WithSshPublicKeyBody(const char* value) { SetSshPublicKeyBody(value); return *this;}


    /**
     * <p>Key-value pairs that can be used to group and search for users. Tags are
     * metadata attached to users for any purpose.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Key-value pairs that can be used to group and search for users. Tags are
     * metadata attached to users for any purpose.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Key-value pairs that can be used to group and search for users. Tags are
     * metadata attached to users for any purpose.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Key-value pairs that can be used to group and search for users. Tags are
     * metadata attached to users for any purpose.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Key-value pairs that can be used to group and search for users. Tags are
     * metadata attached to users for any purpose.</p>
     */
    inline CreateUserRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Key-value pairs that can be used to group and search for users. Tags are
     * metadata attached to users for any purpose.</p>
     */
    inline CreateUserRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Key-value pairs that can be used to group and search for users. Tags are
     * metadata attached to users for any purpose.</p>
     */
    inline CreateUserRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Key-value pairs that can be used to group and search for users. Tags are
     * metadata attached to users for any purpose.</p>
     */
    inline CreateUserRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>A unique string that identifies a user and is associated with a server as
     * specified by the <code>ServerId</code>. This user name must be a minimum of 3
     * and a maximum of 32 characters long. The following are valid characters: a-z,
     * A-Z, 0-9, underscore, and hyphen. The user name can't start with a hyphen.</p>
     */
    inline const Aws::String& GetUserName() const{ return m_userName; }

    /**
     * <p>A unique string that identifies a user and is associated with a server as
     * specified by the <code>ServerId</code>. This user name must be a minimum of 3
     * and a maximum of 32 characters long. The following are valid characters: a-z,
     * A-Z, 0-9, underscore, and hyphen. The user name can't start with a hyphen.</p>
     */
    inline bool UserNameHasBeenSet() const { return m_userNameHasBeenSet; }

    /**
     * <p>A unique string that identifies a user and is associated with a server as
     * specified by the <code>ServerId</code>. This user name must be a minimum of 3
     * and a maximum of 32 characters long. The following are valid characters: a-z,
     * A-Z, 0-9, underscore, and hyphen. The user name can't start with a hyphen.</p>
     */
    inline void SetUserName(const Aws::String& value) { m_userNameHasBeenSet = true; m_userName = value; }

    /**
     * <p>A unique string that identifies a user and is associated with a server as
     * specified by the <code>ServerId</code>. This user name must be a minimum of 3
     * and a maximum of 32 characters long. The following are valid characters: a-z,
     * A-Z, 0-9, underscore, and hyphen. The user name can't start with a hyphen.</p>
     */
    inline void SetUserName(Aws::String&& value) { m_userNameHasBeenSet = true; m_userName = std::move(value); }

    /**
     * <p>A unique string that identifies a user and is associated with a server as
     * specified by the <code>ServerId</code>. This user name must be a minimum of 3
     * and a maximum of 32 characters long. The following are valid characters: a-z,
     * A-Z, 0-9, underscore, and hyphen. The user name can't start with a hyphen.</p>
     */
    inline void SetUserName(const char* value) { m_userNameHasBeenSet = true; m_userName.assign(value); }

    /**
     * <p>A unique string that identifies a user and is associated with a server as
     * specified by the <code>ServerId</code>. This user name must be a minimum of 3
     * and a maximum of 32 characters long. The following are valid characters: a-z,
     * A-Z, 0-9, underscore, and hyphen. The user name can't start with a hyphen.</p>
     */
    inline CreateUserRequest& WithUserName(const Aws::String& value) { SetUserName(value); return *this;}

    /**
     * <p>A unique string that identifies a user and is associated with a server as
     * specified by the <code>ServerId</code>. This user name must be a minimum of 3
     * and a maximum of 32 characters long. The following are valid characters: a-z,
     * A-Z, 0-9, underscore, and hyphen. The user name can't start with a hyphen.</p>
     */
    inline CreateUserRequest& WithUserName(Aws::String&& value) { SetUserName(std::move(value)); return *this;}

    /**
     * <p>A unique string that identifies a user and is associated with a server as
     * specified by the <code>ServerId</code>. This user name must be a minimum of 3
     * and a maximum of 32 characters long. The following are valid characters: a-z,
     * A-Z, 0-9, underscore, and hyphen. The user name can't start with a hyphen.</p>
     */
    inline CreateUserRequest& WithUserName(const char* value) { SetUserName(value); return *this;}

  private:

    Aws::String m_homeDirectory;
    bool m_homeDirectoryHasBeenSet;

    Aws::String m_policy;
    bool m_policyHasBeenSet;

    Aws::String m_role;
    bool m_roleHasBeenSet;

    Aws::String m_serverId;
    bool m_serverIdHasBeenSet;

    Aws::String m_sshPublicKeyBody;
    bool m_sshPublicKeyBodyHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;

    Aws::String m_userName;
    bool m_userNameHasBeenSet;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
