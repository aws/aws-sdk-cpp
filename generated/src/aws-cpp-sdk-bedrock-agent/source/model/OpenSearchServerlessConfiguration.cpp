﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/OpenSearchServerlessConfiguration.h>
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

OpenSearchServerlessConfiguration::OpenSearchServerlessConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

OpenSearchServerlessConfiguration& OpenSearchServerlessConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("collectionArn"))
  {
    m_collectionArn = jsonValue.GetString("collectionArn");
    m_collectionArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("fieldMapping"))
  {
    m_fieldMapping = jsonValue.GetObject("fieldMapping");
    m_fieldMappingHasBeenSet = true;
  }
  if(jsonValue.ValueExists("vectorIndexName"))
  {
    m_vectorIndexName = jsonValue.GetString("vectorIndexName");
    m_vectorIndexNameHasBeenSet = true;
  }
  return *this;
}

JsonValue OpenSearchServerlessConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_collectionArnHasBeenSet)
  {
   payload.WithString("collectionArn", m_collectionArn);

  }

  if(m_fieldMappingHasBeenSet)
  {
   payload.WithObject("fieldMapping", m_fieldMapping.Jsonize());

  }

  if(m_vectorIndexNameHasBeenSet)
  {
   payload.WithString("vectorIndexName", m_vectorIndexName);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
