/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecr/model/RepositoryScanningConfiguration.h>
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

RepositoryScanningConfiguration::RepositoryScanningConfiguration() : 
    m_repositoryArnHasBeenSet(false),
    m_repositoryNameHasBeenSet(false),
    m_scanOnPush(false),
    m_scanOnPushHasBeenSet(false),
    m_scanFrequency(ScanFrequency::NOT_SET),
    m_scanFrequencyHasBeenSet(false),
    m_appliedScanFiltersHasBeenSet(false)
{
}

RepositoryScanningConfiguration::RepositoryScanningConfiguration(JsonView jsonValue) : 
    m_repositoryArnHasBeenSet(false),
    m_repositoryNameHasBeenSet(false),
    m_scanOnPush(false),
    m_scanOnPushHasBeenSet(false),
    m_scanFrequency(ScanFrequency::NOT_SET),
    m_scanFrequencyHasBeenSet(false),
    m_appliedScanFiltersHasBeenSet(false)
{
  *this = jsonValue;
}

RepositoryScanningConfiguration& RepositoryScanningConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("repositoryArn"))
  {
    m_repositoryArn = jsonValue.GetString("repositoryArn");

    m_repositoryArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("repositoryName"))
  {
    m_repositoryName = jsonValue.GetString("repositoryName");

    m_repositoryNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("scanOnPush"))
  {
    m_scanOnPush = jsonValue.GetBool("scanOnPush");

    m_scanOnPushHasBeenSet = true;
  }

  if(jsonValue.ValueExists("scanFrequency"))
  {
    m_scanFrequency = ScanFrequencyMapper::GetScanFrequencyForName(jsonValue.GetString("scanFrequency"));

    m_scanFrequencyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("appliedScanFilters"))
  {
    Aws::Utils::Array<JsonView> appliedScanFiltersJsonList = jsonValue.GetArray("appliedScanFilters");
    for(unsigned appliedScanFiltersIndex = 0; appliedScanFiltersIndex < appliedScanFiltersJsonList.GetLength(); ++appliedScanFiltersIndex)
    {
      m_appliedScanFilters.push_back(appliedScanFiltersJsonList[appliedScanFiltersIndex].AsObject());
    }
    m_appliedScanFiltersHasBeenSet = true;
  }

  return *this;
}

JsonValue RepositoryScanningConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_repositoryArnHasBeenSet)
  {
   payload.WithString("repositoryArn", m_repositoryArn);

  }

  if(m_repositoryNameHasBeenSet)
  {
   payload.WithString("repositoryName", m_repositoryName);

  }

  if(m_scanOnPushHasBeenSet)
  {
   payload.WithBool("scanOnPush", m_scanOnPush);

  }

  if(m_scanFrequencyHasBeenSet)
  {
   payload.WithString("scanFrequency", ScanFrequencyMapper::GetNameForScanFrequency(m_scanFrequency));
  }

  if(m_appliedScanFiltersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> appliedScanFiltersJsonList(m_appliedScanFilters.size());
   for(unsigned appliedScanFiltersIndex = 0; appliedScanFiltersIndex < appliedScanFiltersJsonList.GetLength(); ++appliedScanFiltersIndex)
   {
     appliedScanFiltersJsonList[appliedScanFiltersIndex].AsObject(m_appliedScanFilters[appliedScanFiltersIndex].Jsonize());
   }
   payload.WithArray("appliedScanFilters", std::move(appliedScanFiltersJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ECR
} // namespace Aws
