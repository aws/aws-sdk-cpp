/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/ModifyOptionGroupRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::RDS::Model;
using namespace Aws::Utils;

ModifyOptionGroupRequest::ModifyOptionGroupRequest() : 
    m_optionGroupNameHasBeenSet(false),
    m_optionsToIncludeHasBeenSet(false),
    m_optionsToRemoveHasBeenSet(false),
    m_applyImmediately(false),
    m_applyImmediatelyHasBeenSet(false)
{
}

Aws::String ModifyOptionGroupRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifyOptionGroup&";
  if(m_optionGroupNameHasBeenSet)
  {
    ss << "OptionGroupName=" << StringUtils::URLEncode(m_optionGroupName.c_str()) << "&";
  }

  if(m_optionsToIncludeHasBeenSet)
  {
    unsigned optionsToIncludeCount = 1;
    for(auto& item : m_optionsToInclude)
    {
      item.OutputToStream(ss, "OptionsToInclude.member.", optionsToIncludeCount, "");
      optionsToIncludeCount++;
    }
  }

  if(m_optionsToRemoveHasBeenSet)
  {
    unsigned optionsToRemoveCount = 1;
    for(auto& item : m_optionsToRemove)
    {
      ss << "OptionsToRemove.member." << optionsToRemoveCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      optionsToRemoveCount++;
    }
  }

  if(m_applyImmediatelyHasBeenSet)
  {
    ss << "ApplyImmediately=" << std::boolalpha << m_applyImmediately << "&";
  }

  ss << "Version=2014-10-31";
  return ss.str();
}


void  ModifyOptionGroupRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
