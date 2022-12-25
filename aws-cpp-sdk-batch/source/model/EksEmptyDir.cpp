/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/EksEmptyDir.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Batch
{
namespace Model
{

EksEmptyDir::EksEmptyDir() : 
    m_mediumHasBeenSet(false),
    m_sizeLimitHasBeenSet(false)
{
}

EksEmptyDir::EksEmptyDir(JsonView jsonValue) : 
    m_mediumHasBeenSet(false),
    m_sizeLimitHasBeenSet(false)
{
  *this = jsonValue;
}

EksEmptyDir& EksEmptyDir::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("medium"))
  {
    m_medium = jsonValue.GetString("medium");

    m_mediumHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sizeLimit"))
  {
    m_sizeLimit = jsonValue.GetString("sizeLimit");

    m_sizeLimitHasBeenSet = true;
  }

  return *this;
}

JsonValue EksEmptyDir::Jsonize() const
{
  JsonValue payload;

  if(m_mediumHasBeenSet)
  {
   payload.WithString("medium", m_medium);

  }

  if(m_sizeLimitHasBeenSet)
  {
   payload.WithString("sizeLimit", m_sizeLimit);

  }

  return payload;
}

} // namespace Model
} // namespace Batch
} // namespace Aws
