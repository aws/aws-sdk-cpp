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
    m_autoCreateApplication(false),
    m_autoCreateApplicationHasBeenSet(false),
    m_process(false),
    m_processHasBeenSet(false)
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

  if(m_autoCreateApplicationHasBeenSet)
  {
    ss << "AutoCreateApplication=" << m_autoCreateApplication << "&";
  }

  if(m_processHasBeenSet)
  {
    ss << "Process=" << m_process << "&";
  }

  ss << "Version=2010-12-01";
  return ss.str();
}

