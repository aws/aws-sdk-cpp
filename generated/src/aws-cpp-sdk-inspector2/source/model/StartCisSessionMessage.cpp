/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/StartCisSessionMessage.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Inspector2
{
namespace Model
{

StartCisSessionMessage::StartCisSessionMessage() : 
    m_sessionTokenHasBeenSet(false)
{
}

StartCisSessionMessage::StartCisSessionMessage(JsonView jsonValue) : 
    m_sessionTokenHasBeenSet(false)
{
  *this = jsonValue;
}

StartCisSessionMessage& StartCisSessionMessage::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("sessionToken"))
  {
    m_sessionToken = jsonValue.GetString("sessionToken");

    m_sessionTokenHasBeenSet = true;
  }

  return *this;
}

JsonValue StartCisSessionMessage::Jsonize() const
{
  JsonValue payload;

  if(m_sessionTokenHasBeenSet)
  {
   payload.WithString("sessionToken", m_sessionToken);

  }

  return payload;
}

} // namespace Model
} // namespace Inspector2
} // namespace Aws
