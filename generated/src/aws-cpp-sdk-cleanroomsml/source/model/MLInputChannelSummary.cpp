/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanroomsml/model/MLInputChannelSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CleanRoomsML
{
namespace Model
{

MLInputChannelSummary::MLInputChannelSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

MLInputChannelSummary& MLInputChannelSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("createTime"))
  {
    m_createTime = jsonValue.GetString("createTime");
    m_createTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("updateTime"))
  {
    m_updateTime = jsonValue.GetString("updateTime");
    m_updateTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("membershipIdentifier"))
  {
    m_membershipIdentifier = jsonValue.GetString("membershipIdentifier");
    m_membershipIdentifierHasBeenSet = true;
  }
  if(jsonValue.ValueExists("collaborationIdentifier"))
  {
    m_collaborationIdentifier = jsonValue.GetString("collaborationIdentifier");
    m_collaborationIdentifierHasBeenSet = true;
  }
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("configuredModelAlgorithmAssociations"))
  {
    Aws::Utils::Array<JsonView> configuredModelAlgorithmAssociationsJsonList = jsonValue.GetArray("configuredModelAlgorithmAssociations");
    for(unsigned configuredModelAlgorithmAssociationsIndex = 0; configuredModelAlgorithmAssociationsIndex < configuredModelAlgorithmAssociationsJsonList.GetLength(); ++configuredModelAlgorithmAssociationsIndex)
    {
      m_configuredModelAlgorithmAssociations.push_back(configuredModelAlgorithmAssociationsJsonList[configuredModelAlgorithmAssociationsIndex].AsString());
    }
    m_configuredModelAlgorithmAssociationsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("protectedQueryIdentifier"))
  {
    m_protectedQueryIdentifier = jsonValue.GetString("protectedQueryIdentifier");
    m_protectedQueryIdentifierHasBeenSet = true;
  }
  if(jsonValue.ValueExists("mlInputChannelArn"))
  {
    m_mlInputChannelArn = jsonValue.GetString("mlInputChannelArn");
    m_mlInputChannelArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = MLInputChannelStatusMapper::GetMLInputChannelStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  return *this;
}

JsonValue MLInputChannelSummary::Jsonize() const
{
  JsonValue payload;

  if(m_createTimeHasBeenSet)
  {
   payload.WithString("createTime", m_createTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_updateTimeHasBeenSet)
  {
   payload.WithString("updateTime", m_updateTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_membershipIdentifierHasBeenSet)
  {
   payload.WithString("membershipIdentifier", m_membershipIdentifier);

  }

  if(m_collaborationIdentifierHasBeenSet)
  {
   payload.WithString("collaborationIdentifier", m_collaborationIdentifier);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_configuredModelAlgorithmAssociationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> configuredModelAlgorithmAssociationsJsonList(m_configuredModelAlgorithmAssociations.size());
   for(unsigned configuredModelAlgorithmAssociationsIndex = 0; configuredModelAlgorithmAssociationsIndex < configuredModelAlgorithmAssociationsJsonList.GetLength(); ++configuredModelAlgorithmAssociationsIndex)
   {
     configuredModelAlgorithmAssociationsJsonList[configuredModelAlgorithmAssociationsIndex].AsString(m_configuredModelAlgorithmAssociations[configuredModelAlgorithmAssociationsIndex]);
   }
   payload.WithArray("configuredModelAlgorithmAssociations", std::move(configuredModelAlgorithmAssociationsJsonList));

  }

  if(m_protectedQueryIdentifierHasBeenSet)
  {
   payload.WithString("protectedQueryIdentifier", m_protectedQueryIdentifier);

  }

  if(m_mlInputChannelArnHasBeenSet)
  {
   payload.WithString("mlInputChannelArn", m_mlInputChannelArn);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", MLInputChannelStatusMapper::GetNameForMLInputChannelStatus(m_status));
  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  return payload;
}

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
