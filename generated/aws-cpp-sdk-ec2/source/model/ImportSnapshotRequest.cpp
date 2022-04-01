/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ImportSnapshotRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

ImportSnapshotRequest::ImportSnapshotRequest() : 
    m_clientDataHasBeenSet(false),
    m_clientTokenHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_diskContainerHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_encrypted(false),
    m_encryptedHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_roleNameHasBeenSet(false),
    m_tagSpecificationsHasBeenSet(false)
{
}

Aws::String ImportSnapshotRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ImportSnapshot&";
  if(m_clientDataHasBeenSet)
  {
    m_clientData.OutputToStream(ss, "ClientData");
  }

  if(m_clientTokenHasBeenSet)
  {
    ss << "ClientToken=" << StringUtils::URLEncode(m_clientToken.c_str()) << "&";
  }

  if(m_descriptionHasBeenSet)
  {
    ss << "Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if(m_diskContainerHasBeenSet)
  {
    m_diskContainer.OutputToStream(ss, "DiskContainer");
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_encryptedHasBeenSet)
  {
    ss << "Encrypted=" << std::boolalpha << m_encrypted << "&";
  }

  if(m_kmsKeyIdHasBeenSet)
  {
    ss << "KmsKeyId=" << StringUtils::URLEncode(m_kmsKeyId.c_str()) << "&";
  }

  if(m_roleNameHasBeenSet)
  {
    ss << "RoleName=" << StringUtils::URLEncode(m_roleName.c_str()) << "&";
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


void  ImportSnapshotRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
