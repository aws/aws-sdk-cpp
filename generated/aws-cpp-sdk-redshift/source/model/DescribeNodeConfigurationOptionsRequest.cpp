/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/DescribeNodeConfigurationOptionsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::Redshift::Model;
using namespace Aws::Utils;

DescribeNodeConfigurationOptionsRequest::DescribeNodeConfigurationOptionsRequest() : 
    m_actionType(ActionType::NOT_SET),
    m_actionTypeHasBeenSet(false),
    m_clusterIdentifierHasBeenSet(false),
    m_snapshotIdentifierHasBeenSet(false),
    m_ownerAccountHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_markerHasBeenSet(false),
    m_maxRecords(0),
    m_maxRecordsHasBeenSet(false)
{
}

Aws::String DescribeNodeConfigurationOptionsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeNodeConfigurationOptions&";
  if(m_actionTypeHasBeenSet)
  {
    ss << "ActionType=" << ActionTypeMapper::GetNameForActionType(m_actionType) << "&";
  }

  if(m_clusterIdentifierHasBeenSet)
  {
    ss << "ClusterIdentifier=" << StringUtils::URLEncode(m_clusterIdentifier.c_str()) << "&";
  }

  if(m_snapshotIdentifierHasBeenSet)
  {
    ss << "SnapshotIdentifier=" << StringUtils::URLEncode(m_snapshotIdentifier.c_str()) << "&";
  }

  if(m_ownerAccountHasBeenSet)
  {
    ss << "OwnerAccount=" << StringUtils::URLEncode(m_ownerAccount.c_str()) << "&";
  }

  if(m_filtersHasBeenSet)
  {
    unsigned filtersCount = 1;
    for(auto& item : m_filters)
    {
      item.OutputToStream(ss, "Filter.", filtersCount, "");
      filtersCount++;
    }
  }

  if(m_markerHasBeenSet)
  {
    ss << "Marker=" << StringUtils::URLEncode(m_marker.c_str()) << "&";
  }

  if(m_maxRecordsHasBeenSet)
  {
    ss << "MaxRecords=" << m_maxRecords << "&";
  }

  ss << "Version=2012-12-01";
  return ss.str();
}


void  DescribeNodeConfigurationOptionsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
