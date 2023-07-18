/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/m2/model/StorageConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MainframeModernization
{
namespace Model
{

StorageConfiguration::StorageConfiguration() : 
    m_efsHasBeenSet(false),
    m_fsxHasBeenSet(false)
{
}

StorageConfiguration::StorageConfiguration(JsonView jsonValue) : 
    m_efsHasBeenSet(false),
    m_fsxHasBeenSet(false)
{
  *this = jsonValue;
}

StorageConfiguration& StorageConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("efs"))
  {
    m_efs = jsonValue.GetObject("efs");

    m_efsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("fsx"))
  {
    m_fsx = jsonValue.GetObject("fsx");

    m_fsxHasBeenSet = true;
  }

  return *this;
}

JsonValue StorageConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_efsHasBeenSet)
  {
   payload.WithObject("efs", m_efs.Jsonize());

  }

  if(m_fsxHasBeenSet)
  {
   payload.WithObject("fsx", m_fsx.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
