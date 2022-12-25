/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/AnonymousUserQSearchBarEmbeddingConfiguration.h>
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

AnonymousUserQSearchBarEmbeddingConfiguration::AnonymousUserQSearchBarEmbeddingConfiguration() : 
    m_initialTopicIdHasBeenSet(false)
{
}

AnonymousUserQSearchBarEmbeddingConfiguration::AnonymousUserQSearchBarEmbeddingConfiguration(JsonView jsonValue) : 
    m_initialTopicIdHasBeenSet(false)
{
  *this = jsonValue;
}

AnonymousUserQSearchBarEmbeddingConfiguration& AnonymousUserQSearchBarEmbeddingConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("InitialTopicId"))
  {
    m_initialTopicId = jsonValue.GetString("InitialTopicId");

    m_initialTopicIdHasBeenSet = true;
  }

  return *this;
}

JsonValue AnonymousUserQSearchBarEmbeddingConfiguration::Jsonize() const
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
