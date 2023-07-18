/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm-pca/model/AccessDescription.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ACMPCA
{
namespace Model
{

AccessDescription::AccessDescription() : 
    m_accessMethodHasBeenSet(false),
    m_accessLocationHasBeenSet(false)
{
}

AccessDescription::AccessDescription(JsonView jsonValue) : 
    m_accessMethodHasBeenSet(false),
    m_accessLocationHasBeenSet(false)
{
  *this = jsonValue;
}

AccessDescription& AccessDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AccessMethod"))
  {
    m_accessMethod = jsonValue.GetObject("AccessMethod");

    m_accessMethodHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AccessLocation"))
  {
    m_accessLocation = jsonValue.GetObject("AccessLocation");

    m_accessLocationHasBeenSet = true;
  }

  return *this;
}

JsonValue AccessDescription::Jsonize() const
{
  JsonValue payload;

  if(m_accessMethodHasBeenSet)
  {
   payload.WithObject("AccessMethod", m_accessMethod.Jsonize());

  }

  if(m_accessLocationHasBeenSet)
  {
   payload.WithObject("AccessLocation", m_accessLocation.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace ACMPCA
} // namespace Aws
