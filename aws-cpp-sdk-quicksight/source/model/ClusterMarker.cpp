/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/ClusterMarker.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

ClusterMarker::ClusterMarker() : 
    m_simpleClusterMarkerHasBeenSet(false)
{
}

ClusterMarker::ClusterMarker(JsonView jsonValue) : 
    m_simpleClusterMarkerHasBeenSet(false)
{
  *this = jsonValue;
}

ClusterMarker& ClusterMarker::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SimpleClusterMarker"))
  {
    m_simpleClusterMarker = jsonValue.GetObject("SimpleClusterMarker");

    m_simpleClusterMarkerHasBeenSet = true;
  }

  return *this;
}

JsonValue ClusterMarker::Jsonize() const
{
  JsonValue payload;

  if(m_simpleClusterMarkerHasBeenSet)
  {
   payload.WithObject("SimpleClusterMarker", m_simpleClusterMarker.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
