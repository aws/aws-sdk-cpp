﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcampaigns/model/FailedRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConnectCampaigns
{
namespace Model
{

FailedRequest::FailedRequest(JsonView jsonValue)
{
  *this = jsonValue;
}

FailedRequest& FailedRequest::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("clientToken"))
  {
    m_clientToken = jsonValue.GetString("clientToken");
    m_clientTokenHasBeenSet = true;
  }
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("failureCode"))
  {
    m_failureCode = FailureCodeMapper::GetFailureCodeForName(jsonValue.GetString("failureCode"));
    m_failureCodeHasBeenSet = true;
  }
  return *this;
}

JsonValue FailedRequest::Jsonize() const
{
  JsonValue payload;

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_failureCodeHasBeenSet)
  {
   payload.WithString("failureCode", FailureCodeMapper::GetNameForFailureCode(m_failureCode));
  }

  return payload;
}

} // namespace Model
} // namespace ConnectCampaigns
} // namespace Aws
