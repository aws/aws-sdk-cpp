/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ModifyManagedPrefixListRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

ModifyManagedPrefixListRequest::ModifyManagedPrefixListRequest() : 
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_prefixListIdHasBeenSet(false),
    m_currentVersion(0),
    m_currentVersionHasBeenSet(false),
    m_prefixListNameHasBeenSet(false),
    m_addEntriesHasBeenSet(false),
    m_removeEntriesHasBeenSet(false)
{
}

Aws::String ModifyManagedPrefixListRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifyManagedPrefixList&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_prefixListIdHasBeenSet)
  {
    ss << "PrefixListId=" << StringUtils::URLEncode(m_prefixListId.c_str()) << "&";
  }

  if(m_currentVersionHasBeenSet)
  {
    ss << "CurrentVersion=" << m_currentVersion << "&";
  }

  if(m_prefixListNameHasBeenSet)
  {
    ss << "PrefixListName=" << StringUtils::URLEncode(m_prefixListName.c_str()) << "&";
  }

  if(m_addEntriesHasBeenSet)
  {
    unsigned addEntriesCount = 1;
    for(auto& item : m_addEntries)
    {
      item.OutputToStream(ss, "AddEntry.", addEntriesCount, "");
      addEntriesCount++;
    }
  }

  if(m_removeEntriesHasBeenSet)
  {
    unsigned removeEntriesCount = 1;
    for(auto& item : m_removeEntries)
    {
      item.OutputToStream(ss, "RemoveEntry.", removeEntriesCount, "");
      removeEntriesCount++;
    }
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  ModifyManagedPrefixListRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
