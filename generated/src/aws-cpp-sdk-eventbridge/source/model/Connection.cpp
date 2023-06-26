/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eventbridge/model/Connection.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EventBridge
{
namespace Model
{

Connection::Connection() : 
    m_connectionArnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_connectionState(ConnectionState::NOT_SET),
    m_connectionStateHasBeenSet(false),
    m_stateReasonHasBeenSet(false),
    m_authorizationType(ConnectionAuthorizationType::NOT_SET),
    m_authorizationTypeHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_lastAuthorizedTimeHasBeenSet(false)
{
}

Connection::Connection(JsonView jsonValue) : 
    m_connectionArnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_connectionState(ConnectionState::NOT_SET),
    m_connectionStateHasBeenSet(false),
    m_stateReasonHasBeenSet(false),
    m_authorizationType(ConnectionAuthorizationType::NOT_SET),
    m_authorizationTypeHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_lastAuthorizedTimeHasBeenSet(false)
{
  *this = jsonValue;
}

Connection& Connection::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ConnectionArn"))
  {
    m_connectionArn = jsonValue.GetString("ConnectionArn");

    m_connectionArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConnectionState"))
  {
    m_connectionState = ConnectionStateMapper::GetConnectionStateForName(jsonValue.GetString("ConnectionState"));

    m_connectionStateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StateReason"))
  {
    m_stateReason = jsonValue.GetString("StateReason");

    m_stateReasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AuthorizationType"))
  {
    m_authorizationType = ConnectionAuthorizationTypeMapper::GetConnectionAuthorizationTypeForName(jsonValue.GetString("AuthorizationType"));

    m_authorizationTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");

    m_lastModifiedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastAuthorizedTime"))
  {
    m_lastAuthorizedTime = jsonValue.GetDouble("LastAuthorizedTime");

    m_lastAuthorizedTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue Connection::Jsonize() const
{
  JsonValue payload;

  if(m_connectionArnHasBeenSet)
  {
   payload.WithString("ConnectionArn", m_connectionArn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_connectionStateHasBeenSet)
  {
   payload.WithString("ConnectionState", ConnectionStateMapper::GetNameForConnectionState(m_connectionState));
  }

  if(m_stateReasonHasBeenSet)
  {
   payload.WithString("StateReason", m_stateReason);

  }

  if(m_authorizationTypeHasBeenSet)
  {
   payload.WithString("AuthorizationType", ConnectionAuthorizationTypeMapper::GetNameForConnectionAuthorizationType(m_authorizationType));
  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_lastModifiedTimeHasBeenSet)
  {
   payload.WithDouble("LastModifiedTime", m_lastModifiedTime.SecondsWithMSPrecision());
  }

  if(m_lastAuthorizedTimeHasBeenSet)
  {
   payload.WithDouble("LastAuthorizedTime", m_lastAuthorizedTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace EventBridge
} // namespace Aws
