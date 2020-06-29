/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/GetTemplateSummaryRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::CloudFormation::Model;
using namespace Aws::Utils;

GetTemplateSummaryRequest::GetTemplateSummaryRequest() : 
    m_templateBodyHasBeenSet(false),
    m_templateURLHasBeenSet(false),
    m_stackNameHasBeenSet(false),
    m_stackSetNameHasBeenSet(false)
{
}

Aws::String GetTemplateSummaryRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=GetTemplateSummary&";
  if(m_templateBodyHasBeenSet)
  {
    ss << "TemplateBody=" << StringUtils::URLEncode(m_templateBody.c_str()) << "&";
  }

  if(m_templateURLHasBeenSet)
  {
    ss << "TemplateURL=" << StringUtils::URLEncode(m_templateURL.c_str()) << "&";
  }

  if(m_stackNameHasBeenSet)
  {
    ss << "StackName=" << StringUtils::URLEncode(m_stackName.c_str()) << "&";
  }

  if(m_stackSetNameHasBeenSet)
  {
    ss << "StackSetName=" << StringUtils::URLEncode(m_stackSetName.c_str()) << "&";
  }

  ss << "Version=2010-05-15";
  return ss.str();
}


void  GetTemplateSummaryRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
