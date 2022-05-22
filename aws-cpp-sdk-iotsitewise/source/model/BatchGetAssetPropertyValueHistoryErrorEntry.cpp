/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/BatchGetAssetPropertyValueHistoryErrorEntry.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTSiteWise
{
namespace Model
{

BatchGetAssetPropertyValueHistoryErrorEntry::BatchGetAssetPropertyValueHistoryErrorEntry() : 
    m_errorCode(BatchGetAssetPropertyValueHistoryErrorCode::NOT_SET),
    m_errorCodeHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_entryIdHasBeenSet(false)
{
}

BatchGetAssetPropertyValueHistoryErrorEntry::BatchGetAssetPropertyValueHistoryErrorEntry(JsonView jsonValue) : 
    m_errorCode(BatchGetAssetPropertyValueHistoryErrorCode::NOT_SET),
    m_errorCodeHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_entryIdHasBeenSet(false)
{
  *this = jsonValue;
}

BatchGetAssetPropertyValueHistoryErrorEntry& BatchGetAssetPropertyValueHistoryErrorEntry::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("errorCode"))
  {
    m_errorCode = BatchGetAssetPropertyValueHistoryErrorCodeMapper::GetBatchGetAssetPropertyValueHistoryErrorCodeForName(jsonValue.GetString("errorCode"));

    m_errorCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("errorMessage"))
  {
    m_errorMessage = jsonValue.GetString("errorMessage");

    m_errorMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("entryId"))
  {
    m_entryId = jsonValue.GetString("entryId");

    m_entryIdHasBeenSet = true;
  }

  return *this;
}

JsonValue BatchGetAssetPropertyValueHistoryErrorEntry::Jsonize() const
{
  JsonValue payload;

  if(m_errorCodeHasBeenSet)
  {
   payload.WithString("errorCode", BatchGetAssetPropertyValueHistoryErrorCodeMapper::GetNameForBatchGetAssetPropertyValueHistoryErrorCode(m_errorCode));
  }

  if(m_errorMessageHasBeenSet)
  {
   payload.WithString("errorMessage", m_errorMessage);

  }

  if(m_entryIdHasBeenSet)
  {
   payload.WithString("entryId", m_entryId);

  }

  return payload;
}

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
