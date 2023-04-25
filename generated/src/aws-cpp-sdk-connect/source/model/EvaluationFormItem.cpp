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

EvaluationFormItem::EvaluationFormItem() : 
    m_sectionHasBeenSet(false),
    m_questionHasBeenSet(false)
{
}

EvaluationFormItem::EvaluationFormItem(JsonView jsonValue) : 
    m_sectionHasBeenSet(false),
    m_questionHasBeenSet(false)
{
  *this = jsonValue;
}

const EvaluationFormSection& EvaluationFormItem::GetSection() const{ return *m_section; }
bool EvaluationFormItem::SectionHasBeenSet() const { return m_sectionHasBeenSet; }
void EvaluationFormItem::SetSection(const EvaluationFormSection& value) { m_sectionHasBeenSet = true; m_section = Aws::MakeShared<EvaluationFormSection>("EvaluationFormItem", value); }
void EvaluationFormItem::SetSection(EvaluationFormSection&& value) { m_sectionHasBeenSet = true; m_section = Aws::MakeShared<EvaluationFormSection>("EvaluationFormItem", std::move(value)); }
EvaluationFormItem& EvaluationFormItem::WithSection(const EvaluationFormSection& value) { SetSection(value); return *this;}
EvaluationFormItem& EvaluationFormItem::WithSection(EvaluationFormSection&& value) { SetSection(std::move(value)); return *this;}

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
