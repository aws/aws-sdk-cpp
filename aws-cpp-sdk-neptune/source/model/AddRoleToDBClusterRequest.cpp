/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptune/model/AddRoleToDBClusterRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::Neptune::Model;
using namespace Aws::Utils;

AddRoleToDBClusterRequest::AddRoleToDBClusterRequest() : 
    m_dBClusterIdentifierHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_featureNameHasBeenSet(false)
{
}

Aws::String AddRoleToDBClusterRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=AddRoleToDBCluster&";
  if(m_dBClusterIdentifierHasBeenSet)
  {
    ss << "DBClusterIdentifier=" << StringUtils::URLEncode(m_dBClusterIdentifier.c_str()) << "&";
  }

  if(m_roleArnHasBeenSet)
  {
    ss << "RoleArn=" << StringUtils::URLEncode(m_roleArn.c_str()) << "&";
  }

  if(m_featureNameHasBeenSet)
  {
    ss << "FeatureName=" << StringUtils::URLEncode(m_featureName.c_str()) << "&";
  }

  ss << "Version=2014-10-31";
  return ss.str();
}


void  AddRoleToDBClusterRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
