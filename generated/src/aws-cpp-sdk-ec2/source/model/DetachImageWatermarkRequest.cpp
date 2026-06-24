/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/ec2/model/DetachImageWatermarkRequest.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

Aws::String DetachImageWatermarkRequest::SerializePayload() const {
  Aws::StringStream ss;
  ss << "Action=DetachImageWatermark&";
  if (m_imageIdHasBeenSet) {
    ss << "ImageId=" << StringUtils::URLEncode(m_imageId.c_str()) << "&";
  }

  if (m_watermarkKeyHasBeenSet) {
    ss << "WatermarkKey=" << StringUtils::URLEncode(m_watermarkKey.c_str()) << "&";
  }

  if (m_dryRunHasBeenSet) {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}

void DetachImageWatermarkRequest::DumpBodyToUrl(Aws::Http::URI& uri) const { uri.SetQueryString(SerializePayload()); }
