/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra-ranking/model/RescoreResultItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace KendraRanking
{
namespace Model
{

RescoreResultItem::RescoreResultItem() : 
    m_documentIdHasBeenSet(false),
    m_score(0.0),
    m_scoreHasBeenSet(false)
{
}

RescoreResultItem::RescoreResultItem(JsonView jsonValue) : 
    m_documentIdHasBeenSet(false),
    m_score(0.0),
    m_scoreHasBeenSet(false)
{
  *this = jsonValue;
}

RescoreResultItem& RescoreResultItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DocumentId"))
  {
    m_documentId = jsonValue.GetString("DocumentId");

    m_documentIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Score"))
  {
    m_score = jsonValue.GetDouble("Score");

    m_scoreHasBeenSet = true;
  }

  return *this;
}

JsonValue RescoreResultItem::Jsonize() const
{
  JsonValue payload;

  if(m_documentIdHasBeenSet)
  {
   payload.WithString("DocumentId", m_documentId);

  }

  if(m_scoreHasBeenSet)
  {
   payload.WithDouble("Score", m_score);

  }

  return payload;
}

} // namespace Model
} // namespace KendraRanking
} // namespace Aws
