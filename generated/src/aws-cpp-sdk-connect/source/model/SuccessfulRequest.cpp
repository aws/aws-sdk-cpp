/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/SuccessfulRequest.h>
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

SuccessfulRequest::SuccessfulRequest() : 
    m_requestIdentifierHasBeenSet(false),
    m_contactIdHasBeenSet(false)
{
}

SuccessfulRequest::SuccessfulRequest(JsonView jsonValue) : 
    m_requestIdentifierHasBeenSet(false),
    m_contactIdHasBeenSet(false)
{
  *this = jsonValue;
}

SuccessfulRequest& SuccessfulRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RequestIdentifier"))
  {
    m_requestIdentifier = jsonValue.GetString("RequestIdentifier");

    m_requestIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ContactId"))
  {
    m_contactId = jsonValue.GetString("ContactId");

    m_contactIdHasBeenSet = true;
  }

  return *this;
}

JsonValue SuccessfulRequest::Jsonize() const
{
  JsonValue payload;

  if(m_requestIdentifierHasBeenSet)
  {
   payload.WithString("RequestIdentifier", m_requestIdentifier);

  }

  if(m_contactIdHasBeenSet)
  {
   payload.WithString("ContactId", m_contactId);

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
