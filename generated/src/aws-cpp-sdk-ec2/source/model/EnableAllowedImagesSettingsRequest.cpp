/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/EnableAllowedImagesSettingsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

EnableAllowedImagesSettingsRequest::EnableAllowedImagesSettingsRequest() : 
    m_allowedImagesSettingsState(AllowedImagesSettingsEnabledState::NOT_SET),
    m_allowedImagesSettingsStateHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false)
{
}

Aws::String EnableAllowedImagesSettingsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=EnableAllowedImagesSettings&";
  if(m_allowedImagesSettingsStateHasBeenSet)
  {
    ss << "AllowedImagesSettingsState=" << AllowedImagesSettingsEnabledStateMapper::GetNameForAllowedImagesSettingsEnabledState(m_allowedImagesSettingsState) << "&";
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  EnableAllowedImagesSettingsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
