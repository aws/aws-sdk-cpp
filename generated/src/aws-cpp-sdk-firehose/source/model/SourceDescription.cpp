/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/firehose/model/SourceDescription.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Firehose
{
namespace Model
{

SourceDescription::SourceDescription(JsonView jsonValue)
{
  *this = jsonValue;
}

SourceDescription& SourceDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DirectPutSourceDescription"))
  {
    m_directPutSourceDescription = jsonValue.GetObject("DirectPutSourceDescription");
    m_directPutSourceDescriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("KinesisStreamSourceDescription"))
  {
    m_kinesisStreamSourceDescription = jsonValue.GetObject("KinesisStreamSourceDescription");
    m_kinesisStreamSourceDescriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MSKSourceDescription"))
  {
    m_mSKSourceDescription = jsonValue.GetObject("MSKSourceDescription");
    m_mSKSourceDescriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DatabaseSourceDescription"))
  {
    m_databaseSourceDescription = jsonValue.GetObject("DatabaseSourceDescription");
    m_databaseSourceDescriptionHasBeenSet = true;
  }
  return *this;
}

JsonValue SourceDescription::Jsonize() const
{
  JsonValue payload;

  if(m_directPutSourceDescriptionHasBeenSet)
  {
   payload.WithObject("DirectPutSourceDescription", m_directPutSourceDescription.Jsonize());

  }

  if(m_kinesisStreamSourceDescriptionHasBeenSet)
  {
   payload.WithObject("KinesisStreamSourceDescription", m_kinesisStreamSourceDescription.Jsonize());

  }

  if(m_mSKSourceDescriptionHasBeenSet)
  {
   payload.WithObject("MSKSourceDescription", m_mSKSourceDescription.Jsonize());

  }

  if(m_databaseSourceDescriptionHasBeenSet)
  {
   payload.WithObject("DatabaseSourceDescription", m_databaseSourceDescription.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Firehose
} // namespace Aws
