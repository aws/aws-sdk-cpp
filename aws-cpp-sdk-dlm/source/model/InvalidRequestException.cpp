/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dlm/model/InvalidRequestException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DLM
{
namespace Model
{

InvalidRequestException::InvalidRequestException() : 
    m_messageHasBeenSet(false),
    m_codeHasBeenSet(false),
    m_requiredParametersHasBeenSet(false),
    m_mutuallyExclusiveParametersHasBeenSet(false)
{
}

InvalidRequestException::InvalidRequestException(JsonView jsonValue) : 
    m_messageHasBeenSet(false),
    m_codeHasBeenSet(false),
    m_requiredParametersHasBeenSet(false),
    m_mutuallyExclusiveParametersHasBeenSet(false)
{
  *this = jsonValue;
}

InvalidRequestException& InvalidRequestException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Code"))
  {
    m_code = jsonValue.GetString("Code");

    m_codeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RequiredParameters"))
  {
    Aws::Utils::Array<JsonView> requiredParametersJsonList = jsonValue.GetArray("RequiredParameters");
    for(unsigned requiredParametersIndex = 0; requiredParametersIndex < requiredParametersJsonList.GetLength(); ++requiredParametersIndex)
    {
      m_requiredParameters.push_back(requiredParametersJsonList[requiredParametersIndex].AsString());
    }
    m_requiredParametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MutuallyExclusiveParameters"))
  {
    Aws::Utils::Array<JsonView> mutuallyExclusiveParametersJsonList = jsonValue.GetArray("MutuallyExclusiveParameters");
    for(unsigned mutuallyExclusiveParametersIndex = 0; mutuallyExclusiveParametersIndex < mutuallyExclusiveParametersJsonList.GetLength(); ++mutuallyExclusiveParametersIndex)
    {
      m_mutuallyExclusiveParameters.push_back(mutuallyExclusiveParametersJsonList[mutuallyExclusiveParametersIndex].AsString());
    }
    m_mutuallyExclusiveParametersHasBeenSet = true;
  }

  return *this;
}

JsonValue InvalidRequestException::Jsonize() const
{
  JsonValue payload;

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  if(m_codeHasBeenSet)
  {
   payload.WithString("Code", m_code);

  }

  if(m_requiredParametersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> requiredParametersJsonList(m_requiredParameters.size());
   for(unsigned requiredParametersIndex = 0; requiredParametersIndex < requiredParametersJsonList.GetLength(); ++requiredParametersIndex)
   {
     requiredParametersJsonList[requiredParametersIndex].AsString(m_requiredParameters[requiredParametersIndex]);
   }
   payload.WithArray("RequiredParameters", std::move(requiredParametersJsonList));

  }

  if(m_mutuallyExclusiveParametersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> mutuallyExclusiveParametersJsonList(m_mutuallyExclusiveParameters.size());
   for(unsigned mutuallyExclusiveParametersIndex = 0; mutuallyExclusiveParametersIndex < mutuallyExclusiveParametersJsonList.GetLength(); ++mutuallyExclusiveParametersIndex)
   {
     mutuallyExclusiveParametersJsonList[mutuallyExclusiveParametersIndex].AsString(m_mutuallyExclusiveParameters[mutuallyExclusiveParametersIndex]);
   }
   payload.WithArray("MutuallyExclusiveParameters", std::move(mutuallyExclusiveParametersJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace DLM
} // namespace Aws
