/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rolesanywhere/model/Source.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace RolesAnywhere
{
namespace Model
{

Source::Source() : 
    m_sourceDataHasBeenSet(false),
    m_sourceType(TrustAnchorType::NOT_SET),
    m_sourceTypeHasBeenSet(false)
{
}

Source::Source(JsonView jsonValue) : 
    m_sourceDataHasBeenSet(false),
    m_sourceType(TrustAnchorType::NOT_SET),
    m_sourceTypeHasBeenSet(false)
{
  *this = jsonValue;
}

Source& Source::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("sourceData"))
  {
    m_sourceData = jsonValue.GetObject("sourceData");

    m_sourceDataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sourceType"))
  {
    m_sourceType = TrustAnchorTypeMapper::GetTrustAnchorTypeForName(jsonValue.GetString("sourceType"));

    m_sourceTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue Source::Jsonize() const
{
  JsonValue payload;

  if(m_sourceDataHasBeenSet)
  {
   payload.WithObject("sourceData", m_sourceData.Jsonize());

  }

  if(m_sourceTypeHasBeenSet)
  {
   payload.WithString("sourceType", TrustAnchorTypeMapper::GetNameForTrustAnchorType(m_sourceType));
  }

  return payload;
}

} // namespace Model
} // namespace RolesAnywhere
} // namespace Aws
