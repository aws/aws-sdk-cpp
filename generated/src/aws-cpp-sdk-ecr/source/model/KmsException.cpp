/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecr/model/KmsException.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ECR
{
namespace Model
{

KmsException::KmsException() : 
    m_messageHasBeenSet(false),
    m_kmsErrorHasBeenSet(false)
{
}

KmsException::KmsException(JsonView jsonValue) : 
    m_messageHasBeenSet(false),
    m_kmsErrorHasBeenSet(false)
{
  *this = jsonValue;
}

KmsException& KmsException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("kmsError"))
  {
    m_kmsError = jsonValue.GetString("kmsError");

    m_kmsErrorHasBeenSet = true;
  }

  return *this;
}

JsonValue KmsException::Jsonize() const
{
  JsonValue payload;

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", m_message);

  }

  if(m_kmsErrorHasBeenSet)
  {
   payload.WithString("kmsError", m_kmsError);

  }

  return payload;
}

} // namespace Model
} // namespace ECR
} // namespace Aws
