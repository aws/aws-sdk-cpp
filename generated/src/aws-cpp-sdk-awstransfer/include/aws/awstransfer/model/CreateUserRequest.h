/**
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
  class CreateUserRequest : public TransferRequest
  {
  public:
    AWS_TRANSFER_API CreateUserRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateUser"; }

    AWS_TRANSFER_API Aws::String SerializePayload() const override;

    AWS_TRANSFER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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
    inline CreateUserRequest& WithHomeDirectory(const Aws::String& value) { SetHomeDirectory(value); return *this;}

    /**
     * <p>The landing directory (folder) for a user when they log in to the server
     * using the client.</p> <p>A <code>HomeDirectory</code> example is
     * <code>/bucket_name/home/mydirectory</code>.</p>
     */
    inline CreateUserRequest& WithHomeDirectory(Aws::String&& value) { SetHomeDirectory(std::move(value)); return *this;}

    /**
     * <p>The landing directory (folder) for a user when they log in to the server
     * using the client.</p> <p>A <code>HomeDirectory</code> example is
     * <code>/bucket_name/home/mydirectory</code>.</p>
     */
    inline CreateUserRequest& WithHomeDirectory(const char* value) { SetHomeDirectory(value); return *this;}


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
    inline CreateUserRequest& WithHomeDirectoryType(const HomeDirectoryType& value) { SetHomeDirectoryType(value); return *this;}

    /**
     * <p>The type of landing directory (folder) that you want your users' home
     * directory to be when they log in to the server. If you set it to
     * <code>PATH</code>, the user will see the absolute Amazon S3 bucket or EFS paths
     * as is in their file transfer protocol clients. If you set it
     * <code>LOGICAL</code>, you need to provide mappings in the
     * <code>HomeDirectoryMappings</code> for how you want to make Amazon S3 or Amazon
     * EFS paths visible to your users.</p>
     */
    inline CreateUserRequest& WithHomeDirectoryType(HomeDirectoryType&& value) { SetHomeDirectoryType(std::move(value)); return *this;}


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
     * this value instead of the session policy to lock your user down to the
     * designated home directory ("<code>chroot</code>"). To do this, you can set
     * <code>Entry</code> to <code>/</code> and set <code>Target</code> to the
     * HomeDirectory parameter value.</p> <p>The following is an <code>Entry</code> and
     * <code>Target</code> pair example for <code>chroot</code>.</p> <p> <code>[ {
     * "Entry": "/", "Target": "/bucket_name/home/mydirectory" } ]</code> </p>
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
     * set only when <code>HomeDirectoryType</code> is set to <i>LOGICAL</i>.</p>
     * <p>The following is an <code>Entry</code> and <code>Target</code> pair
     * example.</p> <p> <code>[ { "Entry": "/directory1", "Target":
     * "/bucket_name/home/mydirectory" } ]</code> </p> <p>In most cases, you can use
     * this value instead of the session policy to lock your user down to the
     * designated home directory ("<code>chroot</code>"). To do this, you can set
     * <code>Entry</code> to <code>/</code> and set <code>Target</code> to the
     * HomeDirectory parameter value.</p> <p>The following is an <code>Entry</code> and
     * <code>Target</code> pair example for <code>chroot</code>.</p> <p> <code>[ {
     * "Entry": "/", "Target": "/bucket_name/home/mydirectory" } ]</code> </p>
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
     * set only when <code>HomeDirectoryType</code> is set to <i>LOGICAL</i>.</p>
     * <p>The following is an <code>Entry</code> and <code>Target</code> pair
     * example.</p> <p> <code>[ { "Entry": "/directory1", "Target":
     * "/bucket_name/home/mydirectory" } ]</code> </p> <p>In most cases, you can use
     * this value instead of the session policy to lock your user down to the
     * designated home directory ("<code>chroot</code>"). To do this, you can set
     * <code>Entry</code> to <code>/</code> and set <code>Target</code> to the
     * HomeDirectory parameter value.</p> <p>The following is an <code>Entry</code> and
     * <code>Target</code> pair example for <code>chroot</code>.</p> <p> <code>[ {
     * "Entry": "/", "Target": "/bucket_name/home/mydirectory" } ]</code> </p>
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
     * set only when <code>HomeDirectoryType</code> is set to <i>LOGICAL</i>.</p>
     * <p>The following is an <code>Entry</code> and <code>Target</code> pair
     * example.</p> <p> <code>[ { "Entry": "/directory1", "Target":
     * "/bucket_name/home/mydirectory" } ]</code> </p> <p>In most cases, you can use
     * this value instead of the session policy to lock your user down to the
     * designated home directory ("<code>chroot</code>"). To do this, you can set
     * <code>Entry</code> to <code>/</code> and set <code>Target</code> to the
     * HomeDirectory parameter value.</p> <p>The following is an <code>Entry</code> and
     * <code>Target</code> pair example for <code>chroot</code>.</p> <p> <code>[ {
     * "Entry": "/", "Target": "/bucket_name/home/mydirectory" } ]</code> </p>
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
     * set only when <code>HomeDirectoryType</code> is set to <i>LOGICAL</i>.</p>
     * <p>The following is an <code>Entry</code> and <code>Target</code> pair
     * example.</p> <p> <code>[ { "Entry": "/directory1", "Target":
     * "/bucket_name/home/mydirectory" } ]</code> </p> <p>In most cases, you can use
     * this value instead of the session policy to lock your user down to the
     * designated home directory ("<code>chroot</code>"). To do this, you can set
     * <code>Entry</code> to <code>/</code> and set <code>Target</code> to the
     * HomeDirectory parameter value.</p> <p>The following is an <code>Entry</code> and
     * <code>Target</code> pair example for <code>chroot</code>.</p> <p> <code>[ {
     * "Entry": "/", "Target": "/bucket_name/home/mydirectory" } ]</code> </p>
     */
    inline CreateUserRequest& WithHomeDirectoryMappings(const Aws::Vector<HomeDirectoryMapEntry>& value) { SetHomeDirectoryMappings(value); return *this;}

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
     * this value instead of the session policy to lock your user down to the
     * designated home directory ("<code>chroot</code>"). To do this, you can set
     * <code>Entry</code> to <code>/</code> and set <code>Target</code> to the
     * HomeDirectory parameter value.</p> <p>The following is an <code>Entry</code> and
     * <code>Target</code> pair example for <code>chroot</code>.</p> <p> <code>[ {
     * "Entry": "/", "Target": "/bucket_name/home/mydirectory" } ]</code> </p>
     */
    inline CreateUserRequest& WithHomeDirectoryMappings(Aws::Vector<HomeDirectoryMapEntry>&& value) { SetHomeDirectoryMappings(std::move(value)); return *this;}

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
     * this value instead of the session policy to lock your user down to the
     * designated home directory ("<code>chroot</code>"). To do this, you can set
     * <code>Entry</code> to <code>/</code> and set <code>Target</code> to the
     * HomeDirectory parameter value.</p> <p>The following is an <code>Entry</code> and
     * <code>Target</code> pair example for <code>chroot</code>.</p> <p> <code>[ {
     * "Entry": "/", "Target": "/bucket_name/home/mydirectory" } ]</code> </p>
     */
    inline CreateUserRequest& AddHomeDirectoryMappings(const HomeDirectoryMapEntry& value) { m_homeDirectoryMappingsHasBeenSet = true; m_homeDirectoryMappings.push_back(value); return *this; }

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
     * this value instead of the session policy to lock your user down to the
     * designated home directory ("<code>chroot</code>"). To do this, you can set
     * <code>Entry</code> to <code>/</code> and set <code>Target</code> to the
     * HomeDirectory parameter value.</p> <p>The following is an <code>Entry</code> and
     * <code>Target</code> pair example for <code>chroot</code>.</p> <p> <code>[ {
     * "Entry": "/", "Target": "/bucket_name/home/mydirectory" } ]</code> </p>
     */
    inline CreateUserRequest& AddHomeDirectoryMappings(HomeDirectoryMapEntry&& value) { m_homeDirectoryMappingsHasBeenSet = true; m_homeDirectoryMappings.push_back(std::move(value)); return *this; }


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
     * href="https://docs.aws.amazon.com/transfer/latest/userguide/session-policy.html">Example
     * session policy</a>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/STS/latest/APIReference/API_AssumeRole.html">AssumeRole</a>
     * in the <i>Amazon Web Services Security Token Service API Reference</i>.</p>
     * 
     */
    inline const Aws::String& GetPolicy() const{ return m_policy; }

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
     * href="https://docs.aws.amazon.com/transfer/latest/userguide/session-policy.html">Example
     * session policy</a>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/STS/latest/APIReference/API_AssumeRole.html">AssumeRole</a>
     * in the <i>Amazon Web Services Security Token Service API Reference</i>.</p>
     * 
     */
    inline bool PolicyHasBeenSet() const { return m_policyHasBeenSet; }

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
     * href="https://docs.aws.amazon.com/transfer/latest/userguide/session-policy.html">Example
     * session policy</a>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/STS/latest/APIReference/API_AssumeRole.html">AssumeRole</a>
     * in the <i>Amazon Web Services Security Token Service API Reference</i>.</p>
     * 
     */
    inline void SetPolicy(const Aws::String& value) { m_policyHasBeenSet = true; m_policy = value; }

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
     * href="https://docs.aws.amazon.com/transfer/latest/userguide/session-policy.html">Example
     * session policy</a>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/STS/latest/APIReference/API_AssumeRole.html">AssumeRole</a>
     * in the <i>Amazon Web Services Security Token Service API Reference</i>.</p>
     * 
     */
    inline void SetPolicy(Aws::String&& value) { m_policyHasBeenSet = true; m_policy = std::move(value); }

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
     * href="https://docs.aws.amazon.com/transfer/latest/userguide/session-policy.html">Example
     * session policy</a>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/STS/latest/APIReference/API_AssumeRole.html">AssumeRole</a>
     * in the <i>Amazon Web Services Security Token Service API Reference</i>.</p>
     * 
     */
    inline void SetPolicy(const char* value) { m_policyHasBeenSet = true; m_policy.assign(value); }

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
     * href="https://docs.aws.amazon.com/transfer/latest/userguide/session-policy.html">Example
     * session policy</a>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/STS/latest/APIReference/API_AssumeRole.html">AssumeRole</a>
     * in the <i>Amazon Web Services Security Token Service API Reference</i>.</p>
     * 
     */
    inline CreateUserRequest& WithPolicy(const Aws::String& value) { SetPolicy(value); return *this;}

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
     * href="https://docs.aws.amazon.com/transfer/latest/userguide/session-policy.html">Example
     * session policy</a>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/STS/latest/APIReference/API_AssumeRole.html">AssumeRole</a>
     * in the <i>Amazon Web Services Security Token Service API Reference</i>.</p>
     * 
     */
    inline CreateUserRequest& WithPolicy(Aws::String&& value) { SetPolicy(std::move(value)); return *this;}

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
     * href="https://docs.aws.amazon.com/transfer/latest/userguide/session-policy.html">Example
     * session policy</a>.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/STS/latest/APIReference/API_AssumeRole.html">AssumeRole</a>
     * in the <i>Amazon Web Services Security Token Service API Reference</i>.</p>
     * 
     */
    inline CreateUserRequest& WithPolicy(const char* value) { SetPolicy(value); return *this;}


    /**
     * <p>Specifies the full POSIX identity, including user ID (<code>Uid</code>),
     * group ID (<code>Gid</code>), and any secondary groups IDs
     * (<code>SecondaryGids</code>), that controls your users' access to your Amazon
     * EFS file systems. The POSIX permissions that are set on files and directories in
     * Amazon EFS determine the level of access your users get when transferring files
     * into and out of your Amazon EFS file systems.</p>
     */
    inline const PosixProfile& GetPosixProfile() const{ return m_posixProfile; }

    /**
     * <p>Specifies the full POSIX identity, including user ID (<code>Uid</code>),
     * group ID (<code>Gid</code>), and any secondary groups IDs
     * (<code>SecondaryGids</code>), that controls your users' access to your Amazon
     * EFS file systems. The POSIX permissions that are set on files and directories in
     * Amazon EFS determine the level of access your users get when transferring files
     * into and out of your Amazon EFS file systems.</p>
     */
    inline bool PosixProfileHasBeenSet() const { return m_posixProfileHasBeenSet; }

    /**
     * <p>Specifies the full POSIX identity, including user ID (<code>Uid</code>),
     * group ID (<code>Gid</code>), and any secondary groups IDs
     * (<code>SecondaryGids</code>), that controls your users' access to your Amazon
     * EFS file systems. The POSIX permissions that are set on files and directories in
     * Amazon EFS determine the level of access your users get when transferring files
     * into and out of your Amazon EFS file systems.</p>
     */
    inline void SetPosixProfile(const PosixProfile& value) { m_posixProfileHasBeenSet = true; m_posixProfile = value; }

    /**
     * <p>Specifies the full POSIX identity, including user ID (<code>Uid</code>),
     * group ID (<code>Gid</code>), and any secondary groups IDs
     * (<code>SecondaryGids</code>), that controls your users' access to your Amazon
     * EFS file systems. The POSIX permissions that are set on files and directories in
     * Amazon EFS determine the level of access your users get when transferring files
     * into and out of your Amazon EFS file systems.</p>
     */
    inline void SetPosixProfile(PosixProfile&& value) { m_posixProfileHasBeenSet = true; m_posixProfile = std::move(value); }

    /**
     * <p>Specifies the full POSIX identity, including user ID (<code>Uid</code>),
     * group ID (<code>Gid</code>), and any secondary groups IDs
     * (<code>SecondaryGids</code>), that controls your users' access to your Amazon
     * EFS file systems. The POSIX permissions that are set on files and directories in
     * Amazon EFS determine the level of access your users get when transferring files
     * into and out of your Amazon EFS file systems.</p>
     */
    inline CreateUserRequest& WithPosixProfile(const PosixProfile& value) { SetPosixProfile(value); return *this;}

    /**
     * <p>Specifies the full POSIX identity, including user ID (<code>Uid</code>),
     * group ID (<code>Gid</code>), and any secondary groups IDs
     * (<code>SecondaryGids</code>), that controls your users' access to your Amazon
     * EFS file systems. The POSIX permissions that are set on files and directories in
     * Amazon EFS determine the level of access your users get when transferring files
     * into and out of your Amazon EFS file systems.</p>
     */
    inline CreateUserRequest& WithPosixProfile(PosixProfile&& value) { SetPosixProfile(std::move(value)); return *this;}


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
    inline CreateUserRequest& WithRole(const Aws::String& value) { SetRole(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Identity and Access Management (IAM)
     * role that controls your users' access to your Amazon S3 bucket or Amazon EFS
     * file system. The policies attached to this role determine the level of access
     * that you want to provide your users when transferring files into and out of your
     * Amazon S3 bucket or Amazon EFS file system. The IAM role should also contain a
     * trust relationship that allows the server to access your resources when
     * servicing your users' transfer requests.</p>
     */
    inline CreateUserRequest& WithRole(Aws::String&& value) { SetRole(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Identity and Access Management (IAM)
     * role that controls your users' access to your Amazon S3 bucket or Amazon EFS
     * file system. The policies attached to this role determine the level of access
     * that you want to provide your users when transferring files into and out of your
     * Amazon S3 bucket or Amazon EFS file system. The IAM role should also contain a
     * trust relationship that allows the server to access your resources when
     * servicing your users' transfer requests.</p>
     */
    inline CreateUserRequest& WithRole(const char* value) { SetRole(value); return *this;}


    /**
     * <p>A system-assigned unique identifier for a server instance. This is the
     * specific server that you added your user to.</p>
     */
    inline const Aws::String& GetServerId() const{ return m_serverId; }

    /**
     * <p>A system-assigned unique identifier for a server instance. This is the
     * specific server that you added your user to.</p>
     */
    inline bool ServerIdHasBeenSet() const { return m_serverIdHasBeenSet; }

    /**
     * <p>A system-assigned unique identifier for a server instance. This is the
     * specific server that you added your user to.</p>
     */
    inline void SetServerId(const Aws::String& value) { m_serverIdHasBeenSet = true; m_serverId = value; }

    /**
     * <p>A system-assigned unique identifier for a server instance. This is the
     * specific server that you added your user to.</p>
     */
    inline void SetServerId(Aws::String&& value) { m_serverIdHasBeenSet = true; m_serverId = std::move(value); }

    /**
     * <p>A system-assigned unique identifier for a server instance. This is the
     * specific server that you added your user to.</p>
     */
    inline void SetServerId(const char* value) { m_serverIdHasBeenSet = true; m_serverId.assign(value); }

    /**
     * <p>A system-assigned unique identifier for a server instance. This is the
     * specific server that you added your user to.</p>
     */
    inline CreateUserRequest& WithServerId(const Aws::String& value) { SetServerId(value); return *this;}

    /**
     * <p>A system-assigned unique identifier for a server instance. This is the
     * specific server that you added your user to.</p>
     */
    inline CreateUserRequest& WithServerId(Aws::String&& value) { SetServerId(std::move(value)); return *this;}

    /**
     * <p>A system-assigned unique identifier for a server instance. This is the
     * specific server that you added your user to.</p>
     */
    inline CreateUserRequest& WithServerId(const char* value) { SetServerId(value); return *this;}


    /**
     * <p>The public portion of the Secure Shell (SSH) key used to authenticate the
     * user to the server.</p> <p>Transfer Family accepts RSA, ECDSA, and ED25519
     * keys.</p>
     */
    inline const Aws::String& GetSshPublicKeyBody() const{ return m_sshPublicKeyBody; }

    /**
     * <p>The public portion of the Secure Shell (SSH) key used to authenticate the
     * user to the server.</p> <p>Transfer Family accepts RSA, ECDSA, and ED25519
     * keys.</p>
     */
    inline bool SshPublicKeyBodyHasBeenSet() const { return m_sshPublicKeyBodyHasBeenSet; }

    /**
     * <p>The public portion of the Secure Shell (SSH) key used to authenticate the
     * user to the server.</p> <p>Transfer Family accepts RSA, ECDSA, and ED25519
     * keys.</p>
     */
    inline void SetSshPublicKeyBody(const Aws::String& value) { m_sshPublicKeyBodyHasBeenSet = true; m_sshPublicKeyBody = value; }

    /**
     * <p>The public portion of the Secure Shell (SSH) key used to authenticate the
     * user to the server.</p> <p>Transfer Family accepts RSA, ECDSA, and ED25519
     * keys.</p>
     */
    inline void SetSshPublicKeyBody(Aws::String&& value) { m_sshPublicKeyBodyHasBeenSet = true; m_sshPublicKeyBody = std::move(value); }

    /**
     * <p>The public portion of the Secure Shell (SSH) key used to authenticate the
     * user to the server.</p> <p>Transfer Family accepts RSA, ECDSA, and ED25519
     * keys.</p>
     */
    inline void SetSshPublicKeyBody(const char* value) { m_sshPublicKeyBodyHasBeenSet = true; m_sshPublicKeyBody.assign(value); }

    /**
     * <p>The public portion of the Secure Shell (SSH) key used to authenticate the
     * user to the server.</p> <p>Transfer Family accepts RSA, ECDSA, and ED25519
     * keys.</p>
     */
    inline CreateUserRequest& WithSshPublicKeyBody(const Aws::String& value) { SetSshPublicKeyBody(value); return *this;}

    /**
     * <p>The public portion of the Secure Shell (SSH) key used to authenticate the
     * user to the server.</p> <p>Transfer Family accepts RSA, ECDSA, and ED25519
     * keys.</p>
     */
    inline CreateUserRequest& WithSshPublicKeyBody(Aws::String&& value) { SetSshPublicKeyBody(std::move(value)); return *this;}

    /**
     * <p>The public portion of the Secure Shell (SSH) key used to authenticate the
     * user to the server.</p> <p>Transfer Family accepts RSA, ECDSA, and ED25519
     * keys.</p>
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
     * <p>A unique string that identifies a user and is associated with a
     * <code>ServerId</code>. This user name must be a minimum of 3 and a maximum of
     * 100 characters long. The following are valid characters: a-z, A-Z, 0-9,
     * underscore '_', hyphen '-', period '.', and at sign '@'. The user name can't
     * start with a hyphen, period, or at sign.</p>
     */
    inline const Aws::String& GetUserName() const{ return m_userName; }

    /**
     * <p>A unique string that identifies a user and is associated with a
     * <code>ServerId</code>. This user name must be a minimum of 3 and a maximum of
     * 100 characters long. The following are valid characters: a-z, A-Z, 0-9,
     * underscore '_', hyphen '-', period '.', and at sign '@'. The user name can't
     * start with a hyphen, period, or at sign.</p>
     */
    inline bool UserNameHasBeenSet() const { return m_userNameHasBeenSet; }

    /**
     * <p>A unique string that identifies a user and is associated with a
     * <code>ServerId</code>. This user name must be a minimum of 3 and a maximum of
     * 100 characters long. The following are valid characters: a-z, A-Z, 0-9,
     * underscore '_', hyphen '-', period '.', and at sign '@'. The user name can't
     * start with a hyphen, period, or at sign.</p>
     */
    inline void SetUserName(const Aws::String& value) { m_userNameHasBeenSet = true; m_userName = value; }

    /**
     * <p>A unique string that identifies a user and is associated with a
     * <code>ServerId</code>. This user name must be a minimum of 3 and a maximum of
     * 100 characters long. The following are valid characters: a-z, A-Z, 0-9,
     * underscore '_', hyphen '-', period '.', and at sign '@'. The user name can't
     * start with a hyphen, period, or at sign.</p>
     */
    inline void SetUserName(Aws::String&& value) { m_userNameHasBeenSet = true; m_userName = std::move(value); }

    /**
     * <p>A unique string that identifies a user and is associated with a
     * <code>ServerId</code>. This user name must be a minimum of 3 and a maximum of
     * 100 characters long. The following are valid characters: a-z, A-Z, 0-9,
     * underscore '_', hyphen '-', period '.', and at sign '@'. The user name can't
     * start with a hyphen, period, or at sign.</p>
     */
    inline void SetUserName(const char* value) { m_userNameHasBeenSet = true; m_userName.assign(value); }

    /**
     * <p>A unique string that identifies a user and is associated with a
     * <code>ServerId</code>. This user name must be a minimum of 3 and a maximum of
     * 100 characters long. The following are valid characters: a-z, A-Z, 0-9,
     * underscore '_', hyphen '-', period '.', and at sign '@'. The user name can't
     * start with a hyphen, period, or at sign.</p>
     */
    inline CreateUserRequest& WithUserName(const Aws::String& value) { SetUserName(value); return *this;}

    /**
     * <p>A unique string that identifies a user and is associated with a
     * <code>ServerId</code>. This user name must be a minimum of 3 and a maximum of
     * 100 characters long. The following are valid characters: a-z, A-Z, 0-9,
     * underscore '_', hyphen '-', period '.', and at sign '@'. The user name can't
     * start with a hyphen, period, or at sign.</p>
     */
    inline CreateUserRequest& WithUserName(Aws::String&& value) { SetUserName(std::move(value)); return *this;}

    /**
     * <p>A unique string that identifies a user and is associated with a
     * <code>ServerId</code>. This user name must be a minimum of 3 and a maximum of
     * 100 characters long. The following are valid characters: a-z, A-Z, 0-9,
     * underscore '_', hyphen '-', period '.', and at sign '@'. The user name can't
     * start with a hyphen, period, or at sign.</p>
     */
    inline CreateUserRequest& WithUserName(const char* value) { SetUserName(value); return *this;}

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

    Aws::String m_sshPublicKeyBody;
    bool m_sshPublicKeyBodyHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_userName;
    bool m_userNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
