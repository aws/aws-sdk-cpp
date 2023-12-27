/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/FailedRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

FailedRequest::FailedRequest() : 
    m_requestIdentifierHasBeenSet(false),
    m_failureReasonCode(FailureReasonCode::NOT_SET),
    m_failureReasonCodeHasBeenSet(false),
    m_failureReasonMessageHasBeenSet(false)
{
}

FailedRequest::FailedRequest(JsonView jsonValue) : 
    m_requestIdentifierHasBeenSet(false),
    m_failureReasonCode(FailureReasonCode::NOT_SET),
    m_failureReasonCodeHasBeenSet(false),
    m_failureReasonMessageHasBeenSet(false)
{
  *this = jsonValue;
}

FailedRequest& FailedRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RequestIdentifier"))
  {
    m_requestIdentifier = jsonValue.GetString("RequestIdentifier");

    m_requestIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FailureReasonCode"))
  {
    m_failureReasonCode = FailureReasonCodeMapper::GetFailureReasonCodeForName(jsonValue.GetString("FailureReasonCode"));

    m_failureReasonCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FailureReasonMessage"))
  {
    m_failureReasonMessage = jsonValue.GetString("FailureReasonMessage");

    m_failureReasonMessageHasBeenSet = true;
  }

  return *this;
}

JsonValue FailedRequest::Jsonize() const
{
  JsonValue payload;

  if(m_requestIdentifierHasBeenSet)
  {
   payload.WithString("RequestIdentifier", m_requestIdentifier);

  }

  if(m_failureReasonCodeHasBeenSet)
  {
   payload.WithString("FailureReasonCode", FailureReasonCodeMapper::GetNameForFailureReasonCode(m_failureReasonCode));
  }

  if(m_failureReasonMessageHasBeenSet)
  {
   payload.WithString("FailureReasonMessage", m_failureReasonMessage);

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
