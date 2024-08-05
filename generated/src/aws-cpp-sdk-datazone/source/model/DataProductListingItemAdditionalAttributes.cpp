/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/DataProductListingItemAdditionalAttributes.h>
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

DataProductListingItemAdditionalAttributes::DataProductListingItemAdditionalAttributes() : 
    m_formsHasBeenSet(false)
{
}

DataProductListingItemAdditionalAttributes::DataProductListingItemAdditionalAttributes(JsonView jsonValue)
  : DataProductListingItemAdditionalAttributes()
{
  *this = jsonValue;
}

DataProductListingItemAdditionalAttributes& DataProductListingItemAdditionalAttributes::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("forms"))
  {
    m_forms = jsonValue.GetString("forms");

    m_formsHasBeenSet = true;
  }

  return *this;
}

JsonValue DataProductListingItemAdditionalAttributes::Jsonize() const
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
