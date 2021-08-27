/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticbeanstalk/model/AssociateEnvironmentOperationsRoleRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElasticBeanstalk::Model;
using namespace Aws::Utils;

AssociateEnvironmentOperationsRoleRequest::AssociateEnvironmentOperationsRoleRequest() : 
    m_environmentNameHasBeenSet(false),
    m_operationsRoleHasBeenSet(false)
{
}

Aws::String AssociateEnvironmentOperationsRoleRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=AssociateEnvironmentOperationsRole&";
  if(m_environmentNameHasBeenSet)
  {
    ss << "EnvironmentName=" << StringUtils::URLEncode(m_environmentName.c_str()) << "&";
  }

  if(m_operationsRoleHasBeenSet)
  {
    ss << "OperationsRole=" << StringUtils::URLEncode(m_operationsRole.c_str()) << "&";
  }

  ss << "Version=2010-12-01";
  return ss.str();
}


void  AssociateEnvironmentOperationsRoleRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
