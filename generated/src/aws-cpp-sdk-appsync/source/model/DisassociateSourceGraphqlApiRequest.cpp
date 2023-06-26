/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appsync/model/DisassociateSourceGraphqlApiRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AppSync::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DisassociateSourceGraphqlApiRequest::DisassociateSourceGraphqlApiRequest() : 
    m_mergedApiIdentifierHasBeenSet(false),
    m_associationIdHasBeenSet(false)
{
}

Aws::String DisassociateSourceGraphqlApiRequest::SerializePayload() const
{
  return {};
}




