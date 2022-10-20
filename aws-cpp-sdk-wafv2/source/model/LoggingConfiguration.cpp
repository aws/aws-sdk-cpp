/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/LoggingConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WAFV2
{
namespace Model
{

LoggingConfiguration::LoggingConfiguration() : 
    m_resourceArnHasBeenSet(false),
    m_logDestinationConfigsHasBeenSet(false),
    m_redactedFieldsHasBeenSet(false),
    m_managedByFirewallManager(false),
    m_managedByFirewallManagerHasBeenSet(false),
    m_loggingFilterHasBeenSet(false)
{
}

LoggingConfiguration::LoggingConfiguration(JsonView jsonValue) : 
    m_resourceArnHasBeenSet(false),
    m_logDestinationConfigsHasBeenSet(false),
    m_redactedFieldsHasBeenSet(false),
    m_managedByFirewallManager(false),
    m_managedByFirewallManagerHasBeenSet(false),
    m_loggingFilterHasBeenSet(false)
{
  *this = jsonValue;
}

LoggingConfiguration& LoggingConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ResourceArn"))
  {
    m_resourceArn = jsonValue.GetString("ResourceArn");

    m_resourceArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LogDestinationConfigs"))
  {
    Aws::Utils::Array<JsonView> logDestinationConfigsJsonList = jsonValue.GetArray("LogDestinationConfigs");
    for(unsigned logDestinationConfigsIndex = 0; logDestinationConfigsIndex < logDestinationConfigsJsonList.GetLength(); ++logDestinationConfigsIndex)
    {
      m_logDestinationConfigs.push_back(logDestinationConfigsJsonList[logDestinationConfigsIndex].AsString());
    }
    m_logDestinationConfigsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RedactedFields"))
  {
    Aws::Utils::Array<JsonView> redactedFieldsJsonList = jsonValue.GetArray("RedactedFields");
    for(unsigned redactedFieldsIndex = 0; redactedFieldsIndex < redactedFieldsJsonList.GetLength(); ++redactedFieldsIndex)
    {
      m_redactedFields.push_back(redactedFieldsJsonList[redactedFieldsIndex].AsObject());
    }
    m_redactedFieldsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ManagedByFirewallManager"))
  {
    m_managedByFirewallManager = jsonValue.GetBool("ManagedByFirewallManager");

    m_managedByFirewallManagerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LoggingFilter"))
  {
    m_loggingFilter = jsonValue.GetObject("LoggingFilter");

    m_loggingFilterHasBeenSet = true;
  }

  return *this;
}

JsonValue LoggingConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_resourceArnHasBeenSet)
  {
   payload.WithString("ResourceArn", m_resourceArn);

  }

  if(m_logDestinationConfigsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> logDestinationConfigsJsonList(m_logDestinationConfigs.size());
   for(unsigned logDestinationConfigsIndex = 0; logDestinationConfigsIndex < logDestinationConfigsJsonList.GetLength(); ++logDestinationConfigsIndex)
   {
     logDestinationConfigsJsonList[logDestinationConfigsIndex].AsString(m_logDestinationConfigs[logDestinationConfigsIndex]);
   }
   payload.WithArray("LogDestinationConfigs", std::move(logDestinationConfigsJsonList));

  }

  if(m_redactedFieldsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> redactedFieldsJsonList(m_redactedFields.size());
   for(unsigned redactedFieldsIndex = 0; redactedFieldsIndex < redactedFieldsJsonList.GetLength(); ++redactedFieldsIndex)
   {
     redactedFieldsJsonList[redactedFieldsIndex].AsObject(m_redactedFields[redactedFieldsIndex].Jsonize());
   }
   payload.WithArray("RedactedFields", std::move(redactedFieldsJsonList));

  }

  if(m_managedByFirewallManagerHasBeenSet)
  {
   payload.WithBool("ManagedByFirewallManager", m_managedByFirewallManager);

  }

  if(m_loggingFilterHasBeenSet)
  {
   payload.WithObject("LoggingFilter", m_loggingFilter.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace WAFV2
} // namespace Aws
