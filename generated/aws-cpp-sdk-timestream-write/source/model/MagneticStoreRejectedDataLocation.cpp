/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/timestream-write/model/MagneticStoreRejectedDataLocation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace TimestreamWrite
{
namespace Model
{

MagneticStoreRejectedDataLocation::MagneticStoreRejectedDataLocation() : 
    m_s3ConfigurationHasBeenSet(false)
{
}

MagneticStoreRejectedDataLocation::MagneticStoreRejectedDataLocation(JsonView jsonValue) : 
    m_s3ConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

MagneticStoreRejectedDataLocation& MagneticStoreRejectedDataLocation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("S3Configuration"))
  {
    m_s3Configuration = jsonValue.GetObject("S3Configuration");

    m_s3ConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue MagneticStoreRejectedDataLocation::Jsonize() const
{
  JsonValue payload;

  if(m_s3ConfigurationHasBeenSet)
  {
   payload.WithObject("S3Configuration", m_s3Configuration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace TimestreamWrite
} // namespace Aws
