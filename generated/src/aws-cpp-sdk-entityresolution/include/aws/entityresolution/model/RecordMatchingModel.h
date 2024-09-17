/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/entityresolution/EntityResolution_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EntityResolution
{
namespace Model
{
  enum class RecordMatchingModel
  {
    NOT_SET,
    ONE_SOURCE_TO_ONE_TARGET,
    MANY_SOURCE_TO_ONE_TARGET
  };

namespace RecordMatchingModelMapper
{
AWS_ENTITYRESOLUTION_API RecordMatchingModel GetRecordMatchingModelForName(const Aws::String& name);

AWS_ENTITYRESOLUTION_API Aws::String GetNameForRecordMatchingModel(RecordMatchingModel value);
} // namespace RecordMatchingModelMapper
} // namespace Model
} // namespace EntityResolution
} // namespace Aws
