/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/support-app/model/SlackWorkspaceConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SupportApp
{
namespace Model
{

SlackWorkspaceConfiguration::SlackWorkspaceConfiguration() : 
    m_teamIdHasBeenSet(false)
{
}

SlackWorkspaceConfiguration::SlackWorkspaceConfiguration(JsonView jsonValue) : 
    m_teamIdHasBeenSet(false)
{
  *this = jsonValue;
}

SlackWorkspaceConfiguration& SlackWorkspaceConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("teamId"))
  {
    m_teamId = jsonValue.GetString("teamId");

    m_teamIdHasBeenSet = true;
  }

  return *this;
}

JsonValue SlackWorkspaceConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_teamIdHasBeenSet)
  {
   payload.WithString("teamId", m_teamId);

  }

  return payload;
}

} // namespace Model
} // namespace SupportApp
} // namespace Aws
