/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/ModifyClusterIamRolesRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::Redshift::Model;
using namespace Aws::Utils;

ModifyClusterIamRolesRequest::ModifyClusterIamRolesRequest() : 
    m_clusterIdentifierHasBeenSet(false),
    m_addIamRolesHasBeenSet(false),
    m_removeIamRolesHasBeenSet(false)
{
}

Aws::String ModifyClusterIamRolesRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifyClusterIamRoles&";
  if(m_clusterIdentifierHasBeenSet)
  {
    ss << "ClusterIdentifier=" << StringUtils::URLEncode(m_clusterIdentifier.c_str()) << "&";
  }

  if(m_addIamRolesHasBeenSet)
  {
    unsigned addIamRolesCount = 1;
    for(auto& item : m_addIamRoles)
    {
      ss << "AddIamRoles.member." << addIamRolesCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      addIamRolesCount++;
    }
  }

  if(m_removeIamRolesHasBeenSet)
  {
    unsigned removeIamRolesCount = 1;
    for(auto& item : m_removeIamRoles)
    {
      ss << "RemoveIamRoles.member." << removeIamRolesCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      removeIamRolesCount++;
    }
  }

  ss << "Version=2012-12-01";
  return ss.str();
}


void  ModifyClusterIamRolesRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
