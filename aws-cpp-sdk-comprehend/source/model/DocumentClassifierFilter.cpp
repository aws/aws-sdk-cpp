﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/DocumentClassifierFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Comprehend
{
namespace Model
{

DocumentClassifierFilter::DocumentClassifierFilter() : 
    m_status(ModelStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_documentClassifierNameHasBeenSet(false),
    m_submitTimeBeforeHasBeenSet(false),
    m_submitTimeAfterHasBeenSet(false)
{
}

DocumentClassifierFilter::DocumentClassifierFilter(JsonView jsonValue) : 
    m_status(ModelStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_documentClassifierNameHasBeenSet(false),
    m_submitTimeBeforeHasBeenSet(false),
    m_submitTimeAfterHasBeenSet(false)
{
  *this = jsonValue;
}

DocumentClassifierFilter& DocumentClassifierFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Status"))
  {
    m_status = ModelStatusMapper::GetModelStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DocumentClassifierName"))
  {
    m_documentClassifierName = jsonValue.GetString("DocumentClassifierName");

    m_documentClassifierNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SubmitTimeBefore"))
  {
    m_submitTimeBefore = jsonValue.GetDouble("SubmitTimeBefore");

    m_submitTimeBeforeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SubmitTimeAfter"))
  {
    m_submitTimeAfter = jsonValue.GetDouble("SubmitTimeAfter");

    m_submitTimeAfterHasBeenSet = true;
  }

  return *this;
}

JsonValue DocumentClassifierFilter::Jsonize() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", ModelStatusMapper::GetNameForModelStatus(m_status));
  }

  if(m_documentClassifierNameHasBeenSet)
  {
   payload.WithString("DocumentClassifierName", m_documentClassifierName);

  }

  if(m_submitTimeBeforeHasBeenSet)
  {
   payload.WithDouble("SubmitTimeBefore", m_submitTimeBefore.SecondsWithMSPrecision());
  }

  if(m_submitTimeAfterHasBeenSet)
  {
   payload.WithDouble("SubmitTimeAfter", m_submitTimeAfter.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace Comprehend
} // namespace Aws
