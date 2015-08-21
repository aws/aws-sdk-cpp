/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/iam/model/SimulatePolicyRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::IAM::Model;
using namespace Aws::Utils;

SimulatePolicyRequest::SimulatePolicyRequest() : 
    m_getPolicyForHasBeenSet(false),
    m_policyInputListHasBeenSet(false),
    m_actionNamesHasBeenSet(false),
    m_resourceNamesHasBeenSet(false),
    m_contextEntriesHasBeenSet(false)
{
}

Aws::String SimulatePolicyRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=SimulatePolicy&";
  if(m_getPolicyForHasBeenSet)
  {
    ss << "GetPolicyFor=" << StringUtils::URLEncode(m_getPolicyFor.c_str()) << "&";
  }
  if(m_policyInputListHasBeenSet)
  {
    unsigned policyInputListCount = 1;
    for(auto& item : m_policyInputList)
    {
      ss << "PolicyInputList.member." << policyInputListCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      policyInputListCount++;
    }
  }
  if(m_actionNamesHasBeenSet)
  {
    unsigned actionNamesCount = 1;
    for(auto& item : m_actionNames)
    {
      ss << "ActionNames.member." << actionNamesCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      actionNamesCount++;
    }
  }
  if(m_resourceNamesHasBeenSet)
  {
    unsigned resourceNamesCount = 1;
    for(auto& item : m_resourceNames)
    {
      ss << "ResourceNames.member." << resourceNamesCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      resourceNamesCount++;
    }
  }
  if(m_contextEntriesHasBeenSet)
  {
    unsigned contextEntriesCount = 1;
    for(auto& item : m_contextEntries)
    {
      item.OutputToStream(ss, "ContextEntries.member.", contextEntriesCount, "");
      contextEntriesCount++;
    }
  }
  ss << "Version=2010-05-08";
  return ss.str();
}

