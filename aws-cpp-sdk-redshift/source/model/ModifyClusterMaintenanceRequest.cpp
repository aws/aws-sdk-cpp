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

#include <aws/redshift/model/ModifyClusterMaintenanceRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::Redshift::Model;
using namespace Aws::Utils;

ModifyClusterMaintenanceRequest::ModifyClusterMaintenanceRequest() : 
    m_clusterIdentifierHasBeenSet(false),
    m_deferMaintenance(false),
    m_deferMaintenanceHasBeenSet(false),
    m_deferMaintenanceIdentifierHasBeenSet(false),
    m_deferMaintenanceStartTimeHasBeenSet(false),
    m_deferMaintenanceEndTimeHasBeenSet(false),
    m_deferMaintenanceDuration(0),
    m_deferMaintenanceDurationHasBeenSet(false)
{
}

Aws::String ModifyClusterMaintenanceRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifyClusterMaintenance&";
  if(m_clusterIdentifierHasBeenSet)
  {
    ss << "ClusterIdentifier=" << StringUtils::URLEncode(m_clusterIdentifier.c_str()) << "&";
  }

  if(m_deferMaintenanceHasBeenSet)
  {
    ss << "DeferMaintenance=" << std::boolalpha << m_deferMaintenance << "&";
  }

  if(m_deferMaintenanceIdentifierHasBeenSet)
  {
    ss << "DeferMaintenanceIdentifier=" << StringUtils::URLEncode(m_deferMaintenanceIdentifier.c_str()) << "&";
  }

  if(m_deferMaintenanceStartTimeHasBeenSet)
  {
    ss << "DeferMaintenanceStartTime=" << StringUtils::URLEncode(m_deferMaintenanceStartTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_deferMaintenanceEndTimeHasBeenSet)
  {
    ss << "DeferMaintenanceEndTime=" << StringUtils::URLEncode(m_deferMaintenanceEndTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_deferMaintenanceDurationHasBeenSet)
  {
    ss << "DeferMaintenanceDuration=" << m_deferMaintenanceDuration << "&";
  }

  ss << "Version=2012-12-01";
  return ss.str();
}


void  ModifyClusterMaintenanceRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
