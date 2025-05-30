﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/PineconeConfiguration.h>
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

PineconeConfiguration::PineconeConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

PineconeConfiguration& PineconeConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("connectionString"))
  {
    m_connectionString = jsonValue.GetString("connectionString");
    m_connectionStringHasBeenSet = true;
  }
  if(jsonValue.ValueExists("credentialsSecretArn"))
  {
    m_credentialsSecretArn = jsonValue.GetString("credentialsSecretArn");
    m_credentialsSecretArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("fieldMapping"))
  {
    m_fieldMapping = jsonValue.GetObject("fieldMapping");
    m_fieldMappingHasBeenSet = true;
  }
  if(jsonValue.ValueExists("namespace"))
  {
    m_namespace = jsonValue.GetString("namespace");
    m_namespaceHasBeenSet = true;
  }
  return *this;
}

JsonValue PineconeConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_connectionStringHasBeenSet)
  {
   payload.WithString("connectionString", m_connectionString);

  }

  if(m_credentialsSecretArnHasBeenSet)
  {
   payload.WithString("credentialsSecretArn", m_credentialsSecretArn);

  }

  if(m_fieldMappingHasBeenSet)
  {
   payload.WithObject("fieldMapping", m_fieldMapping.Jsonize());

  }

  if(m_namespaceHasBeenSet)
  {
   payload.WithString("namespace", m_namespace);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
