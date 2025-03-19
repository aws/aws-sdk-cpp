/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/EvaluationFormItem.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/connect/model/EvaluationFormSection.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

EvaluationFormItem::EvaluationFormItem(JsonView jsonValue)
{
  *this = jsonValue;
}

EvaluationFormItem& EvaluationFormItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Section"))
  {
    m_section = Aws::MakeShared<EvaluationFormSection>("EvaluationFormItem", jsonValue.GetObject("Section"));
    m_sectionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Question"))
  {
    m_question = jsonValue.GetObject("Question");
    m_questionHasBeenSet = true;
  }
  return *this;
}

JsonValue EvaluationFormItem::Jsonize() const
{
  JsonValue payload;

  if(m_sectionHasBeenSet)
  {
   payload.WithObject("Section", m_section->Jsonize());

  }

  if(m_questionHasBeenSet)
  {
   payload.WithObject("Question", m_question.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
