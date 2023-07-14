/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecr/model/ScanningRepositoryFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ECR
{
namespace Model
{

ScanningRepositoryFilter::ScanningRepositoryFilter() : 
    m_filterHasBeenSet(false),
    m_filterType(ScanningRepositoryFilterType::NOT_SET),
    m_filterTypeHasBeenSet(false)
{
}

ScanningRepositoryFilter::ScanningRepositoryFilter(JsonView jsonValue) : 
    m_filterHasBeenSet(false),
    m_filterType(ScanningRepositoryFilterType::NOT_SET),
    m_filterTypeHasBeenSet(false)
{
  *this = jsonValue;
}

ScanningRepositoryFilter& ScanningRepositoryFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("filter"))
  {
    m_filter = jsonValue.GetString("filter");

    m_filterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("filterType"))
  {
    m_filterType = ScanningRepositoryFilterTypeMapper::GetScanningRepositoryFilterTypeForName(jsonValue.GetString("filterType"));

    m_filterTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue ScanningRepositoryFilter::Jsonize() const
{
  JsonValue payload;

  if(m_filterHasBeenSet)
  {
   payload.WithString("filter", m_filter);

  }

  if(m_filterTypeHasBeenSet)
  {
   payload.WithString("filterType", ScanningRepositoryFilterTypeMapper::GetNameForScanningRepositoryFilterType(m_filterType));
  }

  return payload;
}

} // namespace Model
} // namespace ECR
} // namespace Aws
