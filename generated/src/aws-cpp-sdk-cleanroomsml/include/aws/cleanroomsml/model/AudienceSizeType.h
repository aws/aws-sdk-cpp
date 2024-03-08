/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CleanRoomsML
{
namespace Model
{
  enum class AudienceSizeType
  {
    NOT_SET,
    ABSOLUTE,
    PERCENTAGE
  };

namespace AudienceSizeTypeMapper
{
AWS_CLEANROOMSML_API AudienceSizeType GetAudienceSizeTypeForName(const Aws::String& name);

AWS_CLEANROOMSML_API Aws::String GetNameForAudienceSizeType(AudienceSizeType value);
} // namespace AudienceSizeTypeMapper
} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
