/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/DisassociateMemberRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Macie2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DisassociateMemberRequest::DisassociateMemberRequest() : 
    m_idHasBeenSet(false)
{
}

Aws::String DisassociateMemberRequest::SerializePayload() const
{
  return {};
}




