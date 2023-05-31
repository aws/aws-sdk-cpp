/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/RecordingStrategy.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConfigService
{
namespace Model
{

RecordingStrategy::RecordingStrategy() : 
    m_useOnly(RecordingStrategyType::NOT_SET),
    m_useOnlyHasBeenSet(false)
{
}

RecordingStrategy::RecordingStrategy(JsonView jsonValue) : 
    m_useOnly(RecordingStrategyType::NOT_SET),
    m_useOnlyHasBeenSet(false)
{
  *this = jsonValue;
}

RecordingStrategy& RecordingStrategy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("useOnly"))
  {
    m_useOnly = RecordingStrategyTypeMapper::GetRecordingStrategyTypeForName(jsonValue.GetString("useOnly"));

    m_useOnlyHasBeenSet = true;
  }

  return *this;
}

JsonValue RecordingStrategy::Jsonize() const
{
  JsonValue payload;

  if(m_useOnlyHasBeenSet)
  {
   payload.WithString("useOnly", RecordingStrategyTypeMapper::GetNameForRecordingStrategyType(m_useOnly));
  }

  return payload;
}

} // namespace Model
} // namespace ConfigService
} // namespace Aws
