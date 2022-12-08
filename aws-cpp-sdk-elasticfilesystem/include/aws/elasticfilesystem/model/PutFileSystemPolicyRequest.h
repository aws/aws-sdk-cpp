/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticfilesystem/EFS_EXPORTS.h>
#include <aws/elasticfilesystem/EFSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace EFS
{
namespace Model
{

  /**
   */
  class PutFileSystemPolicyRequest : public EFSRequest
  {
  public:
    AWS_EFS_API PutFileSystemPolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutFileSystemPolicy"; }

    AWS_EFS_API Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the EFS file system that you want to create or update the
     * <code>FileSystemPolicy</code> for.</p>
     */
    inline const Aws::String& GetFileSystemId() const{ return m_fileSystemId; }

    /**
     * <p>The ID of the EFS file system that you want to create or update the
     * <code>FileSystemPolicy</code> for.</p>
     */
    inline bool FileSystemIdHasBeenSet() const { return m_fileSystemIdHasBeenSet; }

    /**
     * <p>The ID of the EFS file system that you want to create or update the
     * <code>FileSystemPolicy</code> for.</p>
     */
    inline void SetFileSystemId(const Aws::String& value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId = value; }

    /**
     * <p>The ID of the EFS file system that you want to create or update the
     * <code>FileSystemPolicy</code> for.</p>
     */
    inline void SetFileSystemId(Aws::String&& value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId = std::move(value); }

    /**
     * <p>The ID of the EFS file system that you want to create or update the
     * <code>FileSystemPolicy</code> for.</p>
     */
    inline void SetFileSystemId(const char* value) { m_fileSystemIdHasBeenSet = true; m_fileSystemId.assign(value); }

    /**
     * <p>The ID of the EFS file system that you want to create or update the
     * <code>FileSystemPolicy</code> for.</p>
     */
    inline PutFileSystemPolicyRequest& WithFileSystemId(const Aws::String& value) { SetFileSystemId(value); return *this;}

    /**
     * <p>The ID of the EFS file system that you want to create or update the
     * <code>FileSystemPolicy</code> for.</p>
     */
    inline PutFileSystemPolicyRequest& WithFileSystemId(Aws::String&& value) { SetFileSystemId(std::move(value)); return *this;}

    /**
     * <p>The ID of the EFS file system that you want to create or update the
     * <code>FileSystemPolicy</code> for.</p>
     */
    inline PutFileSystemPolicyRequest& WithFileSystemId(const char* value) { SetFileSystemId(value); return *this;}


    /**
     * <p>The <code>FileSystemPolicy</code> that you're creating. Accepts a JSON
     * formatted policy definition. EFS file system policies have a 20,000 character
     * limit. To find out more about the elements that make up a file system policy,
     * see <a
     * href="https://docs.aws.amazon.com/efs/latest/ug/access-control-overview.html#access-control-manage-access-intro-resource-policies">EFS
     * Resource-based Policies</a>. </p>
     */
    inline const Aws::String& GetPolicy() const{ return m_policy; }

    /**
     * <p>The <code>FileSystemPolicy</code> that you're creating. Accepts a JSON
     * formatted policy definition. EFS file system policies have a 20,000 character
     * limit. To find out more about the elements that make up a file system policy,
     * see <a
     * href="https://docs.aws.amazon.com/efs/latest/ug/access-control-overview.html#access-control-manage-access-intro-resource-policies">EFS
     * Resource-based Policies</a>. </p>
     */
    inline bool PolicyHasBeenSet() const { return m_policyHasBeenSet; }

    /**
     * <p>The <code>FileSystemPolicy</code> that you're creating. Accepts a JSON
     * formatted policy definition. EFS file system policies have a 20,000 character
     * limit. To find out more about the elements that make up a file system policy,
     * see <a
     * href="https://docs.aws.amazon.com/efs/latest/ug/access-control-overview.html#access-control-manage-access-intro-resource-policies">EFS
     * Resource-based Policies</a>. </p>
     */
    inline void SetPolicy(const Aws::String& value) { m_policyHasBeenSet = true; m_policy = value; }

    /**
     * <p>The <code>FileSystemPolicy</code> that you're creating. Accepts a JSON
     * formatted policy definition. EFS file system policies have a 20,000 character
     * limit. To find out more about the elements that make up a file system policy,
     * see <a
     * href="https://docs.aws.amazon.com/efs/latest/ug/access-control-overview.html#access-control-manage-access-intro-resource-policies">EFS
     * Resource-based Policies</a>. </p>
     */
    inline void SetPolicy(Aws::String&& value) { m_policyHasBeenSet = true; m_policy = std::move(value); }

    /**
     * <p>The <code>FileSystemPolicy</code> that you're creating. Accepts a JSON
     * formatted policy definition. EFS file system policies have a 20,000 character
     * limit. To find out more about the elements that make up a file system policy,
     * see <a
     * href="https://docs.aws.amazon.com/efs/latest/ug/access-control-overview.html#access-control-manage-access-intro-resource-policies">EFS
     * Resource-based Policies</a>. </p>
     */
    inline void SetPolicy(const char* value) { m_policyHasBeenSet = true; m_policy.assign(value); }

    /**
     * <p>The <code>FileSystemPolicy</code> that you're creating. Accepts a JSON
     * formatted policy definition. EFS file system policies have a 20,000 character
     * limit. To find out more about the elements that make up a file system policy,
     * see <a
     * href="https://docs.aws.amazon.com/efs/latest/ug/access-control-overview.html#access-control-manage-access-intro-resource-policies">EFS
     * Resource-based Policies</a>. </p>
     */
    inline PutFileSystemPolicyRequest& WithPolicy(const Aws::String& value) { SetPolicy(value); return *this;}

    /**
     * <p>The <code>FileSystemPolicy</code> that you're creating. Accepts a JSON
     * formatted policy definition. EFS file system policies have a 20,000 character
     * limit. To find out more about the elements that make up a file system policy,
     * see <a
     * href="https://docs.aws.amazon.com/efs/latest/ug/access-control-overview.html#access-control-manage-access-intro-resource-policies">EFS
     * Resource-based Policies</a>. </p>
     */
    inline PutFileSystemPolicyRequest& WithPolicy(Aws::String&& value) { SetPolicy(std::move(value)); return *this;}

    /**
     * <p>The <code>FileSystemPolicy</code> that you're creating. Accepts a JSON
     * formatted policy definition. EFS file system policies have a 20,000 character
     * limit. To find out more about the elements that make up a file system policy,
     * see <a
     * href="https://docs.aws.amazon.com/efs/latest/ug/access-control-overview.html#access-control-manage-access-intro-resource-policies">EFS
     * Resource-based Policies</a>. </p>
     */
    inline PutFileSystemPolicyRequest& WithPolicy(const char* value) { SetPolicy(value); return *this;}


    /**
     * <p>(Optional) A boolean that specifies whether or not to bypass the
     * <code>FileSystemPolicy</code> lockout safety check. The lockout safety check
     * determines whether the policy in the request will lock out, or prevent, the IAM
     * principal that is making the request from making future
     * <code>PutFileSystemPolicy</code> requests on this file system. Set
     * <code>BypassPolicyLockoutSafetyCheck</code> to <code>True</code> only when you
     * intend to prevent the IAM principal that is making the request from making
     * subsequent <code>PutFileSystemPolicy</code> requests on this file system. The
     * default value is <code>False</code>. </p>
     */
    inline bool GetBypassPolicyLockoutSafetyCheck() const{ return m_bypassPolicyLockoutSafetyCheck; }

    /**
     * <p>(Optional) A boolean that specifies whether or not to bypass the
     * <code>FileSystemPolicy</code> lockout safety check. The lockout safety check
     * determines whether the policy in the request will lock out, or prevent, the IAM
     * principal that is making the request from making future
     * <code>PutFileSystemPolicy</code> requests on this file system. Set
     * <code>BypassPolicyLockoutSafetyCheck</code> to <code>True</code> only when you
     * intend to prevent the IAM principal that is making the request from making
     * subsequent <code>PutFileSystemPolicy</code> requests on this file system. The
     * default value is <code>False</code>. </p>
     */
    inline bool BypassPolicyLockoutSafetyCheckHasBeenSet() const { return m_bypassPolicyLockoutSafetyCheckHasBeenSet; }

    /**
     * <p>(Optional) A boolean that specifies whether or not to bypass the
     * <code>FileSystemPolicy</code> lockout safety check. The lockout safety check
     * determines whether the policy in the request will lock out, or prevent, the IAM
     * principal that is making the request from making future
     * <code>PutFileSystemPolicy</code> requests on this file system. Set
     * <code>BypassPolicyLockoutSafetyCheck</code> to <code>True</code> only when you
     * intend to prevent the IAM principal that is making the request from making
     * subsequent <code>PutFileSystemPolicy</code> requests on this file system. The
     * default value is <code>False</code>. </p>
     */
    inline void SetBypassPolicyLockoutSafetyCheck(bool value) { m_bypassPolicyLockoutSafetyCheckHasBeenSet = true; m_bypassPolicyLockoutSafetyCheck = value; }

    /**
     * <p>(Optional) A boolean that specifies whether or not to bypass the
     * <code>FileSystemPolicy</code> lockout safety check. The lockout safety check
     * determines whether the policy in the request will lock out, or prevent, the IAM
     * principal that is making the request from making future
     * <code>PutFileSystemPolicy</code> requests on this file system. Set
     * <code>BypassPolicyLockoutSafetyCheck</code> to <code>True</code> only when you
     * intend to prevent the IAM principal that is making the request from making
     * subsequent <code>PutFileSystemPolicy</code> requests on this file system. The
     * default value is <code>False</code>. </p>
     */
    inline PutFileSystemPolicyRequest& WithBypassPolicyLockoutSafetyCheck(bool value) { SetBypassPolicyLockoutSafetyCheck(value); return *this;}

  private:

    Aws::String m_fileSystemId;
    bool m_fileSystemIdHasBeenSet = false;

    Aws::String m_policy;
    bool m_policyHasBeenSet = false;

    bool m_bypassPolicyLockoutSafetyCheck;
    bool m_bypassPolicyLockoutSafetyCheckHasBeenSet = false;
  };

} // namespace Model
} // namespace EFS
} // namespace Aws
