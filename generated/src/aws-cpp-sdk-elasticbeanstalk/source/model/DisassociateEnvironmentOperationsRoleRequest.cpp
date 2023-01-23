/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticbeanstalk/model/DisassociateEnvironmentOperationsRoleRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElasticBeanstalk::Model;
using namespace Aws::Utils;

DisassociateEnvironmentOperationsRoleRequest::DisassociateEnvironmentOperationsRoleRequest() : 
    m_environmentNameHasBeenSet(false)
{
}

Aws::String DisassociateEnvironmentOperationsRoleRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DisassociateEnvironmentOperationsRole&";
  if(m_environmentNameHasBeenSet)
  {
    ss << "EnvironmentName=" << StringUtils::URLEncode(m_environmentName.c_str()) << "&";
  }

  ss << "Version=2010-12-01";
  return ss.str();
}


void  DisassociateEnvironmentOperationsRoleRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
