/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift-data/model/ExecuteStatementException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace RedshiftDataAPIService
{
namespace Model
{

ExecuteStatementException::ExecuteStatementException() : 
    m_messageHasBeenSet(false),
    m_statementIdHasBeenSet(false)
{
}

ExecuteStatementException::ExecuteStatementException(JsonView jsonValue) : 
    m_messageHasBeenSet(false),
    m_statementIdHasBeenSet(false)
{
  *this = jsonValue;
}

ExecuteStatementException& ExecuteStatementException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StatementId"))
  {
    m_statementId = jsonValue.GetString("StatementId");

    m_statementIdHasBeenSet = true;
  }

  return *this;
}

JsonValue ExecuteStatementException::Jsonize() const
{
  JsonValue payload;

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  if(m_statementIdHasBeenSet)
  {
   payload.WithString("StatementId", m_statementId);

  }

  return payload;
}

} // namespace Model
} // namespace RedshiftDataAPIService
} // namespace Aws
