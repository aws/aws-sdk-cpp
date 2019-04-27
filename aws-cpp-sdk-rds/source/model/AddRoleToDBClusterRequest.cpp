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

#include <aws/rds/model/AddRoleToDBClusterRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::RDS::Model;
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
