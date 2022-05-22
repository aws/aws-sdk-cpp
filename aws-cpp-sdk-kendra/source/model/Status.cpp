/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/Status.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace kendra
{
namespace Model
{

Status::Status() : 
    m_documentIdHasBeenSet(false),
    m_documentStatus(DocumentStatus::NOT_SET),
    m_documentStatusHasBeenSet(false),
    m_failureCodeHasBeenSet(false),
    m_failureReasonHasBeenSet(false)
{
}

Status::Status(JsonView jsonValue) : 
    m_documentIdHasBeenSet(false),
    m_documentStatus(DocumentStatus::NOT_SET),
    m_documentStatusHasBeenSet(false),
    m_failureCodeHasBeenSet(false),
    m_failureReasonHasBeenSet(false)
{
  *this = jsonValue;
}

Status& Status::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DocumentId"))
  {
    m_documentId = jsonValue.GetString("DocumentId");

    m_documentIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DocumentStatus"))
  {
    m_documentStatus = DocumentStatusMapper::GetDocumentStatusForName(jsonValue.GetString("DocumentStatus"));

    m_documentStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FailureCode"))
  {
    m_failureCode = jsonValue.GetString("FailureCode");

    m_failureCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FailureReason"))
  {
    m_failureReason = jsonValue.GetString("FailureReason");

    m_failureReasonHasBeenSet = true;
  }

  return *this;
}

JsonValue Status::Jsonize() const
{
  JsonValue payload;

  if(m_documentIdHasBeenSet)
  {
   payload.WithString("DocumentId", m_documentId);

  }

  if(m_documentStatusHasBeenSet)
  {
   payload.WithString("DocumentStatus", DocumentStatusMapper::GetNameForDocumentStatus(m_documentStatus));
  }

  if(m_failureCodeHasBeenSet)
  {
   payload.WithString("FailureCode", m_failureCode);

  }

  if(m_failureReasonHasBeenSet)
  {
   payload.WithString("FailureReason", m_failureReason);

  }

  return payload;
}

} // namespace Model
} // namespace kendra
} // namespace Aws
