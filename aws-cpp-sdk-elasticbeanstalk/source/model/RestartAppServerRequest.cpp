/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticbeanstalk/model/RestartAppServerRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElasticBeanstalk::Model;
using namespace Aws::Utils;

RestartAppServerRequest::RestartAppServerRequest() : 
    m_environmentIdHasBeenSet(false),
    m_environmentNameHasBeenSet(false)
{
}

Aws::String RestartAppServerRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=RestartAppServer&";
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


void  RestartAppServerRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
