/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/DomainStats.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CustomerProfiles
{
namespace Model
{

DomainStats::DomainStats() : 
    m_profileCount(0),
    m_profileCountHasBeenSet(false),
    m_meteringProfileCount(0),
    m_meteringProfileCountHasBeenSet(false),
    m_objectCount(0),
    m_objectCountHasBeenSet(false),
    m_totalSize(0),
    m_totalSizeHasBeenSet(false)
{
}

DomainStats::DomainStats(JsonView jsonValue) : 
    m_profileCount(0),
    m_profileCountHasBeenSet(false),
    m_meteringProfileCount(0),
    m_meteringProfileCountHasBeenSet(false),
    m_objectCount(0),
    m_objectCountHasBeenSet(false),
    m_totalSize(0),
    m_totalSizeHasBeenSet(false)
{
  *this = jsonValue;
}

DomainStats& DomainStats::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ProfileCount"))
  {
    m_profileCount = jsonValue.GetInt64("ProfileCount");

    m_profileCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MeteringProfileCount"))
  {
    m_meteringProfileCount = jsonValue.GetInt64("MeteringProfileCount");

    m_meteringProfileCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ObjectCount"))
  {
    m_objectCount = jsonValue.GetInt64("ObjectCount");

    m_objectCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TotalSize"))
  {
    m_totalSize = jsonValue.GetInt64("TotalSize");

    m_totalSizeHasBeenSet = true;
  }

  return *this;
}

JsonValue DomainStats::Jsonize() const
{
  JsonValue payload;

  if(m_profileCountHasBeenSet)
  {
   payload.WithInt64("ProfileCount", m_profileCount);

  }

  if(m_meteringProfileCountHasBeenSet)
  {
   payload.WithInt64("MeteringProfileCount", m_meteringProfileCount);

  }

  if(m_objectCountHasBeenSet)
  {
   payload.WithInt64("ObjectCount", m_objectCount);

  }

  if(m_totalSizeHasBeenSet)
  {
   payload.WithInt64("TotalSize", m_totalSize);

  }

  return payload;
}

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
