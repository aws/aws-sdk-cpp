/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/RecommendationData.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DatabaseMigrationService
{
namespace Model
{

RecommendationData::RecommendationData() : 
    m_rdsEngineHasBeenSet(false)
{
}

RecommendationData::RecommendationData(JsonView jsonValue) : 
    m_rdsEngineHasBeenSet(false)
{
  *this = jsonValue;
}

RecommendationData& RecommendationData::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RdsEngine"))
  {
    m_rdsEngine = jsonValue.GetObject("RdsEngine");

    m_rdsEngineHasBeenSet = true;
  }

  return *this;
}

JsonValue RecommendationData::Jsonize() const
{
  JsonValue payload;

  if(m_rdsEngineHasBeenSet)
  {
   payload.WithObject("RdsEngine", m_rdsEngine.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
