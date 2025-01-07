/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/RedshiftServerlessConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockAgent
{
namespace Model
{

RedshiftServerlessConfiguration::RedshiftServerlessConfiguration() : 
    m_authConfigurationHasBeenSet(false),
    m_workgroupArnHasBeenSet(false)
{
}

RedshiftServerlessConfiguration::RedshiftServerlessConfiguration(JsonView jsonValue)
  : RedshiftServerlessConfiguration()
{
  *this = jsonValue;
}

RedshiftServerlessConfiguration& RedshiftServerlessConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("authConfiguration"))
  {
    m_authConfiguration = jsonValue.GetObject("authConfiguration");

    m_authConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("workgroupArn"))
  {
    m_workgroupArn = jsonValue.GetString("workgroupArn");

    m_workgroupArnHasBeenSet = true;
  }

  return *this;
}

JsonValue RedshiftServerlessConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_authConfigurationHasBeenSet)
  {
   payload.WithObject("authConfiguration", m_authConfiguration.Jsonize());

  }

  if(m_workgroupArnHasBeenSet)
  {
   payload.WithString("workgroupArn", m_workgroupArn);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
