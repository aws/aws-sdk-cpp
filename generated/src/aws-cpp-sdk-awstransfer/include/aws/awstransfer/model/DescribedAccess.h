/**
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
   * <p>Describes the properties of the access that was specified.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/DescribedAccess">AWS
   * API Reference</a></p>
   */
  class DescribedAccess
  {
  public:
    AWS_TRANSFER_API DescribedAccess();
    AWS_TRANSFER_API DescribedAccess(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API DescribedAccess& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The landing directory (folder) for a user when they log in to the server
     * using the client.</p> <p>A <code>HomeDirectory</code> example is
     * <code>/bucket_name/home/mydirectory</code>.</p>
     */
    inline const Aws::String& GetHomeDirectory() const{ return m_homeDirectory; }

    /**
     * <p>The landing directory (folder) for a user when they log in to the server
     * using the client.</p> <p>A <code>HomeDirectory</code> example is
     * <code>/bucket_name/home/mydirectory</code>.</p>
     */
    inline bool HomeDirectoryHasBeenSet() const { return m_homeDirectoryHasBeenSet; }

    /**
     * <p>The landing directory (folder) for a user when they log in to the server
     * using the client.</p> <p>A <code>HomeDirectory</code> example is
     * <code>/bucket_name/home/mydirectory</code>.</p>
     */
    inline void SetHomeDirectory(const Aws::String& value) { m_homeDirectoryHasBeenSet = true; m_homeDirectory = value; }

    /**
     * <p>The landing directory (folder) for a user when they log in to the server
     * using the client.</p> <p>A <code>HomeDirectory</code> example is
     * <code>/bucket_name/home/mydirectory</code>.</p>
     */
    inline void SetHomeDirectory(Aws::String&& value) { m_homeDirectoryHasBeenSet = true; m_homeDirectory = std::move(value); }

    /**
     * <p>The landing directory (folder) for a user when they log in to the server
     * using the client.</p> <p>A <code>HomeDirectory</code> example is
     * <code>/bucket_name/home/mydirectory</code>.</p>
     */
    inline void SetHomeDirectory(const char* value) { m_homeDirectoryHasBeenSet = true; m_homeDirectory.assign(value); }

    /**
     * <p>The landing directory (folder) for a user when they log in to the server
     * using the client.</p> <p>A <code>HomeDirectory</code> example is
     * <code>/bucket_name/home/mydirectory</code>.</p>
     */
    inline DescribedAccess& WithHomeDirectory(const Aws::String& value) { SetHomeDirectory(value); return *this;}

    /**
     * <p>The landing directory (folder) for a user when they log in to the server
     * using the client.</p> <p>A <code>HomeDirectory</code> example is
     * <code>/bucket_name/home/mydirectory</code>.</p>
     */
    inline DescribedAccess& WithHomeDirectory(Aws::String&& value) { SetHomeDirectory(std::move(value)); return *this;}

    /**
     * <p>The landing directory (folder) for a user when they log in to the server
     * using the client.</p> <p>A <code>HomeDirectory</code> example is
     * <code>/bucket_name/home/mydirectory</code>.</p>
     */
    inline DescribedAccess& WithHomeDirectory(const char* value) { SetHomeDirectory(value); return *this;}


    /**
     * <p>Logical directory mappings that specify what Amazon S3 or Amazon EFS paths
     * and keys should be visible to your user and how you want to make them visible.
     * You must specify the <code>Entry</code> and <code>Target</code> pair, where
     * <code>Entry</code> shows how the path is made visible and <code>Target</code> is
     * the actual Amazon S3 or Amazon EFS path. If you only specify a target, it is
     * displayed as is. You also must ensure that your Identity and Access Management
     * (IAM) role provides access to paths in <code>Target</code>. This value can be
     * set only when <code>HomeDirectoryType</code> is set to <i>LOGICAL</i>.</p> <p>In
     * most cases, you can use this value instead of the session policy to lock down
     * the associated access to the designated home directory ("<code>chroot</code>").
     * To do this, you can set <code>Entry</code> to '/' and set <code>Target</code> to
     * the <code>HomeDirectory</code> parameter value.</p>
     */
    inline const Aws::Vector<HomeDirectoryMapEntry>& GetHomeDirectoryMappings() const{ return m_homeDirectoryMappings; }

    /**
     * <p>Logical directory mappings that specify what Amazon S3 or Amazon EFS paths
     * and keys should be visible to your user and how you want to make them visible.
     * You must specify the <code>Entry</code> and <code>Target</code> pair, where
     * <code>Entry</code> shows how the path is made visible and <code>Target</code> is
     * the actual Amazon S3 or Amazon EFS path. If you only specify a target, it is
     * displayed as is. You also must ensure that your Identity and Access Management
     * (IAM) role provides access to paths in <code>Target</code>. This value can be
     * set only when <code>HomeDirectoryType</code> is set to <i>LOGICAL</i>.</p> <p>In
     * most cases, you can use this value instead of the session policy to lock down
     * the associated access to the designated home directory ("<code>chroot</code>").
     * To do this, you can set <code>Entry</code> to '/' and set <code>Target</code> to
     * the <code>HomeDirectory</code> parameter value.</p>
     */
    inline bool HomeDirectoryMappingsHasBeenSet() const { return m_homeDirectoryMappingsHasBeenSet; }

    /**
     * <p>Logical directory mappings that specify what Amazon S3 or Amazon EFS paths
     * and keys should be visible to your user and how you want to make them visible.
     * You must specify the <code>Entry</code> and <code>Target</code> pair, where
     * <code>Entry</code> shows how the path is made visible and <code>Target</code> is
     * the actual Amazon S3 or Amazon EFS path. If you only specify a target, it is
     * displayed as is. You also must ensure that your Identity and Access Management
     * (IAM) role provides access to paths in <code>Target</code>. This value can be
     * set only when <code>HomeDirectoryType</code> is set to <i>LOGICAL</i>.</p> <p>In
     * most cases, you can use this value instead of the session policy to lock down
     * the associated access to the designated home directory ("<code>chroot</code>").
     * To do this, you can set <code>Entry</code> to '/' and set <code>Target</code> to
     * the <code>HomeDirectory</code> parameter value.</p>
     */
    inline void SetHomeDirectoryMappings(const Aws::Vector<HomeDirectoryMapEntry>& value) { m_homeDirectoryMappingsHasBeenSet = true; m_homeDirectoryMappings = value; }

    /**
     * <p>Logical directory mappings that specify what Amazon S3 or Amazon EFS paths
     * and keys should be visible to your user and how you want to make them visible.
     * You must specify the <code>Entry</code> and <code>Target</code> pair, where
     * <code>Entry</code> shows how the path is made visible and <code>Target</code> is
     * the actual Amazon S3 or Amazon EFS path. If you only specify a target, it is
     * displayed as is. You also must ensure that your Identity and Access Management
     * (IAM) role provides access to paths in <code>Target</code>. This value can be
     * set only when <code>HomeDirectoryType</code> is set to <i>LOGICAL</i>.</p> <p>In
     * most cases, you can use this value instead of the session policy to lock down
     * the associated access to the designated home directory ("<code>chroot</code>").
     * To do this, you can set <code>Entry</code> to '/' and set <code>Target</code> to
     * the <code>HomeDirectory</code> parameter value.</p>
     */
    inline void SetHomeDirectoryMappings(Aws::Vector<HomeDirectoryMapEntry>&& value) { m_homeDirectoryMappingsHasBeenSet = true; m_homeDirectoryMappings = std::move(value); }

    /**
     * <p>Logical directory mappings that specify what Amazon S3 or Amazon EFS paths
     * and keys should be visible to your user and how you want to make them visible.
     * You must specify the <code>Entry</code> and <code>Target</code> pair, where
     * <code>Entry</code> shows how the path is made visible and <code>Target</code> is
     * the actual Amazon S3 or Amazon EFS path. If you only specify a target, it is
     * displayed as is. You also must ensure that your Identity and Access Management
     * (IAM) role provides access to paths in <code>Target</code>. This value can be
     * set only when <code>HomeDirectoryType</code> is set to <i>LOGICAL</i>.</p> <p>In
     * most cases, you can use this value instead of the session policy to lock down
     * the associated access to the designated home directory ("<code>chroot</code>").
     * To do this, you can set <code>Entry</code> to '/' and set <code>Target</code> to
     * the <code>HomeDirectory</code> parameter value.</p>
     */
    inline DescribedAccess& WithHomeDirectoryMappings(const Aws::Vector<HomeDirectoryMapEntry>& value) { SetHomeDirectoryMappings(value); return *this;}

    /**
     * <p>Logical directory mappings that specify what Amazon S3 or Amazon EFS paths
     * and keys should be visible to your user and how you want to make them visible.
     * You must specify the <code>Entry</code> and <code>Target</code> pair, where
     * <code>Entry</code> shows how the path is made visible and <code>Target</code> is
     * the actual Amazon S3 or Amazon EFS path. If you only specify a target, it is
     * displayed as is. You also must ensure that your Identity and Access Management
     * (IAM) role provides access to paths in <code>Target</code>. This value can be
     * set only when <code>HomeDirectoryType</code> is set to <i>LOGICAL</i>.</p> <p>In
     * most cases, you can use this value instead of the session policy to lock down
     * the associated access to the designated home directory ("<code>chroot</code>").
     * To do this, you can set <code>Entry</code> to '/' and set <code>Target</code> to
     * the <code>HomeDirectory</code> parameter value.</p>
     */
    inline DescribedAccess& WithHomeDirectoryMappings(Aws::Vector<HomeDirectoryMapEntry>&& value) { SetHomeDirectoryMappings(std::move(value)); return *this;}

    /**
     * <p>Logical directory mappings that specify what Amazon S3 or Amazon EFS paths
     * and keys should be visible to your user and how you want to make them visible.
     * You must specify the <code>Entry</code> and <code>Target</code> pair, where
     * <code>Entry</code> shows how the path is made visible and <code>Target</code> is
     * the actual Amazon S3 or Amazon EFS path. If you only specify a target, it is
     * displayed as is. You also must ensure that your Identity and Access Management
     * (IAM) role provides access to paths in <code>Target</code>. This value can be
     * set only when <code>HomeDirectoryType</code> is set to <i>LOGICAL</i>.</p> <p>In
     * most cases, you can use this value instead of the session policy to lock down
     * the associated access to the designated home directory ("<code>chroot</code>").
     * To do this, you can set <code>Entry</code> to '/' and set <code>Target</code> to
     * the <code>HomeDirectory</code> parameter value.</p>
     */
    inline DescribedAccess& AddHomeDirectoryMappings(const HomeDirectoryMapEntry& value) { m_homeDirectoryMappingsHasBeenSet = true; m_homeDirectoryMappings.push_back(value); return *this; }

    /**
     * <p>Logical directory mappings that specify what Amazon S3 or Amazon EFS paths
     * and keys should be visible to your user and how you want to make them visible.
     * You must specify the <code>Entry</code> and <code>Target</code> pair, where
     * <code>Entry</code> shows how the path is made visible and <code>Target</code> is
     * the actual Amazon S3 or Amazon EFS path. If you only specify a target, it is
     * displayed as is. You also must ensure that your Identity and Access Management
     * (IAM) role provides access to paths in <code>Target</code>. This value can be
     * set only when <code>HomeDirectoryType</code> is set to <i>LOGICAL</i>.</p> <p>In
     * most cases, you can use this value instead of the session policy to lock down
     * the associated access to the designated home directory ("<code>chroot</code>").
     * To do this, you can set <code>Entry</code> to '/' and set <code>Target</code> to
     * the <code>HomeDirectory</code> parameter value.</p>
     */
    inline DescribedAccess& AddHomeDirectoryMappings(HomeDirectoryMapEntry&& value) { m_homeDirectoryMappingsHasBeenSet = true; m_homeDirectoryMappings.push_back(std::move(value)); return *this; }


    /**
     * <p>The type of landing directory (folder) that you want your users' home
     * directory to be when they log in to the server. If you set it to
     * <code>PATH</code>, the user will see the absolute Amazon S3 bucket or EFS paths
     * as is in their file transfer protocol clients. If you set it
     * <code>LOGICAL</code>, you need to provide mappings in the
     * <code>HomeDirectoryMappings</code> for how you want to make Amazon S3 or Amazon
     * EFS paths visible to your users.</p>
     */
    inline const HomeDirectoryType& GetHomeDirectoryType() const{ return m_homeDirectoryType; }

    /**
     * <p>The type of landing directory (folder) that you want your users' home
     * directory to be when they log in to the server. If you set it to
     * <code>PATH</code>, the user will see the absolute Amazon S3 bucket or EFS paths
     * as is in their file transfer protocol clients. If you set it
     * <code>LOGICAL</code>, you need to provide mappings in the
     * <code>HomeDirectoryMappings</code> for how you want to make Amazon S3 or Amazon
     * EFS paths visible to your users.</p>
     */
    inline bool HomeDirectoryTypeHasBeenSet() const { return m_homeDirectoryTypeHasBeenSet; }

    /**
     * <p>The type of landing directory (folder) that you want your users' home
     * directory to be when they log in to the server. If you set it to
     * <code>PATH</code>, the user will see the absolute Amazon S3 bucket or EFS paths
     * as is in their file transfer protocol clients. If you set it
     * <code>LOGICAL</code>, you need to provide mappings in the
     * <code>HomeDirectoryMappings</code> for how you want to make Amazon S3 or Amazon
     * EFS paths visible to your users.</p>
     */
    inline void SetHomeDirectoryType(const HomeDirectoryType& value) { m_homeDirectoryTypeHasBeenSet = true; m_homeDirectoryType = value; }

    /**
     * <p>The type of landing directory (folder) that you want your users' home
     * directory to be when they log in to the server. If you set it to
     * <code>PATH</code>, the user will see the absolute Amazon S3 bucket or EFS paths
     * as is in their file transfer protocol clients. If you set it
     * <code>LOGICAL</code>, you need to provide mappings in the
     * <code>HomeDirectoryMappings</code> for how you want to make Amazon S3 or Amazon
     * EFS paths visible to your users.</p>
     */
    inline void SetHomeDirectoryType(HomeDirectoryType&& value) { m_homeDirectoryTypeHasBeenSet = true; m_homeDirectoryType = std::move(value); }

    /**
     * <p>The type of landing directory (folder) that you want your users' home
     * directory to be when they log in to the server. If you set it to
     * <code>PATH</code>, the user will see the absolute Amazon S3 bucket or EFS paths
     * as is in their file transfer protocol clients. If you set it
     * <code>LOGICAL</code>, you need to provide mappings in the
     * <code>HomeDirectoryMappings</code> for how you want to make Amazon S3 or Amazon
     * EFS paths visible to your users.</p>
     */
    inline DescribedAccess& WithHomeDirectoryType(const HomeDirectoryType& value) { SetHomeDirectoryType(value); return *this;}

    /**
     * <p>The type of landing directory (folder) that you want your users' home
     * directory to be when they log in to the server. If you set it to
     * <code>PATH</code>, the user will see the absolute Amazon S3 bucket or EFS paths
     * as is in their file transfer protocol clients. If you set it
     * <code>LOGICAL</code>, you need to provide mappings in the
     * <code>HomeDirectoryMappings</code> for how you want to make Amazon S3 or Amazon
     * EFS paths visible to your users.</p>
     */
    inline DescribedAccess& WithHomeDirectoryType(HomeDirectoryType&& value) { SetHomeDirectoryType(std::move(value)); return *this;}


    /**
     * <p>A session policy for your user so that you can use the same Identity and
     * Access Management (IAM) role across multiple users. This policy scopes down a
     * user's access to portions of their Amazon S3 bucket. Variables that you can use
     * inside this policy include <code>${Transfer:UserName}</code>,
     * <code>${Transfer:HomeDirectory}</code>, and
     * <code>${Transfer:HomeBucket}</code>.</p>
     */
    inline const Aws::String& GetPolicy() const{ return m_policy; }

    /**
     * <p>A session policy for your user so that you can use the same Identity and
     * Access Management (IAM) role across multiple users. This policy scopes down a
     * user's access to portions of their Amazon S3 bucket. Variables that you can use
     * inside this policy include <code>${Transfer:UserName}</code>,
     * <code>${Transfer:HomeDirectory}</code>, and
     * <code>${Transfer:HomeBucket}</code>.</p>
     */
    inline bool PolicyHasBeenSet() const { return m_policyHasBeenSet; }

    /**
     * <p>A session policy for your user so that you can use the same Identity and
     * Access Management (IAM) role across multiple users. This policy scopes down a
     * user's access to portions of their Amazon S3 bucket. Variables that you can use
     * inside this policy include <code>${Transfer:UserName}</code>,
     * <code>${Transfer:HomeDirectory}</code>, and
     * <code>${Transfer:HomeBucket}</code>.</p>
     */
    inline void SetPolicy(const Aws::String& value) { m_policyHasBeenSet = true; m_policy = value; }

    /**
     * <p>A session policy for your user so that you can use the same Identity and
     * Access Management (IAM) role across multiple users. This policy scopes down a
     * user's access to portions of their Amazon S3 bucket. Variables that you can use
     * inside this policy include <code>${Transfer:UserName}</code>,
     * <code>${Transfer:HomeDirectory}</code>, and
     * <code>${Transfer:HomeBucket}</code>.</p>
     */
    inline void SetPolicy(Aws::String&& value) { m_policyHasBeenSet = true; m_policy = std::move(value); }

    /**
     * <p>A session policy for your user so that you can use the same Identity and
     * Access Management (IAM) role across multiple users. This policy scopes down a
     * user's access to portions of their Amazon S3 bucket. Variables that you can use
     * inside this policy include <code>${Transfer:UserName}</code>,
     * <code>${Transfer:HomeDirectory}</code>, and
     * <code>${Transfer:HomeBucket}</code>.</p>
     */
    inline void SetPolicy(const char* value) { m_policyHasBeenSet = true; m_policy.assign(value); }

    /**
     * <p>A session policy for your user so that you can use the same Identity and
     * Access Management (IAM) role across multiple users. This policy scopes down a
     * user's access to portions of their Amazon S3 bucket. Variables that you can use
     * inside this policy include <code>${Transfer:UserName}</code>,
     * <code>${Transfer:HomeDirectory}</code>, and
     * <code>${Transfer:HomeBucket}</code>.</p>
     */
    inline DescribedAccess& WithPolicy(const Aws::String& value) { SetPolicy(value); return *this;}

    /**
     * <p>A session policy for your user so that you can use the same Identity and
     * Access Management (IAM) role across multiple users. This policy scopes down a
     * user's access to portions of their Amazon S3 bucket. Variables that you can use
     * inside this policy include <code>${Transfer:UserName}</code>,
     * <code>${Transfer:HomeDirectory}</code>, and
     * <code>${Transfer:HomeBucket}</code>.</p>
     */
    inline DescribedAccess& WithPolicy(Aws::String&& value) { SetPolicy(std::move(value)); return *this;}

    /**
     * <p>A session policy for your user so that you can use the same Identity and
     * Access Management (IAM) role across multiple users. This policy scopes down a
     * user's access to portions of their Amazon S3 bucket. Variables that you can use
     * inside this policy include <code>${Transfer:UserName}</code>,
     * <code>${Transfer:HomeDirectory}</code>, and
     * <code>${Transfer:HomeBucket}</code>.</p>
     */
    inline DescribedAccess& WithPolicy(const char* value) { SetPolicy(value); return *this;}


    
    inline const PosixProfile& GetPosixProfile() const{ return m_posixProfile; }

    
    inline bool PosixProfileHasBeenSet() const { return m_posixProfileHasBeenSet; }

    
    inline void SetPosixProfile(const PosixProfile& value) { m_posixProfileHasBeenSet = true; m_posixProfile = value; }

    
    inline void SetPosixProfile(PosixProfile&& value) { m_posixProfileHasBeenSet = true; m_posixProfile = std::move(value); }

    
    inline DescribedAccess& WithPosixProfile(const PosixProfile& value) { SetPosixProfile(value); return *this;}

    
    inline DescribedAccess& WithPosixProfile(PosixProfile&& value) { SetPosixProfile(std::move(value)); return *this;}


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

    /**
     * <p>The Amazon Resource Name (ARN) of the Identity and Access Management (IAM)
     * role that controls your users' access to your Amazon S3 bucket or Amazon EFS
     * file system. The policies attached to this role determine the level of access
     * that you want to provide your users when transferring files into and out of your
     * Amazon S3 bucket or Amazon EFS file system. The IAM role should also contain a
     * trust relationship that allows the server to access your resources when
     * servicing your users' transfer requests.</p>
     */
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Identity and Access Management (IAM)
     * role that controls your users' access to your Amazon S3 bucket or Amazon EFS
     * file system. The policies attached to this role determine the level of access
     * that you want to provide your users when transferring files into and out of your
     * Amazon S3 bucket or Amazon EFS file system. The IAM role should also contain a
     * trust relationship that allows the server to access your resources when
     * servicing your users' transfer requests.</p>
     */
    inline void SetRole(const Aws::String& value) { m_roleHasBeenSet = true; m_role = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Identity and Access Management (IAM)
     * role that controls your users' access to your Amazon S3 bucket or Amazon EFS
     * file system. The policies attached to this role determine the level of access
     * that you want to provide your users when transferring files into and out of your
     * Amazon S3 bucket or Amazon EFS file system. The IAM role should also contain a
     * trust relationship that allows the server to access your resources when
     * servicing your users' transfer requests.</p>
     */
    inline void SetRole(Aws::String&& value) { m_roleHasBeenSet = true; m_role = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Identity and Access Management (IAM)
     * role that controls your users' access to your Amazon S3 bucket or Amazon EFS
     * file system. The policies attached to this role determine the level of access
     * that you want to provide your users when transferring files into and out of your
     * Amazon S3 bucket or Amazon EFS file system. The IAM role should also contain a
     * trust relationship that allows the server to access your resources when
     * servicing your users' transfer requests.</p>
     */
    inline void SetRole(const char* value) { m_roleHasBeenSet = true; m_role.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Identity and Access Management (IAM)
     * role that controls your users' access to your Amazon S3 bucket or Amazon EFS
     * file system. The policies attached to this role determine the level of access
     * that you want to provide your users when transferring files into and out of your
     * Amazon S3 bucket or Amazon EFS file system. The IAM role should also contain a
     * trust relationship that allows the server to access your resources when
     * servicing your users' transfer requests.</p>
     */
    inline DescribedAccess& WithRole(const Aws::String& value) { SetRole(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Identity and Access Management (IAM)
     * role that controls your users' access to your Amazon S3 bucket or Amazon EFS
     * file system. The policies attached to this role determine the level of access
     * that you want to provide your users when transferring files into and out of your
     * Amazon S3 bucket or Amazon EFS file system. The IAM role should also contain a
     * trust relationship that allows the server to access your resources when
     * servicing your users' transfer requests.</p>
     */
    inline DescribedAccess& WithRole(Aws::String&& value) { SetRole(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Identity and Access Management (IAM)
     * role that controls your users' access to your Amazon S3 bucket or Amazon EFS
     * file system. The policies attached to this role determine the level of access
     * that you want to provide your users when transferring files into and out of your
     * Amazon S3 bucket or Amazon EFS file system. The IAM role should also contain a
     * trust relationship that allows the server to access your resources when
     * servicing your users' transfer requests.</p>
     */
    inline DescribedAccess& WithRole(const char* value) { SetRole(value); return *this;}


    /**
     * <p>A unique identifier that is required to identify specific groups within your
     * directory. The users of the group that you associate have access to your Amazon
     * S3 or Amazon EFS resources over the enabled protocols using Transfer Family. If
     * you know the group name, you can view the SID values by running the following
     * command using Windows PowerShell.</p> <p> <code>Get-ADGroup -Filter
     * {samAccountName -like "<i>YourGroupName</i>*"} -Properties * | Select
     * SamAccountName,ObjectSid</code> </p> <p>In that command, replace
     * <i>YourGroupName</i> with the name of your Active Directory group.</p> <p>The
     * regular expression used to validate this parameter is a string of characters
     * consisting of uppercase and lowercase alphanumeric characters with no spaces.
     * You can also include underscores or any of the following characters: =,.@:/-</p>
     */
    inline const Aws::String& GetExternalId() const{ return m_externalId; }

    /**
     * <p>A unique identifier that is required to identify specific groups within your
     * directory. The users of the group that you associate have access to your Amazon
     * S3 or Amazon EFS resources over the enabled protocols using Transfer Family. If
     * you know the group name, you can view the SID values by running the following
     * command using Windows PowerShell.</p> <p> <code>Get-ADGroup -Filter
     * {samAccountName -like "<i>YourGroupName</i>*"} -Properties * | Select
     * SamAccountName,ObjectSid</code> </p> <p>In that command, replace
     * <i>YourGroupName</i> with the name of your Active Directory group.</p> <p>The
     * regular expression used to validate this parameter is a string of characters
     * consisting of uppercase and lowercase alphanumeric characters with no spaces.
     * You can also include underscores or any of the following characters: =,.@:/-</p>
     */
    inline bool ExternalIdHasBeenSet() const { return m_externalIdHasBeenSet; }

    /**
     * <p>A unique identifier that is required to identify specific groups within your
     * directory. The users of the group that you associate have access to your Amazon
     * S3 or Amazon EFS resources over the enabled protocols using Transfer Family. If
     * you know the group name, you can view the SID values by running the following
     * command using Windows PowerShell.</p> <p> <code>Get-ADGroup -Filter
     * {samAccountName -like "<i>YourGroupName</i>*"} -Properties * | Select
     * SamAccountName,ObjectSid</code> </p> <p>In that command, replace
     * <i>YourGroupName</i> with the name of your Active Directory group.</p> <p>The
     * regular expression used to validate this parameter is a string of characters
     * consisting of uppercase and lowercase alphanumeric characters with no spaces.
     * You can also include underscores or any of the following characters: =,.@:/-</p>
     */
    inline void SetExternalId(const Aws::String& value) { m_externalIdHasBeenSet = true; m_externalId = value; }

    /**
     * <p>A unique identifier that is required to identify specific groups within your
     * directory. The users of the group that you associate have access to your Amazon
     * S3 or Amazon EFS resources over the enabled protocols using Transfer Family. If
     * you know the group name, you can view the SID values by running the following
     * command using Windows PowerShell.</p> <p> <code>Get-ADGroup -Filter
     * {samAccountName -like "<i>YourGroupName</i>*"} -Properties * | Select
     * SamAccountName,ObjectSid</code> </p> <p>In that command, replace
     * <i>YourGroupName</i> with the name of your Active Directory group.</p> <p>The
     * regular expression used to validate this parameter is a string of characters
     * consisting of uppercase and lowercase alphanumeric characters with no spaces.
     * You can also include underscores or any of the following characters: =,.@:/-</p>
     */
    inline void SetExternalId(Aws::String&& value) { m_externalIdHasBeenSet = true; m_externalId = std::move(value); }

    /**
     * <p>A unique identifier that is required to identify specific groups within your
     * directory. The users of the group that you associate have access to your Amazon
     * S3 or Amazon EFS resources over the enabled protocols using Transfer Family. If
     * you know the group name, you can view the SID values by running the following
     * command using Windows PowerShell.</p> <p> <code>Get-ADGroup -Filter
     * {samAccountName -like "<i>YourGroupName</i>*"} -Properties * | Select
     * SamAccountName,ObjectSid</code> </p> <p>In that command, replace
     * <i>YourGroupName</i> with the name of your Active Directory group.</p> <p>The
     * regular expression used to validate this parameter is a string of characters
     * consisting of uppercase and lowercase alphanumeric characters with no spaces.
     * You can also include underscores or any of the following characters: =,.@:/-</p>
     */
    inline void SetExternalId(const char* value) { m_externalIdHasBeenSet = true; m_externalId.assign(value); }

    /**
     * <p>A unique identifier that is required to identify specific groups within your
     * directory. The users of the group that you associate have access to your Amazon
     * S3 or Amazon EFS resources over the enabled protocols using Transfer Family. If
     * you know the group name, you can view the SID values by running the following
     * command using Windows PowerShell.</p> <p> <code>Get-ADGroup -Filter
     * {samAccountName -like "<i>YourGroupName</i>*"} -Properties * | Select
     * SamAccountName,ObjectSid</code> </p> <p>In that command, replace
     * <i>YourGroupName</i> with the name of your Active Directory group.</p> <p>The
     * regular expression used to validate this parameter is a string of characters
     * consisting of uppercase and lowercase alphanumeric characters with no spaces.
     * You can also include underscores or any of the following characters: =,.@:/-</p>
     */
    inline DescribedAccess& WithExternalId(const Aws::String& value) { SetExternalId(value); return *this;}

    /**
     * <p>A unique identifier that is required to identify specific groups within your
     * directory. The users of the group that you associate have access to your Amazon
     * S3 or Amazon EFS resources over the enabled protocols using Transfer Family. If
     * you know the group name, you can view the SID values by running the following
     * command using Windows PowerShell.</p> <p> <code>Get-ADGroup -Filter
     * {samAccountName -like "<i>YourGroupName</i>*"} -Properties * | Select
     * SamAccountName,ObjectSid</code> </p> <p>In that command, replace
     * <i>YourGroupName</i> with the name of your Active Directory group.</p> <p>The
     * regular expression used to validate this parameter is a string of characters
     * consisting of uppercase and lowercase alphanumeric characters with no spaces.
     * You can also include underscores or any of the following characters: =,.@:/-</p>
     */
    inline DescribedAccess& WithExternalId(Aws::String&& value) { SetExternalId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier that is required to identify specific groups within your
     * directory. The users of the group that you associate have access to your Amazon
     * S3 or Amazon EFS resources over the enabled protocols using Transfer Family. If
     * you know the group name, you can view the SID values by running the following
     * command using Windows PowerShell.</p> <p> <code>Get-ADGroup -Filter
     * {samAccountName -like "<i>YourGroupName</i>*"} -Properties * | Select
     * SamAccountName,ObjectSid</code> </p> <p>In that command, replace
     * <i>YourGroupName</i> with the name of your Active Directory group.</p> <p>The
     * regular expression used to validate this parameter is a string of characters
     * consisting of uppercase and lowercase alphanumeric characters with no spaces.
     * You can also include underscores or any of the following characters: =,.@:/-</p>
     */
    inline DescribedAccess& WithExternalId(const char* value) { SetExternalId(value); return *this;}

  private:

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

    Aws::String m_externalId;
    bool m_externalIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
