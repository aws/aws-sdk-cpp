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
#include <aws/iam/model/ContextEntry.h>

namespace Aws
{
namespace IAM
{
namespace Model
{

  /**
   */
  class AWS_IAM_API SimulatePolicyRequest : public IAMRequest
  {
  public:
    SimulatePolicyRequest();
    Aws::String SerializePayload() const override;


    
    inline const Aws::String& GetGetPolicyFor() const{ return m_getPolicyFor; }

    
    inline void SetGetPolicyFor(const Aws::String& value) { m_getPolicyForHasBeenSet = true; m_getPolicyFor = value; }

    
    inline void SetGetPolicyFor(Aws::String&& value) { m_getPolicyForHasBeenSet = true; m_getPolicyFor = value; }

    
    inline void SetGetPolicyFor(const char* value) { m_getPolicyForHasBeenSet = true; m_getPolicyFor.assign(value); }

    
    inline SimulatePolicyRequest& WithGetPolicyFor(const Aws::String& value) { SetGetPolicyFor(value); return *this;}

    
    inline SimulatePolicyRequest& WithGetPolicyFor(Aws::String&& value) { SetGetPolicyFor(value); return *this;}

    
    inline SimulatePolicyRequest& WithGetPolicyFor(const char* value) { SetGetPolicyFor(value); return *this;}

    
    inline const Aws::Vector<Aws::String>& GetPolicyInputList() const{ return m_policyInputList; }

    
    inline void SetPolicyInputList(const Aws::Vector<Aws::String>& value) { m_policyInputListHasBeenSet = true; m_policyInputList = value; }

    
    inline void SetPolicyInputList(Aws::Vector<Aws::String>&& value) { m_policyInputListHasBeenSet = true; m_policyInputList = value; }

    
    inline SimulatePolicyRequest& WithPolicyInputList(const Aws::Vector<Aws::String>& value) { SetPolicyInputList(value); return *this;}

    
    inline SimulatePolicyRequest& WithPolicyInputList(Aws::Vector<Aws::String>&& value) { SetPolicyInputList(value); return *this;}

    
    inline SimulatePolicyRequest& AddPolicyInputList(const Aws::String& value) { m_policyInputListHasBeenSet = true; m_policyInputList.push_back(value); return *this; }

    
    inline SimulatePolicyRequest& AddPolicyInputList(Aws::String&& value) { m_policyInputListHasBeenSet = true; m_policyInputList.push_back(value); return *this; }

    
    inline SimulatePolicyRequest& AddPolicyInputList(const char* value) { m_policyInputListHasBeenSet = true; m_policyInputList.push_back(value); return *this; }

    
    inline const Aws::Vector<Aws::String>& GetActionNames() const{ return m_actionNames; }

    
    inline void SetActionNames(const Aws::Vector<Aws::String>& value) { m_actionNamesHasBeenSet = true; m_actionNames = value; }

    
    inline void SetActionNames(Aws::Vector<Aws::String>&& value) { m_actionNamesHasBeenSet = true; m_actionNames = value; }

    
    inline SimulatePolicyRequest& WithActionNames(const Aws::Vector<Aws::String>& value) { SetActionNames(value); return *this;}

    
    inline SimulatePolicyRequest& WithActionNames(Aws::Vector<Aws::String>&& value) { SetActionNames(value); return *this;}

    
    inline SimulatePolicyRequest& AddActionNames(const Aws::String& value) { m_actionNamesHasBeenSet = true; m_actionNames.push_back(value); return *this; }

    
    inline SimulatePolicyRequest& AddActionNames(Aws::String&& value) { m_actionNamesHasBeenSet = true; m_actionNames.push_back(value); return *this; }

    
    inline SimulatePolicyRequest& AddActionNames(const char* value) { m_actionNamesHasBeenSet = true; m_actionNames.push_back(value); return *this; }

    
    inline const Aws::Vector<Aws::String>& GetResourceNames() const{ return m_resourceNames; }

    
    inline void SetResourceNames(const Aws::Vector<Aws::String>& value) { m_resourceNamesHasBeenSet = true; m_resourceNames = value; }

    
    inline void SetResourceNames(Aws::Vector<Aws::String>&& value) { m_resourceNamesHasBeenSet = true; m_resourceNames = value; }

    
    inline SimulatePolicyRequest& WithResourceNames(const Aws::Vector<Aws::String>& value) { SetResourceNames(value); return *this;}

    
    inline SimulatePolicyRequest& WithResourceNames(Aws::Vector<Aws::String>&& value) { SetResourceNames(value); return *this;}

    
    inline SimulatePolicyRequest& AddResourceNames(const Aws::String& value) { m_resourceNamesHasBeenSet = true; m_resourceNames.push_back(value); return *this; }

    
    inline SimulatePolicyRequest& AddResourceNames(Aws::String&& value) { m_resourceNamesHasBeenSet = true; m_resourceNames.push_back(value); return *this; }

    
    inline SimulatePolicyRequest& AddResourceNames(const char* value) { m_resourceNamesHasBeenSet = true; m_resourceNames.push_back(value); return *this; }

    
    inline const Aws::Vector<ContextEntry>& GetContextEntries() const{ return m_contextEntries; }

    
    inline void SetContextEntries(const Aws::Vector<ContextEntry>& value) { m_contextEntriesHasBeenSet = true; m_contextEntries = value; }

    
    inline void SetContextEntries(Aws::Vector<ContextEntry>&& value) { m_contextEntriesHasBeenSet = true; m_contextEntries = value; }

    
    inline SimulatePolicyRequest& WithContextEntries(const Aws::Vector<ContextEntry>& value) { SetContextEntries(value); return *this;}

    
    inline SimulatePolicyRequest& WithContextEntries(Aws::Vector<ContextEntry>&& value) { SetContextEntries(value); return *this;}

    
    inline SimulatePolicyRequest& AddContextEntries(const ContextEntry& value) { m_contextEntriesHasBeenSet = true; m_contextEntries.push_back(value); return *this; }

    
    inline SimulatePolicyRequest& AddContextEntries(ContextEntry&& value) { m_contextEntriesHasBeenSet = true; m_contextEntries.push_back(value); return *this; }

  private:
    Aws::String m_getPolicyFor;
    bool m_getPolicyForHasBeenSet;
    Aws::Vector<Aws::String> m_policyInputList;
    bool m_policyInputListHasBeenSet;
    Aws::Vector<Aws::String> m_actionNames;
    bool m_actionNamesHasBeenSet;
    Aws::Vector<Aws::String> m_resourceNames;
    bool m_resourceNamesHasBeenSet;
    Aws::Vector<ContextEntry> m_contextEntries;
    bool m_contextEntriesHasBeenSet;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
