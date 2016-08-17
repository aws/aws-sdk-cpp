/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/redshift/model/DeleteClusterSubnetGroupRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::Redshift::Model;
using namespace Aws::Utils;

DeleteClusterSubnetGroupRequest::DeleteClusterSubnetGroupRequest() : 
    m_clusterSubnetGroupNameHasBeenSet(false)
{
}

Aws::String DeleteClusterSubnetGroupRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DeleteClusterSubnetGroup&";
  if(m_clusterSubnetGroupNameHasBeenSet)
  {
    ss << "ClusterSubnetGroupName=" << StringUtils::URLEncode(m_clusterSubnetGroupName.c_str()) << "&";
  }

  ss << "Version=2012-12-01";
  return ss.str();
}

