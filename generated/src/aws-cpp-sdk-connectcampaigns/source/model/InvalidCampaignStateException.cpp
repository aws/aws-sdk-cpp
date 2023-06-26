/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcampaigns/model/InvalidCampaignStateException.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConnectCampaigns
{
namespace Model
{

InvalidCampaignStateException::InvalidCampaignStateException() : 
    m_messageHasBeenSet(false),
    m_state(CampaignState::NOT_SET),
    m_stateHasBeenSet(false),
    m_xAmzErrorTypeHasBeenSet(false)
{
}

InvalidCampaignStateException::InvalidCampaignStateException(JsonView jsonValue) : 
    m_messageHasBeenSet(false),
    m_state(CampaignState::NOT_SET),
    m_stateHasBeenSet(false),
    m_xAmzErrorTypeHasBeenSet(false)
{
  *this = jsonValue;
}

InvalidCampaignStateException& InvalidCampaignStateException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("state"))
  {
    m_state = CampaignStateMapper::GetCampaignStateForName(jsonValue.GetString("state"));

    m_stateHasBeenSet = true;
  }

  return *this;
}

JsonValue InvalidCampaignStateException::Jsonize() const
{
  JsonValue payload;

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", m_message);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("state", CampaignStateMapper::GetNameForCampaignState(m_state));
  }

  return payload;
}

} // namespace Model
} // namespace ConnectCampaigns
} // namespace Aws
