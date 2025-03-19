/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/OrphanFileDeletionMetrics.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

OrphanFileDeletionMetrics::OrphanFileDeletionMetrics(JsonView jsonValue)
{
  *this = jsonValue;
}

OrphanFileDeletionMetrics& OrphanFileDeletionMetrics::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("IcebergMetrics"))
  {
    m_icebergMetrics = jsonValue.GetObject("IcebergMetrics");
    m_icebergMetricsHasBeenSet = true;
  }
  return *this;
}

JsonValue OrphanFileDeletionMetrics::Jsonize() const
{
  JsonValue payload;

  if(m_icebergMetricsHasBeenSet)
  {
   payload.WithObject("IcebergMetrics", m_icebergMetrics.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
