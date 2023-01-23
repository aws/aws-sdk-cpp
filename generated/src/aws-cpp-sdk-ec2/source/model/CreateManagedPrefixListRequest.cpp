/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/CreateManagedPrefixListRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

CreateManagedPrefixListRequest::CreateManagedPrefixListRequest() : 
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_prefixListNameHasBeenSet(false),
    m_entriesHasBeenSet(false),
    m_maxEntries(0),
    m_maxEntriesHasBeenSet(false),
    m_tagSpecificationsHasBeenSet(false),
    m_addressFamilyHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::RandomUUID()),
    m_clientTokenHasBeenSet(true)
{
}

Aws::String CreateManagedPrefixListRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateManagedPrefixList&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_prefixListNameHasBeenSet)
  {
    ss << "PrefixListName=" << StringUtils::URLEncode(m_prefixListName.c_str()) << "&";
  }

  if(m_entriesHasBeenSet)
  {
    unsigned entriesCount = 1;
    for(auto& item : m_entries)
    {
      item.OutputToStream(ss, "Entry.", entriesCount, "");
      entriesCount++;
    }
  }

  if(m_maxEntriesHasBeenSet)
  {
    ss << "MaxEntries=" << m_maxEntries << "&";
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

  if(m_addressFamilyHasBeenSet)
  {
    ss << "AddressFamily=" << StringUtils::URLEncode(m_addressFamily.c_str()) << "&";
  }

  if(m_clientTokenHasBeenSet)
  {
    ss << "ClientToken=" << StringUtils::URLEncode(m_clientToken.c_str()) << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  CreateManagedPrefixListRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
