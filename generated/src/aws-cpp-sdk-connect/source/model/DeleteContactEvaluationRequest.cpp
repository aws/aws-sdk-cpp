/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/DeleteContactEvaluationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteContactEvaluationRequest::DeleteContactEvaluationRequest() : 
    m_instanceIdHasBeenSet(false),
    m_evaluationIdHasBeenSet(false)
{
}

Aws::String DeleteContactEvaluationRequest::SerializePayload() const
{
  return {};
}




