/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace/model/GetKxChangesetRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::finspace::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetKxChangesetRequest::GetKxChangesetRequest() : 
    m_environmentIdHasBeenSet(false),
    m_databaseNameHasBeenSet(false),
    m_changesetIdHasBeenSet(false)
{
}

Aws::String GetKxChangesetRequest::SerializePayload() const
{
  return {};
}




