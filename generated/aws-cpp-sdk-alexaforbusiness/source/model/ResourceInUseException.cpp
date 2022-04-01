/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/alexaforbusiness/model/ResourceInUseException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AlexaForBusiness
{
namespace Model
{

ResourceInUseException::ResourceInUseException() : 
    m_messageHasBeenSet(false),
    m_clientRequestTokenHasBeenSet(false)
{
}

ResourceInUseException::ResourceInUseException(JsonView jsonValue) : 
    m_messageHasBeenSet(false),
    m_clientRequestTokenHasBeenSet(false)
{
  *this = jsonValue;
}

ResourceInUseException& ResourceInUseException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ClientRequestToken"))
  {
    m_clientRequestToken = jsonValue.GetString("ClientRequestToken");

    m_clientRequestTokenHasBeenSet = true;
  }

  return *this;
}

JsonValue ResourceInUseException::Jsonize() const
{
  JsonValue payload;

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  if(m_clientRequestTokenHasBeenSet)
  {
   payload.WithString("ClientRequestToken", m_clientRequestToken);

  }

  return payload;
}

} // namespace Model
} // namespace AlexaForBusiness
} // namespace Aws
