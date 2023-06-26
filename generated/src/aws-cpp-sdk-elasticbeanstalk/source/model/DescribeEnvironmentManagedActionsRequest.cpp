/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticbeanstalk/model/DescribeEnvironmentManagedActionsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElasticBeanstalk::Model;
using namespace Aws::Utils;

DescribeEnvironmentManagedActionsRequest::DescribeEnvironmentManagedActionsRequest() : 
    m_environmentNameHasBeenSet(false),
    m_environmentIdHasBeenSet(false),
    m_status(ActionStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

Aws::String DescribeEnvironmentManagedActionsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeEnvironmentManagedActions&";
  if(m_environmentNameHasBeenSet)
  {
    ss << "EnvironmentName=" << StringUtils::URLEncode(m_environmentName.c_str()) << "&";
  }

  if(m_environmentIdHasBeenSet)
  {
    ss << "EnvironmentId=" << StringUtils::URLEncode(m_environmentId.c_str()) << "&";
  }

  if(m_statusHasBeenSet)
  {
    ss << "Status=" << ActionStatusMapper::GetNameForActionStatus(m_status) << "&";
  }

  ss << "Version=2010-12-01";
  return ss.str();
}


void  DescribeEnvironmentManagedActionsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
