/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ModifyLaunchTemplateRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

ModifyLaunchTemplateRequest::ModifyLaunchTemplateRequest() : 
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_clientTokenHasBeenSet(false),
    m_launchTemplateIdHasBeenSet(false),
    m_launchTemplateNameHasBeenSet(false),
    m_defaultVersionHasBeenSet(false)
{
}

Aws::String ModifyLaunchTemplateRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifyLaunchTemplate&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_clientTokenHasBeenSet)
  {
    ss << "ClientToken=" << StringUtils::URLEncode(m_clientToken.c_str()) << "&";
  }

  if(m_launchTemplateIdHasBeenSet)
  {
    ss << "LaunchTemplateId=" << StringUtils::URLEncode(m_launchTemplateId.c_str()) << "&";
  }

  if(m_launchTemplateNameHasBeenSet)
  {
    ss << "LaunchTemplateName=" << StringUtils::URLEncode(m_launchTemplateName.c_str()) << "&";
  }

  if(m_defaultVersionHasBeenSet)
  {
    ss << "SetDefaultVersion=" << StringUtils::URLEncode(m_defaultVersion.c_str()) << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  ModifyLaunchTemplateRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
