/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/InvocationLogsConfig.h>
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

InvocationLogsConfig::InvocationLogsConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

InvocationLogsConfig& InvocationLogsConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("usePromptResponse"))
  {
    m_usePromptResponse = jsonValue.GetBool("usePromptResponse");
    m_usePromptResponseHasBeenSet = true;
  }
  if(jsonValue.ValueExists("invocationLogSource"))
  {
    m_invocationLogSource = jsonValue.GetObject("invocationLogSource");
    m_invocationLogSourceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("requestMetadataFilters"))
  {
    m_requestMetadataFilters = jsonValue.GetObject("requestMetadataFilters");
    m_requestMetadataFiltersHasBeenSet = true;
  }
  return *this;
}

JsonValue InvocationLogsConfig::Jsonize() const
{
  JsonValue payload;

  if(m_usePromptResponseHasBeenSet)
  {
   payload.WithBool("usePromptResponse", m_usePromptResponse);

  }

  if(m_invocationLogSourceHasBeenSet)
  {
   payload.WithObject("invocationLogSource", m_invocationLogSource.Jsonize());

  }

  if(m_requestMetadataFiltersHasBeenSet)
  {
   payload.WithObject("requestMetadataFilters", m_requestMetadataFilters.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Bedrock
} // namespace Aws
