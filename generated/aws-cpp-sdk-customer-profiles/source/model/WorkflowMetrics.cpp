/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/WorkflowMetrics.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CustomerProfiles
{
namespace Model
{

WorkflowMetrics::WorkflowMetrics() : 
    m_appflowIntegrationHasBeenSet(false)
{
}

WorkflowMetrics::WorkflowMetrics(JsonView jsonValue) : 
    m_appflowIntegrationHasBeenSet(false)
{
  *this = jsonValue;
}

WorkflowMetrics& WorkflowMetrics::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AppflowIntegration"))
  {
    m_appflowIntegration = jsonValue.GetObject("AppflowIntegration");

    m_appflowIntegrationHasBeenSet = true;
  }

  return *this;
}

JsonValue WorkflowMetrics::Jsonize() const
{
  JsonValue payload;

  if(m_appflowIntegrationHasBeenSet)
  {
   payload.WithObject("AppflowIntegration", m_appflowIntegration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
