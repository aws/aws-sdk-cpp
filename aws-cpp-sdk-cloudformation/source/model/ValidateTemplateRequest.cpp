/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/ValidateTemplateRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::CloudFormation::Model;
using namespace Aws::Utils;

ValidateTemplateRequest::ValidateTemplateRequest() : 
    m_templateBodyHasBeenSet(false),
    m_templateURLHasBeenSet(false)
{
}

Aws::String ValidateTemplateRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ValidateTemplate&";
  if(m_templateBodyHasBeenSet)
  {
    ss << "TemplateBody=" << StringUtils::URLEncode(m_templateBody.c_str()) << "&";
  }

  if(m_templateURLHasBeenSet)
  {
    ss << "TemplateURL=" << StringUtils::URLEncode(m_templateURL.c_str()) << "&";
  }

  ss << "Version=2010-05-15";
  return ss.str();
}


void  ValidateTemplateRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
