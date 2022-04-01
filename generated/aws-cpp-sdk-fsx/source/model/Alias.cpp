/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/Alias.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FSx
{
namespace Model
{

Alias::Alias() : 
    m_nameHasBeenSet(false),
    m_lifecycle(AliasLifecycle::NOT_SET),
    m_lifecycleHasBeenSet(false)
{
}

Alias::Alias(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_lifecycle(AliasLifecycle::NOT_SET),
    m_lifecycleHasBeenSet(false)
{
  *this = jsonValue;
}

Alias& Alias::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Lifecycle"))
  {
    m_lifecycle = AliasLifecycleMapper::GetAliasLifecycleForName(jsonValue.GetString("Lifecycle"));

    m_lifecycleHasBeenSet = true;
  }

  return *this;
}

JsonValue Alias::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_lifecycleHasBeenSet)
  {
   payload.WithString("Lifecycle", AliasLifecycleMapper::GetNameForAliasLifecycle(m_lifecycle));
  }

  return payload;
}

} // namespace Model
} // namespace FSx
} // namespace Aws
