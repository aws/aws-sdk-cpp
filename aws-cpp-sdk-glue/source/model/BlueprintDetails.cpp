/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/BlueprintDetails.h>
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

BlueprintDetails::BlueprintDetails() : 
    m_blueprintNameHasBeenSet(false),
    m_runIdHasBeenSet(false)
{
}

BlueprintDetails::BlueprintDetails(JsonView jsonValue) : 
    m_blueprintNameHasBeenSet(false),
    m_runIdHasBeenSet(false)
{
  *this = jsonValue;
}

BlueprintDetails& BlueprintDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BlueprintName"))
  {
    m_blueprintName = jsonValue.GetString("BlueprintName");

    m_blueprintNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RunId"))
  {
    m_runId = jsonValue.GetString("RunId");

    m_runIdHasBeenSet = true;
  }

  return *this;
}

JsonValue BlueprintDetails::Jsonize() const
{
  JsonValue payload;

  if(m_blueprintNameHasBeenSet)
  {
   payload.WithString("BlueprintName", m_blueprintName);

  }

  if(m_runIdHasBeenSet)
  {
   payload.WithString("RunId", m_runId);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
