/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/email/model/UpdateConfigurationSetReputationMetricsEnabledRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::SES::Model;
using namespace Aws::Utils;

UpdateConfigurationSetReputationMetricsEnabledRequest::UpdateConfigurationSetReputationMetricsEnabledRequest() : 
    m_configurationSetNameHasBeenSet(false),
    m_enabled(false),
    m_enabledHasBeenSet(false)
{
}

Aws::String UpdateConfigurationSetReputationMetricsEnabledRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=UpdateConfigurationSetReputationMetricsEnabled&";
  if(m_configurationSetNameHasBeenSet)
  {
    ss << "ConfigurationSetName=" << StringUtils::URLEncode(m_configurationSetName.c_str()) << "&";
  }

  if(m_enabledHasBeenSet)
  {
    ss << "Enabled=" << std::boolalpha << m_enabled << "&";
  }

  ss << "Version=2010-12-01";
  return ss.str();
}


void  UpdateConfigurationSetReputationMetricsEnabledRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
