/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/EnableImageBlockPublicAccessRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

EnableImageBlockPublicAccessRequest::EnableImageBlockPublicAccessRequest() : 
    m_imageBlockPublicAccessState(ImageBlockPublicAccessEnabledState::NOT_SET),
    m_imageBlockPublicAccessStateHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false)
{
}

Aws::String EnableImageBlockPublicAccessRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=EnableImageBlockPublicAccess&";
  if(m_imageBlockPublicAccessStateHasBeenSet)
  {
    ss << "ImageBlockPublicAccessState=" << ImageBlockPublicAccessEnabledStateMapper::GetNameForImageBlockPublicAccessEnabledState(m_imageBlockPublicAccessState) << "&";
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  EnableImageBlockPublicAccessRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
