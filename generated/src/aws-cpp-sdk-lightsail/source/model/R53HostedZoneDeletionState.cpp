/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/R53HostedZoneDeletionState.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Lightsail
{
namespace Model
{

R53HostedZoneDeletionState::R53HostedZoneDeletionState() : 
    m_code(R53HostedZoneDeletionStateCode::NOT_SET),
    m_codeHasBeenSet(false),
    m_messageHasBeenSet(false)
{
}

R53HostedZoneDeletionState::R53HostedZoneDeletionState(JsonView jsonValue) : 
    m_code(R53HostedZoneDeletionStateCode::NOT_SET),
    m_codeHasBeenSet(false),
    m_messageHasBeenSet(false)
{
  *this = jsonValue;
}

R53HostedZoneDeletionState& R53HostedZoneDeletionState::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("code"))
  {
    m_code = R53HostedZoneDeletionStateCodeMapper::GetR53HostedZoneDeletionStateCodeForName(jsonValue.GetString("code"));

    m_codeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");

    m_messageHasBeenSet = true;
  }

  return *this;
}

JsonValue R53HostedZoneDeletionState::Jsonize() const
{
  JsonValue payload;

  if(m_codeHasBeenSet)
  {
   payload.WithString("code", R53HostedZoneDeletionStateCodeMapper::GetNameForR53HostedZoneDeletionStateCode(m_code));
  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", m_message);

  }

  return payload;
}

} // namespace Model
} // namespace Lightsail
} // namespace Aws
