/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ModifyInstanceMaintenanceOptionsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

Aws::String ModifyInstanceMaintenanceOptionsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifyInstanceMaintenanceOptions&";
  if(m_instanceIdHasBeenSet)
  {
    ss << "InstanceId=" << StringUtils::URLEncode(m_instanceId.c_str()) << "&";
  }

  if(m_autoRecoveryHasBeenSet)
  {
    ss << "AutoRecovery=" << StringUtils::URLEncode(InstanceAutoRecoveryStateMapper::GetNameForInstanceAutoRecoveryState(m_autoRecovery)) << "&";
  }

  if(m_rebootMigrationHasBeenSet)
  {
    ss << "RebootMigration=" << StringUtils::URLEncode(InstanceRebootMigrationStateMapper::GetNameForInstanceRebootMigrationState(m_rebootMigration)) << "&";
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  ModifyInstanceMaintenanceOptionsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
