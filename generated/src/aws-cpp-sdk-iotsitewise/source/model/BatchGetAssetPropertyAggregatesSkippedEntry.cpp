﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/BatchGetAssetPropertyAggregatesSkippedEntry.h>
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

BatchGetAssetPropertyAggregatesSkippedEntry::BatchGetAssetPropertyAggregatesSkippedEntry(JsonView jsonValue)
{
  *this = jsonValue;
}

BatchGetAssetPropertyAggregatesSkippedEntry& BatchGetAssetPropertyAggregatesSkippedEntry::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("entryId"))
  {
    m_entryId = jsonValue.GetString("entryId");
    m_entryIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("completionStatus"))
  {
    m_completionStatus = BatchEntryCompletionStatusMapper::GetBatchEntryCompletionStatusForName(jsonValue.GetString("completionStatus"));
    m_completionStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("errorInfo"))
  {
    m_errorInfo = jsonValue.GetObject("errorInfo");
    m_errorInfoHasBeenSet = true;
  }
  return *this;
}

JsonValue BatchGetAssetPropertyAggregatesSkippedEntry::Jsonize() const
{
  JsonValue payload;

  if(m_entryIdHasBeenSet)
  {
   payload.WithString("entryId", m_entryId);

  }

  if(m_completionStatusHasBeenSet)
  {
   payload.WithString("completionStatus", BatchEntryCompletionStatusMapper::GetNameForBatchEntryCompletionStatus(m_completionStatus));
  }

  if(m_errorInfoHasBeenSet)
  {
   payload.WithObject("errorInfo", m_errorInfo.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
