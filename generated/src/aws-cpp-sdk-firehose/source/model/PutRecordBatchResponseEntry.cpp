/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/firehose/model/PutRecordBatchResponseEntry.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Firehose
{
namespace Model
{

PutRecordBatchResponseEntry::PutRecordBatchResponseEntry() : 
    m_recordIdHasBeenSet(false),
    m_errorCodeHasBeenSet(false),
    m_errorMessageHasBeenSet(false)
{
}

PutRecordBatchResponseEntry::PutRecordBatchResponseEntry(JsonView jsonValue) : 
    m_recordIdHasBeenSet(false),
    m_errorCodeHasBeenSet(false),
    m_errorMessageHasBeenSet(false)
{
  *this = jsonValue;
}

PutRecordBatchResponseEntry& PutRecordBatchResponseEntry::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RecordId"))
  {
    m_recordId = jsonValue.GetString("RecordId");

    m_recordIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ErrorCode"))
  {
    m_errorCode = jsonValue.GetString("ErrorCode");

    m_errorCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ErrorMessage"))
  {
    m_errorMessage = jsonValue.GetString("ErrorMessage");

    m_errorMessageHasBeenSet = true;
  }

  return *this;
}

JsonValue PutRecordBatchResponseEntry::Jsonize() const
{
  JsonValue payload;

  if(m_recordIdHasBeenSet)
  {
   payload.WithString("RecordId", m_recordId);

  }

  if(m_errorCodeHasBeenSet)
  {
   payload.WithString("ErrorCode", m_errorCode);

  }

  if(m_errorMessageHasBeenSet)
  {
   payload.WithString("ErrorMessage", m_errorMessage);

  }

  return payload;
}

} // namespace Model
} // namespace Firehose
} // namespace Aws
