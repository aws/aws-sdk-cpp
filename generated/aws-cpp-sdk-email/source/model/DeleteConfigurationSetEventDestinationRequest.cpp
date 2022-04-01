/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/email/model/DeleteConfigurationSetEventDestinationRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::SES::Model;
using namespace Aws::Utils;

DeleteConfigurationSetEventDestinationRequest::DeleteConfigurationSetEventDestinationRequest() : 
    m_configurationSetNameHasBeenSet(false),
    m_eventDestinationNameHasBeenSet(false)
{
}

Aws::String DeleteConfigurationSetEventDestinationRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DeleteConfigurationSetEventDestination&";
  if(m_configurationSetNameHasBeenSet)
  {
    ss << "ConfigurationSetName=" << StringUtils::URLEncode(m_configurationSetName.c_str()) << "&";
  }

  if(m_eventDestinationNameHasBeenSet)
  {
    ss << "EventDestinationName=" << StringUtils::URLEncode(m_eventDestinationName.c_str()) << "&";
  }

  ss << "Version=2010-12-01";
  return ss.str();
}


void  DeleteConfigurationSetEventDestinationRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
