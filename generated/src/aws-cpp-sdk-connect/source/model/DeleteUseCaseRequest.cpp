/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/DeleteUseCaseRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteUseCaseRequest::DeleteUseCaseRequest() : 
    m_instanceIdHasBeenSet(false),
    m_integrationAssociationIdHasBeenSet(false),
    m_useCaseIdHasBeenSet(false)
{
}

Aws::String DeleteUseCaseRequest::SerializePayload() const
{
  return {};
}




