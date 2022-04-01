/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ParticipantDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

ParticipantDetails::ParticipantDetails() : 
    m_displayNameHasBeenSet(false)
{
}

ParticipantDetails::ParticipantDetails(JsonView jsonValue) : 
    m_displayNameHasBeenSet(false)
{
  *this = jsonValue;
}

ParticipantDetails& ParticipantDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DisplayName"))
  {
    m_displayName = jsonValue.GetString("DisplayName");

    m_displayNameHasBeenSet = true;
  }

  return *this;
}

JsonValue ParticipantDetails::Jsonize() const
{
  JsonValue payload;

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("DisplayName", m_displayName);

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
