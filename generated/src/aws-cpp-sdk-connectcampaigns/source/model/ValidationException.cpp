/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcampaigns/model/ValidationException.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConnectCampaigns
{
namespace Model
{

ValidationException::ValidationException() : 
    m_messageHasBeenSet(false),
    m_xAmzErrorTypeHasBeenSet(false)
{
}

ValidationException::ValidationException(JsonView jsonValue) : 
    m_messageHasBeenSet(false),
    m_xAmzErrorTypeHasBeenSet(false)
{
  *this = jsonValue;
}

ValidationException& ValidationException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");

    m_messageHasBeenSet = true;
  }

  return *this;
}

JsonValue ValidationException::Jsonize() const
{
  JsonValue payload;

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", m_message);

  }

  return payload;
}

} // namespace Model
} // namespace ConnectCampaigns
} // namespace Aws
