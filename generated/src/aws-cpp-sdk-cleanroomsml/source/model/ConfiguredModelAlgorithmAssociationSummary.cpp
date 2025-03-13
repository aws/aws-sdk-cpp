/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanroomsml/model/ConfiguredModelAlgorithmAssociationSummary.h>
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

ConfiguredModelAlgorithmAssociationSummary::ConfiguredModelAlgorithmAssociationSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

ConfiguredModelAlgorithmAssociationSummary& ConfiguredModelAlgorithmAssociationSummary::operator =(JsonView jsonValue)
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
  if(jsonValue.ValueExists("configuredModelAlgorithmAssociationArn"))
  {
    m_configuredModelAlgorithmAssociationArn = jsonValue.GetString("configuredModelAlgorithmAssociationArn");
    m_configuredModelAlgorithmAssociationArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("configuredModelAlgorithmArn"))
  {
    m_configuredModelAlgorithmArn = jsonValue.GetString("configuredModelAlgorithmArn");
    m_configuredModelAlgorithmArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
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
  return *this;
}

JsonValue ConfiguredModelAlgorithmAssociationSummary::Jsonize() const
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

  if(m_configuredModelAlgorithmAssociationArnHasBeenSet)
  {
   payload.WithString("configuredModelAlgorithmAssociationArn", m_configuredModelAlgorithmAssociationArn);

  }

  if(m_configuredModelAlgorithmArnHasBeenSet)
  {
   payload.WithString("configuredModelAlgorithmArn", m_configuredModelAlgorithmArn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_membershipIdentifierHasBeenSet)
  {
   payload.WithString("membershipIdentifier", m_membershipIdentifier);

  }

  if(m_collaborationIdentifierHasBeenSet)
  {
   payload.WithString("collaborationIdentifier", m_collaborationIdentifier);

  }

  return payload;
}

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
