/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pinpoint/model/RecencyDimension.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

RecencyDimension::RecencyDimension() : 
    m_duration(Duration::NOT_SET),
    m_durationHasBeenSet(false),
    m_recencyType(RecencyType::NOT_SET),
    m_recencyTypeHasBeenSet(false)
{
}

RecencyDimension::RecencyDimension(JsonView jsonValue) : 
    m_duration(Duration::NOT_SET),
    m_durationHasBeenSet(false),
    m_recencyType(RecencyType::NOT_SET),
    m_recencyTypeHasBeenSet(false)
{
  *this = jsonValue;
}

RecencyDimension& RecencyDimension::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Duration"))
  {
    m_duration = DurationMapper::GetDurationForName(jsonValue.GetString("Duration"));

    m_durationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RecencyType"))
  {
    m_recencyType = RecencyTypeMapper::GetRecencyTypeForName(jsonValue.GetString("RecencyType"));

    m_recencyTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue RecencyDimension::Jsonize() const
{
  JsonValue payload;

  if(m_durationHasBeenSet)
  {
   payload.WithString("Duration", DurationMapper::GetNameForDuration(m_duration));
  }

  if(m_recencyTypeHasBeenSet)
  {
   payload.WithString("RecencyType", RecencyTypeMapper::GetNameForRecencyType(m_recencyType));
  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
