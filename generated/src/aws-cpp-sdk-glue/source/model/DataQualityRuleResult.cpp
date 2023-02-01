/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/DataQualityRuleResult.h>
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

DataQualityRuleResult::DataQualityRuleResult() : 
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_evaluationMessageHasBeenSet(false),
    m_result(DataQualityRuleResultStatus::NOT_SET),
    m_resultHasBeenSet(false)
{
}

DataQualityRuleResult::DataQualityRuleResult(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_evaluationMessageHasBeenSet(false),
    m_result(DataQualityRuleResultStatus::NOT_SET),
    m_resultHasBeenSet(false)
{
  *this = jsonValue;
}

DataQualityRuleResult& DataQualityRuleResult::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("EvaluationMessage"))
  {
    m_evaluationMessage = jsonValue.GetString("EvaluationMessage");

    m_evaluationMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Result"))
  {
    m_result = DataQualityRuleResultStatusMapper::GetDataQualityRuleResultStatusForName(jsonValue.GetString("Result"));

    m_resultHasBeenSet = true;
  }

  return *this;
}

JsonValue DataQualityRuleResult::Jsonize() const
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

  if(m_evaluationMessageHasBeenSet)
  {
   payload.WithString("EvaluationMessage", m_evaluationMessage);

  }

  if(m_resultHasBeenSet)
  {
   payload.WithString("Result", DataQualityRuleResultStatusMapper::GetNameForDataQualityRuleResultStatus(m_result));
  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
