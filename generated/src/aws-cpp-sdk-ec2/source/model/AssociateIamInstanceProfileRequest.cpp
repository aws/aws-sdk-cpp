/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/AssociateIamInstanceProfileRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

AssociateIamInstanceProfileRequest::AssociateIamInstanceProfileRequest() : 
    m_iamInstanceProfileHasBeenSet(false),
    m_instanceIdHasBeenSet(false)
{
}

Aws::String AssociateIamInstanceProfileRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=AssociateIamInstanceProfile&";
  if(m_iamInstanceProfileHasBeenSet)
  {
    m_iamInstanceProfile.OutputToStream(ss, "IamInstanceProfile");
  }

  if(m_instanceIdHasBeenSet)
  {
    ss << "InstanceId=" << StringUtils::URLEncode(m_instanceId.c_str()) << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  AssociateIamInstanceProfileRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
