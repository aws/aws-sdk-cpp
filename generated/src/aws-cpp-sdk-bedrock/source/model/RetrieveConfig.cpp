/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/RetrieveConfig.h>
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

RetrieveConfig::RetrieveConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

RetrieveConfig& RetrieveConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("knowledgeBaseId"))
  {
    m_knowledgeBaseId = jsonValue.GetString("knowledgeBaseId");
    m_knowledgeBaseIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("knowledgeBaseRetrievalConfiguration"))
  {
    m_knowledgeBaseRetrievalConfiguration = jsonValue.GetObject("knowledgeBaseRetrievalConfiguration");
    m_knowledgeBaseRetrievalConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue RetrieveConfig::Jsonize() const
{
  JsonValue payload;

  if(m_knowledgeBaseIdHasBeenSet)
  {
   payload.WithString("knowledgeBaseId", m_knowledgeBaseId);

  }

  if(m_knowledgeBaseRetrievalConfigurationHasBeenSet)
  {
   payload.WithObject("knowledgeBaseRetrievalConfiguration", m_knowledgeBaseRetrievalConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Bedrock
} // namespace Aws
