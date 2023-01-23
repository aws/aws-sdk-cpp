/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/docdb/model/ModifyDBSubnetGroupRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::DocDB::Model;
using namespace Aws::Utils;

ModifyDBSubnetGroupRequest::ModifyDBSubnetGroupRequest() : 
    m_dBSubnetGroupNameHasBeenSet(false),
    m_dBSubnetGroupDescriptionHasBeenSet(false),
    m_subnetIdsHasBeenSet(false)
{
}

Aws::String ModifyDBSubnetGroupRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifyDBSubnetGroup&";
  if(m_dBSubnetGroupNameHasBeenSet)
  {
    ss << "DBSubnetGroupName=" << StringUtils::URLEncode(m_dBSubnetGroupName.c_str()) << "&";
  }

  if(m_dBSubnetGroupDescriptionHasBeenSet)
  {
    ss << "DBSubnetGroupDescription=" << StringUtils::URLEncode(m_dBSubnetGroupDescription.c_str()) << "&";
  }

  if(m_subnetIdsHasBeenSet)
  {
    unsigned subnetIdsCount = 1;
    for(auto& item : m_subnetIds)
    {
      ss << "SubnetIds.member." << subnetIdsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      subnetIdsCount++;
    }
  }

  ss << "Version=2014-10-31";
  return ss.str();
}


void  ModifyDBSubnetGroupRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
