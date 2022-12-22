/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/AnalysisError.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

AnalysisError::AnalysisError() : 
    m_type(AnalysisErrorType::NOT_SET),
    m_typeHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_violatedEntitiesHasBeenSet(false)
{
}

AnalysisError::AnalysisError(JsonView jsonValue) : 
    m_type(AnalysisErrorType::NOT_SET),
    m_typeHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_violatedEntitiesHasBeenSet(false)
{
  *this = jsonValue;
}

AnalysisError& AnalysisError::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Type"))
  {
    m_type = AnalysisErrorTypeMapper::GetAnalysisErrorTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ViolatedEntities"))
  {
    Aws::Utils::Array<JsonView> violatedEntitiesJsonList = jsonValue.GetArray("ViolatedEntities");
    for(unsigned violatedEntitiesIndex = 0; violatedEntitiesIndex < violatedEntitiesJsonList.GetLength(); ++violatedEntitiesIndex)
    {
      m_violatedEntities.push_back(violatedEntitiesJsonList[violatedEntitiesIndex].AsObject());
    }
    m_violatedEntitiesHasBeenSet = true;
  }

  return *this;
}

JsonValue AnalysisError::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", AnalysisErrorTypeMapper::GetNameForAnalysisErrorType(m_type));
  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  if(m_violatedEntitiesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> violatedEntitiesJsonList(m_violatedEntities.size());
   for(unsigned violatedEntitiesIndex = 0; violatedEntitiesIndex < violatedEntitiesJsonList.GetLength(); ++violatedEntitiesIndex)
   {
     violatedEntitiesJsonList[violatedEntitiesIndex].AsObject(m_violatedEntities[violatedEntitiesIndex].Jsonize());
   }
   payload.WithArray("ViolatedEntities", std::move(violatedEntitiesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
