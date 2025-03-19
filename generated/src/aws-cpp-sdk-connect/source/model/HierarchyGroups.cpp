/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/HierarchyGroups.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

HierarchyGroups::HierarchyGroups(JsonView jsonValue)
{
  *this = jsonValue;
}

HierarchyGroups& HierarchyGroups::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Level1"))
  {
    m_level1 = jsonValue.GetObject("Level1");
    m_level1HasBeenSet = true;
  }
  if(jsonValue.ValueExists("Level2"))
  {
    m_level2 = jsonValue.GetObject("Level2");
    m_level2HasBeenSet = true;
  }
  if(jsonValue.ValueExists("Level3"))
  {
    m_level3 = jsonValue.GetObject("Level3");
    m_level3HasBeenSet = true;
  }
  if(jsonValue.ValueExists("Level4"))
  {
    m_level4 = jsonValue.GetObject("Level4");
    m_level4HasBeenSet = true;
  }
  if(jsonValue.ValueExists("Level5"))
  {
    m_level5 = jsonValue.GetObject("Level5");
    m_level5HasBeenSet = true;
  }
  return *this;
}

JsonValue HierarchyGroups::Jsonize() const
{
  JsonValue payload;

  if(m_level1HasBeenSet)
  {
   payload.WithObject("Level1", m_level1.Jsonize());

  }

  if(m_level2HasBeenSet)
  {
   payload.WithObject("Level2", m_level2.Jsonize());

  }

  if(m_level3HasBeenSet)
  {
   payload.WithObject("Level3", m_level3.Jsonize());

  }

  if(m_level4HasBeenSet)
  {
   payload.WithObject("Level4", m_level4.Jsonize());

  }

  if(m_level5HasBeenSet)
  {
   payload.WithObject("Level5", m_level5.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
