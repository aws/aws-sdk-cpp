/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/DetectStackResourceDriftRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::CloudFormation::Model;
using namespace Aws::Utils;

DetectStackResourceDriftRequest::DetectStackResourceDriftRequest() : 
    m_stackNameHasBeenSet(false),
    m_logicalResourceIdHasBeenSet(false)
{
}

Aws::String DetectStackResourceDriftRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DetectStackResourceDrift&";
  if(m_stackNameHasBeenSet)
  {
    ss << "StackName=" << StringUtils::URLEncode(m_stackName.c_str()) << "&";
  }

  if(m_logicalResourceIdHasBeenSet)
  {
    ss << "LogicalResourceId=" << StringUtils::URLEncode(m_logicalResourceId.c_str()) << "&";
  }

  ss << "Version=2010-05-15";
  return ss.str();
}


void  DetectStackResourceDriftRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
