/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appsync/model/DisassociateMergedGraphqlApiRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AppSync::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DisassociateMergedGraphqlApiRequest::DisassociateMergedGraphqlApiRequest() : 
    m_sourceApiIdentifierHasBeenSet(false),
    m_associationIdHasBeenSet(false)
{
}

Aws::String DisassociateMergedGraphqlApiRequest::SerializePayload() const
{
  return {};
}




