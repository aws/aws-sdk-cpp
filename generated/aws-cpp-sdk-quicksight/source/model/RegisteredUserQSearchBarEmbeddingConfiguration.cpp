/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/RegisteredUserQSearchBarEmbeddingConfiguration.h>
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

RegisteredUserQSearchBarEmbeddingConfiguration::RegisteredUserQSearchBarEmbeddingConfiguration() : 
    m_initialTopicIdHasBeenSet(false)
{
}

RegisteredUserQSearchBarEmbeddingConfiguration::RegisteredUserQSearchBarEmbeddingConfiguration(JsonView jsonValue) : 
    m_initialTopicIdHasBeenSet(false)
{
  *this = jsonValue;
}

RegisteredUserQSearchBarEmbeddingConfiguration& RegisteredUserQSearchBarEmbeddingConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("InitialTopicId"))
  {
    m_initialTopicId = jsonValue.GetString("InitialTopicId");

    m_initialTopicIdHasBeenSet = true;
  }

  return *this;
}

JsonValue RegisteredUserQSearchBarEmbeddingConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_initialTopicIdHasBeenSet)
  {
   payload.WithString("InitialTopicId", m_initialTopicId);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
