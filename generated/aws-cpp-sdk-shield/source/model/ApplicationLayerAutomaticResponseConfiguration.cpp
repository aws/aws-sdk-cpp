/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/shield/model/ApplicationLayerAutomaticResponseConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Shield
{
namespace Model
{

ApplicationLayerAutomaticResponseConfiguration::ApplicationLayerAutomaticResponseConfiguration() : 
    m_status(ApplicationLayerAutomaticResponseStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_actionHasBeenSet(false)
{
}

ApplicationLayerAutomaticResponseConfiguration::ApplicationLayerAutomaticResponseConfiguration(JsonView jsonValue) : 
    m_status(ApplicationLayerAutomaticResponseStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_actionHasBeenSet(false)
{
  *this = jsonValue;
}

ApplicationLayerAutomaticResponseConfiguration& ApplicationLayerAutomaticResponseConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Status"))
  {
    m_status = ApplicationLayerAutomaticResponseStatusMapper::GetApplicationLayerAutomaticResponseStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Action"))
  {
    m_action = jsonValue.GetObject("Action");

    m_actionHasBeenSet = true;
  }

  return *this;
}

JsonValue ApplicationLayerAutomaticResponseConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", ApplicationLayerAutomaticResponseStatusMapper::GetNameForApplicationLayerAutomaticResponseStatus(m_status));
  }

  if(m_actionHasBeenSet)
  {
   payload.WithObject("Action", m_action.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Shield
} // namespace Aws
