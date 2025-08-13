/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/braket/model/ProgramSetValidationFailure.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Braket
{
namespace Model
{

ProgramSetValidationFailure::ProgramSetValidationFailure(JsonView jsonValue)
{
  *this = jsonValue;
}

ProgramSetValidationFailure& ProgramSetValidationFailure::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("programIndex"))
  {
    m_programIndex = jsonValue.GetInt64("programIndex");
    m_programIndexHasBeenSet = true;
  }
  if(jsonValue.ValueExists("inputsIndex"))
  {
    m_inputsIndex = jsonValue.GetInt64("inputsIndex");
    m_inputsIndexHasBeenSet = true;
  }
  if(jsonValue.ValueExists("errors"))
  {
    Aws::Utils::Array<JsonView> errorsJsonList = jsonValue.GetArray("errors");
    for(unsigned errorsIndex = 0; errorsIndex < errorsJsonList.GetLength(); ++errorsIndex)
    {
      m_errors.push_back(errorsJsonList[errorsIndex].AsString());
    }
    m_errorsHasBeenSet = true;
  }
  return *this;
}

JsonValue ProgramSetValidationFailure::Jsonize() const
{
  JsonValue payload;

  if(m_programIndexHasBeenSet)
  {
   payload.WithInt64("programIndex", m_programIndex);

  }

  if(m_inputsIndexHasBeenSet)
  {
   payload.WithInt64("inputsIndex", m_inputsIndex);

  }

  if(m_errorsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> errorsJsonList(m_errors.size());
   for(unsigned errorsIndex = 0; errorsIndex < errorsJsonList.GetLength(); ++errorsIndex)
   {
     errorsJsonList[errorsIndex].AsString(m_errors[errorsIndex]);
   }
   payload.WithArray("errors", std::move(errorsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Braket
} // namespace Aws
