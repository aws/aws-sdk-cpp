/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecr/model/ReplicationRule.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ECR
{
namespace Model
{

ReplicationRule::ReplicationRule() : 
    m_destinationsHasBeenSet(false),
    m_repositoryFiltersHasBeenSet(false)
{
}

ReplicationRule::ReplicationRule(JsonView jsonValue) : 
    m_destinationsHasBeenSet(false),
    m_repositoryFiltersHasBeenSet(false)
{
  *this = jsonValue;
}

ReplicationRule& ReplicationRule::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("destinations"))
  {
    Aws::Utils::Array<JsonView> destinationsJsonList = jsonValue.GetArray("destinations");
    for(unsigned destinationsIndex = 0; destinationsIndex < destinationsJsonList.GetLength(); ++destinationsIndex)
    {
      m_destinations.push_back(destinationsJsonList[destinationsIndex].AsObject());
    }
    m_destinationsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("repositoryFilters"))
  {
    Aws::Utils::Array<JsonView> repositoryFiltersJsonList = jsonValue.GetArray("repositoryFilters");
    for(unsigned repositoryFiltersIndex = 0; repositoryFiltersIndex < repositoryFiltersJsonList.GetLength(); ++repositoryFiltersIndex)
    {
      m_repositoryFilters.push_back(repositoryFiltersJsonList[repositoryFiltersIndex].AsObject());
    }
    m_repositoryFiltersHasBeenSet = true;
  }

  return *this;
}

JsonValue ReplicationRule::Jsonize() const
{
  JsonValue payload;

  if(m_destinationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> destinationsJsonList(m_destinations.size());
   for(unsigned destinationsIndex = 0; destinationsIndex < destinationsJsonList.GetLength(); ++destinationsIndex)
   {
     destinationsJsonList[destinationsIndex].AsObject(m_destinations[destinationsIndex].Jsonize());
   }
   payload.WithArray("destinations", std::move(destinationsJsonList));

  }

  if(m_repositoryFiltersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> repositoryFiltersJsonList(m_repositoryFilters.size());
   for(unsigned repositoryFiltersIndex = 0; repositoryFiltersIndex < repositoryFiltersJsonList.GetLength(); ++repositoryFiltersIndex)
   {
     repositoryFiltersJsonList[repositoryFiltersIndex].AsObject(m_repositoryFilters[repositoryFiltersIndex].Jsonize());
   }
   payload.WithArray("repositoryFilters", std::move(repositoryFiltersJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ECR
} // namespace Aws
