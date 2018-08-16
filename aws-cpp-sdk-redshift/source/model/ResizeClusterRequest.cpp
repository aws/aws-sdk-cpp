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
