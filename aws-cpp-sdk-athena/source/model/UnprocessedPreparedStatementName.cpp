/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/athena/model/UnprocessedPreparedStatementName.h>
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

UnprocessedPreparedStatementName::UnprocessedPreparedStatementName() : 
    m_statementNameHasBeenSet(false),
    m_errorCodeHasBeenSet(false),
    m_errorMessageHasBeenSet(false)
{
}

UnprocessedPreparedStatementName::UnprocessedPreparedStatementName(JsonView jsonValue) : 
    m_statementNameHasBeenSet(false),
    m_errorCodeHasBeenSet(false),
    m_errorMessageHasBeenSet(false)
{
  *this = jsonValue;
}

UnprocessedPreparedStatementName& UnprocessedPreparedStatementName::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StatementName"))
  {
    m_statementName = jsonValue.GetString("StatementName");

    m_statementNameHasBeenSet = true;
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

JsonValue UnprocessedPreparedStatementName::Jsonize() const
{
  JsonValue payload;

  if(m_statementNameHasBeenSet)
  {
   payload.WithString("StatementName", m_statementName);

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
