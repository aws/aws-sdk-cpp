/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/UpdateRoleAliasRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateRoleAliasRequest::UpdateRoleAliasRequest() : 
    m_roleAliasHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_credentialDurationSeconds(0),
    m_credentialDurationSecondsHasBeenSet(false)
{
}

Aws::String UpdateRoleAliasRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  if(m_credentialDurationSecondsHasBeenSet)
  {
   payload.WithInteger("credentialDurationSeconds", m_credentialDurationSeconds);

  }

  return payload.View().WriteReadable();
}




