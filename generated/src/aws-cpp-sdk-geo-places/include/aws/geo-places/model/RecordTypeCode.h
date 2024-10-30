/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/geo-places/GeoPlaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace GeoPlaces
{
namespace Model
{
  enum class RecordTypeCode
  {
    NOT_SET,
    Firm,
    General,
    HighRise,
    PostOfficeBox,
    Rural,
    Street
  };

namespace RecordTypeCodeMapper
{
AWS_GEOPLACES_API RecordTypeCode GetRecordTypeCodeForName(const Aws::String& name);

AWS_GEOPLACES_API Aws::String GetNameForRecordTypeCode(RecordTypeCode value);
} // namespace RecordTypeCodeMapper
} // namespace Model
} // namespace GeoPlaces
} // namespace Aws
