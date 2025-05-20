/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/ClusterForImageFilterCriteria.h>
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

ClusterForImageFilterCriteria::ClusterForImageFilterCriteria(JsonView jsonValue)
{
  *this = jsonValue;
}

ClusterForImageFilterCriteria& ClusterForImageFilterCriteria::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("resourceId"))
  {
    m_resourceId = jsonValue.GetString("resourceId");
    m_resourceIdHasBeenSet = true;
  }
  return *this;
}

JsonValue ClusterForImageFilterCriteria::Jsonize() const
{
  JsonValue payload;

  if(m_resourceIdHasBeenSet)
  {
   payload.WithString("resourceId", m_resourceId);

  }

  return payload;
}

} // namespace Model
} // namespace Inspector2
} // namespace Aws
