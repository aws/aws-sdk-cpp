/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/CreateStackInstancesRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::CloudFormation::Model;
using namespace Aws::Utils;

Aws::String CreateStackInstancesRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateStackInstances&";
  if(m_stackSetNameHasBeenSet)
  {
    ss << "StackSetName=" << StringUtils::URLEncode(m_stackSetName.c_str()) << "&";
  }

  if(m_accountsHasBeenSet)
  {
    if (m_accounts.empty())
    {
      ss << "Accounts=&";
    }
    else
    {
      unsigned accountsCount = 1;
      for(auto& item : m_accounts)
      {
        ss << "Accounts.member." << accountsCount << "="
            << StringUtils::URLEncode(item.c_str()) << "&";
        accountsCount++;
      }
    }
  }

  if(m_deploymentTargetsHasBeenSet)
  {
    m_deploymentTargets.OutputToStream(ss, "DeploymentTargets");
  }

  if(m_regionsHasBeenSet)
  {
    if (m_regions.empty())
    {
      ss << "Regions=&";
    }
    else
    {
      unsigned regionsCount = 1;
      for(auto& item : m_regions)
      {
        ss << "Regions.member." << regionsCount << "="
            << StringUtils::URLEncode(item.c_str()) << "&";
        regionsCount++;
      }
    }
  }

  if(m_parameterOverridesHasBeenSet)
  {
    if (m_parameterOverrides.empty())
    {
      ss << "ParameterOverrides=&";
    }
    else
    {
      unsigned parameterOverridesCount = 1;
      for(auto& item : m_parameterOverrides)
      {
        item.OutputToStream(ss, "ParameterOverrides.member.", parameterOverridesCount, "");
        parameterOverridesCount++;
      }
    }
  }

  if(m_operationPreferencesHasBeenSet)
  {
    m_operationPreferences.OutputToStream(ss, "OperationPreferences");
  }

  if(m_operationIdHasBeenSet)
  {
    ss << "OperationId=" << StringUtils::URLEncode(m_operationId.c_str()) << "&";
  }

  if(m_callAsHasBeenSet)
  {
    ss << "CallAs=" << StringUtils::URLEncode(CallAsMapper::GetNameForCallAs(m_callAs)) << "&";
  }

  ss << "Version=2010-05-15";
  return ss.str();
}


void  CreateStackInstancesRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
