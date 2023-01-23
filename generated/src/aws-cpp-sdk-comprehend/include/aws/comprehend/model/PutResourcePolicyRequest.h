/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/comprehend/ComprehendRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Comprehend
{
namespace Model
{

  /**
   */
  class PutResourcePolicyRequest : public ComprehendRequest
  {
  public:
    AWS_COMPREHEND_API PutResourcePolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutResourcePolicy"; }

    AWS_COMPREHEND_API Aws::String SerializePayload() const override;

    AWS_COMPREHEND_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the custom model to attach the policy
     * to.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the custom model to attach the policy
     * to.</p>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the custom model to attach the policy
     * to.</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the custom model to attach the policy
     * to.</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the custom model to attach the policy
     * to.</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the custom model to attach the policy
     * to.</p>
     */
    inline PutResourcePolicyRequest& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the custom model to attach the policy
     * to.</p>
     */
    inline PutResourcePolicyRequest& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the custom model to attach the policy
     * to.</p>
     */
    inline PutResourcePolicyRequest& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    /**
     * <p>The JSON resource-based policy to attach to your custom model. Provide your
     * JSON as a UTF-8 encoded string without line breaks. To provide valid JSON for
     * your policy, enclose the attribute names and values in double quotes. If the
     * JSON body is also enclosed in double quotes, then you must escape the double
     * quotes that are inside the policy:</p> <p> <code>"{\"attribute\": \"value\",
     * \"attribute\": [\"value\"]}"</code> </p> <p>To avoid escaping quotes, you can
     * use single quotes to enclose the policy and double quotes to enclose the JSON
     * names and values:</p> <p> <code>'{"attribute": "value", "attribute":
     * ["value"]}'</code> </p>
     */
    inline const Aws::String& GetResourcePolicy() const{ return m_resourcePolicy; }

    /**
     * <p>The JSON resource-based policy to attach to your custom model. Provide your
     * JSON as a UTF-8 encoded string without line breaks. To provide valid JSON for
     * your policy, enclose the attribute names and values in double quotes. If the
     * JSON body is also enclosed in double quotes, then you must escape the double
     * quotes that are inside the policy:</p> <p> <code>"{\"attribute\": \"value\",
     * \"attribute\": [\"value\"]}"</code> </p> <p>To avoid escaping quotes, you can
     * use single quotes to enclose the policy and double quotes to enclose the JSON
     * names and values:</p> <p> <code>'{"attribute": "value", "attribute":
     * ["value"]}'</code> </p>
     */
    inline bool ResourcePolicyHasBeenSet() const { return m_resourcePolicyHasBeenSet; }

    /**
     * <p>The JSON resource-based policy to attach to your custom model. Provide your
     * JSON as a UTF-8 encoded string without line breaks. To provide valid JSON for
     * your policy, enclose the attribute names and values in double quotes. If the
     * JSON body is also enclosed in double quotes, then you must escape the double
     * quotes that are inside the policy:</p> <p> <code>"{\"attribute\": \"value\",
     * \"attribute\": [\"value\"]}"</code> </p> <p>To avoid escaping quotes, you can
     * use single quotes to enclose the policy and double quotes to enclose the JSON
     * names and values:</p> <p> <code>'{"attribute": "value", "attribute":
     * ["value"]}'</code> </p>
     */
    inline void SetResourcePolicy(const Aws::String& value) { m_resourcePolicyHasBeenSet = true; m_resourcePolicy = value; }

    /**
     * <p>The JSON resource-based policy to attach to your custom model. Provide your
     * JSON as a UTF-8 encoded string without line breaks. To provide valid JSON for
     * your policy, enclose the attribute names and values in double quotes. If the
     * JSON body is also enclosed in double quotes, then you must escape the double
     * quotes that are inside the policy:</p> <p> <code>"{\"attribute\": \"value\",
     * \"attribute\": [\"value\"]}"</code> </p> <p>To avoid escaping quotes, you can
     * use single quotes to enclose the policy and double quotes to enclose the JSON
     * names and values:</p> <p> <code>'{"attribute": "value", "attribute":
     * ["value"]}'</code> </p>
     */
    inline void SetResourcePolicy(Aws::String&& value) { m_resourcePolicyHasBeenSet = true; m_resourcePolicy = std::move(value); }

    /**
     * <p>The JSON resource-based policy to attach to your custom model. Provide your
     * JSON as a UTF-8 encoded string without line breaks. To provide valid JSON for
     * your policy, enclose the attribute names and values in double quotes. If the
     * JSON body is also enclosed in double quotes, then you must escape the double
     * quotes that are inside the policy:</p> <p> <code>"{\"attribute\": \"value\",
     * \"attribute\": [\"value\"]}"</code> </p> <p>To avoid escaping quotes, you can
     * use single quotes to enclose the policy and double quotes to enclose the JSON
     * names and values:</p> <p> <code>'{"attribute": "value", "attribute":
     * ["value"]}'</code> </p>
     */
    inline void SetResourcePolicy(const char* value) { m_resourcePolicyHasBeenSet = true; m_resourcePolicy.assign(value); }

    /**
     * <p>The JSON resource-based policy to attach to your custom model. Provide your
     * JSON as a UTF-8 encoded string without line breaks. To provide valid JSON for
     * your policy, enclose the attribute names and values in double quotes. If the
     * JSON body is also enclosed in double quotes, then you must escape the double
     * quotes that are inside the policy:</p> <p> <code>"{\"attribute\": \"value\",
     * \"attribute\": [\"value\"]}"</code> </p> <p>To avoid escaping quotes, you can
     * use single quotes to enclose the policy and double quotes to enclose the JSON
     * names and values:</p> <p> <code>'{"attribute": "value", "attribute":
     * ["value"]}'</code> </p>
     */
    inline PutResourcePolicyRequest& WithResourcePolicy(const Aws::String& value) { SetResourcePolicy(value); return *this;}

    /**
     * <p>The JSON resource-based policy to attach to your custom model. Provide your
     * JSON as a UTF-8 encoded string without line breaks. To provide valid JSON for
     * your policy, enclose the attribute names and values in double quotes. If the
     * JSON body is also enclosed in double quotes, then you must escape the double
     * quotes that are inside the policy:</p> <p> <code>"{\"attribute\": \"value\",
     * \"attribute\": [\"value\"]}"</code> </p> <p>To avoid escaping quotes, you can
     * use single quotes to enclose the policy and double quotes to enclose the JSON
     * names and values:</p> <p> <code>'{"attribute": "value", "attribute":
     * ["value"]}'</code> </p>
     */
    inline PutResourcePolicyRequest& WithResourcePolicy(Aws::String&& value) { SetResourcePolicy(std::move(value)); return *this;}

    /**
     * <p>The JSON resource-based policy to attach to your custom model. Provide your
     * JSON as a UTF-8 encoded string without line breaks. To provide valid JSON for
     * your policy, enclose the attribute names and values in double quotes. If the
     * JSON body is also enclosed in double quotes, then you must escape the double
     * quotes that are inside the policy:</p> <p> <code>"{\"attribute\": \"value\",
     * \"attribute\": [\"value\"]}"</code> </p> <p>To avoid escaping quotes, you can
     * use single quotes to enclose the policy and double quotes to enclose the JSON
     * names and values:</p> <p> <code>'{"attribute": "value", "attribute":
     * ["value"]}'</code> </p>
     */
    inline PutResourcePolicyRequest& WithResourcePolicy(const char* value) { SetResourcePolicy(value); return *this;}


    /**
     * <p>The revision ID that Amazon Comprehend assigned to the policy that you are
     * updating. If you are creating a new policy that has no prior version, don't use
     * this parameter. Amazon Comprehend creates the revision ID for you.</p>
     */
    inline const Aws::String& GetPolicyRevisionId() const{ return m_policyRevisionId; }

    /**
     * <p>The revision ID that Amazon Comprehend assigned to the policy that you are
     * updating. If you are creating a new policy that has no prior version, don't use
     * this parameter. Amazon Comprehend creates the revision ID for you.</p>
     */
    inline bool PolicyRevisionIdHasBeenSet() const { return m_policyRevisionIdHasBeenSet; }

    /**
     * <p>The revision ID that Amazon Comprehend assigned to the policy that you are
     * updating. If you are creating a new policy that has no prior version, don't use
     * this parameter. Amazon Comprehend creates the revision ID for you.</p>
     */
    inline void SetPolicyRevisionId(const Aws::String& value) { m_policyRevisionIdHasBeenSet = true; m_policyRevisionId = value; }

    /**
     * <p>The revision ID that Amazon Comprehend assigned to the policy that you are
     * updating. If you are creating a new policy that has no prior version, don't use
     * this parameter. Amazon Comprehend creates the revision ID for you.</p>
     */
    inline void SetPolicyRevisionId(Aws::String&& value) { m_policyRevisionIdHasBeenSet = true; m_policyRevisionId = std::move(value); }

    /**
     * <p>The revision ID that Amazon Comprehend assigned to the policy that you are
     * updating. If you are creating a new policy that has no prior version, don't use
     * this parameter. Amazon Comprehend creates the revision ID for you.</p>
     */
    inline void SetPolicyRevisionId(const char* value) { m_policyRevisionIdHasBeenSet = true; m_policyRevisionId.assign(value); }

    /**
     * <p>The revision ID that Amazon Comprehend assigned to the policy that you are
     * updating. If you are creating a new policy that has no prior version, don't use
     * this parameter. Amazon Comprehend creates the revision ID for you.</p>
     */
    inline PutResourcePolicyRequest& WithPolicyRevisionId(const Aws::String& value) { SetPolicyRevisionId(value); return *this;}

    /**
     * <p>The revision ID that Amazon Comprehend assigned to the policy that you are
     * updating. If you are creating a new policy that has no prior version, don't use
     * this parameter. Amazon Comprehend creates the revision ID for you.</p>
     */
    inline PutResourcePolicyRequest& WithPolicyRevisionId(Aws::String&& value) { SetPolicyRevisionId(std::move(value)); return *this;}

    /**
     * <p>The revision ID that Amazon Comprehend assigned to the policy that you are
     * updating. If you are creating a new policy that has no prior version, don't use
     * this parameter. Amazon Comprehend creates the revision ID for you.</p>
     */
    inline PutResourcePolicyRequest& WithPolicyRevisionId(const char* value) { SetPolicyRevisionId(value); return *this;}

  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    Aws::String m_resourcePolicy;
    bool m_resourcePolicyHasBeenSet = false;

    Aws::String m_policyRevisionId;
    bool m_policyRevisionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
