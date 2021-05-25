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
  class AWS_TRANSFER_API DescribedAccess
  {
  public:
    DescribedAccess();
    DescribedAccess(Aws::Utils::Json::JsonView jsonValue);
    DescribedAccess& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies the landing directory (or folder), which is the location that files
     * are written to or read from in an Amazon S3 bucket, for the described
     * access.</p>
     */
    inline const Aws::String& GetHomeDirectory() const{ return m_homeDirectory; }

    /**
     * <p>Specifies the landing directory (or folder), which is the location that files
     * are written to or read from in an Amazon S3 bucket, for the described
     * access.</p>
     */
    inline bool HomeDirectoryHasBeenSet() const { return m_homeDirectoryHasBeenSet; }

    /**
     * <p>Specifies the landing directory (or folder), which is the location that files
     * are written to or read from in an Amazon S3 bucket, for the described
     * access.</p>
     */
    inline void SetHomeDirectory(const Aws::String& value) { m_homeDirectoryHasBeenSet = true; m_homeDirectory = value; }

    /**
     * <p>Specifies the landing directory (or folder), which is the location that files
     * are written to or read from in an Amazon S3 bucket, for the described
     * access.</p>
     */
    inline void SetHomeDirectory(Aws::String&& value) { m_homeDirectoryHasBeenSet = true; m_homeDirectory = std::move(value); }

    /**
     * <p>Specifies the landing directory (or folder), which is the location that files
     * are written to or read from in an Amazon S3 bucket, for the described
     * access.</p>
     */
    inline void SetHomeDirectory(const char* value) { m_homeDirectoryHasBeenSet = true; m_homeDirectory.assign(value); }

    /**
     * <p>Specifies the landing directory (or folder), which is the location that files
     * are written to or read from in an Amazon S3 bucket, for the described
     * access.</p>
     */
    inline DescribedAccess& WithHomeDirectory(const Aws::String& value) { SetHomeDirectory(value); return *this;}

    /**
     * <p>Specifies the landing directory (or folder), which is the location that files
     * are written to or read from in an Amazon S3 bucket, for the described
     * access.</p>
     */
    inline DescribedAccess& WithHomeDirectory(Aws::String&& value) { SetHomeDirectory(std::move(value)); return *this;}

    /**
     * <p>Specifies the landing directory (or folder), which is the location that files
     * are written to or read from in an Amazon S3 bucket, for the described
     * access.</p>
     */
    inline DescribedAccess& WithHomeDirectory(const char* value) { SetHomeDirectory(value); return *this;}


    /**
     * <p>Specifies the logical directory mappings that specify what Amazon S3 or
     * Amazon EFS paths and keys should be visible to the associated access and how you
     * want to make them visible. You must specify the "<code>Entry</code>" and
     * "<code>Target</code>" pair, where <code>Entry</code> shows how the path is made
     * visible and <code>Target</code> is the actual Amazon S3 or EFS path. If you only
     * specify a target, it will be displayed as is. You also must ensure that your AWS
     * Identity and Access Management (IAM) role provides access to paths in
     * <code>Target</code>.</p> <p>In most cases, you can use this value instead of the
     * scope-down policy to lock down the associated access to the designated home
     * directory ("<code>chroot</code>"). To do this, you can set <code>Entry</code> to
     * '/' and set <code>Target</code> to the <code>HomeDirectory</code> parameter
     * value.</p>
     */
    inline const Aws::Vector<HomeDirectoryMapEntry>& GetHomeDirectoryMappings() const{ return m_homeDirectoryMappings; }

    /**
     * <p>Specifies the logical directory mappings that specify what Amazon S3 or
     * Amazon EFS paths and keys should be visible to the associated access and how you
     * want to make them visible. You must specify the "<code>Entry</code>" and
     * "<code>Target</code>" pair, where <code>Entry</code> shows how the path is made
     * visible and <code>Target</code> is the actual Amazon S3 or EFS path. If you only
     * specify a target, it will be displayed as is. You also must ensure that your AWS
     * Identity and Access Management (IAM) role provides access to paths in
     * <code>Target</code>.</p> <p>In most cases, you can use this value instead of the
     * scope-down policy to lock down the associated access to the designated home
     * directory ("<code>chroot</code>"). To do this, you can set <code>Entry</code> to
     * '/' and set <code>Target</code> to the <code>HomeDirectory</code> parameter
     * value.</p>
     */
    inline bool HomeDirectoryMappingsHasBeenSet() const { return m_homeDirectoryMappingsHasBeenSet; }

    /**
     * <p>Specifies the logical directory mappings that specify what Amazon S3 or
     * Amazon EFS paths and keys should be visible to the associated access and how you
     * want to make them visible. You must specify the "<code>Entry</code>" and
     * "<code>Target</code>" pair, where <code>Entry</code> shows how the path is made
     * visible and <code>Target</code> is the actual Amazon S3 or EFS path. If you only
     * specify a target, it will be displayed as is. You also must ensure that your AWS
     * Identity and Access Management (IAM) role provides access to paths in
     * <code>Target</code>.</p> <p>In most cases, you can use this value instead of the
     * scope-down policy to lock down the associated access to the designated home
     * directory ("<code>chroot</code>"). To do this, you can set <code>Entry</code> to
     * '/' and set <code>Target</code> to the <code>HomeDirectory</code> parameter
     * value.</p>
     */
    inline void SetHomeDirectoryMappings(const Aws::Vector<HomeDirectoryMapEntry>& value) { m_homeDirectoryMappingsHasBeenSet = true; m_homeDirectoryMappings = value; }

    /**
     * <p>Specifies the logical directory mappings that specify what Amazon S3 or
     * Amazon EFS paths and keys should be visible to the associated access and how you
     * want to make them visible. You must specify the "<code>Entry</code>" and
     * "<code>Target</code>" pair, where <code>Entry</code> shows how the path is made
     * visible and <code>Target</code> is the actual Amazon S3 or EFS path. If you only
     * specify a target, it will be displayed as is. You also must ensure that your AWS
     * Identity and Access Management (IAM) role provides access to paths in
     * <code>Target</code>.</p> <p>In most cases, you can use this value instead of the
     * scope-down policy to lock down the associated access to the designated home
     * directory ("<code>chroot</code>"). To do this, you can set <code>Entry</code> to
     * '/' and set <code>Target</code> to the <code>HomeDirectory</code> parameter
     * value.</p>
     */
    inline void SetHomeDirectoryMappings(Aws::Vector<HomeDirectoryMapEntry>&& value) { m_homeDirectoryMappingsHasBeenSet = true; m_homeDirectoryMappings = std::move(value); }

    /**
     * <p>Specifies the logical directory mappings that specify what Amazon S3 or
     * Amazon EFS paths and keys should be visible to the associated access and how you
     * want to make them visible. You must specify the "<code>Entry</code>" and
     * "<code>Target</code>" pair, where <code>Entry</code> shows how the path is made
     * visible and <code>Target</code> is the actual Amazon S3 or EFS path. If you only
     * specify a target, it will be displayed as is. You also must ensure that your AWS
     * Identity and Access Management (IAM) role provides access to paths in
     * <code>Target</code>.</p> <p>In most cases, you can use this value instead of the
     * scope-down policy to lock down the associated access to the designated home
     * directory ("<code>chroot</code>"). To do this, you can set <code>Entry</code> to
     * '/' and set <code>Target</code> to the <code>HomeDirectory</code> parameter
     * value.</p>
     */
    inline DescribedAccess& WithHomeDirectoryMappings(const Aws::Vector<HomeDirectoryMapEntry>& value) { SetHomeDirectoryMappings(value); return *this;}

    /**
     * <p>Specifies the logical directory mappings that specify what Amazon S3 or
     * Amazon EFS paths and keys should be visible to the associated access and how you
     * want to make them visible. You must specify the "<code>Entry</code>" and
     * "<code>Target</code>" pair, where <code>Entry</code> shows how the path is made
     * visible and <code>Target</code> is the actual Amazon S3 or EFS path. If you only
     * specify a target, it will be displayed as is. You also must ensure that your AWS
     * Identity and Access Management (IAM) role provides access to paths in
     * <code>Target</code>.</p> <p>In most cases, you can use this value instead of the
     * scope-down policy to lock down the associated access to the designated home
     * directory ("<code>chroot</code>"). To do this, you can set <code>Entry</code> to
     * '/' and set <code>Target</code> to the <code>HomeDirectory</code> parameter
     * value.</p>
     */
    inline DescribedAccess& WithHomeDirectoryMappings(Aws::Vector<HomeDirectoryMapEntry>&& value) { SetHomeDirectoryMappings(std::move(value)); return *this;}

    /**
     * <p>Specifies the logical directory mappings that specify what Amazon S3 or
     * Amazon EFS paths and keys should be visible to the associated access and how you
     * want to make them visible. You must specify the "<code>Entry</code>" and
     * "<code>Target</code>" pair, where <code>Entry</code> shows how the path is made
     * visible and <code>Target</code> is the actual Amazon S3 or EFS path. If you only
     * specify a target, it will be displayed as is. You also must ensure that your AWS
     * Identity and Access Management (IAM) role provides access to paths in
     * <code>Target</code>.</p> <p>In most cases, you can use this value instead of the
     * scope-down policy to lock down the associated access to the designated home
     * directory ("<code>chroot</code>"). To do this, you can set <code>Entry</code> to
     * '/' and set <code>Target</code> to the <code>HomeDirectory</code> parameter
     * value.</p>
     */
    inline DescribedAccess& AddHomeDirectoryMappings(const HomeDirectoryMapEntry& value) { m_homeDirectoryMappingsHasBeenSet = true; m_homeDirectoryMappings.push_back(value); return *this; }

    /**
     * <p>Specifies the logical directory mappings that specify what Amazon S3 or
     * Amazon EFS paths and keys should be visible to the associated access and how you
     * want to make them visible. You must specify the "<code>Entry</code>" and
     * "<code>Target</code>" pair, where <code>Entry</code> shows how the path is made
     * visible and <code>Target</code> is the actual Amazon S3 or EFS path. If you only
     * specify a target, it will be displayed as is. You also must ensure that your AWS
     * Identity and Access Management (IAM) role provides access to paths in
     * <code>Target</code>.</p> <p>In most cases, you can use this value instead of the
     * scope-down policy to lock down the associated access to the designated home
     * directory ("<code>chroot</code>"). To do this, you can set <code>Entry</code> to
     * '/' and set <code>Target</code> to the <code>HomeDirectory</code> parameter
     * value.</p>
     */
    inline DescribedAccess& AddHomeDirectoryMappings(HomeDirectoryMapEntry&& value) { m_homeDirectoryMappingsHasBeenSet = true; m_homeDirectoryMappings.push_back(std::move(value)); return *this; }


    /**
     * <p>The type of landing directory (folder) that you want your users' home
     * directory to be when they log in to the server. If you set it to
     * <code>PATH</code>, the user will see the absolute Amazon S3 bucket paths as is
     * in their file transfer protocol clients. If you set it to <code>LOGICAL</code>,
     * you must provide mappings in the <code>HomeDirectoryMappings</code> for how you
     * want to make Amazon S3 paths visible to your users.</p>
     */
    inline const HomeDirectoryType& GetHomeDirectoryType() const{ return m_homeDirectoryType; }

    /**
     * <p>The type of landing directory (folder) that you want your users' home
     * directory to be when they log in to the server. If you set it to
     * <code>PATH</code>, the user will see the absolute Amazon S3 bucket paths as is
     * in their file transfer protocol clients. If you set it to <code>LOGICAL</code>,
     * you must provide mappings in the <code>HomeDirectoryMappings</code> for how you
     * want to make Amazon S3 paths visible to your users.</p>
     */
    inline bool HomeDirectoryTypeHasBeenSet() const { return m_homeDirectoryTypeHasBeenSet; }

    /**
     * <p>The type of landing directory (folder) that you want your users' home
     * directory to be when they log in to the server. If you set it to
     * <code>PATH</code>, the user will see the absolute Amazon S3 bucket paths as is
     * in their file transfer protocol clients. If you set it to <code>LOGICAL</code>,
     * you must provide mappings in the <code>HomeDirectoryMappings</code> for how you
     * want to make Amazon S3 paths visible to your users.</p>
     */
    inline void SetHomeDirectoryType(const HomeDirectoryType& value) { m_homeDirectoryTypeHasBeenSet = true; m_homeDirectoryType = value; }

    /**
     * <p>The type of landing directory (folder) that you want your users' home
     * directory to be when they log in to the server. If you set it to
     * <code>PATH</code>, the user will see the absolute Amazon S3 bucket paths as is
     * in their file transfer protocol clients. If you set it to <code>LOGICAL</code>,
     * you must provide mappings in the <code>HomeDirectoryMappings</code> for how you
     * want to make Amazon S3 paths visible to your users.</p>
     */
    inline void SetHomeDirectoryType(HomeDirectoryType&& value) { m_homeDirectoryTypeHasBeenSet = true; m_homeDirectoryType = std::move(value); }

    /**
     * <p>The type of landing directory (folder) that you want your users' home
     * directory to be when they log in to the server. If you set it to
     * <code>PATH</code>, the user will see the absolute Amazon S3 bucket paths as is
     * in their file transfer protocol clients. If you set it to <code>LOGICAL</code>,
     * you must provide mappings in the <code>HomeDirectoryMappings</code> for how you
     * want to make Amazon S3 paths visible to your users.</p>
     */
    inline DescribedAccess& WithHomeDirectoryType(const HomeDirectoryType& value) { SetHomeDirectoryType(value); return *this;}

    /**
     * <p>The type of landing directory (folder) that you want your users' home
     * directory to be when they log in to the server. If you set it to
     * <code>PATH</code>, the user will see the absolute Amazon S3 bucket paths as is
     * in their file transfer protocol clients. If you set it to <code>LOGICAL</code>,
     * you must provide mappings in the <code>HomeDirectoryMappings</code> for how you
     * want to make Amazon S3 paths visible to your users.</p>
     */
    inline DescribedAccess& WithHomeDirectoryType(HomeDirectoryType&& value) { SetHomeDirectoryType(std::move(value)); return *this;}


    /**
     * <p>A scope-down policy for your user so that you can use the same AWS Identity
     * and Access Management (IAM) role across multiple users. This policy scopes down
     * user access to portions of their Amazon S3 bucket. Variables that you can use
     * inside this policy include <code>${Transfer:UserName}</code>,
     * <code>${Transfer:HomeDirectory}</code>, and
     * <code>${Transfer:HomeBucket}</code>.</p>
     */
    inline const Aws::String& GetPolicy() const{ return m_policy; }

    /**
     * <p>A scope-down policy for your user so that you can use the same AWS Identity
     * and Access Management (IAM) role across multiple users. This policy scopes down
     * user access to portions of their Amazon S3 bucket. Variables that you can use
     * inside this policy include <code>${Transfer:UserName}</code>,
     * <code>${Transfer:HomeDirectory}</code>, and
     * <code>${Transfer:HomeBucket}</code>.</p>
     */
    inline bool PolicyHasBeenSet() const { return m_policyHasBeenSet; }

    /**
     * <p>A scope-down policy for your user so that you can use the same AWS Identity
     * and Access Management (IAM) role across multiple users. This policy scopes down
     * user access to portions of their Amazon S3 bucket. Variables that you can use
     * inside this policy include <code>${Transfer:UserName}</code>,
     * <code>${Transfer:HomeDirectory}</code>, and
     * <code>${Transfer:HomeBucket}</code>.</p>
     */
    inline void SetPolicy(const Aws::String& value) { m_policyHasBeenSet = true; m_policy = value; }

    /**
     * <p>A scope-down policy for your user so that you can use the same AWS Identity
     * and Access Management (IAM) role across multiple users. This policy scopes down
     * user access to portions of their Amazon S3 bucket. Variables that you can use
     * inside this policy include <code>${Transfer:UserName}</code>,
     * <code>${Transfer:HomeDirectory}</code>, and
     * <code>${Transfer:HomeBucket}</code>.</p>
     */
    inline void SetPolicy(Aws::String&& value) { m_policyHasBeenSet = true; m_policy = std::move(value); }

    /**
     * <p>A scope-down policy for your user so that you can use the same AWS Identity
     * and Access Management (IAM) role across multiple users. This policy scopes down
     * user access to portions of their Amazon S3 bucket. Variables that you can use
     * inside this policy include <code>${Transfer:UserName}</code>,
     * <code>${Transfer:HomeDirectory}</code>, and
     * <code>${Transfer:HomeBucket}</code>.</p>
     */
    inline void SetPolicy(const char* value) { m_policyHasBeenSet = true; m_policy.assign(value); }

    /**
     * <p>A scope-down policy for your user so that you can use the same AWS Identity
     * and Access Management (IAM) role across multiple users. This policy scopes down
     * user access to portions of their Amazon S3 bucket. Variables that you can use
     * inside this policy include <code>${Transfer:UserName}</code>,
     * <code>${Transfer:HomeDirectory}</code>, and
     * <code>${Transfer:HomeBucket}</code>.</p>
     */
    inline DescribedAccess& WithPolicy(const Aws::String& value) { SetPolicy(value); return *this;}

    /**
     * <p>A scope-down policy for your user so that you can use the same AWS Identity
     * and Access Management (IAM) role across multiple users. This policy scopes down
     * user access to portions of their Amazon S3 bucket. Variables that you can use
     * inside this policy include <code>${Transfer:UserName}</code>,
     * <code>${Transfer:HomeDirectory}</code>, and
     * <code>${Transfer:HomeBucket}</code>.</p>
     */
    inline DescribedAccess& WithPolicy(Aws::String&& value) { SetPolicy(std::move(value)); return *this;}

    /**
     * <p>A scope-down policy for your user so that you can use the same AWS Identity
     * and Access Management (IAM) role across multiple users. This policy scopes down
     * user access to portions of their Amazon S3 bucket. Variables that you can use
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
     * <p>The IAM role that controls access to your Amazon S3 bucket from the specified
     * associated access. The policies attached to this role will determine the level
     * of access that you want to provide the associated access when transferring files
     * into and out of your Amazon S3 bucket or buckets. The IAM role should also
     * contain a trust relationship that allows a server to access your resources when
     * servicing transfer requests for the associated access.</p>
     */
    inline const Aws::String& GetRole() const{ return m_role; }

    /**
     * <p>The IAM role that controls access to your Amazon S3 bucket from the specified
     * associated access. The policies attached to this role will determine the level
     * of access that you want to provide the associated access when transferring files
     * into and out of your Amazon S3 bucket or buckets. The IAM role should also
     * contain a trust relationship that allows a server to access your resources when
     * servicing transfer requests for the associated access.</p>
     */
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }

    /**
     * <p>The IAM role that controls access to your Amazon S3 bucket from the specified
     * associated access. The policies attached to this role will determine the level
     * of access that you want to provide the associated access when transferring files
     * into and out of your Amazon S3 bucket or buckets. The IAM role should also
     * contain a trust relationship that allows a server to access your resources when
     * servicing transfer requests for the associated access.</p>
     */
    inline void SetRole(const Aws::String& value) { m_roleHasBeenSet = true; m_role = value; }

    /**
     * <p>The IAM role that controls access to your Amazon S3 bucket from the specified
     * associated access. The policies attached to this role will determine the level
     * of access that you want to provide the associated access when transferring files
     * into and out of your Amazon S3 bucket or buckets. The IAM role should also
     * contain a trust relationship that allows a server to access your resources when
     * servicing transfer requests for the associated access.</p>
     */
    inline void SetRole(Aws::String&& value) { m_roleHasBeenSet = true; m_role = std::move(value); }

    /**
     * <p>The IAM role that controls access to your Amazon S3 bucket from the specified
     * associated access. The policies attached to this role will determine the level
     * of access that you want to provide the associated access when transferring files
     * into and out of your Amazon S3 bucket or buckets. The IAM role should also
     * contain a trust relationship that allows a server to access your resources when
     * servicing transfer requests for the associated access.</p>
     */
    inline void SetRole(const char* value) { m_roleHasBeenSet = true; m_role.assign(value); }

    /**
     * <p>The IAM role that controls access to your Amazon S3 bucket from the specified
     * associated access. The policies attached to this role will determine the level
     * of access that you want to provide the associated access when transferring files
     * into and out of your Amazon S3 bucket or buckets. The IAM role should also
     * contain a trust relationship that allows a server to access your resources when
     * servicing transfer requests for the associated access.</p>
     */
    inline DescribedAccess& WithRole(const Aws::String& value) { SetRole(value); return *this;}

    /**
     * <p>The IAM role that controls access to your Amazon S3 bucket from the specified
     * associated access. The policies attached to this role will determine the level
     * of access that you want to provide the associated access when transferring files
     * into and out of your Amazon S3 bucket or buckets. The IAM role should also
     * contain a trust relationship that allows a server to access your resources when
     * servicing transfer requests for the associated access.</p>
     */
    inline DescribedAccess& WithRole(Aws::String&& value) { SetRole(std::move(value)); return *this;}

    /**
     * <p>The IAM role that controls access to your Amazon S3 bucket from the specified
     * associated access. The policies attached to this role will determine the level
     * of access that you want to provide the associated access when transferring files
     * into and out of your Amazon S3 bucket or buckets. The IAM role should also
     * contain a trust relationship that allows a server to access your resources when
     * servicing transfer requests for the associated access.</p>
     */
    inline DescribedAccess& WithRole(const char* value) { SetRole(value); return *this;}


    /**
     * <p>A unique identifier that might be required when you assume a role in another
     * account. Think of the <code>ExternalID</code> as a group membership mechanism
     * that uses a unique identifier (often a SID, but could be a group name or
     * something else) as a basis. If the administrator of the account to which the
     * role belongs provided you with an external ID, then provide that value in the
     * <code>ExternalId</code> parameter. A cross-account role is usually set up to
     * trust everyone in an account. Therefore, the administrator of the trusting
     * account might send an external ID to the administrator of the trusted account.
     * That way, only someone with the ID can assume the role, rather than everyone in
     * the account.</p> <p>The regex used to validate this parameter is a string of
     * characters consisting of uppercase and lowercase alphanumeric characters with no
     * spaces. You can also include underscores or any of the following characters:
     * =,.@:/-</p>
     */
    inline const Aws::String& GetExternalId() const{ return m_externalId; }

    /**
     * <p>A unique identifier that might be required when you assume a role in another
     * account. Think of the <code>ExternalID</code> as a group membership mechanism
     * that uses a unique identifier (often a SID, but could be a group name or
     * something else) as a basis. If the administrator of the account to which the
     * role belongs provided you with an external ID, then provide that value in the
     * <code>ExternalId</code> parameter. A cross-account role is usually set up to
     * trust everyone in an account. Therefore, the administrator of the trusting
     * account might send an external ID to the administrator of the trusted account.
     * That way, only someone with the ID can assume the role, rather than everyone in
     * the account.</p> <p>The regex used to validate this parameter is a string of
     * characters consisting of uppercase and lowercase alphanumeric characters with no
     * spaces. You can also include underscores or any of the following characters:
     * =,.@:/-</p>
     */
    inline bool ExternalIdHasBeenSet() const { return m_externalIdHasBeenSet; }

    /**
     * <p>A unique identifier that might be required when you assume a role in another
     * account. Think of the <code>ExternalID</code> as a group membership mechanism
     * that uses a unique identifier (often a SID, but could be a group name or
     * something else) as a basis. If the administrator of the account to which the
     * role belongs provided you with an external ID, then provide that value in the
     * <code>ExternalId</code> parameter. A cross-account role is usually set up to
     * trust everyone in an account. Therefore, the administrator of the trusting
     * account might send an external ID to the administrator of the trusted account.
     * That way, only someone with the ID can assume the role, rather than everyone in
     * the account.</p> <p>The regex used to validate this parameter is a string of
     * characters consisting of uppercase and lowercase alphanumeric characters with no
     * spaces. You can also include underscores or any of the following characters:
     * =,.@:/-</p>
     */
    inline void SetExternalId(const Aws::String& value) { m_externalIdHasBeenSet = true; m_externalId = value; }

    /**
     * <p>A unique identifier that might be required when you assume a role in another
     * account. Think of the <code>ExternalID</code> as a group membership mechanism
     * that uses a unique identifier (often a SID, but could be a group name or
     * something else) as a basis. If the administrator of the account to which the
     * role belongs provided you with an external ID, then provide that value in the
     * <code>ExternalId</code> parameter. A cross-account role is usually set up to
     * trust everyone in an account. Therefore, the administrator of the trusting
     * account might send an external ID to the administrator of the trusted account.
     * That way, only someone with the ID can assume the role, rather than everyone in
     * the account.</p> <p>The regex used to validate this parameter is a string of
     * characters consisting of uppercase and lowercase alphanumeric characters with no
     * spaces. You can also include underscores or any of the following characters:
     * =,.@:/-</p>
     */
    inline void SetExternalId(Aws::String&& value) { m_externalIdHasBeenSet = true; m_externalId = std::move(value); }

    /**
     * <p>A unique identifier that might be required when you assume a role in another
     * account. Think of the <code>ExternalID</code> as a group membership mechanism
     * that uses a unique identifier (often a SID, but could be a group name or
     * something else) as a basis. If the administrator of the account to which the
     * role belongs provided you with an external ID, then provide that value in the
     * <code>ExternalId</code> parameter. A cross-account role is usually set up to
     * trust everyone in an account. Therefore, the administrator of the trusting
     * account might send an external ID to the administrator of the trusted account.
     * That way, only someone with the ID can assume the role, rather than everyone in
     * the account.</p> <p>The regex used to validate this parameter is a string of
     * characters consisting of uppercase and lowercase alphanumeric characters with no
     * spaces. You can also include underscores or any of the following characters:
     * =,.@:/-</p>
     */
    inline void SetExternalId(const char* value) { m_externalIdHasBeenSet = true; m_externalId.assign(value); }

    /**
     * <p>A unique identifier that might be required when you assume a role in another
     * account. Think of the <code>ExternalID</code> as a group membership mechanism
     * that uses a unique identifier (often a SID, but could be a group name or
     * something else) as a basis. If the administrator of the account to which the
     * role belongs provided you with an external ID, then provide that value in the
     * <code>ExternalId</code> parameter. A cross-account role is usually set up to
     * trust everyone in an account. Therefore, the administrator of the trusting
     * account might send an external ID to the administrator of the trusted account.
     * That way, only someone with the ID can assume the role, rather than everyone in
     * the account.</p> <p>The regex used to validate this parameter is a string of
     * characters consisting of uppercase and lowercase alphanumeric characters with no
     * spaces. You can also include underscores or any of the following characters:
     * =,.@:/-</p>
     */
    inline DescribedAccess& WithExternalId(const Aws::String& value) { SetExternalId(value); return *this;}

    /**
     * <p>A unique identifier that might be required when you assume a role in another
     * account. Think of the <code>ExternalID</code> as a group membership mechanism
     * that uses a unique identifier (often a SID, but could be a group name or
     * something else) as a basis. If the administrator of the account to which the
     * role belongs provided you with an external ID, then provide that value in the
     * <code>ExternalId</code> parameter. A cross-account role is usually set up to
     * trust everyone in an account. Therefore, the administrator of the trusting
     * account might send an external ID to the administrator of the trusted account.
     * That way, only someone with the ID can assume the role, rather than everyone in
     * the account.</p> <p>The regex used to validate this parameter is a string of
     * characters consisting of uppercase and lowercase alphanumeric characters with no
     * spaces. You can also include underscores or any of the following characters:
     * =,.@:/-</p>
     */
    inline DescribedAccess& WithExternalId(Aws::String&& value) { SetExternalId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier that might be required when you assume a role in another
     * account. Think of the <code>ExternalID</code> as a group membership mechanism
     * that uses a unique identifier (often a SID, but could be a group name or
     * something else) as a basis. If the administrator of the account to which the
     * role belongs provided you with an external ID, then provide that value in the
     * <code>ExternalId</code> parameter. A cross-account role is usually set up to
     * trust everyone in an account. Therefore, the administrator of the trusting
     * account might send an external ID to the administrator of the trusted account.
     * That way, only someone with the ID can assume the role, rather than everyone in
     * the account.</p> <p>The regex used to validate this parameter is a string of
     * characters consisting of uppercase and lowercase alphanumeric characters with no
     * spaces. You can also include underscores or any of the following characters:
     * =,.@:/-</p>
     */
    inline DescribedAccess& WithExternalId(const char* value) { SetExternalId(value); return *this;}

  private:

    Aws::String m_homeDirectory;
    bool m_homeDirectoryHasBeenSet;

    Aws::Vector<HomeDirectoryMapEntry> m_homeDirectoryMappings;
    bool m_homeDirectoryMappingsHasBeenSet;

    HomeDirectoryType m_homeDirectoryType;
    bool m_homeDirectoryTypeHasBeenSet;

    Aws::String m_policy;
    bool m_policyHasBeenSet;

    PosixProfile m_posixProfile;
    bool m_posixProfileHasBeenSet;

    Aws::String m_role;
    bool m_roleHasBeenSet;

    Aws::String m_externalId;
    bool m_externalIdHasBeenSet;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
