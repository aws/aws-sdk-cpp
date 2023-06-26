/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devops-guru/model/InsightFeedback.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DevOpsGuru
{
namespace Model
{

InsightFeedback::InsightFeedback() : 
    m_idHasBeenSet(false),
    m_feedback(InsightFeedbackOption::NOT_SET),
    m_feedbackHasBeenSet(false)
{
}

InsightFeedback::InsightFeedback(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_feedback(InsightFeedbackOption::NOT_SET),
    m_feedbackHasBeenSet(false)
{
  *this = jsonValue;
}

InsightFeedback& InsightFeedback::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Feedback"))
  {
    m_feedback = InsightFeedbackOptionMapper::GetInsightFeedbackOptionForName(jsonValue.GetString("Feedback"));

    m_feedbackHasBeenSet = true;
  }

  return *this;
}

JsonValue InsightFeedback::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_feedbackHasBeenSet)
  {
   payload.WithString("Feedback", InsightFeedbackOptionMapper::GetNameForInsightFeedbackOption(m_feedback));
  }

  return payload;
}

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
