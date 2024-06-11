﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/awstransfer/TransferRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/awstransfer/model/HomeDirectoryType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/awstransfer/model/PosixProfile.h>
#include <aws/awstransfer/model/HomeDirectoryMapEntry.h>
#include <utility>

namespace Aws
{
namespace Transfer
{
namespace Model
{

  /**
   */
  class UpdateUserRequest : public TransferRequest
  {
  public:
    AWS_TRANSFER_API UpdateUserRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateUser"; }

    AWS_TRANSFER_API Aws::String SerializePayload() const override;

    AWS_TRANSFER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The landing directory (folder) for a user when they log in to the server
     * using the client.</p> <p>A <code>HomeDirectory</code> example is
     * <code>/bucket_name/home/mydirectory</code>.</p>  <p>The
     * <code>HomeDirectory</code> parameter is only used if
     * <code>HomeDirectoryType</code> is set to <code>PATH</code>.</p> 
     */
    inline const Aws::String& GetHomeDirectory() const{ return m_homeDirectory; }
    inline bool HomeDirectoryHasBeenSet() const { return m_homeDirectoryHasBeenSet; }
    inline void SetHomeDirectory(const Aws::String& value) { m_homeDirectoryHasBeenSet = true; m_homeDirectory = value; }
    inline void SetHomeDirectory(Aws::String&& value) { m_homeDirectoryHasBeenSet = true; m_homeDirectory = std::move(value); }
    inline void SetHomeDirectory(const char* value) { m_homeDirectoryHasBeenSet = true; m_homeDirectory.assign(value); }
    inline UpdateUserRequest& WithHomeDirectory(const Aws::String& value) { SetHomeDirectory(value); return *this;}
    inline UpdateUserRequest& WithHomeDirectory(Aws::String&& value) { SetHomeDirectory(std::move(value)); return *this;}
    inline UpdateUserRequest& WithHomeDirectory(const char* value) { SetHomeDirectory(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of landing directory (folder) that you want your users' home
     * directory to be when they log in to the server. If you set it to
     * <code>PATH</code>, the user will see the absolute Amazon S3 bucket or Amazon EFS
     * path as is in their file transfer protocol clients. If you set it to
     * <code>LOGICAL</code>, you need to provide mappings in the
     * <code>HomeDirectoryMappings</code> for how you want to make Amazon S3 or Amazon
     * EFS paths visible to your users.</p>  <p>If <code>HomeDirectoryType</code>
     * is <code>LOGICAL</code>, you must provide mappings, using the
     * <code>HomeDirectoryMappings</code> parameter. If, on the other hand,
     * <code>HomeDirectoryType</code> is <code>PATH</code>, you provide an absolute
     * path using the <code>HomeDirectory</code> parameter. You cannot have both
     * <code>HomeDirectory</code> and <code>HomeDirectoryMappings</code> in your
     * template.</p> 
     */
    inline const HomeDirectoryType& GetHomeDirectoryType() const{ return m_homeDirectoryType; }
    inline bool HomeDirectoryTypeHasBeenSet() const { return m_homeDirectoryTypeHasBeenSet; }
    inline void SetHomeDirectoryType(const HomeDirectoryType& value) { m_homeDirectoryTypeHasBeenSet = true; m_homeDirectoryType = value; }
    inline void SetHomeDirectoryType(HomeDirectoryType&& value) { m_homeDirectoryTypeHasBeenSet = true; m_homeDirectoryType = std::move(value); }
    inline UpdateUserRequest& WithHomeDirectoryType(const HomeDirectoryType& value) { SetHomeDirectoryType(value); return *this;}
    inline UpdateUserRequest& WithHomeDirectoryType(HomeDirectoryType&& value) { SetHomeDirectoryType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Logical directory mappings that specify what Amazon S3 or Amazon EFS paths
     * and keys should be visible to your user and how you want to make them visible.
     * You must specify the <code>Entry</code> and <code>Target</code> pair, where
     * <code>Entry</code> shows how the path is made visible and <code>Target</code> is
     * the actual Amazon S3 or Amazon EFS path. If you only specify a target, it is
     * displayed as is. You also must ensure that your Identity and Access Management
     * (IAM) role provides access to paths in <code>Target</code>. This value can be
     * set only when <code>HomeDirectoryType</code> is set to <i>LOGICAL</i>.</p>
     * <p>The following is an <code>Entry</code> and <code>Target</code> pair
     * example.</p> <p> <code>[ { "Entry": "/directory1", "Target":
     * "/bucket_name/home/mydirectory" } ]</code> </p> <p>In most cases, you can use
     * this value instead of the session policy to lock down your user to the
     * designated home directory ("<code>chroot</code>"). To do this, you can set
     * <code>Entry</code> to '/' and set <code>Target</code> to the HomeDirectory
     * parameter value.</p> <p>The following is an <code>Entry</code> and
     * <code>Target</code> pair example for <code>chroot</code>.</p> <p> <code>[ {
     * "Entry": "/", "Target": "/bucket_name/home/mydirectory" } ]</code> </p>
     */
    inline const Aws::Vector<HomeDirectoryMapEntry>& GetHomeDirectoryMappings() const{ return m_homeDirectoryMappings; }
    inline bool HomeDirectoryMappingsHasBeenSet() const { return m_homeDirectoryMappingsHasBeenSet; }
    inline void SetHomeDirectoryMappings(const Aws::Vector<HomeDirectoryMapEntry>& value) { m_homeDirectoryMappingsHasBeenSet = true; m_homeDirectoryMappings = value; }
    inline void SetHomeDirectoryMappings(Aws::Vector<HomeDirectoryMapEntry>&& value) { m_homeDirectoryMappingsHasBeenSet = true; m_homeDirectoryMappings = std::move(value); }
    inline UpdateUserRequest& WithHomeDirectoryMappings(const Aws::Vector<HomeDirectoryMapEntry>& value) { SetHomeDirectoryMappings(value); return *this;}
    inline UpdateUserRequest& WithHomeDirectoryMappings(Aws::Vector<HomeDirectoryMapEntry>&& value) { SetHomeDirectoryMappings(std::move(value)); return *this;}
    inline UpdateUserRequest& AddHomeDirectoryMappings(const HomeDirectoryMapEntry& value) { m_homeDirectoryMappingsHasBeenSet = true; m_homeDirectoryMappings.push_back(value); return *this; }
    inline UpdateUserRequest& AddHomeDirectoryMappings(HomeDirectoryMapEntry&& value) { m_homeDirectoryMappingsHasBeenSet = true; m_homeDirectoryMappings.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A session policy for your user so that you can use the same Identity and
     * Access Management (IAM) role across multiple users. This policy scopes down a
     * user's access to portions of their Amazon S3 bucket. Variables that you can use
     * inside this policy include <code>${Transfer:UserName}</code>,
     * <code>${Transfer:HomeDirectory}</code>, and
     * <code>${Transfer:HomeBucket}</code>.</p>  <p>This policy applies only when
     * the domain of <code>ServerId</code> is Amazon S3. Amazon EFS does not use
     * session policies.</p> <p>For session policies, Transfer Family stores the policy
     * as a JSON blob, instead of the Amazon Resource Name (ARN) of the policy. You
     * save the policy as a JSON blob and pass it in the <code>Policy</code>
     * argument.</p> <p>For an example of a session policy, see <a
     * href="https://docs.aws.amazon.com/transfer/latest/userguide/session-policy">Creating
     * a session policy</a>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/STS/latest/APIReference/API_AssumeRole.html">AssumeRole</a>
     * in the <i>Amazon Web Services Security Token Service API Reference</i>.</p>
     * 
     */
    inline const Aws::String& GetPolicy() const{ return m_policy; }
    inline bool PolicyHasBeenSet() const { return m_policyHasBeenSet; }
    inline void SetPolicy(const Aws::String& value) { m_policyHasBeenSet = true; m_policy = value; }
    inline void SetPolicy(Aws::String&& value) { m_policyHasBeenSet = true; m_policy = std::move(value); }
    inline void SetPolicy(const char* value) { m_policyHasBeenSet = true; m_policy.assign(value); }
    inline UpdateUserRequest& WithPolicy(const Aws::String& value) { SetPolicy(value); return *this;}
    inline UpdateUserRequest& WithPolicy(Aws::String&& value) { SetPolicy(std::move(value)); return *this;}
    inline UpdateUserRequest& WithPolicy(const char* value) { SetPolicy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the full POSIX identity, including user ID (<code>Uid</code>),
     * group ID (<code>Gid</code>), and any secondary groups IDs
     * (<code>SecondaryGids</code>), that controls your users' access to your Amazon
     * Elastic File Systems (Amazon EFS). The POSIX permissions that are set on files
     * and directories in your file system determines the level of access your users
     * get when transferring files into and out of your Amazon EFS file systems.</p>
     */
    inline const PosixProfile& GetPosixProfile() const{ return m_posixProfile; }
    inline bool PosixProfileHasBeenSet() const { return m_posixProfileHasBeenSet; }
    inline void SetPosixProfile(const PosixProfile& value) { m_posixProfileHasBeenSet = true; m_posixProfile = value; }
    inline void SetPosixProfile(PosixProfile&& value) { m_posixProfileHasBeenSet = true; m_posixProfile = std::move(value); }
    inline UpdateUserRequest& WithPosixProfile(const PosixProfile& value) { SetPosixProfile(value); return *this;}
    inline UpdateUserRequest& WithPosixProfile(PosixProfile&& value) { SetPosixProfile(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Identity and Access Management (IAM)
     * role that controls your users' access to your Amazon S3 bucket or Amazon EFS
     * file system. The policies attached to this role determine the level of access
     * that you want to provide your users when transferring files into and out of your
     * Amazon S3 bucket or Amazon EFS file system. The IAM role should also contain a
     * trust relationship that allows the server to access your resources when
     * servicing your users' transfer requests.</p>
     */
    inline const Aws::String& GetRole() const{ return m_role; }
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }
    inline void SetRole(const Aws::String& value) { m_roleHasBeenSet = true; m_role = value; }
    inline void SetRole(Aws::String&& value) { m_roleHasBeenSet = true; m_role = std::move(value); }
    inline void SetRole(const char* value) { m_roleHasBeenSet = true; m_role.assign(value); }
    inline UpdateUserRequest& WithRole(const Aws::String& value) { SetRole(value); return *this;}
    inline UpdateUserRequest& WithRole(Aws::String&& value) { SetRole(std::move(value)); return *this;}
    inline UpdateUserRequest& WithRole(const char* value) { SetRole(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A system-assigned unique identifier for a Transfer Family server instance
     * that the user is assigned to.</p>
     */
    inline const Aws::String& GetServerId() const{ return m_serverId; }
    inline bool ServerIdHasBeenSet() const { return m_serverIdHasBeenSet; }
    inline void SetServerId(const Aws::String& value) { m_serverIdHasBeenSet = true; m_serverId = value; }
    inline void SetServerId(Aws::String&& value) { m_serverIdHasBeenSet = true; m_serverId = std::move(value); }
    inline void SetServerId(const char* value) { m_serverIdHasBeenSet = true; m_serverId.assign(value); }
    inline UpdateUserRequest& WithServerId(const Aws::String& value) { SetServerId(value); return *this;}
    inline UpdateUserRequest& WithServerId(Aws::String&& value) { SetServerId(std::move(value)); return *this;}
    inline UpdateUserRequest& WithServerId(const char* value) { SetServerId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique string that identifies a user and is associated with a server as
     * specified by the <code>ServerId</code>. This user name must be a minimum of 3
     * and a maximum of 100 characters long. The following are valid characters: a-z,
     * A-Z, 0-9, underscore '_', hyphen '-', period '.', and at sign '@'. The user name
     * can't start with a hyphen, period, or at sign.</p>
     */
    inline const Aws::String& GetUserName() const{ return m_userName; }
    inline bool UserNameHasBeenSet() const { return m_userNameHasBeenSet; }
    inline void SetUserName(const Aws::String& value) { m_userNameHasBeenSet = true; m_userName = value; }
    inline void SetUserName(Aws::String&& value) { m_userNameHasBeenSet = true; m_userName = std::move(value); }
    inline void SetUserName(const char* value) { m_userNameHasBeenSet = true; m_userName.assign(value); }
    inline UpdateUserRequest& WithUserName(const Aws::String& value) { SetUserName(value); return *this;}
    inline UpdateUserRequest& WithUserName(Aws::String&& value) { SetUserName(std::move(value)); return *this;}
    inline UpdateUserRequest& WithUserName(const char* value) { SetUserName(value); return *this;}
    ///@}
  private:

    Aws::String m_homeDirectory;
    bool m_homeDirectoryHasBeenSet = false;

    HomeDirectoryType m_homeDirectoryType;
    bool m_homeDirectoryTypeHasBeenSet = false;

    Aws::Vector<HomeDirectoryMapEntry> m_homeDirectoryMappings;
    bool m_homeDirectoryMappingsHasBeenSet = false;

    Aws::String m_policy;
    bool m_policyHasBeenSet = false;

    PosixProfile m_posixProfile;
    bool m_posixProfileHasBeenSet = false;

    Aws::String m_role;
    bool m_roleHasBeenSet = false;

    Aws::String m_serverId;
    bool m_serverIdHasBeenSet = false;

    Aws::String m_userName;
    bool m_userNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
