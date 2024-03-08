/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/discovery/model/BatchDeleteAgentError.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ApplicationDiscoveryService
{
namespace Model
{

BatchDeleteAgentError::BatchDeleteAgentError() : 
    m_agentIdHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_errorCode(DeleteAgentErrorCode::NOT_SET),
    m_errorCodeHasBeenSet(false)
{
}

BatchDeleteAgentError::BatchDeleteAgentError(JsonView jsonValue) : 
    m_agentIdHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_errorCode(DeleteAgentErrorCode::NOT_SET),
    m_errorCodeHasBeenSet(false)
{
  *this = jsonValue;
}

BatchDeleteAgentError& BatchDeleteAgentError::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("agentId"))
  {
    m_agentId = jsonValue.GetString("agentId");

    m_agentIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("errorMessage"))
  {
    m_errorMessage = jsonValue.GetString("errorMessage");

    m_errorMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("errorCode"))
  {
    m_errorCode = DeleteAgentErrorCodeMapper::GetDeleteAgentErrorCodeForName(jsonValue.GetString("errorCode"));

    m_errorCodeHasBeenSet = true;
  }

  return *this;
}

JsonValue BatchDeleteAgentError::Jsonize() const
{
  JsonValue payload;

  if(m_agentIdHasBeenSet)
  {
   payload.WithString("agentId", m_agentId);

  }

  if(m_errorMessageHasBeenSet)
  {
   payload.WithString("errorMessage", m_errorMessage);

  }

  if(m_errorCodeHasBeenSet)
  {
   payload.WithString("errorCode", DeleteAgentErrorCodeMapper::GetNameForDeleteAgentErrorCode(m_errorCode));
  }

  return payload;
}

} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
