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
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class AWS_GLUE_API DeleteResourcePolicyRequest : public GlueRequest
  {
  public:
    DeleteResourcePolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteResourcePolicy"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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

  private:

    Aws::String m_policyHashCondition;
    bool m_policyHashConditionHasBeenSet;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
