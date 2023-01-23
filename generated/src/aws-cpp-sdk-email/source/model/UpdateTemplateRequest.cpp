/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/email/model/UpdateTemplateRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::SES::Model;
using namespace Aws::Utils;

UpdateTemplateRequest::UpdateTemplateRequest() : 
    m_templateHasBeenSet(false)
{
}

Aws::String UpdateTemplateRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=UpdateTemplate&";
  if(m_templateHasBeenSet)
  {
    m_template.OutputToStream(ss, "Template");
  }

  ss << "Version=2010-12-01";
  return ss.str();
}


void  UpdateTemplateRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
