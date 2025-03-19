/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/DeleteStackRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::CloudFormation::Model;
using namespace Aws::Utils;

Aws::String DeleteStackRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DeleteStack&";
  if(m_stackNameHasBeenSet)
  {
    ss << "StackName=" << StringUtils::URLEncode(m_stackName.c_str()) << "&";
  }

  if(m_retainResourcesHasBeenSet)
  {
    if (m_retainResources.empty())
    {
      ss << "RetainResources=&";
    }
    else
    {
      unsigned retainResourcesCount = 1;
      for(auto& item : m_retainResources)
      {
        ss << "RetainResources.member." << retainResourcesCount << "="
            << StringUtils::URLEncode(item.c_str()) << "&";
        retainResourcesCount++;
      }
    }
  }

  if(m_roleARNHasBeenSet)
  {
    ss << "RoleARN=" << StringUtils::URLEncode(m_roleARN.c_str()) << "&";
  }

  if(m_clientRequestTokenHasBeenSet)
  {
    ss << "ClientRequestToken=" << StringUtils::URLEncode(m_clientRequestToken.c_str()) << "&";
  }

  if(m_deletionModeHasBeenSet)
  {
    ss << "DeletionMode=" << StringUtils::URLEncode(DeletionModeMapper::GetNameForDeletionMode(m_deletionMode)) << "&";
  }

  ss << "Version=2010-05-15";
  return ss.str();
}


void  DeleteStackRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
