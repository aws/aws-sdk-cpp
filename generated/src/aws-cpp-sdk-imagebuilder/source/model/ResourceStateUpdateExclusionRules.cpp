/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/ResourceStateUpdateExclusionRules.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace imagebuilder
{
namespace Model
{

ResourceStateUpdateExclusionRules::ResourceStateUpdateExclusionRules() : 
    m_amisHasBeenSet(false)
{
}

ResourceStateUpdateExclusionRules::ResourceStateUpdateExclusionRules(JsonView jsonValue) : 
    m_amisHasBeenSet(false)
{
  *this = jsonValue;
}

ResourceStateUpdateExclusionRules& ResourceStateUpdateExclusionRules::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("amis"))
  {
    m_amis = jsonValue.GetObject("amis");

    m_amisHasBeenSet = true;
  }

  return *this;
}

JsonValue ResourceStateUpdateExclusionRules::Jsonize() const
{
  JsonValue payload;

  if(m_amisHasBeenSet)
  {
   payload.WithObject("amis", m_amis.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
