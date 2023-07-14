/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconnect/model/SourcePriority.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaConnect
{
namespace Model
{

SourcePriority::SourcePriority() : 
    m_primarySourceHasBeenSet(false)
{
}

SourcePriority::SourcePriority(JsonView jsonValue) : 
    m_primarySourceHasBeenSet(false)
{
  *this = jsonValue;
}

SourcePriority& SourcePriority::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("primarySource"))
  {
    m_primarySource = jsonValue.GetString("primarySource");

    m_primarySourceHasBeenSet = true;
  }

  return *this;
}

JsonValue SourcePriority::Jsonize() const
{
  JsonValue payload;

  if(m_primarySourceHasBeenSet)
  {
   payload.WithString("primarySource", m_primarySource);

  }

  return payload;
}

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
