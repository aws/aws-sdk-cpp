﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoT
{
namespace Model
{

  /**
   * <p>The input for the DeletePolicyVersion operation.</p>
   */
  class AWS_IOT_API DeletePolicyVersionRequest : public IoTRequest
  {
  public:
    DeletePolicyVersionRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The name of the policy.</p>
     */
    inline const Aws::String& GetPolicyName() const{ return m_policyName; }

    /**
     * <p>The name of the policy.</p>
     */
    inline void SetPolicyName(const Aws::String& value) { m_policyNameHasBeenSet = true; m_policyName = value; }

    /**
     * <p>The name of the policy.</p>
     */
    inline void SetPolicyName(Aws::String&& value) { m_policyNameHasBeenSet = true; m_policyName = value; }

    /**
     * <p>The name of the policy.</p>
     */
    inline void SetPolicyName(const char* value) { m_policyNameHasBeenSet = true; m_policyName.assign(value); }

    /**
     * <p>The name of the policy.</p>
     */
    inline DeletePolicyVersionRequest& WithPolicyName(const Aws::String& value) { SetPolicyName(value); return *this;}

    /**
     * <p>The name of the policy.</p>
     */
    inline DeletePolicyVersionRequest& WithPolicyName(Aws::String&& value) { SetPolicyName(value); return *this;}

    /**
     * <p>The name of the policy.</p>
     */
    inline DeletePolicyVersionRequest& WithPolicyName(const char* value) { SetPolicyName(value); return *this;}

    /**
     * <p>The policy version ID.</p>
     */
    inline const Aws::String& GetPolicyVersionId() const{ return m_policyVersionId; }

    /**
     * <p>The policy version ID.</p>
     */
    inline void SetPolicyVersionId(const Aws::String& value) { m_policyVersionIdHasBeenSet = true; m_policyVersionId = value; }

    /**
     * <p>The policy version ID.</p>
     */
    inline void SetPolicyVersionId(Aws::String&& value) { m_policyVersionIdHasBeenSet = true; m_policyVersionId = value; }

    /**
     * <p>The policy version ID.</p>
     */
    inline void SetPolicyVersionId(const char* value) { m_policyVersionIdHasBeenSet = true; m_policyVersionId.assign(value); }

    /**
     * <p>The policy version ID.</p>
     */
    inline DeletePolicyVersionRequest& WithPolicyVersionId(const Aws::String& value) { SetPolicyVersionId(value); return *this;}

    /**
     * <p>The policy version ID.</p>
     */
    inline DeletePolicyVersionRequest& WithPolicyVersionId(Aws::String&& value) { SetPolicyVersionId(value); return *this;}

    /**
     * <p>The policy version ID.</p>
     */
    inline DeletePolicyVersionRequest& WithPolicyVersionId(const char* value) { SetPolicyVersionId(value); return *this;}

  private:
    Aws::String m_policyName;
    bool m_policyNameHasBeenSet;
    Aws::String m_policyVersionId;
    bool m_policyVersionIdHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
