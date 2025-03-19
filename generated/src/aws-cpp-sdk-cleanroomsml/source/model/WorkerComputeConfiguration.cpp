/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanroomsml/model/WorkerComputeConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CleanRoomsML
{
namespace Model
{

WorkerComputeConfiguration::WorkerComputeConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

WorkerComputeConfiguration& WorkerComputeConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("type"))
  {
    m_type = WorkerComputeTypeMapper::GetWorkerComputeTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("number"))
  {
    m_number = jsonValue.GetInteger("number");
    m_numberHasBeenSet = true;
  }
  return *this;
}

JsonValue WorkerComputeConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", WorkerComputeTypeMapper::GetNameForWorkerComputeType(m_type));
  }

  if(m_numberHasBeenSet)
  {
   payload.WithInteger("number", m_number);

  }

  return payload;
}

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
