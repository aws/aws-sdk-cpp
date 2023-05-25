/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/ExportingLocation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CustomerProfiles
{
namespace Model
{

ExportingLocation::ExportingLocation() : 
    m_s3ExportingHasBeenSet(false)
{
}

ExportingLocation::ExportingLocation(JsonView jsonValue) : 
    m_s3ExportingHasBeenSet(false)
{
  *this = jsonValue;
}

ExportingLocation& ExportingLocation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("S3Exporting"))
  {
    m_s3Exporting = jsonValue.GetObject("S3Exporting");

    m_s3ExportingHasBeenSet = true;
  }

  return *this;
}

JsonValue ExportingLocation::Jsonize() const
{
  JsonValue payload;

  if(m_s3ExportingHasBeenSet)
  {
   payload.WithObject("S3Exporting", m_s3Exporting.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
