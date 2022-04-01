/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/ModifySnapshotCopyRetentionPeriodRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::Redshift::Model;
using namespace Aws::Utils;

ModifySnapshotCopyRetentionPeriodRequest::ModifySnapshotCopyRetentionPeriodRequest() : 
    m_clusterIdentifierHasBeenSet(false),
    m_retentionPeriod(0),
    m_retentionPeriodHasBeenSet(false),
    m_manual(false),
    m_manualHasBeenSet(false)
{
}

Aws::String ModifySnapshotCopyRetentionPeriodRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifySnapshotCopyRetentionPeriod&";
  if(m_clusterIdentifierHasBeenSet)
  {
    ss << "ClusterIdentifier=" << StringUtils::URLEncode(m_clusterIdentifier.c_str()) << "&";
  }

  if(m_retentionPeriodHasBeenSet)
  {
    ss << "RetentionPeriod=" << m_retentionPeriod << "&";
  }

  if(m_manualHasBeenSet)
  {
    ss << "Manual=" << std::boolalpha << m_manual << "&";
  }

  ss << "Version=2012-12-01";
  return ss.str();
}


void  ModifySnapshotCopyRetentionPeriodRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
