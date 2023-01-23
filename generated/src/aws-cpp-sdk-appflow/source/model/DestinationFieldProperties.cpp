/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/DestinationFieldProperties.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Appflow
{
namespace Model
{

DestinationFieldProperties::DestinationFieldProperties() : 
    m_isCreatable(false),
    m_isCreatableHasBeenSet(false),
    m_isNullable(false),
    m_isNullableHasBeenSet(false),
    m_isUpsertable(false),
    m_isUpsertableHasBeenSet(false),
    m_isUpdatable(false),
    m_isUpdatableHasBeenSet(false),
    m_isDefaultedOnCreate(false),
    m_isDefaultedOnCreateHasBeenSet(false),
    m_supportedWriteOperationsHasBeenSet(false)
{
}

DestinationFieldProperties::DestinationFieldProperties(JsonView jsonValue) : 
    m_isCreatable(false),
    m_isCreatableHasBeenSet(false),
    m_isNullable(false),
    m_isNullableHasBeenSet(false),
    m_isUpsertable(false),
    m_isUpsertableHasBeenSet(false),
    m_isUpdatable(false),
    m_isUpdatableHasBeenSet(false),
    m_isDefaultedOnCreate(false),
    m_isDefaultedOnCreateHasBeenSet(false),
    m_supportedWriteOperationsHasBeenSet(false)
{
  *this = jsonValue;
}

DestinationFieldProperties& DestinationFieldProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("isCreatable"))
  {
    m_isCreatable = jsonValue.GetBool("isCreatable");

    m_isCreatableHasBeenSet = true;
  }

  if(jsonValue.ValueExists("isNullable"))
  {
    m_isNullable = jsonValue.GetBool("isNullable");

    m_isNullableHasBeenSet = true;
  }

  if(jsonValue.ValueExists("isUpsertable"))
  {
    m_isUpsertable = jsonValue.GetBool("isUpsertable");

    m_isUpsertableHasBeenSet = true;
  }

  if(jsonValue.ValueExists("isUpdatable"))
  {
    m_isUpdatable = jsonValue.GetBool("isUpdatable");

    m_isUpdatableHasBeenSet = true;
  }

  if(jsonValue.ValueExists("isDefaultedOnCreate"))
  {
    m_isDefaultedOnCreate = jsonValue.GetBool("isDefaultedOnCreate");

    m_isDefaultedOnCreateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("supportedWriteOperations"))
  {
    Aws::Utils::Array<JsonView> supportedWriteOperationsJsonList = jsonValue.GetArray("supportedWriteOperations");
    for(unsigned supportedWriteOperationsIndex = 0; supportedWriteOperationsIndex < supportedWriteOperationsJsonList.GetLength(); ++supportedWriteOperationsIndex)
    {
      m_supportedWriteOperations.push_back(WriteOperationTypeMapper::GetWriteOperationTypeForName(supportedWriteOperationsJsonList[supportedWriteOperationsIndex].AsString()));
    }
    m_supportedWriteOperationsHasBeenSet = true;
  }

  return *this;
}

JsonValue DestinationFieldProperties::Jsonize() const
{
  JsonValue payload;

  if(m_isCreatableHasBeenSet)
  {
   payload.WithBool("isCreatable", m_isCreatable);

  }

  if(m_isNullableHasBeenSet)
  {
   payload.WithBool("isNullable", m_isNullable);

  }

  if(m_isUpsertableHasBeenSet)
  {
   payload.WithBool("isUpsertable", m_isUpsertable);

  }

  if(m_isUpdatableHasBeenSet)
  {
   payload.WithBool("isUpdatable", m_isUpdatable);

  }

  if(m_isDefaultedOnCreateHasBeenSet)
  {
   payload.WithBool("isDefaultedOnCreate", m_isDefaultedOnCreate);

  }

  if(m_supportedWriteOperationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> supportedWriteOperationsJsonList(m_supportedWriteOperations.size());
   for(unsigned supportedWriteOperationsIndex = 0; supportedWriteOperationsIndex < supportedWriteOperationsJsonList.GetLength(); ++supportedWriteOperationsIndex)
   {
     supportedWriteOperationsJsonList[supportedWriteOperationsIndex].AsString(WriteOperationTypeMapper::GetNameForWriteOperationType(m_supportedWriteOperations[supportedWriteOperationsIndex]));
   }
   payload.WithArray("supportedWriteOperations", std::move(supportedWriteOperationsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Appflow
} // namespace Aws
