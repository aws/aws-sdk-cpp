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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws
{
namespace IAM
{
namespace Model
{

  /**
   */
  class AWS_IAM_API GetContextKeysForPolicyRequest : public IAMRequest
  {
  public:
    GetContextKeysForPolicyRequest();
    Aws::String SerializePayload() const override;


    
    inline const Aws::String& GetGetPolicyFor() const{ return m_getPolicyFor; }

    
    inline void SetGetPolicyFor(const Aws::String& value) { m_getPolicyForHasBeenSet = true; m_getPolicyFor = value; }

    
    inline void SetGetPolicyFor(Aws::String&& value) { m_getPolicyForHasBeenSet = true; m_getPolicyFor = value; }

    
    inline void SetGetPolicyFor(const char* value) { m_getPolicyForHasBeenSet = true; m_getPolicyFor.assign(value); }

    
    inline GetContextKeysForPolicyRequest& WithGetPolicyFor(const Aws::String& value) { SetGetPolicyFor(value); return *this;}

    
    inline GetContextKeysForPolicyRequest& WithGetPolicyFor(Aws::String&& value) { SetGetPolicyFor(value); return *this;}

    
    inline GetContextKeysForPolicyRequest& WithGetPolicyFor(const char* value) { SetGetPolicyFor(value); return *this;}

    
    inline const Aws::Vector<Aws::String>& GetPolicyInputList() const{ return m_policyInputList; }

    
    inline void SetPolicyInputList(const Aws::Vector<Aws::String>& value) { m_policyInputListHasBeenSet = true; m_policyInputList = value; }

    
    inline void SetPolicyInputList(Aws::Vector<Aws::String>&& value) { m_policyInputListHasBeenSet = true; m_policyInputList = value; }

    
    inline GetContextKeysForPolicyRequest& WithPolicyInputList(const Aws::Vector<Aws::String>& value) { SetPolicyInputList(value); return *this;}

    
    inline GetContextKeysForPolicyRequest& WithPolicyInputList(Aws::Vector<Aws::String>&& value) { SetPolicyInputList(value); return *this;}

    
    inline GetContextKeysForPolicyRequest& AddPolicyInputList(const Aws::String& value) { m_policyInputListHasBeenSet = true; m_policyInputList.push_back(value); return *this; }

    
    inline GetContextKeysForPolicyRequest& AddPolicyInputList(Aws::String&& value) { m_policyInputListHasBeenSet = true; m_policyInputList.push_back(value); return *this; }

    
    inline GetContextKeysForPolicyRequest& AddPolicyInputList(const char* value) { m_policyInputListHasBeenSet = true; m_policyInputList.push_back(value); return *this; }

  private:
    Aws::String m_getPolicyFor;
    bool m_getPolicyForHasBeenSet;
    Aws::Vector<Aws::String> m_policyInputList;
    bool m_policyInputListHasBeenSet;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
