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
#include <aws/iam/model/CreatePolicyVersionRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::IAM::Model;
using namespace Aws::Utils;

CreatePolicyVersionRequest::CreatePolicyVersionRequest() : 
    m_policyArnHasBeenSet(false),
    m_policyDocumentHasBeenSet(false),
    m_setAsDefault(false),
    m_setAsDefaultHasBeenSet(false)
{
}

Aws::String CreatePolicyVersionRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreatePolicyVersion&";
  if(m_policyArnHasBeenSet)
  {
    ss << "PolicyArn=" << StringUtils::URLEncode(m_policyArn.c_str()) << "&";
  }

  if(m_policyDocumentHasBeenSet)
  {
    ss << "PolicyDocument=" << StringUtils::URLEncode(m_policyDocument.c_str()) << "&";
  }

  if(m_setAsDefaultHasBeenSet)
  {
    ss << "SetAsDefault=" << m_setAsDefault << "&";
  }

  ss << "Version=2010-05-08";
  return ss.str();
}

