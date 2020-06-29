/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appconfig/AppConfig_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace AppConfig
{
namespace Model
{
  enum class BytesMeasure
  {
    NOT_SET,
    KILOBYTES
  };

namespace BytesMeasureMapper
{
AWS_APPCONFIG_API BytesMeasure GetBytesMeasureForName(const Aws::String& name);

AWS_APPCONFIG_API Aws::String GetNameForBytesMeasure(BytesMeasure value);
} // namespace BytesMeasureMapper
} // namespace Model
} // namespace AppConfig
} // namespace Aws
