/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/Ulimit.h>
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

Ulimit::Ulimit() : 
    m_hardLimit(0),
    m_hardLimitHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_softLimit(0),
    m_softLimitHasBeenSet(false)
{
}

Ulimit::Ulimit(JsonView jsonValue) : 
    m_hardLimit(0),
    m_hardLimitHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_softLimit(0),
    m_softLimitHasBeenSet(false)
{
  *this = jsonValue;
}

Ulimit& Ulimit::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("hardLimit"))
  {
    m_hardLimit = jsonValue.GetInteger("hardLimit");

    m_hardLimitHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("softLimit"))
  {
    m_softLimit = jsonValue.GetInteger("softLimit");

    m_softLimitHasBeenSet = true;
  }

  return *this;
}

JsonValue Ulimit::Jsonize() const
{
  JsonValue payload;

  if(m_hardLimitHasBeenSet)
  {
   payload.WithInteger("hardLimit", m_hardLimit);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_softLimitHasBeenSet)
  {
   payload.WithInteger("softLimit", m_softLimit);

  }

  return payload;
}

} // namespace Model
} // namespace Batch
} // namespace Aws
