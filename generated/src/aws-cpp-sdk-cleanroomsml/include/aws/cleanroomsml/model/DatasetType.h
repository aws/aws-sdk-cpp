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
  enum class DatasetType
  {
    NOT_SET,
    INTERACTIONS
  };

namespace DatasetTypeMapper
{
AWS_CLEANROOMSML_API DatasetType GetDatasetTypeForName(const Aws::String& name);

AWS_CLEANROOMSML_API Aws::String GetNameForDatasetType(DatasetType value);
} // namespace DatasetTypeMapper
} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
