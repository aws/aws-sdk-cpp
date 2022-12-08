/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class DeleteResourcePolicyRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API DeleteResourcePolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteResourcePolicy"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The hash value returned when this policy was set.</p>
     */
    inline const Aws::String& GetPolicyHashCondition() const{ return m_policyHashCondition; }

    /**
     * <p>The hash value returned when this policy was set.</p>
     */
    inline bool PolicyHashConditionHasBeenSet() const { return m_policyHashConditionHasBeenSet; }

    /**
     * <p>The hash value returned when this policy was set.</p>
     */
    inline void SetPolicyHashCondition(const Aws::String& value) { m_policyHashConditionHasBeenSet = true; m_policyHashCondition = value; }

    /**
     * <p>The hash value returned when this policy was set.</p>
     */
    inline void SetPolicyHashCondition(Aws::String&& value) { m_policyHashConditionHasBeenSet = true; m_policyHashCondition = std::move(value); }

    /**
     * <p>The hash value returned when this policy was set.</p>
     */
    inline void SetPolicyHashCondition(const char* value) { m_policyHashConditionHasBeenSet = true; m_policyHashCondition.assign(value); }

    /**
     * <p>The hash value returned when this policy was set.</p>
     */
    inline DeleteResourcePolicyRequest& WithPolicyHashCondition(const Aws::String& value) { SetPolicyHashCondition(value); return *this;}

    /**
     * <p>The hash value returned when this policy was set.</p>
     */
    inline DeleteResourcePolicyRequest& WithPolicyHashCondition(Aws::String&& value) { SetPolicyHashCondition(std::move(value)); return *this;}

    /**
     * <p>The hash value returned when this policy was set.</p>
     */
    inline DeleteResourcePolicyRequest& WithPolicyHashCondition(const char* value) { SetPolicyHashCondition(value); return *this;}


    /**
     * <p>The ARN of the Glue resource for the resource policy to be deleted.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The ARN of the Glue resource for the resource policy to be deleted.</p>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p>The ARN of the Glue resource for the resource policy to be deleted.</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>The ARN of the Glue resource for the resource policy to be deleted.</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p>The ARN of the Glue resource for the resource policy to be deleted.</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p>The ARN of the Glue resource for the resource policy to be deleted.</p>
     */
    inline DeleteResourcePolicyRequest& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The ARN of the Glue resource for the resource policy to be deleted.</p>
     */
    inline DeleteResourcePolicyRequest& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the Glue resource for the resource policy to be deleted.</p>
     */
    inline DeleteResourcePolicyRequest& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}

  private:

    Aws::String m_policyHashCondition;
    bool m_policyHashConditionHasBeenSet = false;

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
