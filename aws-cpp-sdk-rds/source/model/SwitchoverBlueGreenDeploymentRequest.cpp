/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/SwitchoverBlueGreenDeploymentRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::RDS::Model;
using namespace Aws::Utils;

SwitchoverBlueGreenDeploymentRequest::SwitchoverBlueGreenDeploymentRequest() : 
    m_blueGreenDeploymentIdentifierHasBeenSet(false),
    m_switchoverTimeout(0),
    m_switchoverTimeoutHasBeenSet(false)
{
}

Aws::String SwitchoverBlueGreenDeploymentRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=SwitchoverBlueGreenDeployment&";
  if(m_blueGreenDeploymentIdentifierHasBeenSet)
  {
    ss << "BlueGreenDeploymentIdentifier=" << StringUtils::URLEncode(m_blueGreenDeploymentIdentifier.c_str()) << "&";
  }

  if(m_switchoverTimeoutHasBeenSet)
  {
    ss << "SwitchoverTimeout=" << m_switchoverTimeout << "&";
  }

  ss << "Version=2014-10-31";
  return ss.str();
}


void  SwitchoverBlueGreenDeploymentRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
