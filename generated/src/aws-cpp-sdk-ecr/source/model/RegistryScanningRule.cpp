/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecr/model/RegistryScanningRule.h>
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

RegistryScanningRule::RegistryScanningRule() : 
    m_scanFrequency(ScanFrequency::NOT_SET),
    m_scanFrequencyHasBeenSet(false),
    m_repositoryFiltersHasBeenSet(false)
{
}

RegistryScanningRule::RegistryScanningRule(JsonView jsonValue) : 
    m_scanFrequency(ScanFrequency::NOT_SET),
    m_scanFrequencyHasBeenSet(false),
    m_repositoryFiltersHasBeenSet(false)
{
  *this = jsonValue;
}

RegistryScanningRule& RegistryScanningRule::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("scanFrequency"))
  {
    m_scanFrequency = ScanFrequencyMapper::GetScanFrequencyForName(jsonValue.GetString("scanFrequency"));

    m_scanFrequencyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("repositoryFilters"))
  {
    Aws::Utils::Array<JsonView> repositoryFiltersJsonList = jsonValue.GetArray("repositoryFilters");
    for(unsigned repositoryFiltersIndex = 0; repositoryFiltersIndex < repositoryFiltersJsonList.GetLength(); ++repositoryFiltersIndex)
    {
      m_repositoryFilters.push_back(repositoryFiltersJsonList[repositoryFiltersIndex].AsObject());
    }
    m_repositoryFiltersHasBeenSet = true;
  }

  return *this;
}

JsonValue RegistryScanningRule::Jsonize() const
{
  JsonValue payload;

  if(m_scanFrequencyHasBeenSet)
  {
   payload.WithString("scanFrequency", ScanFrequencyMapper::GetNameForScanFrequency(m_scanFrequency));
  }

  if(m_repositoryFiltersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> repositoryFiltersJsonList(m_repositoryFilters.size());
   for(unsigned repositoryFiltersIndex = 0; repositoryFiltersIndex < repositoryFiltersJsonList.GetLength(); ++repositoryFiltersIndex)
   {
     repositoryFiltersJsonList[repositoryFiltersIndex].AsObject(m_repositoryFilters[repositoryFiltersIndex].Jsonize());
   }
   payload.WithArray("repositoryFilters", std::move(repositoryFiltersJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ECR
} // namespace Aws
