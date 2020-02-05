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

#include <aws/securityhub/model/AwsLambdaLayerVersionDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsLambdaLayerVersionDetails::AwsLambdaLayerVersionDetails() : 
    m_version(0),
    m_versionHasBeenSet(false),
    m_compatibleRuntimesHasBeenSet(false),
    m_createdDateHasBeenSet(false)
{
}

AwsLambdaLayerVersionDetails::AwsLambdaLayerVersionDetails(JsonView jsonValue) : 
    m_version(0),
    m_versionHasBeenSet(false),
    m_compatibleRuntimesHasBeenSet(false),
    m_createdDateHasBeenSet(false)
{
  *this = jsonValue;
}

AwsLambdaLayerVersionDetails& AwsLambdaLayerVersionDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Version"))
  {
    m_version = jsonValue.GetInt64("Version");

    m_versionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CompatibleRuntimes"))
  {
    Array<JsonView> compatibleRuntimesJsonList = jsonValue.GetArray("CompatibleRuntimes");
    for(unsigned compatibleRuntimesIndex = 0; compatibleRuntimesIndex < compatibleRuntimesJsonList.GetLength(); ++compatibleRuntimesIndex)
    {
      m_compatibleRuntimes.push_back(compatibleRuntimesJsonList[compatibleRuntimesIndex].AsString());
    }
    m_compatibleRuntimesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedDate"))
  {
    m_createdDate = jsonValue.GetString("CreatedDate");

    m_createdDateHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsLambdaLayerVersionDetails::Jsonize() const
{
  JsonValue payload;

  if(m_versionHasBeenSet)
  {
   payload.WithInt64("Version", m_version);

  }

  if(m_compatibleRuntimesHasBeenSet)
  {
   Array<JsonValue> compatibleRuntimesJsonList(m_compatibleRuntimes.size());
   for(unsigned compatibleRuntimesIndex = 0; compatibleRuntimesIndex < compatibleRuntimesJsonList.GetLength(); ++compatibleRuntimesIndex)
   {
     compatibleRuntimesJsonList[compatibleRuntimesIndex].AsString(m_compatibleRuntimes[compatibleRuntimesIndex]);
   }
   payload.WithArray("CompatibleRuntimes", std::move(compatibleRuntimesJsonList));

  }

  if(m_createdDateHasBeenSet)
  {
   payload.WithString("CreatedDate", m_createdDate);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
