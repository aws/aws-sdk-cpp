/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplify/model/Backend.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Amplify
{
namespace Model
{

Backend::Backend() : 
    m_stackArnHasBeenSet(false)
{
}

Backend::Backend(JsonView jsonValue) : 
    m_stackArnHasBeenSet(false)
{
  *this = jsonValue;
}

Backend& Backend::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("stackArn"))
  {
    m_stackArn = jsonValue.GetString("stackArn");

    m_stackArnHasBeenSet = true;
  }

  return *this;
}

JsonValue Backend::Jsonize() const
{
  JsonValue payload;

  if(m_stackArnHasBeenSet)
  {
   payload.WithString("stackArn", m_stackArn);

  }

  return payload;
}

} // namespace Model
} // namespace Amplify
} // namespace Aws
