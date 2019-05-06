/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/ExistCondition.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class AWS_GLUE_API PutResourcePolicyRequest : public GlueRequest
  {
  public:
    PutResourcePolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutResourcePolicy"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Contains the policy document to set, in JSON format.</p>
     */
    inline const Aws::String& GetPolicyInJson() const{ return m_policyInJson; }

    /**
     * <p>Contains the policy document to set, in JSON format.</p>
     */
    inline bool PolicyInJsonHasBeenSet() const { return m_policyInJsonHasBeenSet; }

    /**
     * <p>Contains the policy document to set, in JSON format.</p>
     */
    inline void SetPolicyInJson(const Aws::String& value) { m_policyInJsonHasBeenSet = true; m_policyInJson = value; }

    /**
     * <p>Contains the policy document to set, in JSON format.</p>
     */
    inline void SetPolicyInJson(Aws::String&& value) { m_policyInJsonHasBeenSet = true; m_policyInJson = std::move(value); }

    /**
     * <p>Contains the policy document to set, in JSON format.</p>
     */
    inline void SetPolicyInJson(const char* value) { m_policyInJsonHasBeenSet = true; m_policyInJson.assign(value); }

    /**
     * <p>Contains the policy document to set, in JSON format.</p>
     */
    inline PutResourcePolicyRequest& WithPolicyInJson(const Aws::String& value) { SetPolicyInJson(value); return *this;}

    /**
     * <p>Contains the policy document to set, in JSON format.</p>
     */
    inline PutResourcePolicyRequest& WithPolicyInJson(Aws::String&& value) { SetPolicyInJson(std::move(value)); return *this;}

    /**
     * <p>Contains the policy document to set, in JSON format.</p>
     */
    inline PutResourcePolicyRequest& WithPolicyInJson(const char* value) { SetPolicyInJson(value); return *this;}


    /**
     * <p>The hash value returned when the previous policy was set using
     * <code>PutResourcePolicy</code>. Its purpose is to prevent concurrent
     * modifications of a policy. Do not use this parameter if no previous policy has
     * been set.</p>
     */
    inline const Aws::String& GetPolicyHashCondition() const{ return m_policyHashCondition; }

    /**
     * <p>The hash value returned when the previous policy was set using
     * <code>PutResourcePolicy</code>. Its purpose is to prevent concurrent
     * modifications of a policy. Do not use this parameter if no previous policy has
     * been set.</p>
     */
    inline bool PolicyHashConditionHasBeenSet() const { return m_policyHashConditionHasBeenSet; }

    /**
     * <p>The hash value returned when the previous policy was set using
     * <code>PutResourcePolicy</code>. Its purpose is to prevent concurrent
     * modifications of a policy. Do not use this parameter if no previous policy has
     * been set.</p>
     */
    inline void SetPolicyHashCondition(const Aws::String& value) { m_policyHashConditionHasBeenSet = true; m_policyHashCondition = value; }

    /**
     * <p>The hash value returned when the previous policy was set using
     * <code>PutResourcePolicy</code>. Its purpose is to prevent concurrent
     * modifications of a policy. Do not use this parameter if no previous policy has
     * been set.</p>
     */
    inline void SetPolicyHashCondition(Aws::String&& value) { m_policyHashConditionHasBeenSet = true; m_policyHashCondition = std::move(value); }

    /**
     * <p>The hash value returned when the previous policy was set using
     * <code>PutResourcePolicy</code>. Its purpose is to prevent concurrent
     * modifications of a policy. Do not use this parameter if no previous policy has
     * been set.</p>
     */
    inline void SetPolicyHashCondition(const char* value) { m_policyHashConditionHasBeenSet = true; m_policyHashCondition.assign(value); }

    /**
     * <p>The hash value returned when the previous policy was set using
     * <code>PutResourcePolicy</code>. Its purpose is to prevent concurrent
     * modifications of a policy. Do not use this parameter if no previous policy has
     * been set.</p>
     */
    inline PutResourcePolicyRequest& WithPolicyHashCondition(const Aws::String& value) { SetPolicyHashCondition(value); return *this;}

    /**
     * <p>The hash value returned when the previous policy was set using
     * <code>PutResourcePolicy</code>. Its purpose is to prevent concurrent
     * modifications of a policy. Do not use this parameter if no previous policy has
     * been set.</p>
     */
    inline PutResourcePolicyRequest& WithPolicyHashCondition(Aws::String&& value) { SetPolicyHashCondition(std::move(value)); return *this;}

    /**
     * <p>The hash value returned when the previous policy was set using
     * <code>PutResourcePolicy</code>. Its purpose is to prevent concurrent
     * modifications of a policy. Do not use this parameter if no previous policy has
     * been set.</p>
     */
    inline PutResourcePolicyRequest& WithPolicyHashCondition(const char* value) { SetPolicyHashCondition(value); return *this;}


    /**
     * <p>A value of <code>MUST_EXIST</code> is used to update a policy. A value of
     * <code>NOT_EXIST</code> is used to create a new policy. If a value of
     * <code>NONE</code> or a null value is used, the call will not depend on the
     * existence of a policy.</p>
     */
    inline const ExistCondition& GetPolicyExistsCondition() const{ return m_policyExistsCondition; }

    /**
     * <p>A value of <code>MUST_EXIST</code> is used to update a policy. A value of
     * <code>NOT_EXIST</code> is used to create a new policy. If a value of
     * <code>NONE</code> or a null value is used, the call will not depend on the
     * existence of a policy.</p>
     */
    inline bool PolicyExistsConditionHasBeenSet() const { return m_policyExistsConditionHasBeenSet; }

    /**
     * <p>A value of <code>MUST_EXIST</code> is used to update a policy. A value of
     * <code>NOT_EXIST</code> is used to create a new policy. If a value of
     * <code>NONE</code> or a null value is used, the call will not depend on the
     * existence of a policy.</p>
     */
    inline void SetPolicyExistsCondition(const ExistCondition& value) { m_policyExistsConditionHasBeenSet = true; m_policyExistsCondition = value; }

    /**
     * <p>A value of <code>MUST_EXIST</code> is used to update a policy. A value of
     * <code>NOT_EXIST</code> is used to create a new policy. If a value of
     * <code>NONE</code> or a null value is used, the call will not depend on the
     * existence of a policy.</p>
     */
    inline void SetPolicyExistsCondition(ExistCondition&& value) { m_policyExistsConditionHasBeenSet = true; m_policyExistsCondition = std::move(value); }

    /**
     * <p>A value of <code>MUST_EXIST</code> is used to update a policy. A value of
     * <code>NOT_EXIST</code> is used to create a new policy. If a value of
     * <code>NONE</code> or a null value is used, the call will not depend on the
     * existence of a policy.</p>
     */
    inline PutResourcePolicyRequest& WithPolicyExistsCondition(const ExistCondition& value) { SetPolicyExistsCondition(value); return *this;}

    /**
     * <p>A value of <code>MUST_EXIST</code> is used to update a policy. A value of
     * <code>NOT_EXIST</code> is used to create a new policy. If a value of
     * <code>NONE</code> or a null value is used, the call will not depend on the
     * existence of a policy.</p>
     */
    inline PutResourcePolicyRequest& WithPolicyExistsCondition(ExistCondition&& value) { SetPolicyExistsCondition(std::move(value)); return *this;}

  private:

    Aws::String m_policyInJson;
    bool m_policyInJsonHasBeenSet;

    Aws::String m_policyHashCondition;
    bool m_policyHashConditionHasBeenSet;

    ExistCondition m_policyExistsCondition;
    bool m_policyExistsConditionHasBeenSet;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
