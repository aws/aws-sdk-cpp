/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/RedshiftStorage.h>
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

RedshiftStorage::RedshiftStorage(JsonView jsonValue)
{
  *this = jsonValue;
}

RedshiftStorage& RedshiftStorage::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("redshiftClusterSource"))
  {
    m_redshiftClusterSource = jsonValue.GetObject("redshiftClusterSource");
    m_redshiftClusterSourceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("redshiftServerlessSource"))
  {
    m_redshiftServerlessSource = jsonValue.GetObject("redshiftServerlessSource");
    m_redshiftServerlessSourceHasBeenSet = true;
  }
  return *this;
}

JsonValue RedshiftStorage::Jsonize() const
{
  JsonValue payload;

  if(m_redshiftClusterSourceHasBeenSet)
  {
   payload.WithObject("redshiftClusterSource", m_redshiftClusterSource.Jsonize());

  }

  if(m_redshiftServerlessSourceHasBeenSet)
  {
   payload.WithObject("redshiftServerlessSource", m_redshiftServerlessSource.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
