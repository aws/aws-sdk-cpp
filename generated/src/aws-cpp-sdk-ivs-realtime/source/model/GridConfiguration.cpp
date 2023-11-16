/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ivs-realtime/model/GridConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ivsrealtime
{
namespace Model
{

GridConfiguration::GridConfiguration() : 
    m_featuredParticipantAttributeHasBeenSet(false)
{
}

GridConfiguration::GridConfiguration(JsonView jsonValue) : 
    m_featuredParticipantAttributeHasBeenSet(false)
{
  *this = jsonValue;
}

GridConfiguration& GridConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("featuredParticipantAttribute"))
  {
    m_featuredParticipantAttribute = jsonValue.GetString("featuredParticipantAttribute");

    m_featuredParticipantAttributeHasBeenSet = true;
  }

  return *this;
}

JsonValue GridConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_featuredParticipantAttributeHasBeenSet)
  {
   payload.WithString("featuredParticipantAttribute", m_featuredParticipantAttribute);

  }

  return payload;
}

} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
