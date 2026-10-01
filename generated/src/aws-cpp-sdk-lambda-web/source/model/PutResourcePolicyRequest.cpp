/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lambda-web/model/PutResourcePolicyRequest.h>

#include <utility>

using namespace Aws::LambdaWeb::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String PutResourcePolicyRequest::SerializePayload() const {
  JsonValue payload;

  if (m_policyHasBeenSet) {
    payload.WithString("Policy", m_policy);
  }

  if (m_revisionIdHasBeenSet) {
    payload.WithString("RevisionId", m_revisionId);
  }

  return payload.View().WriteReadable();
}
