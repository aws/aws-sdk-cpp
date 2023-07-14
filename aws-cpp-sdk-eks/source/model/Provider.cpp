/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks/model/Provider.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EKS
{
namespace Model
{

Provider::Provider() : 
    m_keyArnHasBeenSet(false)
{
}

Provider::Provider(JsonView jsonValue) : 
    m_keyArnHasBeenSet(false)
{
  *this = jsonValue;
}

Provider& Provider::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("keyArn"))
  {
    m_keyArn = jsonValue.GetString("keyArn");

    m_keyArnHasBeenSet = true;
  }

  return *this;
}

JsonValue Provider::Jsonize() const
{
  JsonValue payload;

  if(m_keyArnHasBeenSet)
  {
   payload.WithString("keyArn", m_keyArn);

  }

  return payload;
}

} // namespace Model
} // namespace EKS
} // namespace Aws
