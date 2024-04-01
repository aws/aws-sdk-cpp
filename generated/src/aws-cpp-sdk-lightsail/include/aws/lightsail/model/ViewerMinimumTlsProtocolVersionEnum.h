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
  enum class ViewerMinimumTlsProtocolVersionEnum
  {
    NOT_SET,
    TLSv1_1_2016,
    TLSv1_2_2018,
    TLSv1_2_2019,
    TLSv1_2_2021
  };

namespace ViewerMinimumTlsProtocolVersionEnumMapper
{
AWS_LIGHTSAIL_API ViewerMinimumTlsProtocolVersionEnum GetViewerMinimumTlsProtocolVersionEnumForName(const Aws::String& name);

AWS_LIGHTSAIL_API Aws::String GetNameForViewerMinimumTlsProtocolVersionEnum(ViewerMinimumTlsProtocolVersionEnum value);
} // namespace ViewerMinimumTlsProtocolVersionEnumMapper
} // namespace Model
} // namespace Lightsail
} // namespace Aws
