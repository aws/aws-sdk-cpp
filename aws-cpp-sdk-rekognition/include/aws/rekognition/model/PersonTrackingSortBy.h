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
  enum class PersonTrackingSortBy
  {
    NOT_SET,
    INDEX,
    TIMESTAMP
  };

namespace PersonTrackingSortByMapper
{
AWS_REKOGNITION_API PersonTrackingSortBy GetPersonTrackingSortByForName(const Aws::String& name);

AWS_REKOGNITION_API Aws::String GetNameForPersonTrackingSortBy(PersonTrackingSortBy value);
} // namespace PersonTrackingSortByMapper
} // namespace Model
} // namespace Rekognition
} // namespace Aws
