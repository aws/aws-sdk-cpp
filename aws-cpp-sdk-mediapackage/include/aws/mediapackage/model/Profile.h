/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackage/MediaPackage_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaPackage
{
namespace Model
{
  enum class Profile
  {
    NOT_SET,
    NONE,
    HBBTV_1_5
  };

namespace ProfileMapper
{
AWS_MEDIAPACKAGE_API Profile GetProfileForName(const Aws::String& name);

AWS_MEDIAPACKAGE_API Aws::String GetNameForProfile(Profile value);
} // namespace ProfileMapper
} // namespace Model
} // namespace MediaPackage
} // namespace Aws
