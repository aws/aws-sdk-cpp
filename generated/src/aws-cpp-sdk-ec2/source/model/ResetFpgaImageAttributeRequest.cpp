/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ResetFpgaImageAttributeRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

Aws::String ResetFpgaImageAttributeRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ResetFpgaImageAttribute&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_fpgaImageIdHasBeenSet)
  {
    ss << "FpgaImageId=" << StringUtils::URLEncode(m_fpgaImageId.c_str()) << "&";
  }

  if(m_attributeHasBeenSet)
  {
    ss << "Attribute=" << StringUtils::URLEncode(ResetFpgaImageAttributeNameMapper::GetNameForResetFpgaImageAttributeName(m_attribute)) << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  ResetFpgaImageAttributeRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
