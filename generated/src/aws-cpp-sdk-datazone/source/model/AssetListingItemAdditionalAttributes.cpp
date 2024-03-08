/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/AssetListingItemAdditionalAttributes.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataZone
{
namespace Model
{

AssetListingItemAdditionalAttributes::AssetListingItemAdditionalAttributes() : 
    m_formsHasBeenSet(false)
{
}

AssetListingItemAdditionalAttributes::AssetListingItemAdditionalAttributes(JsonView jsonValue) : 
    m_formsHasBeenSet(false)
{
  *this = jsonValue;
}

AssetListingItemAdditionalAttributes& AssetListingItemAdditionalAttributes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("forms"))
  {
    m_forms = jsonValue.GetString("forms");

    m_formsHasBeenSet = true;
  }

  return *this;
}

JsonValue AssetListingItemAdditionalAttributes::Jsonize() const
{
  JsonValue payload;

  if(m_formsHasBeenSet)
  {
   payload.WithString("forms", m_forms);

  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
