/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/honeycode/model/ImportJobSubmitter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Honeycode
{
namespace Model
{

ImportJobSubmitter::ImportJobSubmitter() : 
    m_emailHasBeenSet(false),
    m_userArnHasBeenSet(false)
{
}

ImportJobSubmitter::ImportJobSubmitter(JsonView jsonValue) : 
    m_emailHasBeenSet(false),
    m_userArnHasBeenSet(false)
{
  *this = jsonValue;
}

ImportJobSubmitter& ImportJobSubmitter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("email"))
  {
    m_email = jsonValue.GetString("email");

    m_emailHasBeenSet = true;
  }

  if(jsonValue.ValueExists("userArn"))
  {
    m_userArn = jsonValue.GetString("userArn");

    m_userArnHasBeenSet = true;
  }

  return *this;
}

JsonValue ImportJobSubmitter::Jsonize() const
{
  JsonValue payload;

  if(m_emailHasBeenSet)
  {
   payload.WithString("email", m_email);

  }

  if(m_userArnHasBeenSet)
  {
   payload.WithString("userArn", m_userArn);

  }

  return payload;
}

} // namespace Model
} // namespace Honeycode
} // namespace Aws
