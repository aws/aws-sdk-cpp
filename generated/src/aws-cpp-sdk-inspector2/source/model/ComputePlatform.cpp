/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/ComputePlatform.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Inspector2
{
namespace Model
{

ComputePlatform::ComputePlatform() : 
    m_productHasBeenSet(false),
    m_vendorHasBeenSet(false),
    m_versionHasBeenSet(false)
{
}

ComputePlatform::ComputePlatform(JsonView jsonValue) : 
    m_productHasBeenSet(false),
    m_vendorHasBeenSet(false),
    m_versionHasBeenSet(false)
{
  *this = jsonValue;
}

ComputePlatform& ComputePlatform::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("product"))
  {
    m_product = jsonValue.GetString("product");

    m_productHasBeenSet = true;
  }

  if(jsonValue.ValueExists("vendor"))
  {
    m_vendor = jsonValue.GetString("vendor");

    m_vendorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("version"))
  {
    m_version = jsonValue.GetString("version");

    m_versionHasBeenSet = true;
  }

  return *this;
}

JsonValue ComputePlatform::Jsonize() const
{
  JsonValue payload;

  if(m_productHasBeenSet)
  {
   payload.WithString("product", m_product);

  }

  if(m_vendorHasBeenSet)
  {
   payload.WithString("vendor", m_vendor);

  }

  if(m_versionHasBeenSet)
  {
   payload.WithString("version", m_version);

  }

  return payload;
}

} // namespace Model
} // namespace Inspector2
} // namespace Aws
