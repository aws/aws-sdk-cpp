/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/AnalysisTemplateValidationStatusDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CleanRooms
{
namespace Model
{

AnalysisTemplateValidationStatusDetail::AnalysisTemplateValidationStatusDetail() : 
    m_type(AnalysisTemplateValidationType::NOT_SET),
    m_typeHasBeenSet(false),
    m_status(AnalysisTemplateValidationStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_reasonsHasBeenSet(false)
{
}

AnalysisTemplateValidationStatusDetail::AnalysisTemplateValidationStatusDetail(JsonView jsonValue) : 
    m_type(AnalysisTemplateValidationType::NOT_SET),
    m_typeHasBeenSet(false),
    m_status(AnalysisTemplateValidationStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_reasonsHasBeenSet(false)
{
  *this = jsonValue;
}

AnalysisTemplateValidationStatusDetail& AnalysisTemplateValidationStatusDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("type"))
  {
    m_type = AnalysisTemplateValidationTypeMapper::GetAnalysisTemplateValidationTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = AnalysisTemplateValidationStatusMapper::GetAnalysisTemplateValidationStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("reasons"))
  {
    Aws::Utils::Array<JsonView> reasonsJsonList = jsonValue.GetArray("reasons");
    for(unsigned reasonsIndex = 0; reasonsIndex < reasonsJsonList.GetLength(); ++reasonsIndex)
    {
      m_reasons.push_back(reasonsJsonList[reasonsIndex].AsObject());
    }
    m_reasonsHasBeenSet = true;
  }

  return *this;
}

JsonValue AnalysisTemplateValidationStatusDetail::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", AnalysisTemplateValidationTypeMapper::GetNameForAnalysisTemplateValidationType(m_type));
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", AnalysisTemplateValidationStatusMapper::GetNameForAnalysisTemplateValidationStatus(m_status));
  }

  if(m_reasonsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> reasonsJsonList(m_reasons.size());
   for(unsigned reasonsIndex = 0; reasonsIndex < reasonsJsonList.GetLength(); ++reasonsIndex)
   {
     reasonsJsonList[reasonsIndex].AsObject(m_reasons[reasonsIndex].Jsonize());
   }
   payload.WithArray("reasons", std::move(reasonsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
