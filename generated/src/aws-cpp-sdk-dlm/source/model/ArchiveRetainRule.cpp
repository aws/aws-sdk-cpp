/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dlm/model/ArchiveRetainRule.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DLM
{
namespace Model
{

ArchiveRetainRule::ArchiveRetainRule() : 
    m_retentionArchiveTierHasBeenSet(false)
{
}

ArchiveRetainRule::ArchiveRetainRule(JsonView jsonValue) : 
    m_retentionArchiveTierHasBeenSet(false)
{
  *this = jsonValue;
}

ArchiveRetainRule& ArchiveRetainRule::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RetentionArchiveTier"))
  {
    m_retentionArchiveTier = jsonValue.GetObject("RetentionArchiveTier");

    m_retentionArchiveTierHasBeenSet = true;
  }

  return *this;
}

JsonValue ArchiveRetainRule::Jsonize() const
{
  JsonValue payload;

  if(m_retentionArchiveTierHasBeenSet)
  {
   payload.WithObject("RetentionArchiveTier", m_retentionArchiveTier.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace DLM
} // namespace Aws
