﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/textract/model/ExpenseField.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Textract
{
namespace Model
{

ExpenseField::ExpenseField() : 
    m_typeHasBeenSet(false),
    m_labelDetectionHasBeenSet(false),
    m_valueDetectionHasBeenSet(false),
    m_pageNumber(0),
    m_pageNumberHasBeenSet(false)
{
}

ExpenseField::ExpenseField(JsonView jsonValue) : 
    m_typeHasBeenSet(false),
    m_labelDetectionHasBeenSet(false),
    m_valueDetectionHasBeenSet(false),
    m_pageNumber(0),
    m_pageNumberHasBeenSet(false)
{
  *this = jsonValue;
}

ExpenseField& ExpenseField::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Type"))
  {
    m_type = jsonValue.GetObject("Type");

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LabelDetection"))
  {
    m_labelDetection = jsonValue.GetObject("LabelDetection");

    m_labelDetectionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ValueDetection"))
  {
    m_valueDetection = jsonValue.GetObject("ValueDetection");

    m_valueDetectionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PageNumber"))
  {
    m_pageNumber = jsonValue.GetInteger("PageNumber");

    m_pageNumberHasBeenSet = true;
  }

  return *this;
}

JsonValue ExpenseField::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithObject("Type", m_type.Jsonize());

  }

  if(m_labelDetectionHasBeenSet)
  {
   payload.WithObject("LabelDetection", m_labelDetection.Jsonize());

  }

  if(m_valueDetectionHasBeenSet)
  {
   payload.WithObject("ValueDetection", m_valueDetection.Jsonize());

  }

  if(m_pageNumberHasBeenSet)
  {
   payload.WithInteger("PageNumber", m_pageNumber);

  }

  return payload;
}

} // namespace Model
} // namespace Textract
} // namespace Aws
