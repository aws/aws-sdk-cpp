/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/FillMissingValues.h>
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

FillMissingValues::FillMissingValues() : 
    m_nameHasBeenSet(false),
    m_inputsHasBeenSet(false),
    m_imputedPathHasBeenSet(false),
    m_filledPathHasBeenSet(false)
{
}

FillMissingValues::FillMissingValues(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_inputsHasBeenSet(false),
    m_imputedPathHasBeenSet(false),
    m_filledPathHasBeenSet(false)
{
  *this = jsonValue;
}

FillMissingValues& FillMissingValues::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("ImputedPath"))
  {
    m_imputedPath = jsonValue.GetString("ImputedPath");

    m_imputedPathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FilledPath"))
  {
    m_filledPath = jsonValue.GetString("FilledPath");

    m_filledPathHasBeenSet = true;
  }

  return *this;
}

JsonValue FillMissingValues::Jsonize() const
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

  if(m_imputedPathHasBeenSet)
  {
   payload.WithString("ImputedPath", m_imputedPath);

  }

  if(m_filledPathHasBeenSet)
  {
   payload.WithString("FilledPath", m_filledPath);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
