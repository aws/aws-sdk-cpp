/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/IntegrationDetails.h>
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

IntegrationDetails::IntegrationDetails(JsonView jsonValue)
{
  *this = jsonValue;
}

IntegrationDetails& IntegrationDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("openSearchIntegrationDetails"))
  {
    m_openSearchIntegrationDetails = jsonValue.GetObject("openSearchIntegrationDetails");
    m_openSearchIntegrationDetailsHasBeenSet = true;
  }
  return *this;
}

JsonValue IntegrationDetails::Jsonize() const
{
  JsonValue payload;

  if(m_openSearchIntegrationDetailsHasBeenSet)
  {
   payload.WithObject("openSearchIntegrationDetails", m_openSearchIntegrationDetails.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
