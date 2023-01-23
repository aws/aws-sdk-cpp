/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/ExistCondition.h>
#include <aws/glue/model/EnableHybridValues.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class PutResourcePolicyRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API PutResourcePolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutResourcePolicy"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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
     * <p>Do not use. For internal use only.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>Do not use. For internal use only.</p>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p>Do not use. For internal use only.</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>Do not use. For internal use only.</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p>Do not use. For internal use only.</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p>Do not use. For internal use only.</p>
     */
    inline PutResourcePolicyRequest& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>Do not use. For internal use only.</p>
     */
    inline PutResourcePolicyRequest& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>Do not use. For internal use only.</p>
     */
    inline PutResourcePolicyRequest& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


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
     * <code>NONE</code> or a null value is used, the call does not depend on the
     * existence of a policy.</p>
     */
    inline const ExistCondition& GetPolicyExistsCondition() const{ return m_policyExistsCondition; }

    /**
     * <p>A value of <code>MUST_EXIST</code> is used to update a policy. A value of
     * <code>NOT_EXIST</code> is used to create a new policy. If a value of
     * <code>NONE</code> or a null value is used, the call does not depend on the
     * existence of a policy.</p>
     */
    inline bool PolicyExistsConditionHasBeenSet() const { return m_policyExistsConditionHasBeenSet; }

    /**
     * <p>A value of <code>MUST_EXIST</code> is used to update a policy. A value of
     * <code>NOT_EXIST</code> is used to create a new policy. If a value of
     * <code>NONE</code> or a null value is used, the call does not depend on the
     * existence of a policy.</p>
     */
    inline void SetPolicyExistsCondition(const ExistCondition& value) { m_policyExistsConditionHasBeenSet = true; m_policyExistsCondition = value; }

    /**
     * <p>A value of <code>MUST_EXIST</code> is used to update a policy. A value of
     * <code>NOT_EXIST</code> is used to create a new policy. If a value of
     * <code>NONE</code> or a null value is used, the call does not depend on the
     * existence of a policy.</p>
     */
    inline void SetPolicyExistsCondition(ExistCondition&& value) { m_policyExistsConditionHasBeenSet = true; m_policyExistsCondition = std::move(value); }

    /**
     * <p>A value of <code>MUST_EXIST</code> is used to update a policy. A value of
     * <code>NOT_EXIST</code> is used to create a new policy. If a value of
     * <code>NONE</code> or a null value is used, the call does not depend on the
     * existence of a policy.</p>
     */
    inline PutResourcePolicyRequest& WithPolicyExistsCondition(const ExistCondition& value) { SetPolicyExistsCondition(value); return *this;}

    /**
     * <p>A value of <code>MUST_EXIST</code> is used to update a policy. A value of
     * <code>NOT_EXIST</code> is used to create a new policy. If a value of
     * <code>NONE</code> or a null value is used, the call does not depend on the
     * existence of a policy.</p>
     */
    inline PutResourcePolicyRequest& WithPolicyExistsCondition(ExistCondition&& value) { SetPolicyExistsCondition(std::move(value)); return *this;}


    /**
     * <p>If <code>'TRUE'</code>, indicates that you are using both methods to grant
     * cross-account access to Data Catalog resources:</p> <ul> <li> <p>By directly
     * updating the resource policy with <code>PutResourePolicy</code> </p> </li> <li>
     * <p>By using the <b>Grant permissions</b> command on the Amazon Web Services
     * Management Console.</p> </li> </ul> <p>Must be set to <code>'TRUE'</code> if you
     * have already used the Management Console to grant cross-account access,
     * otherwise the call fails. Default is 'FALSE'.</p>
     */
    inline const EnableHybridValues& GetEnableHybrid() const{ return m_enableHybrid; }

    /**
     * <p>If <code>'TRUE'</code>, indicates that you are using both methods to grant
     * cross-account access to Data Catalog resources:</p> <ul> <li> <p>By directly
     * updating the resource policy with <code>PutResourePolicy</code> </p> </li> <li>
     * <p>By using the <b>Grant permissions</b> command on the Amazon Web Services
     * Management Console.</p> </li> </ul> <p>Must be set to <code>'TRUE'</code> if you
     * have already used the Management Console to grant cross-account access,
     * otherwise the call fails. Default is 'FALSE'.</p>
     */
    inline bool EnableHybridHasBeenSet() const { return m_enableHybridHasBeenSet; }

    /**
     * <p>If <code>'TRUE'</code>, indicates that you are using both methods to grant
     * cross-account access to Data Catalog resources:</p> <ul> <li> <p>By directly
     * updating the resource policy with <code>PutResourePolicy</code> </p> </li> <li>
     * <p>By using the <b>Grant permissions</b> command on the Amazon Web Services
     * Management Console.</p> </li> </ul> <p>Must be set to <code>'TRUE'</code> if you
     * have already used the Management Console to grant cross-account access,
     * otherwise the call fails. Default is 'FALSE'.</p>
     */
    inline void SetEnableHybrid(const EnableHybridValues& value) { m_enableHybridHasBeenSet = true; m_enableHybrid = value; }

    /**
     * <p>If <code>'TRUE'</code>, indicates that you are using both methods to grant
     * cross-account access to Data Catalog resources:</p> <ul> <li> <p>By directly
     * updating the resource policy with <code>PutResourePolicy</code> </p> </li> <li>
     * <p>By using the <b>Grant permissions</b> command on the Amazon Web Services
     * Management Console.</p> </li> </ul> <p>Must be set to <code>'TRUE'</code> if you
     * have already used the Management Console to grant cross-account access,
     * otherwise the call fails. Default is 'FALSE'.</p>
     */
    inline void SetEnableHybrid(EnableHybridValues&& value) { m_enableHybridHasBeenSet = true; m_enableHybrid = std::move(value); }

    /**
     * <p>If <code>'TRUE'</code>, indicates that you are using both methods to grant
     * cross-account access to Data Catalog resources:</p> <ul> <li> <p>By directly
     * updating the resource policy with <code>PutResourePolicy</code> </p> </li> <li>
     * <p>By using the <b>Grant permissions</b> command on the Amazon Web Services
     * Management Console.</p> </li> </ul> <p>Must be set to <code>'TRUE'</code> if you
     * have already used the Management Console to grant cross-account access,
     * otherwise the call fails. Default is 'FALSE'.</p>
     */
    inline PutResourcePolicyRequest& WithEnableHybrid(const EnableHybridValues& value) { SetEnableHybrid(value); return *this;}

    /**
     * <p>If <code>'TRUE'</code>, indicates that you are using both methods to grant
     * cross-account access to Data Catalog resources:</p> <ul> <li> <p>By directly
     * updating the resource policy with <code>PutResourePolicy</code> </p> </li> <li>
     * <p>By using the <b>Grant permissions</b> command on the Amazon Web Services
     * Management Console.</p> </li> </ul> <p>Must be set to <code>'TRUE'</code> if you
     * have already used the Management Console to grant cross-account access,
     * otherwise the call fails. Default is 'FALSE'.</p>
     */
    inline PutResourcePolicyRequest& WithEnableHybrid(EnableHybridValues&& value) { SetEnableHybrid(std::move(value)); return *this;}

  private:

    Aws::String m_policyInJson;
    bool m_policyInJsonHasBeenSet = false;

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    Aws::String m_policyHashCondition;
    bool m_policyHashConditionHasBeenSet = false;

    ExistCondition m_policyExistsCondition;
    bool m_policyExistsConditionHasBeenSet = false;

    EnableHybridValues m_enableHybrid;
    bool m_enableHybridHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
