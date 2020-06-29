/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/ResizeClusterRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::Redshift::Model;
using namespace Aws::Utils;

ResizeClusterRequest::ResizeClusterRequest() : 
    m_clusterIdentifierHasBeenSet(false),
    m_clusterTypeHasBeenSet(false),
    m_nodeTypeHasBeenSet(false),
    m_numberOfNodes(0),
    m_numberOfNodesHasBeenSet(false),
    m_classic(false),
    m_classicHasBeenSet(false)
{
}

Aws::String ResizeClusterRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ResizeCluster&";
  if(m_clusterIdentifierHasBeenSet)
  {
    ss << "ClusterIdentifier=" << StringUtils::URLEncode(m_clusterIdentifier.c_str()) << "&";
  }

  if(m_clusterTypeHasBeenSet)
  {
    ss << "ClusterType=" << StringUtils::URLEncode(m_clusterType.c_str()) << "&";
  }

  if(m_nodeTypeHasBeenSet)
  {
    ss << "NodeType=" << StringUtils::URLEncode(m_nodeType.c_str()) << "&";
  }

  if(m_numberOfNodesHasBeenSet)
  {
    ss << "NumberOfNodes=" << m_numberOfNodes << "&";
  }

  if(m_classicHasBeenSet)
  {
    ss << "Classic=" << std::boolalpha << m_classic << "&";
  }

  ss << "Version=2012-12-01";
  return ss.str();
}


void  ResizeClusterRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
