/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm-pca/model/Qualifier.h>
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

Qualifier::Qualifier() : 
    m_cpsUriHasBeenSet(false)
{
}

Qualifier::Qualifier(JsonView jsonValue) : 
    m_cpsUriHasBeenSet(false)
{
  *this = jsonValue;
}

Qualifier& Qualifier::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CpsUri"))
  {
    m_cpsUri = jsonValue.GetString("CpsUri");

    m_cpsUriHasBeenSet = true;
  }

  return *this;
}

JsonValue Qualifier::Jsonize() const
{
  JsonValue payload;

  if(m_cpsUriHasBeenSet)
  {
   payload.WithString("CpsUri", m_cpsUri);

  }

  return payload;
}

} // namespace Model
} // namespace ACMPCA
} // namespace Aws
