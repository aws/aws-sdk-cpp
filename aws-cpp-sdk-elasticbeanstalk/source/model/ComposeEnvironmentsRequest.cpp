/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/elasticbeanstalk/model/ComposeEnvironmentsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElasticBeanstalk::Model;
using namespace Aws::Utils;

ComposeEnvironmentsRequest::ComposeEnvironmentsRequest() : 
    m_applicationNameHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_versionLabelsHasBeenSet(false)
{
}

Aws::String ComposeEnvironmentsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ComposeEnvironments&";
  if(m_applicationNameHasBeenSet)
  {
    ss << "ApplicationName=" << StringUtils::URLEncode(m_applicationName.c_str()) << "&";
  }

  if(m_groupNameHasBeenSet)
  {
    ss << "GroupName=" << StringUtils::URLEncode(m_groupName.c_str()) << "&";
  }

  if(m_versionLabelsHasBeenSet)
  {
    unsigned versionLabelsCount = 1;
    for(auto& item : m_versionLabels)
    {
      ss << "VersionLabels.member." << versionLabelsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      versionLabelsCount++;
    }
  }

  ss << "Version=2010-12-01";
  return ss.str();
}

