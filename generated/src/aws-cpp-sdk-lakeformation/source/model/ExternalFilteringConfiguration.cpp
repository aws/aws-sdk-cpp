/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lakeformation/model/ExternalFilteringConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LakeFormation
{
namespace Model
{

ExternalFilteringConfiguration::ExternalFilteringConfiguration() : 
    m_status(EnableStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_authorizedTargetsHasBeenSet(false)
{
}

ExternalFilteringConfiguration::ExternalFilteringConfiguration(JsonView jsonValue) : 
    m_status(EnableStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_authorizedTargetsHasBeenSet(false)
{
  *this = jsonValue;
}

ExternalFilteringConfiguration& ExternalFilteringConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Status"))
  {
    m_status = EnableStatusMapper::GetEnableStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AuthorizedTargets"))
  {
    Aws::Utils::Array<JsonView> authorizedTargetsJsonList = jsonValue.GetArray("AuthorizedTargets");
    for(unsigned authorizedTargetsIndex = 0; authorizedTargetsIndex < authorizedTargetsJsonList.GetLength(); ++authorizedTargetsIndex)
    {
      m_authorizedTargets.push_back(authorizedTargetsJsonList[authorizedTargetsIndex].AsString());
    }
    m_authorizedTargetsHasBeenSet = true;
  }

  return *this;
}

JsonValue ExternalFilteringConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", EnableStatusMapper::GetNameForEnableStatus(m_status));
  }

  if(m_authorizedTargetsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> authorizedTargetsJsonList(m_authorizedTargets.size());
   for(unsigned authorizedTargetsIndex = 0; authorizedTargetsIndex < authorizedTargetsJsonList.GetLength(); ++authorizedTargetsIndex)
   {
     authorizedTargetsJsonList[authorizedTargetsIndex].AsString(m_authorizedTargets[authorizedTargetsIndex]);
   }
   payload.WithArray("AuthorizedTargets", std::move(authorizedTargetsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
