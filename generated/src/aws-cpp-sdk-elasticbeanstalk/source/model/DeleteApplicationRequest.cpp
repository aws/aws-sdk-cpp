/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticbeanstalk/model/DeleteApplicationRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::ElasticBeanstalk::Model;
using namespace Aws::Utils;

DeleteApplicationRequest::DeleteApplicationRequest() : 
    m_applicationNameHasBeenSet(false),
    m_terminateEnvByForce(false),
    m_terminateEnvByForceHasBeenSet(false)
{
}

Aws::String DeleteApplicationRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DeleteApplication&";
  if(m_applicationNameHasBeenSet)
  {
    ss << "ApplicationName=" << StringUtils::URLEncode(m_applicationName.c_str()) << "&";
  }

  if(m_terminateEnvByForceHasBeenSet)
  {
    ss << "TerminateEnvByForce=" << std::boolalpha << m_terminateEnvByForce << "&";
  }

  ss << "Version=2010-12-01";
  return ss.str();
}


void  DeleteApplicationRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
