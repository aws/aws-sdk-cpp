/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/GetTemplateRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::CloudFormation::Model;
using namespace Aws::Utils;

GetTemplateRequest::GetTemplateRequest() : 
    m_stackNameHasBeenSet(false),
    m_changeSetNameHasBeenSet(false),
    m_templateStage(TemplateStage::NOT_SET),
    m_templateStageHasBeenSet(false)
{
}

Aws::String GetTemplateRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=GetTemplate&";
  if(m_stackNameHasBeenSet)
  {
    ss << "StackName=" << StringUtils::URLEncode(m_stackName.c_str()) << "&";
  }

  if(m_changeSetNameHasBeenSet)
  {
    ss << "ChangeSetName=" << StringUtils::URLEncode(m_changeSetName.c_str()) << "&";
  }

  if(m_templateStageHasBeenSet)
  {
    ss << "TemplateStage=" << TemplateStageMapper::GetNameForTemplateStage(m_templateStage) << "&";
  }

  ss << "Version=2010-05-15";
  return ss.str();
}


void  GetTemplateRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
