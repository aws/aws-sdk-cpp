/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/FailedCustomVocabularyItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{

FailedCustomVocabularyItem::FailedCustomVocabularyItem() : 
    m_itemIdHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_errorCode(ErrorCode::NOT_SET),
    m_errorCodeHasBeenSet(false)
{
}

FailedCustomVocabularyItem::FailedCustomVocabularyItem(JsonView jsonValue) : 
    m_itemIdHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_errorCode(ErrorCode::NOT_SET),
    m_errorCodeHasBeenSet(false)
{
  *this = jsonValue;
}

FailedCustomVocabularyItem& FailedCustomVocabularyItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("itemId"))
  {
    m_itemId = jsonValue.GetString("itemId");

    m_itemIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("errorMessage"))
  {
    m_errorMessage = jsonValue.GetString("errorMessage");

    m_errorMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("errorCode"))
  {
    m_errorCode = ErrorCodeMapper::GetErrorCodeForName(jsonValue.GetString("errorCode"));

    m_errorCodeHasBeenSet = true;
  }

  return *this;
}

JsonValue FailedCustomVocabularyItem::Jsonize() const
{
  JsonValue payload;

  if(m_itemIdHasBeenSet)
  {
   payload.WithString("itemId", m_itemId);

  }

  if(m_errorMessageHasBeenSet)
  {
   payload.WithString("errorMessage", m_errorMessage);

  }

  if(m_errorCodeHasBeenSet)
  {
   payload.WithString("errorCode", ErrorCodeMapper::GetNameForErrorCode(m_errorCode));
  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
