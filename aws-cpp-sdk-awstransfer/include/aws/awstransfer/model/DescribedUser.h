/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/awstransfer/model/HomeDirectoryType.h>
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
  class AWS_TRANSFER_API DescribedUser
  {
  public:
    DescribedUser();
    DescribedUser(Aws::Utils::Json::JsonView jsonValue);
    DescribedUser& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies the unique Amazon Resource Name (ARN) for the user that was
     * requested to be described.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>Specifies the unique Amazon Resource Name (ARN) for the user that was
     * requested to be described.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>Specifies the unique Amazon Resource Name (ARN) for the user that was
     * requested to be described.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>Specifies the unique Amazon Resource Name (ARN) for the user that was
     * requested to be described.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>Specifies the unique Amazon Resource Name (ARN) for the user that was
     * requested to be described.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>Specifies the unique Amazon Resource Name (ARN) for the user that was
     * requested to be described.</p>
     */
    inline DescribedUser& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>Specifies the unique Amazon Resource Name (ARN) for the user that was
     * requested to be described.</p>
     */
    inline DescribedUser& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>Specifies the unique Amazon Resource Name (ARN) for the user that was
     * requested to be described.</p>
     */
    inline DescribedUser& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>Specifies the landing directory (or folder), which is the location that files
     * are written to or read from in an Amazon S3 bucket, for the described user. An
     * example is <i> <code>your-Amazon-S3-bucket-name&gt;/home/username</code>
     * </i>.</p>
     */
    inline const Aws::String& GetHomeDirectory() const{ return m_homeDirectory; }

    /**
     * <p>Specifies the landing directory (or folder), which is the location that files
     * are written to or read from in an Amazon S3 bucket, for the described user. An
     * example is <i> <code>your-Amazon-S3-bucket-name&gt;/home/username</code>
     * </i>.</p>
     */
    inline bool HomeDirectoryHasBeenSet() const { return m_homeDirectoryHasBeenSet; }

    /**
     * <p>Specifies the landing directory (or folder), which is the location that files
     * are written to or read from in an Amazon S3 bucket, for the described user. An
     * example is <i> <code>your-Amazon-S3-bucket-name&gt;/home/username</code>
     * </i>.</p>
     */
    inline void SetHomeDirectory(const Aws::String& value) { m_homeDirectoryHasBeenSet = true; m_homeDirectory = value; }

    /**
     * <p>Specifies the landing directory (or folder), which is the location that files
     * are written to or read from in an Amazon S3 bucket, for the described user. An
     * example is <i> <code>your-Amazon-S3-bucket-name&gt;/home/username</code>
     * </i>.</p>
     */
    inline void SetHomeDirectory(Aws::String&& value) { m_homeDirectoryHasBeenSet = true; m_homeDirectory = std::move(value); }

    /**
     * <p>Specifies the landing directory (or folder), which is the location that files
     * are written to or read from in an Amazon S3 bucket, for the described user. An
     * example is <i> <code>your-Amazon-S3-bucket-name&gt;/home/username</code>
     * </i>.</p>
     */
    inline void SetHomeDirectory(const char* value) { m_homeDirectoryHasBeenSet = true; m_homeDirectory.assign(value); }

    /**
     * <p>Specifies the landing directory (or folder), which is the location that files
     * are written to or read from in an Amazon S3 bucket, for the described user. An
     * example is <i> <code>your-Amazon-S3-bucket-name&gt;/home/username</code>
     * </i>.</p>
     */
    inline DescribedUser& WithHomeDirectory(const Aws::String& value) { SetHomeDirectory(value); return *this;}

    /**
     * <p>Specifies the landing directory (or folder), which is the location that files
     * are written to or read from in an Amazon S3 bucket, for the described user. An
     * example is <i> <code>your-Amazon-S3-bucket-name&gt;/home/username</code>
     * </i>.</p>
     */
    inline DescribedUser& WithHomeDirectory(Aws::String&& value) { SetHomeDirectory(std::move(value)); return *this;}

    /**
     * <p>Specifies the landing directory (or folder), which is the location that files
     * are written to or read from in an Amazon S3 bucket, for the described user. An
     * example is <i> <code>your-Amazon-S3-bucket-name&gt;/home/username</code>
     * </i>.</p>
     */
    inline DescribedUser& WithHomeDirectory(const char* value) { SetHomeDirectory(value); return *this;}


    /**
     * <p>Specifies the logical directory mappings that specify what Amazon S3 paths
     * and keys should be visible to your user and how you want to make them visible.
     * You will need to specify the "<code>Entry</code>" and "<code>Target</code>"
     * pair, where <code>Entry</code> shows how the path is made visible and
     * <code>Target</code> is the actual Amazon S3 path. If you only specify a target,
     * it will be displayed as is. You will need to also make sure that your AWS
     * Identity and Access Management (IAM) role provides access to paths in
     * <code>Target</code>.</p> <p>In most cases, you can use this value instead of the
     * scope-down policy to lock your user down to the designated home directory
     * ("chroot"). To do this, you can set <code>Entry</code> to '/' and set
     * <code>Target</code> to the HomeDirectory parameter value.</p>
     */
    inline const Aws::Vector<HomeDirectoryMapEntry>& GetHomeDirectoryMappings() const{ return m_homeDirectoryMappings; }

    /**
     * <p>Specifies the logical directory mappings that specify what Amazon S3 paths
     * and keys should be visible to your user and how you want to make them visible.
     * You will need to specify the "<code>Entry</code>" and "<code>Target</code>"
     * pair, where <code>Entry</code> shows how the path is made visible and
     * <code>Target</code> is the actual Amazon S3 path. If you only specify a target,
     * it will be displayed as is. You will need to also make sure that your AWS
     * Identity and Access Management (IAM) role provides access to paths in
     * <code>Target</code>.</p> <p>In most cases, you can use this value instead of the
     * scope-down policy to lock your user down to the designated home directory
     * ("chroot"). To do this, you can set <code>Entry</code> to '/' and set
     * <code>Target</code> to the HomeDirectory parameter value.</p>
     */
    inline bool HomeDirectoryMappingsHasBeenSet() const { return m_homeDirectoryMappingsHasBeenSet; }

    /**
     * <p>Specifies the logical directory mappings that specify what Amazon S3 paths
     * and keys should be visible to your user and how you want to make them visible.
     * You will need to specify the "<code>Entry</code>" and "<code>Target</code>"
     * pair, where <code>Entry</code> shows how the path is made visible and
     * <code>Target</code> is the actual Amazon S3 path. If you only specify a target,
     * it will be displayed as is. You will need to also make sure that your AWS
     * Identity and Access Management (IAM) role provides access to paths in
     * <code>Target</code>.</p> <p>In most cases, you can use this value instead of the
     * scope-down policy to lock your user down to the designated home directory
     * ("chroot"). To do this, you can set <code>Entry</code> to '/' and set
     * <code>Target</code> to the HomeDirectory parameter value.</p>
     */
    inline void SetHomeDirectoryMappings(const Aws::Vector<HomeDirectoryMapEntry>& value) { m_homeDirectoryMappingsHasBeenSet = true; m_homeDirectoryMappings = value; }

    /**
     * <p>Specifies the logical directory mappings that specify what Amazon S3 paths
     * and keys should be visible to your user and how you want to make them visible.
     * You will need to specify the "<code>Entry</code>" and "<code>Target</code>"
     * pair, where <code>Entry</code> shows how the path is made visible and
     * <code>Target</code> is the actual Amazon S3 path. If you only specify a target,
     * it will be displayed as is. You will need to also make sure that your AWS
     * Identity and Access Management (IAM) role provides access to paths in
     * <code>Target</code>.</p> <p>In most cases, you can use this value instead of the
     * scope-down policy to lock your user down to the designated home directory
     * ("chroot"). To do this, you can set <code>Entry</code> to '/' and set
     * <code>Target</code> to the HomeDirectory parameter value.</p>
     */
    inline void SetHomeDirectoryMappings(Aws::Vector<HomeDirectoryMapEntry>&& value) { m_homeDirectoryMappingsHasBeenSet = true; m_homeDirectoryMappings = std::move(value); }

    /**
     * <p>Specifies the logical directory mappings that specify what Amazon S3 paths
     * and keys should be visible to your user and how you want to make them visible.
     * You will need to specify the "<code>Entry</code>" and "<code>Target</code>"
     * pair, where <code>Entry</code> shows how the path is made visible and
     * <code>Target</code> is the actual Amazon S3 path. If you only specify a target,
     * it will be displayed as is. You will need to also make sure that your AWS
     * Identity and Access Management (IAM) role provides access to paths in
     * <code>Target</code>.</p> <p>In most cases, you can use this value instead of the
     * scope-down policy to lock your user down to the designated home directory
     * ("chroot"). To do this, you can set <code>Entry</code> to '/' and set
     * <code>Target</code> to the HomeDirectory parameter value.</p>
     */
    inline DescribedUser& WithHomeDirectoryMappings(const Aws::Vector<HomeDirectoryMapEntry>& value) { SetHomeDirectoryMappings(value); return *this;}

    /**
     * <p>Specifies the logical directory mappings that specify what Amazon S3 paths
     * and keys should be visible to your user and how you want to make them visible.
     * You will need to specify the "<code>Entry</code>" and "<code>Target</code>"
     * pair, where <code>Entry</code> shows how the path is made visible and
     * <code>Target</code> is the actual Amazon S3 path. If you only specify a target,
     * it will be displayed as is. You will need to also make sure that your AWS
     * Identity and Access Management (IAM) role provides access to paths in
     * <code>Target</code>.</p> <p>In most cases, you can use this value instead of the
     * scope-down policy to lock your user down to the designated home directory
     * ("chroot"). To do this, you can set <code>Entry</code> to '/' and set
     * <code>Target</code> to the HomeDirectory parameter value.</p>
     */
    inline DescribedUser& WithHomeDirectoryMappings(Aws::Vector<HomeDirectoryMapEntry>&& value) { SetHomeDirectoryMappings(std::move(value)); return *this;}

    /**
     * <p>Specifies the logical directory mappings that specify what Amazon S3 paths
     * and keys should be visible to your user and how you want to make them visible.
     * You will need to specify the "<code>Entry</code>" and "<code>Target</code>"
     * pair, where <code>Entry</code> shows how the path is made visible and
     * <code>Target</code> is the actual Amazon S3 path. If you only specify a target,
     * it will be displayed as is. You will need to also make sure that your AWS
     * Identity and Access Management (IAM) role provides access to paths in
     * <code>Target</code>.</p> <p>In most cases, you can use this value instead of the
     * scope-down policy to lock your user down to the designated home directory
     * ("chroot"). To do this, you can set <code>Entry</code> to '/' and set
     * <code>Target</code> to the HomeDirectory parameter value.</p>
     */
    inline DescribedUser& AddHomeDirectoryMappings(const HomeDirectoryMapEntry& value) { m_homeDirectoryMappingsHasBeenSet = true; m_homeDirectoryMappings.push_back(value); return *this; }

    /**
     * <p>Specifies the logical directory mappings that specify what Amazon S3 paths
     * and keys should be visible to your user and how you want to make them visible.
     * You will need to specify the "<code>Entry</code>" and "<code>Target</code>"
     * pair, where <code>Entry</code> shows how the path is made visible and
     * <code>Target</code> is the actual Amazon S3 path. If you only specify a target,
     * it will be displayed as is. You will need to also make sure that your AWS
     * Identity and Access Management (IAM) role provides access to paths in
     * <code>Target</code>.</p> <p>In most cases, you can use this value instead of the
     * scope-down policy to lock your user down to the designated home directory
     * ("chroot"). To do this, you can set <code>Entry</code> to '/' and set
     * <code>Target</code> to the HomeDirectory parameter value.</p>
     */
    inline DescribedUser& AddHomeDirectoryMappings(HomeDirectoryMapEntry&& value) { m_homeDirectoryMappingsHasBeenSet = true; m_homeDirectoryMappings.push_back(std::move(value)); return *this; }


    /**
     * <p>Specifies the type of landing directory (folder) you mapped for your users to
     * see when they log into the file transfer protocol-enabled server. If you set it
     * to <code>PATH</code>, the user will see the absolute Amazon S3 bucket paths as
     * is in their file transfer protocol clients. If you set it <code>LOGICAL</code>,
     * you will need to provide mappings in the <code>HomeDirectoryMappings</code> for
     * how you want to make Amazon S3 paths visible to your users.</p>
     */
    inline const HomeDirectoryType& GetHomeDirectoryType() const{ return m_homeDirectoryType; }

    /**
     * <p>Specifies the type of landing directory (folder) you mapped for your users to
     * see when they log into the file transfer protocol-enabled server. If you set it
     * to <code>PATH</code>, the user will see the absolute Amazon S3 bucket paths as
     * is in their file transfer protocol clients. If you set it <code>LOGICAL</code>,
     * you will need to provide mappings in the <code>HomeDirectoryMappings</code> for
     * how you want to make Amazon S3 paths visible to your users.</p>
     */
    inline bool HomeDirectoryTypeHasBeenSet() const { return m_homeDirectoryTypeHasBeenSet; }

    /**
     * <p>Specifies the type of landing directory (folder) you mapped for your users to
     * see when they log into the file transfer protocol-enabled server. If you set it
     * to <code>PATH</code>, the user will see the absolute Amazon S3 bucket paths as
     * is in their file transfer protocol clients. If you set it <code>LOGICAL</code>,
     * you will need to provide mappings in the <code>HomeDirectoryMappings</code> for
     * how you want to make Amazon S3 paths visible to your users.</p>
     */
    inline void SetHomeDirectoryType(const HomeDirectoryType& value) { m_homeDirectoryTypeHasBeenSet = true; m_homeDirectoryType = value; }

    /**
     * <p>Specifies the type of landing directory (folder) you mapped for your users to
     * see when they log into the file transfer protocol-enabled server. If you set it
     * to <code>PATH</code>, the user will see the absolute Amazon S3 bucket paths as
     * is in their file transfer protocol clients. If you set it <code>LOGICAL</code>,
     * you will need to provide mappings in the <code>HomeDirectoryMappings</code> for
     * how you want to make Amazon S3 paths visible to your users.</p>
     */
    inline void SetHomeDirectoryType(HomeDirectoryType&& value) { m_homeDirectoryTypeHasBeenSet = true; m_homeDirectoryType = std::move(value); }

    /**
     * <p>Specifies the type of landing directory (folder) you mapped for your users to
     * see when they log into the file transfer protocol-enabled server. If you set it
     * to <code>PATH</code>, the user will see the absolute Amazon S3 bucket paths as
     * is in their file transfer protocol clients. If you set it <code>LOGICAL</code>,
     * you will need to provide mappings in the <code>HomeDirectoryMappings</code> for
     * how you want to make Amazon S3 paths visible to your users.</p>
     */
    inline DescribedUser& WithHomeDirectoryType(const HomeDirectoryType& value) { SetHomeDirectoryType(value); return *this;}

    /**
     * <p>Specifies the type of landing directory (folder) you mapped for your users to
     * see when they log into the file transfer protocol-enabled server. If you set it
     * to <code>PATH</code>, the user will see the absolute Amazon S3 bucket paths as
     * is in their file transfer protocol clients. If you set it <code>LOGICAL</code>,
     * you will need to provide mappings in the <code>HomeDirectoryMappings</code> for
     * how you want to make Amazon S3 paths visible to your users.</p>
     */
    inline DescribedUser& WithHomeDirectoryType(HomeDirectoryType&& value) { SetHomeDirectoryType(std::move(value)); return *this;}


    /**
     * <p>Specifies the name of the policy in use for the described user.</p>
     */
    inline const Aws::String& GetPolicy() const{ return m_policy; }

    /**
     * <p>Specifies the name of the policy in use for the described user.</p>
     */
    inline bool PolicyHasBeenSet() const { return m_policyHasBeenSet; }

    /**
     * <p>Specifies the name of the policy in use for the described user.</p>
     */
    inline void SetPolicy(const Aws::String& value) { m_policyHasBeenSet = true; m_policy = value; }

    /**
     * <p>Specifies the name of the policy in use for the described user.</p>
     */
    inline void SetPolicy(Aws::String&& value) { m_policyHasBeenSet = true; m_policy = std::move(value); }

    /**
     * <p>Specifies the name of the policy in use for the described user.</p>
     */
    inline void SetPolicy(const char* value) { m_policyHasBeenSet = true; m_policy.assign(value); }

    /**
     * <p>Specifies the name of the policy in use for the described user.</p>
     */
    inline DescribedUser& WithPolicy(const Aws::String& value) { SetPolicy(value); return *this;}

    /**
     * <p>Specifies the name of the policy in use for the described user.</p>
     */
    inline DescribedUser& WithPolicy(Aws::String&& value) { SetPolicy(std::move(value)); return *this;}

    /**
     * <p>Specifies the name of the policy in use for the described user.</p>
     */
    inline DescribedUser& WithPolicy(const char* value) { SetPolicy(value); return *this;}


    /**
     * <p>Specifies the IAM role that controls your users' access to your Amazon S3
     * bucket. The policies attached to this role will determine the level of access
     * you want to provide your users when transferring files into and out of your
     * Amazon S3 bucket or buckets. The IAM role should also contain a trust
     * relationship that allows a server to access your resources when servicing your
     * users' transfer requests.</p>
     */
    inline const Aws::String& GetRole() const{ return m_role; }

    /**
     * <p>Specifies the IAM role that controls your users' access to your Amazon S3
     * bucket. The policies attached to this role will determine the level of access
     * you want to provide your users when transferring files into and out of your
     * Amazon S3 bucket or buckets. The IAM role should also contain a trust
     * relationship that allows a server to access your resources when servicing your
     * users' transfer requests.</p>
     */
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }

    /**
     * <p>Specifies the IAM role that controls your users' access to your Amazon S3
     * bucket. The policies attached to this role will determine the level of access
     * you want to provide your users when transferring files into and out of your
     * Amazon S3 bucket or buckets. The IAM role should also contain a trust
     * relationship that allows a server to access your resources when servicing your
     * users' transfer requests.</p>
     */
    inline void SetRole(const Aws::String& value) { m_roleHasBeenSet = true; m_role = value; }

    /**
     * <p>Specifies the IAM role that controls your users' access to your Amazon S3
     * bucket. The policies attached to this role will determine the level of access
     * you want to provide your users when transferring files into and out of your
     * Amazon S3 bucket or buckets. The IAM role should also contain a trust
     * relationship that allows a server to access your resources when servicing your
     * users' transfer requests.</p>
     */
    inline void SetRole(Aws::String&& value) { m_roleHasBeenSet = true; m_role = std::move(value); }

    /**
     * <p>Specifies the IAM role that controls your users' access to your Amazon S3
     * bucket. The policies attached to this role will determine the level of access
     * you want to provide your users when transferring files into and out of your
     * Amazon S3 bucket or buckets. The IAM role should also contain a trust
     * relationship that allows a server to access your resources when servicing your
     * users' transfer requests.</p>
     */
    inline void SetRole(const char* value) { m_roleHasBeenSet = true; m_role.assign(value); }

    /**
     * <p>Specifies the IAM role that controls your users' access to your Amazon S3
     * bucket. The policies attached to this role will determine the level of access
     * you want to provide your users when transferring files into and out of your
     * Amazon S3 bucket or buckets. The IAM role should also contain a trust
     * relationship that allows a server to access your resources when servicing your
     * users' transfer requests.</p>
     */
    inline DescribedUser& WithRole(const Aws::String& value) { SetRole(value); return *this;}

    /**
     * <p>Specifies the IAM role that controls your users' access to your Amazon S3
     * bucket. The policies attached to this role will determine the level of access
     * you want to provide your users when transferring files into and out of your
     * Amazon S3 bucket or buckets. The IAM role should also contain a trust
     * relationship that allows a server to access your resources when servicing your
     * users' transfer requests.</p>
     */
    inline DescribedUser& WithRole(Aws::String&& value) { SetRole(std::move(value)); return *this;}

    /**
     * <p>Specifies the IAM role that controls your users' access to your Amazon S3
     * bucket. The policies attached to this role will determine the level of access
     * you want to provide your users when transferring files into and out of your
     * Amazon S3 bucket or buckets. The IAM role should also contain a trust
     * relationship that allows a server to access your resources when servicing your
     * users' transfer requests.</p>
     */
    inline DescribedUser& WithRole(const char* value) { SetRole(value); return *this;}


    /**
     * <p>Specifies the public key portion of the Secure Shell (SSH) keys stored for
     * the described user.</p>
     */
    inline const Aws::Vector<SshPublicKey>& GetSshPublicKeys() const{ return m_sshPublicKeys; }

    /**
     * <p>Specifies the public key portion of the Secure Shell (SSH) keys stored for
     * the described user.</p>
     */
    inline bool SshPublicKeysHasBeenSet() const { return m_sshPublicKeysHasBeenSet; }

    /**
     * <p>Specifies the public key portion of the Secure Shell (SSH) keys stored for
     * the described user.</p>
     */
    inline void SetSshPublicKeys(const Aws::Vector<SshPublicKey>& value) { m_sshPublicKeysHasBeenSet = true; m_sshPublicKeys = value; }

    /**
     * <p>Specifies the public key portion of the Secure Shell (SSH) keys stored for
     * the described user.</p>
     */
    inline void SetSshPublicKeys(Aws::Vector<SshPublicKey>&& value) { m_sshPublicKeysHasBeenSet = true; m_sshPublicKeys = std::move(value); }

    /**
     * <p>Specifies the public key portion of the Secure Shell (SSH) keys stored for
     * the described user.</p>
     */
    inline DescribedUser& WithSshPublicKeys(const Aws::Vector<SshPublicKey>& value) { SetSshPublicKeys(value); return *this;}

    /**
     * <p>Specifies the public key portion of the Secure Shell (SSH) keys stored for
     * the described user.</p>
     */
    inline DescribedUser& WithSshPublicKeys(Aws::Vector<SshPublicKey>&& value) { SetSshPublicKeys(std::move(value)); return *this;}

    /**
     * <p>Specifies the public key portion of the Secure Shell (SSH) keys stored for
     * the described user.</p>
     */
    inline DescribedUser& AddSshPublicKeys(const SshPublicKey& value) { m_sshPublicKeysHasBeenSet = true; m_sshPublicKeys.push_back(value); return *this; }

    /**
     * <p>Specifies the public key portion of the Secure Shell (SSH) keys stored for
     * the described user.</p>
     */
    inline DescribedUser& AddSshPublicKeys(SshPublicKey&& value) { m_sshPublicKeysHasBeenSet = true; m_sshPublicKeys.push_back(std::move(value)); return *this; }


    /**
     * <p>Specifies the key-value pairs for the user requested. Tag can be used to
     * search for and group users for a variety of purposes.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Specifies the key-value pairs for the user requested. Tag can be used to
     * search for and group users for a variety of purposes.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Specifies the key-value pairs for the user requested. Tag can be used to
     * search for and group users for a variety of purposes.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Specifies the key-value pairs for the user requested. Tag can be used to
     * search for and group users for a variety of purposes.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Specifies the key-value pairs for the user requested. Tag can be used to
     * search for and group users for a variety of purposes.</p>
     */
    inline DescribedUser& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Specifies the key-value pairs for the user requested. Tag can be used to
     * search for and group users for a variety of purposes.</p>
     */
    inline DescribedUser& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Specifies the key-value pairs for the user requested. Tag can be used to
     * search for and group users for a variety of purposes.</p>
     */
    inline DescribedUser& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Specifies the key-value pairs for the user requested. Tag can be used to
     * search for and group users for a variety of purposes.</p>
     */
    inline DescribedUser& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>Specifies the name of the user that was requested to be described. User names
     * are used for authentication purposes. This is the string that will be used by
     * your user when they log in to your server.</p>
     */
    inline const Aws::String& GetUserName() const{ return m_userName; }

    /**
     * <p>Specifies the name of the user that was requested to be described. User names
     * are used for authentication purposes. This is the string that will be used by
     * your user when they log in to your server.</p>
     */
    inline bool UserNameHasBeenSet() const { return m_userNameHasBeenSet; }

    /**
     * <p>Specifies the name of the user that was requested to be described. User names
     * are used for authentication purposes. This is the string that will be used by
     * your user when they log in to your server.</p>
     */
    inline void SetUserName(const Aws::String& value) { m_userNameHasBeenSet = true; m_userName = value; }

    /**
     * <p>Specifies the name of the user that was requested to be described. User names
     * are used for authentication purposes. This is the string that will be used by
     * your user when they log in to your server.</p>
     */
    inline void SetUserName(Aws::String&& value) { m_userNameHasBeenSet = true; m_userName = std::move(value); }

    /**
     * <p>Specifies the name of the user that was requested to be described. User names
     * are used for authentication purposes. This is the string that will be used by
     * your user when they log in to your server.</p>
     */
    inline void SetUserName(const char* value) { m_userNameHasBeenSet = true; m_userName.assign(value); }

    /**
     * <p>Specifies the name of the user that was requested to be described. User names
     * are used for authentication purposes. This is the string that will be used by
     * your user when they log in to your server.</p>
     */
    inline DescribedUser& WithUserName(const Aws::String& value) { SetUserName(value); return *this;}

    /**
     * <p>Specifies the name of the user that was requested to be described. User names
     * are used for authentication purposes. This is the string that will be used by
     * your user when they log in to your server.</p>
     */
    inline DescribedUser& WithUserName(Aws::String&& value) { SetUserName(std::move(value)); return *this;}

    /**
     * <p>Specifies the name of the user that was requested to be described. User names
     * are used for authentication purposes. This is the string that will be used by
     * your user when they log in to your server.</p>
     */
    inline DescribedUser& WithUserName(const char* value) { SetUserName(value); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    Aws::String m_homeDirectory;
    bool m_homeDirectoryHasBeenSet;

    Aws::Vector<HomeDirectoryMapEntry> m_homeDirectoryMappings;
    bool m_homeDirectoryMappingsHasBeenSet;

    HomeDirectoryType m_homeDirectoryType;
    bool m_homeDirectoryTypeHasBeenSet;

    Aws::String m_policy;
    bool m_policyHasBeenSet;

    Aws::String m_role;
    bool m_roleHasBeenSet;

    Aws::Vector<SshPublicKey> m_sshPublicKeys;
    bool m_sshPublicKeysHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;

    Aws::String m_userName;
    bool m_userNameHasBeenSet;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
