/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devops-guru/model/OpsCenterIntegrationConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DevOpsGuru
{
namespace Model
{

OpsCenterIntegrationConfig::OpsCenterIntegrationConfig() : 
    m_optInStatus(OptInStatus::NOT_SET),
    m_optInStatusHasBeenSet(false)
{
}

OpsCenterIntegrationConfig::OpsCenterIntegrationConfig(JsonView jsonValue) : 
    m_optInStatus(OptInStatus::NOT_SET),
    m_optInStatusHasBeenSet(false)
{
  *this = jsonValue;
}

OpsCenterIntegrationConfig& OpsCenterIntegrationConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("OptInStatus"))
  {
    m_optInStatus = OptInStatusMapper::GetOptInStatusForName(jsonValue.GetString("OptInStatus"));

    m_optInStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue OpsCenterIntegrationConfig::Jsonize() const
{
  JsonValue payload;

  if(m_optInStatusHasBeenSet)
  {
   payload.WithString("OptInStatus", OptInStatusMapper::GetNameForOptInStatus(m_optInStatus));
  }

  return payload;
}

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
