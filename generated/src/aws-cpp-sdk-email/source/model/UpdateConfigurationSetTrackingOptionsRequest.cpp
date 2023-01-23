/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/email/model/UpdateConfigurationSetTrackingOptionsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::SES::Model;
using namespace Aws::Utils;

UpdateConfigurationSetTrackingOptionsRequest::UpdateConfigurationSetTrackingOptionsRequest() : 
    m_configurationSetNameHasBeenSet(false),
    m_trackingOptionsHasBeenSet(false)
{
}

Aws::String UpdateConfigurationSetTrackingOptionsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=UpdateConfigurationSetTrackingOptions&";
  if(m_configurationSetNameHasBeenSet)
  {
    ss << "ConfigurationSetName=" << StringUtils::URLEncode(m_configurationSetName.c_str()) << "&";
  }

  if(m_trackingOptionsHasBeenSet)
  {
    m_trackingOptions.OutputToStream(ss, "TrackingOptions");
  }

  ss << "Version=2010-12-01";
  return ss.str();
}


void  UpdateConfigurationSetTrackingOptionsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
