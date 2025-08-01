/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/arc-region-switch/model/GlobalAuroraUngraceful.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ARCRegionswitch
{
namespace Model
{

GlobalAuroraUngraceful::GlobalAuroraUngraceful(JsonView jsonValue)
{
  *this = jsonValue;
}

GlobalAuroraUngraceful& GlobalAuroraUngraceful::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ungraceful"))
  {
    m_ungraceful = GlobalAuroraUngracefulBehaviorMapper::GetGlobalAuroraUngracefulBehaviorForName(jsonValue.GetString("ungraceful"));
    m_ungracefulHasBeenSet = true;
  }
  return *this;
}

JsonValue GlobalAuroraUngraceful::Jsonize() const
{
  JsonValue payload;

  if(m_ungracefulHasBeenSet)
  {
   payload.WithString("ungraceful", GlobalAuroraUngracefulBehaviorMapper::GetNameForGlobalAuroraUngracefulBehavior(m_ungraceful));
  }

  return payload;
}

} // namespace Model
} // namespace ARCRegionswitch
} // namespace Aws
