/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/email/model/DeleteConfigurationSetRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::SES::Model;
using namespace Aws::Utils;

DeleteConfigurationSetRequest::DeleteConfigurationSetRequest() : 
    m_configurationSetNameHasBeenSet(false)
{
}

Aws::String DeleteConfigurationSetRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DeleteConfigurationSet&";
  if(m_configurationSetNameHasBeenSet)
  {
    ss << "ConfigurationSetName=" << StringUtils::URLEncode(m_configurationSetName.c_str()) << "&";
  }

  ss << "Version=2010-12-01";
  return ss.str();
}


void  DeleteConfigurationSetRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
