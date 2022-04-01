﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/ecr/ECRRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ECR
{
namespace Model
{

  /**
   */
  class AWS_ECR_API PutRegistryPolicyRequest : public ECRRequest
  {
  public:
    PutRegistryPolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutRegistryPolicy"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The JSON policy text to apply to your registry. The policy text follows the
     * same format as IAM policy text. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECR/latest/userguide/registry-permissions.html">Registry
     * permissions</a> in the <i>Amazon Elastic Container Registry User Guide</i>.</p>
     */
    inline const Aws::String& GetPolicyText() const{ return m_policyText; }

    /**
     * <p>The JSON policy text to apply to your registry. The policy text follows the
     * same format as IAM policy text. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECR/latest/userguide/registry-permissions.html">Registry
     * permissions</a> in the <i>Amazon Elastic Container Registry User Guide</i>.</p>
     */
    inline bool PolicyTextHasBeenSet() const { return m_policyTextHasBeenSet; }

    /**
     * <p>The JSON policy text to apply to your registry. The policy text follows the
     * same format as IAM policy text. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECR/latest/userguide/registry-permissions.html">Registry
     * permissions</a> in the <i>Amazon Elastic Container Registry User Guide</i>.</p>
     */
    inline void SetPolicyText(const Aws::String& value) { m_policyTextHasBeenSet = true; m_policyText = value; }

    /**
     * <p>The JSON policy text to apply to your registry. The policy text follows the
     * same format as IAM policy text. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECR/latest/userguide/registry-permissions.html">Registry
     * permissions</a> in the <i>Amazon Elastic Container Registry User Guide</i>.</p>
     */
    inline void SetPolicyText(Aws::String&& value) { m_policyTextHasBeenSet = true; m_policyText = std::move(value); }

    /**
     * <p>The JSON policy text to apply to your registry. The policy text follows the
     * same format as IAM policy text. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECR/latest/userguide/registry-permissions.html">Registry
     * permissions</a> in the <i>Amazon Elastic Container Registry User Guide</i>.</p>
     */
    inline void SetPolicyText(const char* value) { m_policyTextHasBeenSet = true; m_policyText.assign(value); }

    /**
     * <p>The JSON policy text to apply to your registry. The policy text follows the
     * same format as IAM policy text. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECR/latest/userguide/registry-permissions.html">Registry
     * permissions</a> in the <i>Amazon Elastic Container Registry User Guide</i>.</p>
     */
    inline PutRegistryPolicyRequest& WithPolicyText(const Aws::String& value) { SetPolicyText(value); return *this;}

    /**
     * <p>The JSON policy text to apply to your registry. The policy text follows the
     * same format as IAM policy text. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECR/latest/userguide/registry-permissions.html">Registry
     * permissions</a> in the <i>Amazon Elastic Container Registry User Guide</i>.</p>
     */
    inline PutRegistryPolicyRequest& WithPolicyText(Aws::String&& value) { SetPolicyText(std::move(value)); return *this;}

    /**
     * <p>The JSON policy text to apply to your registry. The policy text follows the
     * same format as IAM policy text. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECR/latest/userguide/registry-permissions.html">Registry
     * permissions</a> in the <i>Amazon Elastic Container Registry User Guide</i>.</p>
     */
    inline PutRegistryPolicyRequest& WithPolicyText(const char* value) { SetPolicyText(value); return *this;}

  private:

    Aws::String m_policyText;
    bool m_policyTextHasBeenSet;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
