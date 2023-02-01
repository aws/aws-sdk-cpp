/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/iam/IAMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace IAM
{
namespace Model
{

  /**
   */
  class SetDefaultPolicyVersionRequest : public IAMRequest
  {
  public:
    AWS_IAM_API SetDefaultPolicyVersionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SetDefaultPolicyVersion"; }

    AWS_IAM_API Aws::String SerializePayload() const override;

  protected:
    AWS_IAM_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM policy whose default version you
     * want to set.</p> <p>For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i>.</p>
     */
    inline const Aws::String& GetPolicyArn() const{ return m_policyArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM policy whose default version you
     * want to set.</p> <p>For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i>.</p>
     */
    inline bool PolicyArnHasBeenSet() const { return m_policyArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM policy whose default version you
     * want to set.</p> <p>For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i>.</p>
     */
    inline void SetPolicyArn(const Aws::String& value) { m_policyArnHasBeenSet = true; m_policyArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM policy whose default version you
     * want to set.</p> <p>For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i>.</p>
     */
    inline void SetPolicyArn(Aws::String&& value) { m_policyArnHasBeenSet = true; m_policyArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM policy whose default version you
     * want to set.</p> <p>For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i>.</p>
     */
    inline void SetPolicyArn(const char* value) { m_policyArnHasBeenSet = true; m_policyArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM policy whose default version you
     * want to set.</p> <p>For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i>.</p>
     */
    inline SetDefaultPolicyVersionRequest& WithPolicyArn(const Aws::String& value) { SetPolicyArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM policy whose default version you
     * want to set.</p> <p>For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i>.</p>
     */
    inline SetDefaultPolicyVersionRequest& WithPolicyArn(Aws::String&& value) { SetPolicyArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the IAM policy whose default version you
     * want to set.</p> <p>For more information about ARNs, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> in the <i>Amazon Web Services General
     * Reference</i>.</p>
     */
    inline SetDefaultPolicyVersionRequest& WithPolicyArn(const char* value) { SetPolicyArn(value); return *this;}


    /**
     * <p>The version of the policy to set as the default (operative) version.</p>
     * <p>For more information about managed policy versions, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-versions.html">Versioning
     * for managed policies</a> in the <i>IAM User Guide</i>.</p>
     */
    inline const Aws::String& GetVersionId() const{ return m_versionId; }

    /**
     * <p>The version of the policy to set as the default (operative) version.</p>
     * <p>For more information about managed policy versions, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-versions.html">Versioning
     * for managed policies</a> in the <i>IAM User Guide</i>.</p>
     */
    inline bool VersionIdHasBeenSet() const { return m_versionIdHasBeenSet; }

    /**
     * <p>The version of the policy to set as the default (operative) version.</p>
     * <p>For more information about managed policy versions, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-versions.html">Versioning
     * for managed policies</a> in the <i>IAM User Guide</i>.</p>
     */
    inline void SetVersionId(const Aws::String& value) { m_versionIdHasBeenSet = true; m_versionId = value; }

    /**
     * <p>The version of the policy to set as the default (operative) version.</p>
     * <p>For more information about managed policy versions, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-versions.html">Versioning
     * for managed policies</a> in the <i>IAM User Guide</i>.</p>
     */
    inline void SetVersionId(Aws::String&& value) { m_versionIdHasBeenSet = true; m_versionId = std::move(value); }

    /**
     * <p>The version of the policy to set as the default (operative) version.</p>
     * <p>For more information about managed policy versions, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-versions.html">Versioning
     * for managed policies</a> in the <i>IAM User Guide</i>.</p>
     */
    inline void SetVersionId(const char* value) { m_versionIdHasBeenSet = true; m_versionId.assign(value); }

    /**
     * <p>The version of the policy to set as the default (operative) version.</p>
     * <p>For more information about managed policy versions, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-versions.html">Versioning
     * for managed policies</a> in the <i>IAM User Guide</i>.</p>
     */
    inline SetDefaultPolicyVersionRequest& WithVersionId(const Aws::String& value) { SetVersionId(value); return *this;}

    /**
     * <p>The version of the policy to set as the default (operative) version.</p>
     * <p>For more information about managed policy versions, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-versions.html">Versioning
     * for managed policies</a> in the <i>IAM User Guide</i>.</p>
     */
    inline SetDefaultPolicyVersionRequest& WithVersionId(Aws::String&& value) { SetVersionId(std::move(value)); return *this;}

    /**
     * <p>The version of the policy to set as the default (operative) version.</p>
     * <p>For more information about managed policy versions, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/policies-managed-versions.html">Versioning
     * for managed policies</a> in the <i>IAM User Guide</i>.</p>
     */
    inline SetDefaultPolicyVersionRequest& WithVersionId(const char* value) { SetVersionId(value); return *this;}

  private:

    Aws::String m_policyArn;
    bool m_policyArnHasBeenSet = false;

    Aws::String m_versionId;
    bool m_versionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
