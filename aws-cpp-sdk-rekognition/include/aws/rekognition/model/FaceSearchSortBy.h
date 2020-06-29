/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Rekognition
{
namespace Model
{
  enum class FaceSearchSortBy
  {
    NOT_SET,
    INDEX,
    TIMESTAMP
  };

namespace FaceSearchSortByMapper
{
AWS_REKOGNITION_API FaceSearchSortBy GetFaceSearchSortByForName(const Aws::String& name);

AWS_REKOGNITION_API Aws::String GetNameForFaceSearchSortBy(FaceSearchSortBy value);
} // namespace FaceSearchSortByMapper
} // namespace Model
} // namespace Rekognition
} // namespace Aws
