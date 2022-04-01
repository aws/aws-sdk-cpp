/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediastore-data/MediaStoreData_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaStoreData
{
namespace Model
{
  enum class UploadAvailability
  {
    NOT_SET,
    STANDARD,
    STREAMING
  };

namespace UploadAvailabilityMapper
{
AWS_MEDIASTOREDATA_API UploadAvailability GetUploadAvailabilityForName(const Aws::String& name);

AWS_MEDIASTOREDATA_API Aws::String GetNameForUploadAvailability(UploadAvailability value);
} // namespace UploadAvailabilityMapper
} // namespace Model
} // namespace MediaStoreData
} // namespace Aws
