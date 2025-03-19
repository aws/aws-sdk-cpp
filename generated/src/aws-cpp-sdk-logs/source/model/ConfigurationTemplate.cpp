/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/ConfigurationTemplate.h>
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

ConfigurationTemplate::ConfigurationTemplate(JsonView jsonValue)
{
  *this = jsonValue;
}

ConfigurationTemplate& ConfigurationTemplate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("service"))
  {
    m_service = jsonValue.GetString("service");
    m_serviceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("logType"))
  {
    m_logType = jsonValue.GetString("logType");
    m_logTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("resourceType"))
  {
    m_resourceType = jsonValue.GetString("resourceType");
    m_resourceTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("deliveryDestinationType"))
  {
    m_deliveryDestinationType = DeliveryDestinationTypeMapper::GetDeliveryDestinationTypeForName(jsonValue.GetString("deliveryDestinationType"));
    m_deliveryDestinationTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("defaultDeliveryConfigValues"))
  {
    m_defaultDeliveryConfigValues = jsonValue.GetObject("defaultDeliveryConfigValues");
    m_defaultDeliveryConfigValuesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("allowedFields"))
  {
    Aws::Utils::Array<JsonView> allowedFieldsJsonList = jsonValue.GetArray("allowedFields");
    for(unsigned allowedFieldsIndex = 0; allowedFieldsIndex < allowedFieldsJsonList.GetLength(); ++allowedFieldsIndex)
    {
      m_allowedFields.push_back(allowedFieldsJsonList[allowedFieldsIndex].AsObject());
    }
    m_allowedFieldsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("allowedOutputFormats"))
  {
    Aws::Utils::Array<JsonView> allowedOutputFormatsJsonList = jsonValue.GetArray("allowedOutputFormats");
    for(unsigned allowedOutputFormatsIndex = 0; allowedOutputFormatsIndex < allowedOutputFormatsJsonList.GetLength(); ++allowedOutputFormatsIndex)
    {
      m_allowedOutputFormats.push_back(OutputFormatMapper::GetOutputFormatForName(allowedOutputFormatsJsonList[allowedOutputFormatsIndex].AsString()));
    }
    m_allowedOutputFormatsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("allowedActionForAllowVendedLogsDeliveryForResource"))
  {
    m_allowedActionForAllowVendedLogsDeliveryForResource = jsonValue.GetString("allowedActionForAllowVendedLogsDeliveryForResource");
    m_allowedActionForAllowVendedLogsDeliveryForResourceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("allowedFieldDelimiters"))
  {
    Aws::Utils::Array<JsonView> allowedFieldDelimitersJsonList = jsonValue.GetArray("allowedFieldDelimiters");
    for(unsigned allowedFieldDelimitersIndex = 0; allowedFieldDelimitersIndex < allowedFieldDelimitersJsonList.GetLength(); ++allowedFieldDelimitersIndex)
    {
      m_allowedFieldDelimiters.push_back(allowedFieldDelimitersJsonList[allowedFieldDelimitersIndex].AsString());
    }
    m_allowedFieldDelimitersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("allowedSuffixPathFields"))
  {
    Aws::Utils::Array<JsonView> allowedSuffixPathFieldsJsonList = jsonValue.GetArray("allowedSuffixPathFields");
    for(unsigned allowedSuffixPathFieldsIndex = 0; allowedSuffixPathFieldsIndex < allowedSuffixPathFieldsJsonList.GetLength(); ++allowedSuffixPathFieldsIndex)
    {
      m_allowedSuffixPathFields.push_back(allowedSuffixPathFieldsJsonList[allowedSuffixPathFieldsIndex].AsString());
    }
    m_allowedSuffixPathFieldsHasBeenSet = true;
  }
  return *this;
}

JsonValue ConfigurationTemplate::Jsonize() const
{
  JsonValue payload;

  if(m_serviceHasBeenSet)
  {
   payload.WithString("service", m_service);

  }

  if(m_logTypeHasBeenSet)
  {
   payload.WithString("logType", m_logType);

  }

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("resourceType", m_resourceType);

  }

  if(m_deliveryDestinationTypeHasBeenSet)
  {
   payload.WithString("deliveryDestinationType", DeliveryDestinationTypeMapper::GetNameForDeliveryDestinationType(m_deliveryDestinationType));
  }

  if(m_defaultDeliveryConfigValuesHasBeenSet)
  {
   payload.WithObject("defaultDeliveryConfigValues", m_defaultDeliveryConfigValues.Jsonize());

  }

  if(m_allowedFieldsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> allowedFieldsJsonList(m_allowedFields.size());
   for(unsigned allowedFieldsIndex = 0; allowedFieldsIndex < allowedFieldsJsonList.GetLength(); ++allowedFieldsIndex)
   {
     allowedFieldsJsonList[allowedFieldsIndex].AsObject(m_allowedFields[allowedFieldsIndex].Jsonize());
   }
   payload.WithArray("allowedFields", std::move(allowedFieldsJsonList));

  }

  if(m_allowedOutputFormatsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> allowedOutputFormatsJsonList(m_allowedOutputFormats.size());
   for(unsigned allowedOutputFormatsIndex = 0; allowedOutputFormatsIndex < allowedOutputFormatsJsonList.GetLength(); ++allowedOutputFormatsIndex)
   {
     allowedOutputFormatsJsonList[allowedOutputFormatsIndex].AsString(OutputFormatMapper::GetNameForOutputFormat(m_allowedOutputFormats[allowedOutputFormatsIndex]));
   }
   payload.WithArray("allowedOutputFormats", std::move(allowedOutputFormatsJsonList));

  }

  if(m_allowedActionForAllowVendedLogsDeliveryForResourceHasBeenSet)
  {
   payload.WithString("allowedActionForAllowVendedLogsDeliveryForResource", m_allowedActionForAllowVendedLogsDeliveryForResource);

  }

  if(m_allowedFieldDelimitersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> allowedFieldDelimitersJsonList(m_allowedFieldDelimiters.size());
   for(unsigned allowedFieldDelimitersIndex = 0; allowedFieldDelimitersIndex < allowedFieldDelimitersJsonList.GetLength(); ++allowedFieldDelimitersIndex)
   {
     allowedFieldDelimitersJsonList[allowedFieldDelimitersIndex].AsString(m_allowedFieldDelimiters[allowedFieldDelimitersIndex]);
   }
   payload.WithArray("allowedFieldDelimiters", std::move(allowedFieldDelimitersJsonList));

  }

  if(m_allowedSuffixPathFieldsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> allowedSuffixPathFieldsJsonList(m_allowedSuffixPathFields.size());
   for(unsigned allowedSuffixPathFieldsIndex = 0; allowedSuffixPathFieldsIndex < allowedSuffixPathFieldsJsonList.GetLength(); ++allowedSuffixPathFieldsIndex)
   {
     allowedSuffixPathFieldsJsonList[allowedSuffixPathFieldsIndex].AsString(m_allowedSuffixPathFields[allowedSuffixPathFieldsIndex]);
   }
   payload.WithArray("allowedSuffixPathFields", std::move(allowedSuffixPathFieldsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
