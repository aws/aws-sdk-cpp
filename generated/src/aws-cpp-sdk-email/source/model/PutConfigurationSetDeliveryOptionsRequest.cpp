/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/email/model/PutConfigurationSetDeliveryOptionsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::SES::Model;
using namespace Aws::Utils;

PutConfigurationSetDeliveryOptionsRequest::PutConfigurationSetDeliveryOptionsRequest() : 
    m_configurationSetNameHasBeenSet(false),
    m_deliveryOptionsHasBeenSet(false)
{
}

Aws::String PutConfigurationSetDeliveryOptionsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=PutConfigurationSetDeliveryOptions&";
  if(m_configurationSetNameHasBeenSet)
  {
    ss << "ConfigurationSetName=" << StringUtils::URLEncode(m_configurationSetName.c_str()) << "&";
  }

  if(m_deliveryOptionsHasBeenSet)
  {
    m_deliveryOptions.OutputToStream(ss, "DeliveryOptions");
  }

  ss << "Version=2010-12-01";
  return ss.str();
}


void  PutConfigurationSetDeliveryOptionsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
