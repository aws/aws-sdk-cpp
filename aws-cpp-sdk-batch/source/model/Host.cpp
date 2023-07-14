/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/Host.h>
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

Host::Host() : 
    m_sourcePathHasBeenSet(false)
{
}

Host::Host(JsonView jsonValue) : 
    m_sourcePathHasBeenSet(false)
{
  *this = jsonValue;
}

Host& Host::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("sourcePath"))
  {
    m_sourcePath = jsonValue.GetString("sourcePath");

    m_sourcePathHasBeenSet = true;
  }

  return *this;
}

JsonValue Host::Jsonize() const
{
  JsonValue payload;

  if(m_sourcePathHasBeenSet)
  {
   payload.WithString("sourcePath", m_sourcePath);

  }

  return payload;
}

} // namespace Model
} // namespace Batch
} // namespace Aws
