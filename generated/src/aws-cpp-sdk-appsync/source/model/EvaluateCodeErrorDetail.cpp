/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appsync/model/EvaluateCodeErrorDetail.h>
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

EvaluateCodeErrorDetail::EvaluateCodeErrorDetail() : 
    m_messageHasBeenSet(false),
    m_codeErrorsHasBeenSet(false)
{
}

EvaluateCodeErrorDetail::EvaluateCodeErrorDetail(JsonView jsonValue) : 
    m_messageHasBeenSet(false),
    m_codeErrorsHasBeenSet(false)
{
  *this = jsonValue;
}

EvaluateCodeErrorDetail& EvaluateCodeErrorDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");

    m_messageHasBeenSet = true;
  }

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

JsonValue EvaluateCodeErrorDetail::Jsonize() const
{
  JsonValue payload;

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", m_message);

  }

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
