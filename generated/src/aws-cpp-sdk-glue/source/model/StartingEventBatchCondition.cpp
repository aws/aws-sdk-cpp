/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/StartingEventBatchCondition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

StartingEventBatchCondition::StartingEventBatchCondition(JsonView jsonValue)
{
  *this = jsonValue;
}

StartingEventBatchCondition& StartingEventBatchCondition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BatchSize"))
  {
    m_batchSize = jsonValue.GetInteger("BatchSize");
    m_batchSizeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("BatchWindow"))
  {
    m_batchWindow = jsonValue.GetInteger("BatchWindow");
    m_batchWindowHasBeenSet = true;
  }
  return *this;
}

JsonValue StartingEventBatchCondition::Jsonize() const
{
  JsonValue payload;

  if(m_batchSizeHasBeenSet)
  {
   payload.WithInteger("BatchSize", m_batchSize);

  }

  if(m_batchWindowHasBeenSet)
  {
   payload.WithInteger("BatchWindow", m_batchWindow);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
