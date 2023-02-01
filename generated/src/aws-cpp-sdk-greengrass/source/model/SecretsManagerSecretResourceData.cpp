/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    Aws::Utils::Array<JsonView> additionalStagingLabelsToDownloadJsonList = jsonValue.GetArray("AdditionalStagingLabelsToDownload");
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
   Aws::Utils::Array<JsonValue> additionalStagingLabelsToDownloadJsonList(m_additionalStagingLabelsToDownload.size());
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
