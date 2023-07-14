/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/BulkEmailEntryResult.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SESV2
{
namespace Model
{

BulkEmailEntryResult::BulkEmailEntryResult() : 
    m_status(BulkEmailStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_errorHasBeenSet(false),
    m_messageIdHasBeenSet(false)
{
}

BulkEmailEntryResult::BulkEmailEntryResult(JsonView jsonValue) : 
    m_status(BulkEmailStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_errorHasBeenSet(false),
    m_messageIdHasBeenSet(false)
{
  *this = jsonValue;
}

BulkEmailEntryResult& BulkEmailEntryResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Status"))
  {
    m_status = BulkEmailStatusMapper::GetBulkEmailStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Error"))
  {
    m_error = jsonValue.GetString("Error");

    m_errorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MessageId"))
  {
    m_messageId = jsonValue.GetString("MessageId");

    m_messageIdHasBeenSet = true;
  }

  return *this;
}

JsonValue BulkEmailEntryResult::Jsonize() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", BulkEmailStatusMapper::GetNameForBulkEmailStatus(m_status));
  }

  if(m_errorHasBeenSet)
  {
   payload.WithString("Error", m_error);

  }

  if(m_messageIdHasBeenSet)
  {
   payload.WithString("MessageId", m_messageId);

  }

  return payload;
}

} // namespace Model
} // namespace SESV2
} // namespace Aws
