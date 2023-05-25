/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafka/model/UnprocessedScramSecret.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Kafka
{
namespace Model
{

UnprocessedScramSecret::UnprocessedScramSecret() : 
    m_errorCodeHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_secretArnHasBeenSet(false)
{
}

UnprocessedScramSecret::UnprocessedScramSecret(JsonView jsonValue) : 
    m_errorCodeHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_secretArnHasBeenSet(false)
{
  *this = jsonValue;
}

UnprocessedScramSecret& UnprocessedScramSecret::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("errorCode"))
  {
    m_errorCode = jsonValue.GetString("errorCode");

    m_errorCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("errorMessage"))
  {
    m_errorMessage = jsonValue.GetString("errorMessage");

    m_errorMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("secretArn"))
  {
    m_secretArn = jsonValue.GetString("secretArn");

    m_secretArnHasBeenSet = true;
  }

  return *this;
}

JsonValue UnprocessedScramSecret::Jsonize() const
{
  JsonValue payload;

  if(m_errorCodeHasBeenSet)
  {
   payload.WithString("errorCode", m_errorCode);

  }

  if(m_errorMessageHasBeenSet)
  {
   payload.WithString("errorMessage", m_errorMessage);

  }

  if(m_secretArnHasBeenSet)
  {
   payload.WithString("secretArn", m_secretArn);

  }

  return payload;
}

} // namespace Model
} // namespace Kafka
} // namespace Aws
