/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/CreateReplaceRootVolumeTaskRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

CreateReplaceRootVolumeTaskRequest::CreateReplaceRootVolumeTaskRequest() : 
    m_instanceIdHasBeenSet(false),
    m_snapshotIdHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::RandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_tagSpecificationsHasBeenSet(false),
    m_imageIdHasBeenSet(false),
    m_deleteReplacedRootVolume(false),
    m_deleteReplacedRootVolumeHasBeenSet(false)
{
}

Aws::String CreateReplaceRootVolumeTaskRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateReplaceRootVolumeTask&";
  if(m_instanceIdHasBeenSet)
  {
    ss << "InstanceId=" << StringUtils::URLEncode(m_instanceId.c_str()) << "&";
  }

  if(m_snapshotIdHasBeenSet)
  {
    ss << "SnapshotId=" << StringUtils::URLEncode(m_snapshotId.c_str()) << "&";
  }

  if(m_clientTokenHasBeenSet)
  {
    ss << "ClientToken=" << StringUtils::URLEncode(m_clientToken.c_str()) << "&";
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
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

  if(m_imageIdHasBeenSet)
  {
    ss << "ImageId=" << StringUtils::URLEncode(m_imageId.c_str()) << "&";
  }

  if(m_deleteReplacedRootVolumeHasBeenSet)
  {
    ss << "DeleteReplacedRootVolume=" << std::boolalpha << m_deleteReplacedRootVolume << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  CreateReplaceRootVolumeTaskRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
