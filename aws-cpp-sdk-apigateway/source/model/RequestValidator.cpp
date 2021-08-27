/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigateway/model/RequestValidator.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace APIGateway
{
namespace Model
{

RequestValidator::RequestValidator() : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_validateRequestBody(false),
    m_validateRequestBodyHasBeenSet(false),
    m_validateRequestParameters(false),
    m_validateRequestParametersHasBeenSet(false)
{
}

RequestValidator::RequestValidator(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_validateRequestBody(false),
    m_validateRequestBodyHasBeenSet(false),
    m_validateRequestParameters(false),
    m_validateRequestParametersHasBeenSet(false)
{
  *this = jsonValue;
}

RequestValidator& RequestValidator::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("validateRequestBody"))
  {
    m_validateRequestBody = jsonValue.GetBool("validateRequestBody");

    m_validateRequestBodyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("validateRequestParameters"))
  {
    m_validateRequestParameters = jsonValue.GetBool("validateRequestParameters");

    m_validateRequestParametersHasBeenSet = true;
  }

  return *this;
}

JsonValue RequestValidator::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_validateRequestBodyHasBeenSet)
  {
   payload.WithBool("validateRequestBody", m_validateRequestBody);

  }

  if(m_validateRequestParametersHasBeenSet)
  {
   payload.WithBool("validateRequestParameters", m_validateRequestParameters);

  }

  return payload;
}

} // namespace Model
} // namespace APIGateway
} // namespace Aws
