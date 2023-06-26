/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/ExecutionProperty.h>
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

ExecutionProperty::ExecutionProperty() : 
    m_maxConcurrentRuns(0),
    m_maxConcurrentRunsHasBeenSet(false)
{
}

ExecutionProperty::ExecutionProperty(JsonView jsonValue) : 
    m_maxConcurrentRuns(0),
    m_maxConcurrentRunsHasBeenSet(false)
{
  *this = jsonValue;
}

ExecutionProperty& ExecutionProperty::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MaxConcurrentRuns"))
  {
    m_maxConcurrentRuns = jsonValue.GetInteger("MaxConcurrentRuns");

    m_maxConcurrentRunsHasBeenSet = true;
  }

  return *this;
}

JsonValue ExecutionProperty::Jsonize() const
{
  JsonValue payload;

  if(m_maxConcurrentRunsHasBeenSet)
  {
   payload.WithInteger("MaxConcurrentRuns", m_maxConcurrentRuns);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
