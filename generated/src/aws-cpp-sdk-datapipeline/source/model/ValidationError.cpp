/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datapipeline/model/ValidationError.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataPipeline
{
namespace Model
{

ValidationError::ValidationError() : 
    m_idHasBeenSet(false),
    m_errorsHasBeenSet(false)
{
}

ValidationError::ValidationError(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_errorsHasBeenSet(false)
{
  *this = jsonValue;
}

ValidationError& ValidationError::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
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

JsonValue ValidationError::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

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
} // namespace DataPipeline
} // namespace Aws
