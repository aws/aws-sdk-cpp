/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticbeanstalk/model/RebuildEnvironmentRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElasticBeanstalk::Model;
using namespace Aws::Utils;

RebuildEnvironmentRequest::RebuildEnvironmentRequest() : 
    m_environmentIdHasBeenSet(false),
    m_environmentNameHasBeenSet(false)
{
}

Aws::String RebuildEnvironmentRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=RebuildEnvironment&";
  if(m_environmentIdHasBeenSet)
  {
    ss << "EnvironmentId=" << StringUtils::URLEncode(m_environmentId.c_str()) << "&";
  }

  if(m_environmentNameHasBeenSet)
  {
    ss << "EnvironmentName=" << StringUtils::URLEncode(m_environmentName.c_str()) << "&";
  }

  ss << "Version=2010-12-01";
  return ss.str();
}


void  RebuildEnvironmentRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
