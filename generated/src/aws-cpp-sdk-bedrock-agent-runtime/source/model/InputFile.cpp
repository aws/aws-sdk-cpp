/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/InputFile.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockAgentRuntime
{
namespace Model
{

InputFile::InputFile(JsonView jsonValue)
{
  *this = jsonValue;
}

InputFile& InputFile::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("source"))
  {
    m_source = jsonValue.GetObject("source");
    m_sourceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("useCase"))
  {
    m_useCase = FileUseCaseMapper::GetFileUseCaseForName(jsonValue.GetString("useCase"));
    m_useCaseHasBeenSet = true;
  }
  return *this;
}

JsonValue InputFile::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_sourceHasBeenSet)
  {
   payload.WithObject("source", m_source.Jsonize());

  }

  if(m_useCaseHasBeenSet)
  {
   payload.WithString("useCase", FileUseCaseMapper::GetNameForFileUseCase(m_useCase));
  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
