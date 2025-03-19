/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-managed-integrations/model/OtaTaskExecutionRetryConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTManagedIntegrations
{
namespace Model
{

OtaTaskExecutionRetryConfig::OtaTaskExecutionRetryConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

OtaTaskExecutionRetryConfig& OtaTaskExecutionRetryConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RetryConfigCriteria"))
  {
    Aws::Utils::Array<JsonView> retryConfigCriteriaJsonList = jsonValue.GetArray("RetryConfigCriteria");
    for(unsigned retryConfigCriteriaIndex = 0; retryConfigCriteriaIndex < retryConfigCriteriaJsonList.GetLength(); ++retryConfigCriteriaIndex)
    {
      m_retryConfigCriteria.push_back(retryConfigCriteriaJsonList[retryConfigCriteriaIndex].AsObject());
    }
    m_retryConfigCriteriaHasBeenSet = true;
  }
  return *this;
}

JsonValue OtaTaskExecutionRetryConfig::Jsonize() const
{
  JsonValue payload;

  if(m_retryConfigCriteriaHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> retryConfigCriteriaJsonList(m_retryConfigCriteria.size());
   for(unsigned retryConfigCriteriaIndex = 0; retryConfigCriteriaIndex < retryConfigCriteriaJsonList.GetLength(); ++retryConfigCriteriaIndex)
   {
     retryConfigCriteriaJsonList[retryConfigCriteriaIndex].AsObject(m_retryConfigCriteria[retryConfigCriteriaIndex].Jsonize());
   }
   payload.WithArray("RetryConfigCriteria", std::move(retryConfigCriteriaJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
