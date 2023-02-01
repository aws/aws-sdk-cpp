/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/DataQualityRulesetListDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

DataQualityRulesetListDetails::DataQualityRulesetListDetails() : 
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_createdOnHasBeenSet(false),
    m_lastModifiedOnHasBeenSet(false),
    m_targetTableHasBeenSet(false),
    m_recommendationRunIdHasBeenSet(false),
    m_ruleCount(0),
    m_ruleCountHasBeenSet(false)
{
}

DataQualityRulesetListDetails::DataQualityRulesetListDetails(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_createdOnHasBeenSet(false),
    m_lastModifiedOnHasBeenSet(false),
    m_targetTableHasBeenSet(false),
    m_recommendationRunIdHasBeenSet(false),
    m_ruleCount(0),
    m_ruleCountHasBeenSet(false)
{
  *this = jsonValue;
}

DataQualityRulesetListDetails& DataQualityRulesetListDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedOn"))
  {
    m_createdOn = jsonValue.GetDouble("CreatedOn");

    m_createdOnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedOn"))
  {
    m_lastModifiedOn = jsonValue.GetDouble("LastModifiedOn");

    m_lastModifiedOnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TargetTable"))
  {
    m_targetTable = jsonValue.GetObject("TargetTable");

    m_targetTableHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RecommendationRunId"))
  {
    m_recommendationRunId = jsonValue.GetString("RecommendationRunId");

    m_recommendationRunIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RuleCount"))
  {
    m_ruleCount = jsonValue.GetInteger("RuleCount");

    m_ruleCountHasBeenSet = true;
  }

  return *this;
}

JsonValue DataQualityRulesetListDetails::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_createdOnHasBeenSet)
  {
   payload.WithDouble("CreatedOn", m_createdOn.SecondsWithMSPrecision());
  }

  if(m_lastModifiedOnHasBeenSet)
  {
   payload.WithDouble("LastModifiedOn", m_lastModifiedOn.SecondsWithMSPrecision());
  }

  if(m_targetTableHasBeenSet)
  {
   payload.WithObject("TargetTable", m_targetTable.Jsonize());

  }

  if(m_recommendationRunIdHasBeenSet)
  {
   payload.WithString("RecommendationRunId", m_recommendationRunId);

  }

  if(m_ruleCountHasBeenSet)
  {
   payload.WithInteger("RuleCount", m_ruleCount);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
