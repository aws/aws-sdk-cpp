/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/Connection.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DatabaseMigrationService
{
namespace Model
{

Connection::Connection() : 
    m_replicationInstanceArnHasBeenSet(false),
    m_endpointArnHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_lastFailureMessageHasBeenSet(false),
    m_endpointIdentifierHasBeenSet(false),
    m_replicationInstanceIdentifierHasBeenSet(false)
{
}

Connection::Connection(JsonView jsonValue) : 
    m_replicationInstanceArnHasBeenSet(false),
    m_endpointArnHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_lastFailureMessageHasBeenSet(false),
    m_endpointIdentifierHasBeenSet(false),
    m_replicationInstanceIdentifierHasBeenSet(false)
{
  *this = jsonValue;
}

Connection& Connection::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ReplicationInstanceArn"))
  {
    m_replicationInstanceArn = jsonValue.GetString("ReplicationInstanceArn");

    m_replicationInstanceArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndpointArn"))
  {
    m_endpointArn = jsonValue.GetString("EndpointArn");

    m_endpointArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetString("Status");

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastFailureMessage"))
  {
    m_lastFailureMessage = jsonValue.GetString("LastFailureMessage");

    m_lastFailureMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndpointIdentifier"))
  {
    m_endpointIdentifier = jsonValue.GetString("EndpointIdentifier");

    m_endpointIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReplicationInstanceIdentifier"))
  {
    m_replicationInstanceIdentifier = jsonValue.GetString("ReplicationInstanceIdentifier");

    m_replicationInstanceIdentifierHasBeenSet = true;
  }

  return *this;
}

JsonValue Connection::Jsonize() const
{
  JsonValue payload;

  if(m_replicationInstanceArnHasBeenSet)
  {
   payload.WithString("ReplicationInstanceArn", m_replicationInstanceArn);

  }

  if(m_endpointArnHasBeenSet)
  {
   payload.WithString("EndpointArn", m_endpointArn);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", m_status);

  }

  if(m_lastFailureMessageHasBeenSet)
  {
   payload.WithString("LastFailureMessage", m_lastFailureMessage);

  }

  if(m_endpointIdentifierHasBeenSet)
  {
   payload.WithString("EndpointIdentifier", m_endpointIdentifier);

  }

  if(m_replicationInstanceIdentifierHasBeenSet)
  {
   payload.WithString("ReplicationInstanceIdentifier", m_replicationInstanceIdentifier);

  }

  return payload;
}

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
