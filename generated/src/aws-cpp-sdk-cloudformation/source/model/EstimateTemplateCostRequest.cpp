/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/EstimateTemplateCostRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::CloudFormation::Model;
using namespace Aws::Utils;

EstimateTemplateCostRequest::EstimateTemplateCostRequest() : 
    m_templateBodyHasBeenSet(false),
    m_templateURLHasBeenSet(false),
    m_parametersHasBeenSet(false)
{
}

Aws::String EstimateTemplateCostRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=EstimateTemplateCost&";
  if(m_templateBodyHasBeenSet)
  {
    ss << "TemplateBody=" << StringUtils::URLEncode(m_templateBody.c_str()) << "&";
  }

  if(m_templateURLHasBeenSet)
  {
    ss << "TemplateURL=" << StringUtils::URLEncode(m_templateURL.c_str()) << "&";
  }

  if(m_parametersHasBeenSet)
  {
    unsigned parametersCount = 1;
    for(auto& item : m_parameters)
    {
      item.OutputToStream(ss, "Parameters.member.", parametersCount, "");
      parametersCount++;
    }
  }

  ss << "Version=2010-05-15";
  return ss.str();
}


void  EstimateTemplateCostRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
