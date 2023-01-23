/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/email/model/CreateTemplateRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::SES::Model;
using namespace Aws::Utils;

CreateTemplateRequest::CreateTemplateRequest() : 
    m_templateHasBeenSet(false)
{
}

Aws::String CreateTemplateRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateTemplate&";
  if(m_templateHasBeenSet)
  {
    m_template.OutputToStream(ss, "Template");
  }

  ss << "Version=2010-12-01";
  return ss.str();
}


void  CreateTemplateRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
