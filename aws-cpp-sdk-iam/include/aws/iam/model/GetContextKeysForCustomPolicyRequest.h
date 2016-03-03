/*
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
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/iam/IAMRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IAM
{
namespace Model
{

  /**
   */
  class AWS_IAM_API GetContextKeysForCustomPolicyRequest : public IAMRequest
  {
  public:
    GetContextKeysForCustomPolicyRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>A list of policies for which you want list of context keys used in
     * <code>Condition</code> elements. Each document is specified as a string
     * containing the complete, valid JSON text of an IAM policy.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPolicyInputList() const{ return m_policyInputList; }

    /**
     * <p>A list of policies for which you want list of context keys used in
     * <code>Condition</code> elements. Each document is specified as a string
     * containing the complete, valid JSON text of an IAM policy.</p>
     */
    inline void SetPolicyInputList(const Aws::Vector<Aws::String>& value) { m_policyInputListHasBeenSet = true; m_policyInputList = value; }

    /**
     * <p>A list of policies for which you want list of context keys used in
     * <code>Condition</code> elements. Each document is specified as a string
     * containing the complete, valid JSON text of an IAM policy.</p>
     */
    inline void SetPolicyInputList(Aws::Vector<Aws::String>&& value) { m_policyInputListHasBeenSet = true; m_policyInputList = value; }

    /**
     * <p>A list of policies for which you want list of context keys used in
     * <code>Condition</code> elements. Each document is specified as a string
     * containing the complete, valid JSON text of an IAM policy.</p>
     */
    inline GetContextKeysForCustomPolicyRequest& WithPolicyInputList(const Aws::Vector<Aws::String>& value) { SetPolicyInputList(value); return *this;}

    /**
     * <p>A list of policies for which you want list of context keys used in
     * <code>Condition</code> elements. Each document is specified as a string
     * containing the complete, valid JSON text of an IAM policy.</p>
     */
    inline GetContextKeysForCustomPolicyRequest& WithPolicyInputList(Aws::Vector<Aws::String>&& value) { SetPolicyInputList(value); return *this;}

    /**
     * <p>A list of policies for which you want list of context keys used in
     * <code>Condition</code> elements. Each document is specified as a string
     * containing the complete, valid JSON text of an IAM policy.</p>
     */
    inline GetContextKeysForCustomPolicyRequest& AddPolicyInputList(const Aws::String& value) { m_policyInputListHasBeenSet = true; m_policyInputList.push_back(value); return *this; }

    /**
     * <p>A list of policies for which you want list of context keys used in
     * <code>Condition</code> elements. Each document is specified as a string
     * containing the complete, valid JSON text of an IAM policy.</p>
     */
    inline GetContextKeysForCustomPolicyRequest& AddPolicyInputList(Aws::String&& value) { m_policyInputListHasBeenSet = true; m_policyInputList.push_back(value); return *this; }

    /**
     * <p>A list of policies for which you want list of context keys used in
     * <code>Condition</code> elements. Each document is specified as a string
     * containing the complete, valid JSON text of an IAM policy.</p>
     */
    inline GetContextKeysForCustomPolicyRequest& AddPolicyInputList(const char* value) { m_policyInputListHasBeenSet = true; m_policyInputList.push_back(value); return *this; }

  private:
    Aws::Vector<Aws::String> m_policyInputList;
    bool m_policyInputListHasBeenSet;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
