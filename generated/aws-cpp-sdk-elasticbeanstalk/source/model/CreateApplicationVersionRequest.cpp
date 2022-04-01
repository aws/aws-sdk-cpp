/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticbeanstalk/model/CreateApplicationVersionRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElasticBeanstalk::Model;
using namespace Aws::Utils;

CreateApplicationVersionRequest::CreateApplicationVersionRequest() : 
    m_applicationNameHasBeenSet(false),
    m_versionLabelHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_sourceBuildInformationHasBeenSet(false),
    m_sourceBundleHasBeenSet(false),
    m_buildConfigurationHasBeenSet(false),
    m_autoCreateApplication(false),
    m_autoCreateApplicationHasBeenSet(false),
    m_process(false),
    m_processHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateApplicationVersionRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateApplicationVersion&";
  if(m_applicationNameHasBeenSet)
  {
    ss << "ApplicationName=" << StringUtils::URLEncode(m_applicationName.c_str()) << "&";
  }

  if(m_versionLabelHasBeenSet)
  {
    ss << "VersionLabel=" << StringUtils::URLEncode(m_versionLabel.c_str()) << "&";
  }

  if(m_descriptionHasBeenSet)
  {
    ss << "Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if(m_sourceBuildInformationHasBeenSet)
  {
    m_sourceBuildInformation.OutputToStream(ss, "SourceBuildInformation");
  }

  if(m_sourceBundleHasBeenSet)
  {
    m_sourceBundle.OutputToStream(ss, "SourceBundle");
  }

  if(m_buildConfigurationHasBeenSet)
  {
    m_buildConfiguration.OutputToStream(ss, "BuildConfiguration");
  }

  if(m_autoCreateApplicationHasBeenSet)
  {
    ss << "AutoCreateApplication=" << std::boolalpha << m_autoCreateApplication << "&";
  }

  if(m_processHasBeenSet)
  {
    ss << "Process=" << std::boolalpha << m_process << "&";
  }

  if(m_tagsHasBeenSet)
  {
    unsigned tagsCount = 1;
    for(auto& item : m_tags)
    {
      item.OutputToStream(ss, "Tags.member.", tagsCount, "");
      tagsCount++;
    }
  }

  ss << "Version=2010-12-01";
  return ss.str();
}


void  CreateApplicationVersionRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
