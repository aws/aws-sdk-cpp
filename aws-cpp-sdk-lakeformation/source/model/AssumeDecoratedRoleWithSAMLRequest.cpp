/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lakeformation/model/AssumeDecoratedRoleWithSAMLRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LakeFormation::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AssumeDecoratedRoleWithSAMLRequest::AssumeDecoratedRoleWithSAMLRequest() : 
    m_sAMLAssertionHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_principalArnHasBeenSet(false),
    m_durationSeconds(0),
    m_durationSecondsHasBeenSet(false)
{
}

Aws::String AssumeDecoratedRoleWithSAMLRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_sAMLAssertionHasBeenSet)
  {
   payload.WithString("SAMLAssertion", m_sAMLAssertion);

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("RoleArn", m_roleArn);

  }

  if(m_principalArnHasBeenSet)
  {
   payload.WithString("PrincipalArn", m_principalArn);

  }

  if(m_durationSecondsHasBeenSet)
  {
   payload.WithInteger("DurationSeconds", m_durationSeconds);

  }

  return payload.View().WriteReadable();
}




