/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrass/model/InternalServerErrorException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Greengrass
{
namespace Model
{

InternalServerErrorException::InternalServerErrorException() : 
    m_errorDetailsHasBeenSet(false),
    m_messageHasBeenSet(false)
{
}

InternalServerErrorException::InternalServerErrorException(JsonView jsonValue) : 
    m_errorDetailsHasBeenSet(false),
    m_messageHasBeenSet(false)
{
  *this = jsonValue;
}

InternalServerErrorException& InternalServerErrorException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ErrorDetails"))
  {
    Aws::Utils::Array<JsonView> errorDetailsJsonList = jsonValue.GetArray("ErrorDetails");
    for(unsigned errorDetailsIndex = 0; errorDetailsIndex < errorDetailsJsonList.GetLength(); ++errorDetailsIndex)
    {
      m_errorDetails.push_back(errorDetailsJsonList[errorDetailsIndex].AsObject());
    }
    m_errorDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  return *this;
}

JsonValue InternalServerErrorException::Jsonize() const
{
  JsonValue payload;

  if(m_errorDetailsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> errorDetailsJsonList(m_errorDetails.size());
   for(unsigned errorDetailsIndex = 0; errorDetailsIndex < errorDetailsJsonList.GetLength(); ++errorDetailsIndex)
   {
     errorDetailsJsonList[errorDetailsIndex].AsObject(m_errorDetails[errorDetailsIndex].Jsonize());
   }
   payload.WithArray("ErrorDetails", std::move(errorDetailsJsonList));

  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  return payload;
}

} // namespace Model
} // namespace Greengrass
} // namespace Aws
