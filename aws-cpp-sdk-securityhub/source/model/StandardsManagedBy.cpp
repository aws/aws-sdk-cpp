/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/StandardsManagedBy.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

StandardsManagedBy::StandardsManagedBy() : 
    m_companyHasBeenSet(false),
    m_productHasBeenSet(false)
{
}

StandardsManagedBy::StandardsManagedBy(JsonView jsonValue) : 
    m_companyHasBeenSet(false),
    m_productHasBeenSet(false)
{
  *this = jsonValue;
}

StandardsManagedBy& StandardsManagedBy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Company"))
  {
    m_company = jsonValue.GetString("Company");

    m_companyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Product"))
  {
    m_product = jsonValue.GetString("Product");

    m_productHasBeenSet = true;
  }

  return *this;
}

JsonValue StandardsManagedBy::Jsonize() const
{
  JsonValue payload;

  if(m_companyHasBeenSet)
  {
   payload.WithString("Company", m_company);

  }

  if(m_productHasBeenSet)
  {
   payload.WithString("Product", m_product);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
