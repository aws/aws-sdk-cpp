/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/Ec2Configuration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Batch
{
namespace Model
{

Ec2Configuration::Ec2Configuration() : 
    m_imageTypeHasBeenSet(false),
    m_imageIdOverrideHasBeenSet(false)
{
}

Ec2Configuration::Ec2Configuration(JsonView jsonValue) : 
    m_imageTypeHasBeenSet(false),
    m_imageIdOverrideHasBeenSet(false)
{
  *this = jsonValue;
}

Ec2Configuration& Ec2Configuration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("imageType"))
  {
    m_imageType = jsonValue.GetString("imageType");

    m_imageTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("imageIdOverride"))
  {
    m_imageIdOverride = jsonValue.GetString("imageIdOverride");

    m_imageIdOverrideHasBeenSet = true;
  }

  return *this;
}

JsonValue Ec2Configuration::Jsonize() const
{
  JsonValue payload;

  if(m_imageTypeHasBeenSet)
  {
   payload.WithString("imageType", m_imageType);

  }

  if(m_imageIdOverrideHasBeenSet)
  {
   payload.WithString("imageIdOverride", m_imageIdOverride);

  }

  return payload;
}

} // namespace Model
} // namespace Batch
} // namespace Aws
