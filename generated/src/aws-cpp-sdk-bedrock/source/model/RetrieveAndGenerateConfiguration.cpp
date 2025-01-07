﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/RetrieveAndGenerateConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Bedrock
{
namespace Model
{

RetrieveAndGenerateConfiguration::RetrieveAndGenerateConfiguration() : 
    m_type(RetrieveAndGenerateType::NOT_SET),
    m_typeHasBeenSet(false),
    m_knowledgeBaseConfigurationHasBeenSet(false),
    m_externalSourcesConfigurationHasBeenSet(false)
{
}

RetrieveAndGenerateConfiguration::RetrieveAndGenerateConfiguration(JsonView jsonValue)
  : RetrieveAndGenerateConfiguration()
{
  *this = jsonValue;
}

RetrieveAndGenerateConfiguration& RetrieveAndGenerateConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("type"))
  {
    m_type = RetrieveAndGenerateTypeMapper::GetRetrieveAndGenerateTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("knowledgeBaseConfiguration"))
  {
    m_knowledgeBaseConfiguration = jsonValue.GetObject("knowledgeBaseConfiguration");

    m_knowledgeBaseConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("externalSourcesConfiguration"))
  {
    m_externalSourcesConfiguration = jsonValue.GetObject("externalSourcesConfiguration");

    m_externalSourcesConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue RetrieveAndGenerateConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", RetrieveAndGenerateTypeMapper::GetNameForRetrieveAndGenerateType(m_type));
  }

  if(m_knowledgeBaseConfigurationHasBeenSet)
  {
   payload.WithObject("knowledgeBaseConfiguration", m_knowledgeBaseConfiguration.Jsonize());

  }

  if(m_externalSourcesConfigurationHasBeenSet)
  {
   payload.WithObject("externalSourcesConfiguration", m_externalSourcesConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Bedrock
} // namespace Aws
