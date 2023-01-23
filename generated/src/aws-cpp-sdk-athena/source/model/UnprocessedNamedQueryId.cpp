/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/athena/model/UnprocessedNamedQueryId.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Athena
{
namespace Model
{

UnprocessedNamedQueryId::UnprocessedNamedQueryId() : 
    m_namedQueryIdHasBeenSet(false),
    m_errorCodeHasBeenSet(false),
    m_errorMessageHasBeenSet(false)
{
}

UnprocessedNamedQueryId::UnprocessedNamedQueryId(JsonView jsonValue) : 
    m_namedQueryIdHasBeenSet(false),
    m_errorCodeHasBeenSet(false),
    m_errorMessageHasBeenSet(false)
{
  *this = jsonValue;
}

UnprocessedNamedQueryId& UnprocessedNamedQueryId::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("NamedQueryId"))
  {
    m_namedQueryId = jsonValue.GetString("NamedQueryId");

    m_namedQueryIdHasBeenSet = true;
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

JsonValue UnprocessedNamedQueryId::Jsonize() const
{
  JsonValue payload;

  if(m_namedQueryIdHasBeenSet)
  {
   payload.WithString("NamedQueryId", m_namedQueryId);

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
} // namespace Athena
} // namespace Aws
