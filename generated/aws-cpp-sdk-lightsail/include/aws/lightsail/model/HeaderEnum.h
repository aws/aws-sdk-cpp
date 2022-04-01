/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Lightsail
{
namespace Model
{
  enum class HeaderEnum
  {
    NOT_SET,
    Accept,
    Accept_Charset,
    Accept_Datetime,
    Accept_Encoding,
    Accept_Language,
    Authorization,
    CloudFront_Forwarded_Proto,
    CloudFront_Is_Desktop_Viewer,
    CloudFront_Is_Mobile_Viewer,
    CloudFront_Is_SmartTV_Viewer,
    CloudFront_Is_Tablet_Viewer,
    CloudFront_Viewer_Country,
    Host,
    Origin,
    Referer
  };

namespace HeaderEnumMapper
{
AWS_LIGHTSAIL_API HeaderEnum GetHeaderEnumForName(const Aws::String& name);

AWS_LIGHTSAIL_API Aws::String GetNameForHeaderEnum(HeaderEnum value);
} // namespace HeaderEnumMapper
} // namespace Model
} // namespace Lightsail
} // namespace Aws
