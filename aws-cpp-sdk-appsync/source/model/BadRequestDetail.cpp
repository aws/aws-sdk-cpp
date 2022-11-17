/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appsync/model/BadRequestDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppSync
{
namespace Model
{

BadRequestDetail::BadRequestDetail() : 
    m_codeErrorsHasBeenSet(false)
{
}

BadRequestDetail::BadRequestDetail(JsonView jsonValue) : 
    m_codeErrorsHasBeenSet(false)
{
  *this = jsonValue;
}

BadRequestDetail& BadRequestDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("codeErrors"))
  {
    Aws::Utils::Array<JsonView> codeErrorsJsonList = jsonValue.GetArray("codeErrors");
    for(unsigned codeErrorsIndex = 0; codeErrorsIndex < codeErrorsJsonList.GetLength(); ++codeErrorsIndex)
    {
      m_codeErrors.push_back(codeErrorsJsonList[codeErrorsIndex].AsObject());
    }
    m_codeErrorsHasBeenSet = true;
  }

  return *this;
}

JsonValue BadRequestDetail::Jsonize() const
{
  JsonValue payload;

  if(m_codeErrorsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> codeErrorsJsonList(m_codeErrors.size());
   for(unsigned codeErrorsIndex = 0; codeErrorsIndex < codeErrorsJsonList.GetLength(); ++codeErrorsIndex)
   {
     codeErrorsJsonList[codeErrorsIndex].AsObject(m_codeErrors[codeErrorsIndex].Jsonize());
   }
   payload.WithArray("codeErrors", std::move(codeErrorsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace AppSync
} // namespace Aws
