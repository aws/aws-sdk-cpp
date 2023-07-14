/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds-data/model/StatementTimeoutException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace RDSDataService
{
namespace Model
{

StatementTimeoutException::StatementTimeoutException() : 
    m_dbConnectionId(0),
    m_dbConnectionIdHasBeenSet(false),
    m_messageHasBeenSet(false)
{
}

StatementTimeoutException::StatementTimeoutException(JsonView jsonValue) : 
    m_dbConnectionId(0),
    m_dbConnectionIdHasBeenSet(false),
    m_messageHasBeenSet(false)
{
  *this = jsonValue;
}

StatementTimeoutException& StatementTimeoutException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("dbConnectionId"))
  {
    m_dbConnectionId = jsonValue.GetInt64("dbConnectionId");

    m_dbConnectionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");

    m_messageHasBeenSet = true;
  }

  return *this;
}

JsonValue StatementTimeoutException::Jsonize() const
{
  JsonValue payload;

  if(m_dbConnectionIdHasBeenSet)
  {
   payload.WithInt64("dbConnectionId", m_dbConnectionId);

  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", m_message);

  }

  return payload;
}

} // namespace Model
} // namespace RDSDataService
} // namespace Aws
