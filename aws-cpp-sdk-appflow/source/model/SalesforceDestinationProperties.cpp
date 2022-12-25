/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/SalesforceDestinationProperties.h>
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

SalesforceDestinationProperties::SalesforceDestinationProperties() : 
    m_objectHasBeenSet(false),
    m_idFieldNamesHasBeenSet(false),
    m_errorHandlingConfigHasBeenSet(false),
    m_writeOperationType(WriteOperationType::NOT_SET),
    m_writeOperationTypeHasBeenSet(false),
    m_dataTransferApi(SalesforceDataTransferApi::NOT_SET),
    m_dataTransferApiHasBeenSet(false)
{
}

SalesforceDestinationProperties::SalesforceDestinationProperties(JsonView jsonValue) : 
    m_objectHasBeenSet(false),
    m_idFieldNamesHasBeenSet(false),
    m_errorHandlingConfigHasBeenSet(false),
    m_writeOperationType(WriteOperationType::NOT_SET),
    m_writeOperationTypeHasBeenSet(false),
    m_dataTransferApi(SalesforceDataTransferApi::NOT_SET),
    m_dataTransferApiHasBeenSet(false)
{
  *this = jsonValue;
}

SalesforceDestinationProperties& SalesforceDestinationProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("object"))
  {
    m_object = jsonValue.GetString("object");

    m_objectHasBeenSet = true;
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

  if(jsonValue.ValueExists("dataTransferApi"))
  {
    m_dataTransferApi = SalesforceDataTransferApiMapper::GetSalesforceDataTransferApiForName(jsonValue.GetString("dataTransferApi"));

    m_dataTransferApiHasBeenSet = true;
  }

  return *this;
}

JsonValue SalesforceDestinationProperties::Jsonize() const
{
  JsonValue payload;

  if(m_objectHasBeenSet)
  {
   payload.WithString("object", m_object);

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

  if(m_dataTransferApiHasBeenSet)
  {
   payload.WithString("dataTransferApi", SalesforceDataTransferApiMapper::GetNameForSalesforceDataTransferApi(m_dataTransferApi));
  }

  return payload;
}

} // namespace Model
} // namespace Appflow
} // namespace Aws
