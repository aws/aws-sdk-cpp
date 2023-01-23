/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutequipment/LookoutEquipment_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace LookoutEquipment
{
namespace Model
{
  enum class DataUploadFrequency
  {
    NOT_SET,
    PT5M,
    PT10M,
    PT15M,
    PT30M,
    PT1H
  };

namespace DataUploadFrequencyMapper
{
AWS_LOOKOUTEQUIPMENT_API DataUploadFrequency GetDataUploadFrequencyForName(const Aws::String& name);

AWS_LOOKOUTEQUIPMENT_API Aws::String GetNameForDataUploadFrequency(DataUploadFrequency value);
} // namespace DataUploadFrequencyMapper
} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
