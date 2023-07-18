/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/AnonymousUserDashboardEmbeddingConfiguration.h>
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

AnonymousUserDashboardEmbeddingConfiguration::AnonymousUserDashboardEmbeddingConfiguration() : 
    m_initialDashboardIdHasBeenSet(false)
{
}

AnonymousUserDashboardEmbeddingConfiguration::AnonymousUserDashboardEmbeddingConfiguration(JsonView jsonValue) : 
    m_initialDashboardIdHasBeenSet(false)
{
  *this = jsonValue;
}

AnonymousUserDashboardEmbeddingConfiguration& AnonymousUserDashboardEmbeddingConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("InitialDashboardId"))
  {
    m_initialDashboardId = jsonValue.GetString("InitialDashboardId");

    m_initialDashboardIdHasBeenSet = true;
  }

  return *this;
}

JsonValue AnonymousUserDashboardEmbeddingConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_initialDashboardIdHasBeenSet)
  {
   payload.WithString("InitialDashboardId", m_initialDashboardId);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
