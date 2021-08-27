/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/CreateSnapshotsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

CreateSnapshotsRequest::CreateSnapshotsRequest() : 
    m_descriptionHasBeenSet(false),
    m_instanceSpecificationHasBeenSet(false),
    m_tagSpecificationsHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_copyTagsFromSource(CopyTagsFromSource::NOT_SET),
    m_copyTagsFromSourceHasBeenSet(false)
{
}

Aws::String CreateSnapshotsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateSnapshots&";
  if(m_descriptionHasBeenSet)
  {
    ss << "Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if(m_instanceSpecificationHasBeenSet)
  {
    m_instanceSpecification.OutputToStream(ss, "InstanceSpecification");
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

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_copyTagsFromSourceHasBeenSet)
  {
    ss << "CopyTagsFromSource=" << CopyTagsFromSourceMapper::GetNameForCopyTagsFromSource(m_copyTagsFromSource) << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  CreateSnapshotsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
