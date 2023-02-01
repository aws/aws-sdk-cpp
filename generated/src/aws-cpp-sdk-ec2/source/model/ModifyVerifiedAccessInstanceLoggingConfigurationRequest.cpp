/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ModifyVerifiedAccessInstanceLoggingConfigurationRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

ModifyVerifiedAccessInstanceLoggingConfigurationRequest::ModifyVerifiedAccessInstanceLoggingConfigurationRequest() : 
    m_verifiedAccessInstanceIdHasBeenSet(false),
    m_accessLogsHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::RandomUUID()),
    m_clientTokenHasBeenSet(true)
{
}

Aws::String ModifyVerifiedAccessInstanceLoggingConfigurationRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifyVerifiedAccessInstanceLoggingConfiguration&";
  if(m_verifiedAccessInstanceIdHasBeenSet)
  {
    ss << "VerifiedAccessInstanceId=" << StringUtils::URLEncode(m_verifiedAccessInstanceId.c_str()) << "&";
  }

  if(m_accessLogsHasBeenSet)
  {
    m_accessLogs.OutputToStream(ss, "AccessLogs");
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_clientTokenHasBeenSet)
  {
    ss << "ClientToken=" << StringUtils::URLEncode(m_clientToken.c_str()) << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  ModifyVerifiedAccessInstanceLoggingConfigurationRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
