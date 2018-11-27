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

#include <aws/greengrass/model/SecretsManagerSecretResourceData.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Greengrass
{
namespace Model
{

SecretsManagerSecretResourceData::SecretsManagerSecretResourceData() : 
    m_aRNHasBeenSet(false),
    m_additionalStagingLabelsToDownloadHasBeenSet(false)
{
}

SecretsManagerSecretResourceData::SecretsManagerSecretResourceData(JsonView jsonValue) : 
    m_aRNHasBeenSet(false),
    m_additionalStagingLabelsToDownloadHasBeenSet(false)
{
  *this = jsonValue;
}

SecretsManagerSecretResourceData& SecretsManagerSecretResourceData::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ARN"))
  {
    m_aRN = jsonValue.GetString("ARN");

    m_aRNHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AdditionalStagingLabelsToDownload"))
  {
    Array<JsonView> additionalStagingLabelsToDownloadJsonList = jsonValue.GetArray("AdditionalStagingLabelsToDownload");
    for(unsigned additionalStagingLabelsToDownloadIndex = 0; additionalStagingLabelsToDownloadIndex < additionalStagingLabelsToDownloadJsonList.GetLength(); ++additionalStagingLabelsToDownloadIndex)
    {
      m_additionalStagingLabelsToDownload.push_back(additionalStagingLabelsToDownloadJsonList[additionalStagingLabelsToDownloadIndex].AsString());
    }
    m_additionalStagingLabelsToDownloadHasBeenSet = true;
  }

  return *this;
}

JsonValue SecretsManagerSecretResourceData::Jsonize() const
{
  JsonValue payload;

  if(m_aRNHasBeenSet)
  {
   payload.WithString("ARN", m_aRN);

  }

  if(m_additionalStagingLabelsToDownloadHasBeenSet)
  {
   Array<JsonValue> additionalStagingLabelsToDownloadJsonList(m_additionalStagingLabelsToDownload.size());
   for(unsigned additionalStagingLabelsToDownloadIndex = 0; additionalStagingLabelsToDownloadIndex < additionalStagingLabelsToDownloadJsonList.GetLength(); ++additionalStagingLabelsToDownloadIndex)
   {
     additionalStagingLabelsToDownloadJsonList[additionalStagingLabelsToDownloadIndex].AsString(m_additionalStagingLabelsToDownload[additionalStagingLabelsToDownloadIndex]);
   }
   payload.WithArray("AdditionalStagingLabelsToDownload", std::move(additionalStagingLabelsToDownloadJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Greengrass
} // namespace Aws
