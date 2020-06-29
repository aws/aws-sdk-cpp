/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/email/model/CreateConfigurationSetRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::SES::Model;
using namespace Aws::Utils;

CreateConfigurationSetRequest::CreateConfigurationSetRequest() : 
    m_configurationSetHasBeenSet(false)
{
}

Aws::String CreateConfigurationSetRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateConfigurationSet&";
  if(m_configurationSetHasBeenSet)
  {
    m_configurationSet.OutputToStream(ss, "ConfigurationSet");
  }

  ss << "Version=2010-12-01";
  return ss.str();
}


void  CreateConfigurationSetRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
