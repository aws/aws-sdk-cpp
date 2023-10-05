/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/DeleteGlossaryTermRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DataZone::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteGlossaryTermRequest::DeleteGlossaryTermRequest() : 
    m_domainIdentifierHasBeenSet(false),
    m_identifierHasBeenSet(false)
{
}

Aws::String DeleteGlossaryTermRequest::SerializePayload() const
{
  return {};
}




