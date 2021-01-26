/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/email/model/CreateConfigurationSetTrackingOptionsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::SES::Model;
using namespace Aws::Utils;

CreateConfigurationSetTrackingOptionsRequest::CreateConfigurationSetTrackingOptionsRequest() : 
    m_configurationSetNameHasBeenSet(false),
    m_trackingOptionsHasBeenSet(false)
{
}

Aws::String CreateConfigurationSetTrackingOptionsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateConfigurationSetTrackingOptions&";
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


void  CreateConfigurationSetTrackingOptionsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
