/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/RenameField.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

RenameField::RenameField() : 
    m_nameHasBeenSet(false),
    m_inputsHasBeenSet(false),
    m_sourcePathHasBeenSet(false),
    m_targetPathHasBeenSet(false)
{
}

RenameField::RenameField(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_inputsHasBeenSet(false),
    m_sourcePathHasBeenSet(false),
    m_targetPathHasBeenSet(false)
{
  *this = jsonValue;
}

RenameField& RenameField::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Inputs"))
  {
    Aws::Utils::Array<JsonView> inputsJsonList = jsonValue.GetArray("Inputs");
    for(unsigned inputsIndex = 0; inputsIndex < inputsJsonList.GetLength(); ++inputsIndex)
    {
      m_inputs.push_back(inputsJsonList[inputsIndex].AsString());
    }
    m_inputsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourcePath"))
  {
    Aws::Utils::Array<JsonView> sourcePathJsonList = jsonValue.GetArray("SourcePath");
    for(unsigned sourcePathIndex = 0; sourcePathIndex < sourcePathJsonList.GetLength(); ++sourcePathIndex)
    {
      m_sourcePath.push_back(sourcePathJsonList[sourcePathIndex].AsString());
    }
    m_sourcePathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TargetPath"))
  {
    Aws::Utils::Array<JsonView> targetPathJsonList = jsonValue.GetArray("TargetPath");
    for(unsigned targetPathIndex = 0; targetPathIndex < targetPathJsonList.GetLength(); ++targetPathIndex)
    {
      m_targetPath.push_back(targetPathJsonList[targetPathIndex].AsString());
    }
    m_targetPathHasBeenSet = true;
  }

  return *this;
}

JsonValue RenameField::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_inputsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> inputsJsonList(m_inputs.size());
   for(unsigned inputsIndex = 0; inputsIndex < inputsJsonList.GetLength(); ++inputsIndex)
   {
     inputsJsonList[inputsIndex].AsString(m_inputs[inputsIndex]);
   }
   payload.WithArray("Inputs", std::move(inputsJsonList));

  }

  if(m_sourcePathHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sourcePathJsonList(m_sourcePath.size());
   for(unsigned sourcePathIndex = 0; sourcePathIndex < sourcePathJsonList.GetLength(); ++sourcePathIndex)
   {
     sourcePathJsonList[sourcePathIndex].AsString(m_sourcePath[sourcePathIndex]);
   }
   payload.WithArray("SourcePath", std::move(sourcePathJsonList));

  }

  if(m_targetPathHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> targetPathJsonList(m_targetPath.size());
   for(unsigned targetPathIndex = 0; targetPathIndex < targetPathJsonList.GetLength(); ++targetPathIndex)
   {
     targetPathJsonList[targetPathIndex].AsString(m_targetPath[targetPathIndex]);
   }
   payload.WithArray("TargetPath", std::move(targetPathJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
