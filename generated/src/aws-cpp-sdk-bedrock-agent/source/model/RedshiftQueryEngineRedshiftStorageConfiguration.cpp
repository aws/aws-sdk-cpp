/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/RedshiftQueryEngineRedshiftStorageConfiguration.h>
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

RedshiftQueryEngineRedshiftStorageConfiguration::RedshiftQueryEngineRedshiftStorageConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

RedshiftQueryEngineRedshiftStorageConfiguration& RedshiftQueryEngineRedshiftStorageConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("databaseName"))
  {
    m_databaseName = jsonValue.GetString("databaseName");
    m_databaseNameHasBeenSet = true;
  }
  return *this;
}

JsonValue RedshiftQueryEngineRedshiftStorageConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_databaseNameHasBeenSet)
  {
   payload.WithString("databaseName", m_databaseName);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
