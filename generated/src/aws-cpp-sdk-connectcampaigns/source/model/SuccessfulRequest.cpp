/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcampaigns/model/SuccessfulRequest.h>
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

SuccessfulRequest::SuccessfulRequest() : 
    m_clientTokenHasBeenSet(false),
    m_idHasBeenSet(false)
{
}

SuccessfulRequest::SuccessfulRequest(JsonView jsonValue) : 
    m_clientTokenHasBeenSet(false),
    m_idHasBeenSet(false)
{
  *this = jsonValue;
}

SuccessfulRequest& SuccessfulRequest::operator =(JsonView jsonValue)
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

  return *this;
}

JsonValue SuccessfulRequest::Jsonize() const
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

  return payload;
}

} // namespace Model
} // namespace ConnectCampaigns
} // namespace Aws
