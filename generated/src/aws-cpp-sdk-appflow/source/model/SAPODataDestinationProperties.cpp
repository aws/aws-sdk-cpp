/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/SAPODataDestinationProperties.h>
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

SAPODataDestinationProperties::SAPODataDestinationProperties() : 
    m_objectPathHasBeenSet(false),
    m_successResponseHandlingConfigHasBeenSet(false),
    m_idFieldNamesHasBeenSet(false),
    m_errorHandlingConfigHasBeenSet(false),
    m_writeOperationType(WriteOperationType::NOT_SET),
    m_writeOperationTypeHasBeenSet(false)
{
}

SAPODataDestinationProperties::SAPODataDestinationProperties(JsonView jsonValue) : 
    m_objectPathHasBeenSet(false),
    m_successResponseHandlingConfigHasBeenSet(false),
    m_idFieldNamesHasBeenSet(false),
    m_errorHandlingConfigHasBeenSet(false),
    m_writeOperationType(WriteOperationType::NOT_SET),
    m_writeOperationTypeHasBeenSet(false)
{
  *this = jsonValue;
}

SAPODataDestinationProperties& SAPODataDestinationProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("objectPath"))
  {
    m_objectPath = jsonValue.GetString("objectPath");

    m_objectPathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("successResponseHandlingConfig"))
  {
    m_successResponseHandlingConfig = jsonValue.GetObject("successResponseHandlingConfig");

    m_successResponseHandlingConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("idFieldNames"))
  {
    Aws::Utils::Array<JsonView> idFieldNamesJsonList = jsonValue.GetArray("idFieldNames");
    for(unsigned idFieldNamesIndex = 0; idFieldNamesIndex < idFieldNamesJsonList.GetLength(); ++idFieldNamesIndex)
    {
      m_idFieldNames.push_back(idFieldNamesJsonList[idFieldNamesIndex].AsString());
    }
    m_idFieldNamesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("errorHandlingConfig"))
  {
    m_errorHandlingConfig = jsonValue.GetObject("errorHandlingConfig");

    m_errorHandlingConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("writeOperationType"))
  {
    m_writeOperationType = WriteOperationTypeMapper::GetWriteOperationTypeForName(jsonValue.GetString("writeOperationType"));

    m_writeOperationTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue SAPODataDestinationProperties::Jsonize() const
{
  JsonValue payload;

  if(m_objectPathHasBeenSet)
  {
   payload.WithString("objectPath", m_objectPath);

  }

  if(m_successResponseHandlingConfigHasBeenSet)
  {
   payload.WithObject("successResponseHandlingConfig", m_successResponseHandlingConfig.Jsonize());

  }

  if(m_idFieldNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> idFieldNamesJsonList(m_idFieldNames.size());
   for(unsigned idFieldNamesIndex = 0; idFieldNamesIndex < idFieldNamesJsonList.GetLength(); ++idFieldNamesIndex)
   {
     idFieldNamesJsonList[idFieldNamesIndex].AsString(m_idFieldNames[idFieldNamesIndex]);
   }
   payload.WithArray("idFieldNames", std::move(idFieldNamesJsonList));

  }

  if(m_errorHandlingConfigHasBeenSet)
  {
   payload.WithObject("errorHandlingConfig", m_errorHandlingConfig.Jsonize());

  }

  if(m_writeOperationTypeHasBeenSet)
  {
   payload.WithString("writeOperationType", WriteOperationTypeMapper::GetNameForWriteOperationType(m_writeOperationType));
  }

  return payload;
}

} // namespace Model
} // namespace Appflow
} // namespace Aws
