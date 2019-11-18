/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/ssm/model/ResourceDataSyncSource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSM
{
namespace Model
{

ResourceDataSyncSource::ResourceDataSyncSource() : 
    m_sourceTypeHasBeenSet(false),
    m_awsOrganizationsSourceHasBeenSet(false),
    m_sourceRegionsHasBeenSet(false),
    m_includeFutureRegions(false),
    m_includeFutureRegionsHasBeenSet(false)
{
}

ResourceDataSyncSource::ResourceDataSyncSource(JsonView jsonValue) : 
    m_sourceTypeHasBeenSet(false),
    m_awsOrganizationsSourceHasBeenSet(false),
    m_sourceRegionsHasBeenSet(false),
    m_includeFutureRegions(false),
    m_includeFutureRegionsHasBeenSet(false)
{
  *this = jsonValue;
}

ResourceDataSyncSource& ResourceDataSyncSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SourceType"))
  {
    m_sourceType = jsonValue.GetString("SourceType");

    m_sourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AwsOrganizationsSource"))
  {
    m_awsOrganizationsSource = jsonValue.GetObject("AwsOrganizationsSource");

    m_awsOrganizationsSourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceRegions"))
  {
    Array<JsonView> sourceRegionsJsonList = jsonValue.GetArray("SourceRegions");
    for(unsigned sourceRegionsIndex = 0; sourceRegionsIndex < sourceRegionsJsonList.GetLength(); ++sourceRegionsIndex)
    {
      m_sourceRegions.push_back(sourceRegionsJsonList[sourceRegionsIndex].AsString());
    }
    m_sourceRegionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IncludeFutureRegions"))
  {
    m_includeFutureRegions = jsonValue.GetBool("IncludeFutureRegions");

    m_includeFutureRegionsHasBeenSet = true;
  }

  return *this;
}

JsonValue ResourceDataSyncSource::Jsonize() const
{
  JsonValue payload;

  if(m_sourceTypeHasBeenSet)
  {
   payload.WithString("SourceType", m_sourceType);

  }

  if(m_awsOrganizationsSourceHasBeenSet)
  {
   payload.WithObject("AwsOrganizationsSource", m_awsOrganizationsSource.Jsonize());

  }

  if(m_sourceRegionsHasBeenSet)
  {
   Array<JsonValue> sourceRegionsJsonList(m_sourceRegions.size());
   for(unsigned sourceRegionsIndex = 0; sourceRegionsIndex < sourceRegionsJsonList.GetLength(); ++sourceRegionsIndex)
   {
     sourceRegionsJsonList[sourceRegionsIndex].AsString(m_sourceRegions[sourceRegionsIndex]);
   }
   payload.WithArray("SourceRegions", std::move(sourceRegionsJsonList));

  }

  if(m_includeFutureRegionsHasBeenSet)
  {
   payload.WithBool("IncludeFutureRegions", m_includeFutureRegions);

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws
