/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/ConfigurationTemplateDeliveryConfigValues.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudWatchLogs
{
namespace Model
{

ConfigurationTemplateDeliveryConfigValues::ConfigurationTemplateDeliveryConfigValues(JsonView jsonValue)
{
  *this = jsonValue;
}

ConfigurationTemplateDeliveryConfigValues& ConfigurationTemplateDeliveryConfigValues::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("recordFields"))
  {
    Aws::Utils::Array<JsonView> recordFieldsJsonList = jsonValue.GetArray("recordFields");
    for(unsigned recordFieldsIndex = 0; recordFieldsIndex < recordFieldsJsonList.GetLength(); ++recordFieldsIndex)
    {
      m_recordFields.push_back(recordFieldsJsonList[recordFieldsIndex].AsString());
    }
    m_recordFieldsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("fieldDelimiter"))
  {
    m_fieldDelimiter = jsonValue.GetString("fieldDelimiter");
    m_fieldDelimiterHasBeenSet = true;
  }
  if(jsonValue.ValueExists("s3DeliveryConfiguration"))
  {
    m_s3DeliveryConfiguration = jsonValue.GetObject("s3DeliveryConfiguration");
    m_s3DeliveryConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue ConfigurationTemplateDeliveryConfigValues::Jsonize() const
{
  JsonValue payload;

  if(m_recordFieldsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> recordFieldsJsonList(m_recordFields.size());
   for(unsigned recordFieldsIndex = 0; recordFieldsIndex < recordFieldsJsonList.GetLength(); ++recordFieldsIndex)
   {
     recordFieldsJsonList[recordFieldsIndex].AsString(m_recordFields[recordFieldsIndex]);
   }
   payload.WithArray("recordFields", std::move(recordFieldsJsonList));

  }

  if(m_fieldDelimiterHasBeenSet)
  {
   payload.WithString("fieldDelimiter", m_fieldDelimiter);

  }

  if(m_s3DeliveryConfigurationHasBeenSet)
  {
   payload.WithObject("s3DeliveryConfiguration", m_s3DeliveryConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
