/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/GetGeneratedTemplateRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::CloudFormation::Model;
using namespace Aws::Utils;

GetGeneratedTemplateRequest::GetGeneratedTemplateRequest() : 
    m_format(TemplateFormat::NOT_SET),
    m_formatHasBeenSet(false),
    m_generatedTemplateNameHasBeenSet(false)
{
}

Aws::String GetGeneratedTemplateRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=GetGeneratedTemplate&";
  if(m_formatHasBeenSet)
  {
    ss << "Format=" << TemplateFormatMapper::GetNameForTemplateFormat(m_format) << "&";
  }

  if(m_generatedTemplateNameHasBeenSet)
  {
    ss << "GeneratedTemplateName=" << StringUtils::URLEncode(m_generatedTemplateName.c_str()) << "&";
  }

  ss << "Version=2010-05-15";
  return ss.str();
}


void  GetGeneratedTemplateRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
