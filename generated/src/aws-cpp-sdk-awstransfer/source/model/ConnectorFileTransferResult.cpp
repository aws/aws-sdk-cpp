/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/ConnectorFileTransferResult.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Transfer
{
namespace Model
{

ConnectorFileTransferResult::ConnectorFileTransferResult(JsonView jsonValue)
{
  *this = jsonValue;
}

ConnectorFileTransferResult& ConnectorFileTransferResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FilePath"))
  {
    m_filePath = jsonValue.GetString("FilePath");
    m_filePathHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StatusCode"))
  {
    m_statusCode = TransferTableStatusMapper::GetTransferTableStatusForName(jsonValue.GetString("StatusCode"));
    m_statusCodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FailureCode"))
  {
    m_failureCode = jsonValue.GetString("FailureCode");
    m_failureCodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FailureMessage"))
  {
    m_failureMessage = jsonValue.GetString("FailureMessage");
    m_failureMessageHasBeenSet = true;
  }
  return *this;
}

JsonValue ConnectorFileTransferResult::Jsonize() const
{
  JsonValue payload;

  if(m_filePathHasBeenSet)
  {
   payload.WithString("FilePath", m_filePath);

  }

  if(m_statusCodeHasBeenSet)
  {
   payload.WithString("StatusCode", TransferTableStatusMapper::GetNameForTransferTableStatus(m_statusCode));
  }

  if(m_failureCodeHasBeenSet)
  {
   payload.WithString("FailureCode", m_failureCode);

  }

  if(m_failureMessageHasBeenSet)
  {
   payload.WithString("FailureMessage", m_failureMessage);

  }

  return payload;
}

} // namespace Model
} // namespace Transfer
} // namespace Aws
