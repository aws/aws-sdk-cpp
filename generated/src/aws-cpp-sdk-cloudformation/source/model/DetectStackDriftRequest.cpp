/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/DetectStackDriftRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::CloudFormation::Model;
using namespace Aws::Utils;

DetectStackDriftRequest::DetectStackDriftRequest() : 
    m_stackNameHasBeenSet(false),
    m_logicalResourceIdsHasBeenSet(false)
{
}

Aws::String DetectStackDriftRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DetectStackDrift&";
  if(m_stackNameHasBeenSet)
  {
    ss << "StackName=" << StringUtils::URLEncode(m_stackName.c_str()) << "&";
  }

  if(m_logicalResourceIdsHasBeenSet)
  {
    unsigned logicalResourceIdsCount = 1;
    for(auto& item : m_logicalResourceIds)
    {
      ss << "LogicalResourceIds.member." << logicalResourceIdsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      logicalResourceIdsCount++;
    }
  }

  ss << "Version=2010-05-15";
  return ss.str();
}


void  DetectStackDriftRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
