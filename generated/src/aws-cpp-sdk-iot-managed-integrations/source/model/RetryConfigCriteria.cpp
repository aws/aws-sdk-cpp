/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-managed-integrations/model/RetryConfigCriteria.h>
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

RetryConfigCriteria::RetryConfigCriteria(JsonView jsonValue)
{
  *this = jsonValue;
}

RetryConfigCriteria& RetryConfigCriteria::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FailureType"))
  {
    m_failureType = RetryCriteriaFailureTypeMapper::GetRetryCriteriaFailureTypeForName(jsonValue.GetString("FailureType"));
    m_failureTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MinNumberOfRetries"))
  {
    m_minNumberOfRetries = jsonValue.GetInteger("MinNumberOfRetries");
    m_minNumberOfRetriesHasBeenSet = true;
  }
  return *this;
}

JsonValue RetryConfigCriteria::Jsonize() const
{
  JsonValue payload;

  if(m_failureTypeHasBeenSet)
  {
   payload.WithString("FailureType", RetryCriteriaFailureTypeMapper::GetNameForRetryCriteriaFailureType(m_failureType));
  }

  if(m_minNumberOfRetriesHasBeenSet)
  {
   payload.WithInteger("MinNumberOfRetries", m_minNumberOfRetries);

  }

  return payload;
}

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
