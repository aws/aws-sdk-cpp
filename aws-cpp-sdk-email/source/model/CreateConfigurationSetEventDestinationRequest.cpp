/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/email/model/CreateConfigurationSetEventDestinationRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::SES::Model;
using namespace Aws::Utils;

CreateConfigurationSetEventDestinationRequest::CreateConfigurationSetEventDestinationRequest() : 
    m_configurationSetNameHasBeenSet(false),
    m_eventDestinationHasBeenSet(false)
{
}

Aws::String CreateConfigurationSetEventDestinationRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateConfigurationSetEventDestination&";
  if(m_configurationSetNameHasBeenSet)
  {
    ss << "ConfigurationSetName=" << StringUtils::URLEncode(m_configurationSetName.c_str()) << "&";
  }

  if(m_eventDestinationHasBeenSet)
  {
    m_eventDestination.OutputToStream(ss, "EventDestination");
  }

  ss << "Version=2010-12-01";
  return ss.str();
}


void  CreateConfigurationSetEventDestinationRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
