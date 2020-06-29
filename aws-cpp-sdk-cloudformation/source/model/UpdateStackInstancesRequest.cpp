/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/UpdateStackInstancesRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::CloudFormation::Model;
using namespace Aws::Utils;

UpdateStackInstancesRequest::UpdateStackInstancesRequest() : 
    m_stackSetNameHasBeenSet(false),
    m_accountsHasBeenSet(false),
    m_deploymentTargetsHasBeenSet(false),
    m_regionsHasBeenSet(false),
    m_parameterOverridesHasBeenSet(false),
    m_operationPreferencesHasBeenSet(false),
    m_operationId(Aws::Utils::UUID::RandomUUID()),
    m_operationIdHasBeenSet(true)
{
}

Aws::String UpdateStackInstancesRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=UpdateStackInstances&";
  if(m_stackSetNameHasBeenSet)
  {
    ss << "StackSetName=" << StringUtils::URLEncode(m_stackSetName.c_str()) << "&";
  }

  if(m_accountsHasBeenSet)
  {
    unsigned accountsCount = 1;
    for(auto& item : m_accounts)
    {
      ss << "Accounts.member." << accountsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      accountsCount++;
    }
  }

  if(m_deploymentTargetsHasBeenSet)
  {
    m_deploymentTargets.OutputToStream(ss, "DeploymentTargets");
  }

  if(m_regionsHasBeenSet)
  {
    unsigned regionsCount = 1;
    for(auto& item : m_regions)
    {
      ss << "Regions.member." << regionsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      regionsCount++;
    }
  }

  if(m_parameterOverridesHasBeenSet)
  {
    unsigned parameterOverridesCount = 1;
    for(auto& item : m_parameterOverrides)
    {
      item.OutputToStream(ss, "ParameterOverrides.member.", parameterOverridesCount, "");
      parameterOverridesCount++;
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

  ss << "Version=2010-05-15";
  return ss.str();
}


void  UpdateStackInstancesRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
