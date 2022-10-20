/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/frauddetector/model/DataValidationMetrics.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FraudDetector
{
namespace Model
{

DataValidationMetrics::DataValidationMetrics() : 
    m_fileLevelMessagesHasBeenSet(false),
    m_fieldLevelMessagesHasBeenSet(false)
{
}

DataValidationMetrics::DataValidationMetrics(JsonView jsonValue) : 
    m_fileLevelMessagesHasBeenSet(false),
    m_fieldLevelMessagesHasBeenSet(false)
{
  *this = jsonValue;
}

DataValidationMetrics& DataValidationMetrics::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("fileLevelMessages"))
  {
    Aws::Utils::Array<JsonView> fileLevelMessagesJsonList = jsonValue.GetArray("fileLevelMessages");
    for(unsigned fileLevelMessagesIndex = 0; fileLevelMessagesIndex < fileLevelMessagesJsonList.GetLength(); ++fileLevelMessagesIndex)
    {
      m_fileLevelMessages.push_back(fileLevelMessagesJsonList[fileLevelMessagesIndex].AsObject());
    }
    m_fileLevelMessagesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("fieldLevelMessages"))
  {
    Aws::Utils::Array<JsonView> fieldLevelMessagesJsonList = jsonValue.GetArray("fieldLevelMessages");
    for(unsigned fieldLevelMessagesIndex = 0; fieldLevelMessagesIndex < fieldLevelMessagesJsonList.GetLength(); ++fieldLevelMessagesIndex)
    {
      m_fieldLevelMessages.push_back(fieldLevelMessagesJsonList[fieldLevelMessagesIndex].AsObject());
    }
    m_fieldLevelMessagesHasBeenSet = true;
  }

  return *this;
}

JsonValue DataValidationMetrics::Jsonize() const
{
  JsonValue payload;

  if(m_fileLevelMessagesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> fileLevelMessagesJsonList(m_fileLevelMessages.size());
   for(unsigned fileLevelMessagesIndex = 0; fileLevelMessagesIndex < fileLevelMessagesJsonList.GetLength(); ++fileLevelMessagesIndex)
   {
     fileLevelMessagesJsonList[fileLevelMessagesIndex].AsObject(m_fileLevelMessages[fileLevelMessagesIndex].Jsonize());
   }
   payload.WithArray("fileLevelMessages", std::move(fileLevelMessagesJsonList));

  }

  if(m_fieldLevelMessagesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> fieldLevelMessagesJsonList(m_fieldLevelMessages.size());
   for(unsigned fieldLevelMessagesIndex = 0; fieldLevelMessagesIndex < fieldLevelMessagesJsonList.GetLength(); ++fieldLevelMessagesIndex)
   {
     fieldLevelMessagesJsonList[fieldLevelMessagesIndex].AsObject(m_fieldLevelMessages[fieldLevelMessagesIndex].Jsonize());
   }
   payload.WithArray("fieldLevelMessages", std::move(fieldLevelMessagesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
