/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace IoTSiteWise
{
namespace Model
{
  enum class IdentityType
  {
    NOT_SET,
    USER,
    GROUP,
    IAM
  };

namespace IdentityTypeMapper
{
AWS_IOTSITEWISE_API IdentityType GetIdentityTypeForName(const Aws::String& name);

AWS_IOTSITEWISE_API Aws::String GetNameForIdentityType(IdentityType value);
} // namespace IdentityTypeMapper
} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
