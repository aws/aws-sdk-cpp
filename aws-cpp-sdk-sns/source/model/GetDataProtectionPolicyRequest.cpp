/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sns/model/GetDataProtectionPolicyRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::SNS::Model;
using namespace Aws::Utils;

GetDataProtectionPolicyRequest::GetDataProtectionPolicyRequest() : 
    m_resourceArnHasBeenSet(false)
{
}

Aws::String GetDataProtectionPolicyRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=GetDataProtectionPolicy&";
  if(m_resourceArnHasBeenSet)
  {
    ss << "ResourceArn=" << StringUtils::URLEncode(m_resourceArn.c_str()) << "&";
  }

  ss << "Version=2010-03-31";
  return ss.str();
}


void  GetDataProtectionPolicyRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
