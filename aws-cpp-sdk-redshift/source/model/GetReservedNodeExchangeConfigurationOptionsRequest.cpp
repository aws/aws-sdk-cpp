/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/GetReservedNodeExchangeConfigurationOptionsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::Redshift::Model;
using namespace Aws::Utils;

GetReservedNodeExchangeConfigurationOptionsRequest::GetReservedNodeExchangeConfigurationOptionsRequest() : 
    m_actionType(ReservedNodeExchangeActionType::NOT_SET),
    m_actionTypeHasBeenSet(false),
    m_clusterIdentifierHasBeenSet(false),
    m_snapshotIdentifierHasBeenSet(false),
    m_maxRecords(0),
    m_maxRecordsHasBeenSet(false),
    m_markerHasBeenSet(false)
{
}

Aws::String GetReservedNodeExchangeConfigurationOptionsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=GetReservedNodeExchangeConfigurationOptions&";
  if(m_actionTypeHasBeenSet)
  {
    ss << "ActionType=" << ReservedNodeExchangeActionTypeMapper::GetNameForReservedNodeExchangeActionType(m_actionType) << "&";
  }

  if(m_clusterIdentifierHasBeenSet)
  {
    ss << "ClusterIdentifier=" << StringUtils::URLEncode(m_clusterIdentifier.c_str()) << "&";
  }

  if(m_snapshotIdentifierHasBeenSet)
  {
    ss << "SnapshotIdentifier=" << StringUtils::URLEncode(m_snapshotIdentifier.c_str()) << "&";
  }

  if(m_maxRecordsHasBeenSet)
  {
    ss << "MaxRecords=" << m_maxRecords << "&";
  }

  if(m_markerHasBeenSet)
  {
    ss << "Marker=" << StringUtils::URLEncode(m_marker.c_str()) << "&";
  }

  ss << "Version=2012-12-01";
  return ss.str();
}


void  GetReservedNodeExchangeConfigurationOptionsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
