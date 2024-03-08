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

SourceDescription::SourceDescription() : 
    m_kinesisStreamSourceDescriptionHasBeenSet(false),
    m_mSKSourceDescriptionHasBeenSet(false)
{
}

SourceDescription::SourceDescription(JsonView jsonValue) : 
    m_kinesisStreamSourceDescriptionHasBeenSet(false),
    m_mSKSourceDescriptionHasBeenSet(false)
{
  *this = jsonValue;
}

SourceDescription& SourceDescription::operator =(JsonView jsonValue)
{
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

  return *this;
}

JsonValue SourceDescription::Jsonize() const
{
  JsonValue payload;

  if(m_kinesisStreamSourceDescriptionHasBeenSet)
  {
   payload.WithObject("KinesisStreamSourceDescription", m_kinesisStreamSourceDescription.Jsonize());

  }

  if(m_mSKSourceDescriptionHasBeenSet)
  {
   payload.WithObject("MSKSourceDescription", m_mSKSourceDescription.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Firehose
} // namespace Aws
