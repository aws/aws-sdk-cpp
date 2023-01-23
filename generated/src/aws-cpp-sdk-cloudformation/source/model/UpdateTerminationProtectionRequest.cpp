/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/UpdateTerminationProtectionRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::CloudFormation::Model;
using namespace Aws::Utils;

UpdateTerminationProtectionRequest::UpdateTerminationProtectionRequest() : 
    m_enableTerminationProtection(false),
    m_enableTerminationProtectionHasBeenSet(false),
    m_stackNameHasBeenSet(false)
{
}

Aws::String UpdateTerminationProtectionRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=UpdateTerminationProtection&";
  if(m_enableTerminationProtectionHasBeenSet)
  {
    ss << "EnableTerminationProtection=" << std::boolalpha << m_enableTerminationProtection << "&";
  }

  if(m_stackNameHasBeenSet)
  {
    ss << "StackName=" << StringUtils::URLEncode(m_stackName.c_str()) << "&";
  }

  ss << "Version=2010-05-15";
  return ss.str();
}


void  UpdateTerminationProtectionRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
