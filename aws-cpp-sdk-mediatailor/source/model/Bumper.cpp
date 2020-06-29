/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediatailor/model/Bumper.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaTailor
{
namespace Model
{

Bumper::Bumper() : 
    m_endUrlHasBeenSet(false),
    m_startUrlHasBeenSet(false)
{
}

Bumper::Bumper(JsonView jsonValue) : 
    m_endUrlHasBeenSet(false),
    m_startUrlHasBeenSet(false)
{
  *this = jsonValue;
}

Bumper& Bumper::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("EndUrl"))
  {
    m_endUrl = jsonValue.GetString("EndUrl");

    m_endUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StartUrl"))
  {
    m_startUrl = jsonValue.GetString("StartUrl");

    m_startUrlHasBeenSet = true;
  }

  return *this;
}

JsonValue Bumper::Jsonize() const
{
  JsonValue payload;

  if(m_endUrlHasBeenSet)
  {
   payload.WithString("EndUrl", m_endUrl);

  }

  if(m_startUrlHasBeenSet)
  {
   payload.WithString("StartUrl", m_startUrl);

  }

  return payload;
}

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
