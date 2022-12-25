/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/monitoring/model/PutManagedInsightRulesRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::CloudWatch::Model;
using namespace Aws::Utils;

PutManagedInsightRulesRequest::PutManagedInsightRulesRequest() : 
    m_managedRulesHasBeenSet(false)
{
}

Aws::String PutManagedInsightRulesRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=PutManagedInsightRules&";
  if(m_managedRulesHasBeenSet)
  {
    unsigned managedRulesCount = 1;
    for(auto& item : m_managedRules)
    {
      item.OutputToStream(ss, "ManagedRules.member.", managedRulesCount, "");
      managedRulesCount++;
    }
  }

  ss << "Version=2010-08-01";
  return ss.str();
}


void  PutManagedInsightRulesRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
