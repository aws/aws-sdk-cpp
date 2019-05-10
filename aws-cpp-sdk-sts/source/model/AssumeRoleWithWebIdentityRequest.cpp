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

#include <aws/sts/model/AssumeRoleWithWebIdentityRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::STS::Model;
using namespace Aws::Utils;

AssumeRoleWithWebIdentityRequest::AssumeRoleWithWebIdentityRequest() : 
    m_roleArnHasBeenSet(false),
    m_roleSessionNameHasBeenSet(false),
    m_webIdentityTokenHasBeenSet(false),
    m_providerIdHasBeenSet(false),
    m_policyArnsHasBeenSet(false),
    m_policyHasBeenSet(false),
    m_durationSeconds(0),
    m_durationSecondsHasBeenSet(false)
{
}

Aws::String AssumeRoleWithWebIdentityRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=AssumeRoleWithWebIdentity&";
  if(m_roleArnHasBeenSet)
  {
    ss << "RoleArn=" << StringUtils::URLEncode(m_roleArn.c_str()) << "&";
  }

  if(m_roleSessionNameHasBeenSet)
  {
    ss << "RoleSessionName=" << StringUtils::URLEncode(m_roleSessionName.c_str()) << "&";
  }

  if(m_webIdentityTokenHasBeenSet)
  {
    ss << "WebIdentityToken=" << StringUtils::URLEncode(m_webIdentityToken.c_str()) << "&";
  }

  if(m_providerIdHasBeenSet)
  {
    ss << "ProviderId=" << StringUtils::URLEncode(m_providerId.c_str()) << "&";
  }

  if(m_policyArnsHasBeenSet)
  {
    unsigned policyArnsCount = 1;
    for(auto& item : m_policyArns)
    {
      item.OutputToStream(ss, "PolicyArns.member.", policyArnsCount, "");
      policyArnsCount++;
    }
  }

  if(m_policyHasBeenSet)
  {
    ss << "Policy=" << StringUtils::URLEncode(m_policy.c_str()) << "&";
  }

  if(m_durationSecondsHasBeenSet)
  {
    ss << "DurationSeconds=" << m_durationSeconds << "&";
  }

  ss << "Version=2011-06-15";
  return ss.str();
}


void  AssumeRoleWithWebIdentityRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
