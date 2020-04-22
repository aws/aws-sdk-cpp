/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/redshift/model/ModifyUsageLimitRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::Redshift::Model;
using namespace Aws::Utils;

ModifyUsageLimitRequest::ModifyUsageLimitRequest() : 
    m_usageLimitIdHasBeenSet(false),
    m_amount(0),
    m_amountHasBeenSet(false),
    m_breachAction(UsageLimitBreachAction::NOT_SET),
    m_breachActionHasBeenSet(false)
{
}

Aws::String ModifyUsageLimitRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifyUsageLimit&";
  if(m_usageLimitIdHasBeenSet)
  {
    ss << "UsageLimitId=" << StringUtils::URLEncode(m_usageLimitId.c_str()) << "&";
  }

  if(m_amountHasBeenSet)
  {
    ss << "Amount=" << m_amount << "&";
  }

  if(m_breachActionHasBeenSet)
  {
    ss << "BreachAction=" << UsageLimitBreachActionMapper::GetNameForUsageLimitBreachAction(m_breachAction) << "&";
  }

  ss << "Version=2012-12-01";
  return ss.str();
}


void  ModifyUsageLimitRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
