/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/DeleteGeneratedTemplateRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::CloudFormation::Model;
using namespace Aws::Utils;

DeleteGeneratedTemplateRequest::DeleteGeneratedTemplateRequest() : 
    m_generatedTemplateNameHasBeenSet(false)
{
}

Aws::String DeleteGeneratedTemplateRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DeleteGeneratedTemplate&";
  if(m_generatedTemplateNameHasBeenSet)
  {
    ss << "GeneratedTemplateName=" << StringUtils::URLEncode(m_generatedTemplateName.c_str()) << "&";
  }

  ss << "Version=2010-05-15";
  return ss.str();
}


void  DeleteGeneratedTemplateRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
