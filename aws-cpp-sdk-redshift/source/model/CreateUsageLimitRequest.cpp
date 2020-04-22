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

#include <aws/redshift/model/CreateUsageLimitRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::Redshift::Model;
using namespace Aws::Utils;

CreateUsageLimitRequest::CreateUsageLimitRequest() : 
    m_clusterIdentifierHasBeenSet(false),
    m_featureType(UsageLimitFeatureType::NOT_SET),
    m_featureTypeHasBeenSet(false),
    m_limitType(UsageLimitLimitType::NOT_SET),
    m_limitTypeHasBeenSet(false),
    m_amount(0),
    m_amountHasBeenSet(false),
    m_period(UsageLimitPeriod::NOT_SET),
    m_periodHasBeenSet(false),
    m_breachAction(UsageLimitBreachAction::NOT_SET),
    m_breachActionHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateUsageLimitRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateUsageLimit&";
  if(m_clusterIdentifierHasBeenSet)
  {
    ss << "ClusterIdentifier=" << StringUtils::URLEncode(m_clusterIdentifier.c_str()) << "&";
  }

  if(m_featureTypeHasBeenSet)
  {
    ss << "FeatureType=" << UsageLimitFeatureTypeMapper::GetNameForUsageLimitFeatureType(m_featureType) << "&";
  }

  if(m_limitTypeHasBeenSet)
  {
    ss << "LimitType=" << UsageLimitLimitTypeMapper::GetNameForUsageLimitLimitType(m_limitType) << "&";
  }

  if(m_amountHasBeenSet)
  {
    ss << "Amount=" << m_amount << "&";
  }

  if(m_periodHasBeenSet)
  {
    ss << "Period=" << UsageLimitPeriodMapper::GetNameForUsageLimitPeriod(m_period) << "&";
  }

  if(m_breachActionHasBeenSet)
  {
    ss << "BreachAction=" << UsageLimitBreachActionMapper::GetNameForUsageLimitBreachAction(m_breachAction) << "&";
  }

  if(m_tagsHasBeenSet)
  {
    unsigned tagsCount = 1;
    for(auto& item : m_tags)
    {
      item.OutputToStream(ss, "Tags.member.", tagsCount, "");
      tagsCount++;
    }
  }

  ss << "Version=2012-12-01";
  return ss.str();
}


void  CreateUsageLimitRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
