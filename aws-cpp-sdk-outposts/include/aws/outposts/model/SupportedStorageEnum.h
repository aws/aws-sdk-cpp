/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Outposts
{
namespace Model
{
  enum class SupportedStorageEnum
  {
    NOT_SET,
    EBS,
    S3
  };

namespace SupportedStorageEnumMapper
{
AWS_OUTPOSTS_API SupportedStorageEnum GetSupportedStorageEnumForName(const Aws::String& name);

AWS_OUTPOSTS_API Aws::String GetNameForSupportedStorageEnum(SupportedStorageEnum value);
} // namespace SupportedStorageEnumMapper
} // namespace Model
} // namespace Outposts
} // namespace Aws
