/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/timestream-write/model/MagneticStoreWriteProperties.h>
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

MagneticStoreWriteProperties::MagneticStoreWriteProperties() : 
    m_enableMagneticStoreWrites(false),
    m_enableMagneticStoreWritesHasBeenSet(false),
    m_magneticStoreRejectedDataLocationHasBeenSet(false)
{
}

MagneticStoreWriteProperties::MagneticStoreWriteProperties(JsonView jsonValue) : 
    m_enableMagneticStoreWrites(false),
    m_enableMagneticStoreWritesHasBeenSet(false),
    m_magneticStoreRejectedDataLocationHasBeenSet(false)
{
  *this = jsonValue;
}

MagneticStoreWriteProperties& MagneticStoreWriteProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EnableMagneticStoreWrites"))
  {
    m_enableMagneticStoreWrites = jsonValue.GetBool("EnableMagneticStoreWrites");

    m_enableMagneticStoreWritesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MagneticStoreRejectedDataLocation"))
  {
    m_magneticStoreRejectedDataLocation = jsonValue.GetObject("MagneticStoreRejectedDataLocation");

    m_magneticStoreRejectedDataLocationHasBeenSet = true;
  }

  return *this;
}

JsonValue MagneticStoreWriteProperties::Jsonize() const
{
  JsonValue payload;

  if(m_enableMagneticStoreWritesHasBeenSet)
  {
   payload.WithBool("EnableMagneticStoreWrites", m_enableMagneticStoreWrites);

  }

  if(m_magneticStoreRejectedDataLocationHasBeenSet)
  {
   payload.WithObject("MagneticStoreRejectedDataLocation", m_magneticStoreRejectedDataLocation.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace TimestreamWrite
} // namespace Aws
