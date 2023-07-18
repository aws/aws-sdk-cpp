/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/BatchDescribeTypeConfigurationsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::CloudFormation::Model;
using namespace Aws::Utils;

BatchDescribeTypeConfigurationsRequest::BatchDescribeTypeConfigurationsRequest() : 
    m_typeConfigurationIdentifiersHasBeenSet(false)
{
}

Aws::String BatchDescribeTypeConfigurationsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=BatchDescribeTypeConfigurations&";
  if(m_typeConfigurationIdentifiersHasBeenSet)
  {
    unsigned typeConfigurationIdentifiersCount = 1;
    for(auto& item : m_typeConfigurationIdentifiers)
    {
      item.OutputToStream(ss, "TypeConfigurationIdentifiers.member.", typeConfigurationIdentifiersCount, "");
      typeConfigurationIdentifiersCount++;
    }
  }

  ss << "Version=2010-05-15";
  return ss.str();
}


void  BatchDescribeTypeConfigurationsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
