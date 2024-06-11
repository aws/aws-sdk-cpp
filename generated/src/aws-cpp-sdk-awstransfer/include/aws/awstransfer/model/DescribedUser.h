﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/awstransfer/model/HomeDirectoryType.h>
#include <aws/awstransfer/model/PosixProfile.h>
#include <aws/awstransfer/model/HomeDirectoryMapEntry.h>
#include <aws/awstransfer/model/SshPublicKey.h>
#include <aws/awstransfer/model/Tag.h>
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
   * <p>Describes the properties of a user that was specified.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/DescribedUser">AWS
   * API Reference</a></p>
   */
  class DescribedUser
  {
  public:
    AWS_TRANSFER_API DescribedUser();
    AWS_TRANSFER_API DescribedUser(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API DescribedUser& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the unique Amazon Resource Name (ARN) for the user that was
     * requested to be described.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline DescribedUser& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline DescribedUser& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline DescribedUser& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

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
    inline DescribedUser& WithHomeDirectory(const Aws::String& value) { SetHomeDirectory(value); return *this;}
    inline DescribedUser& WithHomeDirectory(Aws::String&& value) { SetHomeDirectory(std::move(value)); return *this;}
    inline DescribedUser& WithHomeDirectory(const char* value) { SetHomeDirectory(value); return *this;}
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
     * set only when <code>HomeDirectoryType</code> is set to <i>LOGICAL</i>.</p> <p>In
     * most cases, you can use this value instead of the session policy to lock your
     * user down to the designated home directory ("<code>chroot</code>"). To do this,
     * you can set <code>Entry</code> to '/' and set <code>Target</code> to the
     * HomeDirectory parameter value.</p>
     */
    inline const Aws::Vector<HomeDirectoryMapEntry>& GetHomeDirectoryMappings() const{ return m_homeDirectoryMappings; }
    inline bool HomeDirectoryMappingsHasBeenSet() const { return m_homeDirectoryMappingsHasBeenSet; }
    inline void SetHomeDirectoryMappings(const Aws::Vector<HomeDirectoryMapEntry>& value) { m_homeDirectoryMappingsHasBeenSet = true; m_homeDirectoryMappings = value; }
    inline void SetHomeDirectoryMappings(Aws::Vector<HomeDirectoryMapEntry>&& value) { m_homeDirectoryMappingsHasBeenSet = true; m_homeDirectoryMappings = std::move(value); }
    inline DescribedUser& WithHomeDirectoryMappings(const Aws::Vector<HomeDirectoryMapEntry>& value) { SetHomeDirectoryMappings(value); return *this;}
    inline DescribedUser& WithHomeDirectoryMappings(Aws::Vector<HomeDirectoryMapEntry>&& value) { SetHomeDirectoryMappings(std::move(value)); return *this;}
    inline DescribedUser& AddHomeDirectoryMappings(const HomeDirectoryMapEntry& value) { m_homeDirectoryMappingsHasBeenSet = true; m_homeDirectoryMappings.push_back(value); return *this; }
    inline DescribedUser& AddHomeDirectoryMappings(HomeDirectoryMapEntry&& value) { m_homeDirectoryMappingsHasBeenSet = true; m_homeDirectoryMappings.push_back(std::move(value)); return *this; }
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
    inline DescribedUser& WithHomeDirectoryType(const HomeDirectoryType& value) { SetHomeDirectoryType(value); return *this;}
    inline DescribedUser& WithHomeDirectoryType(HomeDirectoryType&& value) { SetHomeDirectoryType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A session policy for your user so that you can use the same Identity and
     * Access Management (IAM) role across multiple users. This policy scopes down a
     * user's access to portions of their Amazon S3 bucket. Variables that you can use
     * inside this policy include <code>${Transfer:UserName}</code>,
     * <code>${Transfer:HomeDirectory}</code>, and
     * <code>${Transfer:HomeBucket}</code>.</p>
     */
    inline const Aws::String& GetPolicy() const{ return m_policy; }
    inline bool PolicyHasBeenSet() const { return m_policyHasBeenSet; }
    inline void SetPolicy(const Aws::String& value) { m_policyHasBeenSet = true; m_policy = value; }
    inline void SetPolicy(Aws::String&& value) { m_policyHasBeenSet = true; m_policy = std::move(value); }
    inline void SetPolicy(const char* value) { m_policyHasBeenSet = true; m_policy.assign(value); }
    inline DescribedUser& WithPolicy(const Aws::String& value) { SetPolicy(value); return *this;}
    inline DescribedUser& WithPolicy(Aws::String&& value) { SetPolicy(std::move(value)); return *this;}
    inline DescribedUser& WithPolicy(const char* value) { SetPolicy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the full POSIX identity, including user ID (<code>Uid</code>),
     * group ID (<code>Gid</code>), and any secondary groups IDs
     * (<code>SecondaryGids</code>), that controls your users' access to your Amazon
     * Elastic File System (Amazon EFS) file systems. The POSIX permissions that are
     * set on files and directories in your file system determine the level of access
     * your users get when transferring files into and out of your Amazon EFS file
     * systems.</p>
     */
    inline const PosixProfile& GetPosixProfile() const{ return m_posixProfile; }
    inline bool PosixProfileHasBeenSet() const { return m_posixProfileHasBeenSet; }
    inline void SetPosixProfile(const PosixProfile& value) { m_posixProfileHasBeenSet = true; m_posixProfile = value; }
    inline void SetPosixProfile(PosixProfile&& value) { m_posixProfileHasBeenSet = true; m_posixProfile = std::move(value); }
    inline DescribedUser& WithPosixProfile(const PosixProfile& value) { SetPosixProfile(value); return *this;}
    inline DescribedUser& WithPosixProfile(PosixProfile&& value) { SetPosixProfile(std::move(value)); return *this;}
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
    inline DescribedUser& WithRole(const Aws::String& value) { SetRole(value); return *this;}
    inline DescribedUser& WithRole(Aws::String&& value) { SetRole(std::move(value)); return *this;}
    inline DescribedUser& WithRole(const char* value) { SetRole(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the public key portion of the Secure Shell (SSH) keys stored for
     * the described user.</p>
     */
    inline const Aws::Vector<SshPublicKey>& GetSshPublicKeys() const{ return m_sshPublicKeys; }
    inline bool SshPublicKeysHasBeenSet() const { return m_sshPublicKeysHasBeenSet; }
    inline void SetSshPublicKeys(const Aws::Vector<SshPublicKey>& value) { m_sshPublicKeysHasBeenSet = true; m_sshPublicKeys = value; }
    inline void SetSshPublicKeys(Aws::Vector<SshPublicKey>&& value) { m_sshPublicKeysHasBeenSet = true; m_sshPublicKeys = std::move(value); }
    inline DescribedUser& WithSshPublicKeys(const Aws::Vector<SshPublicKey>& value) { SetSshPublicKeys(value); return *this;}
    inline DescribedUser& WithSshPublicKeys(Aws::Vector<SshPublicKey>&& value) { SetSshPublicKeys(std::move(value)); return *this;}
    inline DescribedUser& AddSshPublicKeys(const SshPublicKey& value) { m_sshPublicKeysHasBeenSet = true; m_sshPublicKeys.push_back(value); return *this; }
    inline DescribedUser& AddSshPublicKeys(SshPublicKey&& value) { m_sshPublicKeysHasBeenSet = true; m_sshPublicKeys.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the key-value pairs for the user requested. Tag can be used to
     * search for and group users for a variety of purposes.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline DescribedUser& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline DescribedUser& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline DescribedUser& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline DescribedUser& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the name of the user that was requested to be described. User names
     * are used for authentication purposes. This is the string that will be used by
     * your user when they log in to your server.</p>
     */
    inline const Aws::String& GetUserName() const{ return m_userName; }
    inline bool UserNameHasBeenSet() const { return m_userNameHasBeenSet; }
    inline void SetUserName(const Aws::String& value) { m_userNameHasBeenSet = true; m_userName = value; }
    inline void SetUserName(Aws::String&& value) { m_userNameHasBeenSet = true; m_userName = std::move(value); }
    inline void SetUserName(const char* value) { m_userNameHasBeenSet = true; m_userName.assign(value); }
    inline DescribedUser& WithUserName(const Aws::String& value) { SetUserName(value); return *this;}
    inline DescribedUser& WithUserName(Aws::String&& value) { SetUserName(std::move(value)); return *this;}
    inline DescribedUser& WithUserName(const char* value) { SetUserName(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_homeDirectory;
    bool m_homeDirectoryHasBeenSet = false;

    Aws::Vector<HomeDirectoryMapEntry> m_homeDirectoryMappings;
    bool m_homeDirectoryMappingsHasBeenSet = false;

    HomeDirectoryType m_homeDirectoryType;
    bool m_homeDirectoryTypeHasBeenSet = false;

    Aws::String m_policy;
    bool m_policyHasBeenSet = false;

    PosixProfile m_posixProfile;
    bool m_posixProfileHasBeenSet = false;

    Aws::String m_role;
    bool m_roleHasBeenSet = false;

    Aws::Vector<SshPublicKey> m_sshPublicKeys;
    bool m_sshPublicKeysHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_userName;
    bool m_userNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
