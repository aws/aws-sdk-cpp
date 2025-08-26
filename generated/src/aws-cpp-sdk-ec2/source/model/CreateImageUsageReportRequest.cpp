/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/CreateImageUsageReportRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

Aws::String CreateImageUsageReportRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateImageUsageReport&";
  if(m_imageIdHasBeenSet)
  {
    ss << "ImageId=" << StringUtils::URLEncode(m_imageId.c_str()) << "&";
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_resourceTypesHasBeenSet)
  {
    unsigned resourceTypesCount = 1;
    for(auto& item : m_resourceTypes)
    {
      item.OutputToStream(ss, "ResourceType.", resourceTypesCount, "");
      resourceTypesCount++;
    }
  }

  if(m_accountIdsHasBeenSet)
  {
    unsigned accountIdsCount = 1;
    for(auto& item : m_accountIds)
    {
      ss << "AccountId." << accountIdsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      accountIdsCount++;
    }
  }

  if(m_clientTokenHasBeenSet)
  {
    ss << "ClientToken=" << StringUtils::URLEncode(m_clientToken.c_str()) << "&";
  }

  if(m_tagSpecificationsHasBeenSet)
  {
    unsigned tagSpecificationsCount = 1;
    for(auto& item : m_tagSpecifications)
    {
      item.OutputToStream(ss, "TagSpecification.", tagSpecificationsCount, "");
      tagSpecificationsCount++;
    }
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  CreateImageUsageReportRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
