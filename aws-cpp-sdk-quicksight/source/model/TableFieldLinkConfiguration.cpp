/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/TableFieldLinkConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

TableFieldLinkConfiguration::TableFieldLinkConfiguration() : 
    m_target(URLTargetConfiguration::NOT_SET),
    m_targetHasBeenSet(false),
    m_contentHasBeenSet(false)
{
}

TableFieldLinkConfiguration::TableFieldLinkConfiguration(JsonView jsonValue) : 
    m_target(URLTargetConfiguration::NOT_SET),
    m_targetHasBeenSet(false),
    m_contentHasBeenSet(false)
{
  *this = jsonValue;
}

TableFieldLinkConfiguration& TableFieldLinkConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Target"))
  {
    m_target = URLTargetConfigurationMapper::GetURLTargetConfigurationForName(jsonValue.GetString("Target"));

    m_targetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Content"))
  {
    m_content = jsonValue.GetObject("Content");

    m_contentHasBeenSet = true;
  }

  return *this;
}

JsonValue TableFieldLinkConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_targetHasBeenSet)
  {
   payload.WithString("Target", URLTargetConfigurationMapper::GetNameForURLTargetConfiguration(m_target));
  }

  if(m_contentHasBeenSet)
  {
   payload.WithObject("Content", m_content.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
