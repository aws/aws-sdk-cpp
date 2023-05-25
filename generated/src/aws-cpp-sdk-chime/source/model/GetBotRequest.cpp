/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/chime/model/GetBotRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Chime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetBotRequest::GetBotRequest() : 
    m_accountIdHasBeenSet(false),
    m_botIdHasBeenSet(false)
{
}

Aws::String GetBotRequest::SerializePayload() const
{
  return {};
}




