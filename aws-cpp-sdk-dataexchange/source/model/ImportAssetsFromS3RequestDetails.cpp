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

#include <aws/dataexchange/model/ImportAssetsFromS3RequestDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataExchange
{
namespace Model
{

ImportAssetsFromS3RequestDetails::ImportAssetsFromS3RequestDetails() : 
    m_assetSourcesHasBeenSet(false),
    m_dataSetIdHasBeenSet(false),
    m_revisionIdHasBeenSet(false)
{
}

ImportAssetsFromS3RequestDetails::ImportAssetsFromS3RequestDetails(JsonView jsonValue) : 
    m_assetSourcesHasBeenSet(false),
    m_dataSetIdHasBeenSet(false),
    m_revisionIdHasBeenSet(false)
{
  *this = jsonValue;
}

ImportAssetsFromS3RequestDetails& ImportAssetsFromS3RequestDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AssetSources"))
  {
    Array<JsonView> assetSourcesJsonList = jsonValue.GetArray("AssetSources");
    for(unsigned assetSourcesIndex = 0; assetSourcesIndex < assetSourcesJsonList.GetLength(); ++assetSourcesIndex)
    {
      m_assetSources.push_back(assetSourcesJsonList[assetSourcesIndex].AsObject());
    }
    m_assetSourcesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataSetId"))
  {
    m_dataSetId = jsonValue.GetString("DataSetId");

    m_dataSetIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RevisionId"))
  {
    m_revisionId = jsonValue.GetString("RevisionId");

    m_revisionIdHasBeenSet = true;
  }

  return *this;
}

JsonValue ImportAssetsFromS3RequestDetails::Jsonize() const
{
  JsonValue payload;

  if(m_assetSourcesHasBeenSet)
  {
   Array<JsonValue> assetSourcesJsonList(m_assetSources.size());
   for(unsigned assetSourcesIndex = 0; assetSourcesIndex < assetSourcesJsonList.GetLength(); ++assetSourcesIndex)
   {
     assetSourcesJsonList[assetSourcesIndex].AsObject(m_assetSources[assetSourcesIndex].Jsonize());
   }
   payload.WithArray("AssetSources", std::move(assetSourcesJsonList));

  }

  if(m_dataSetIdHasBeenSet)
  {
   payload.WithString("DataSetId", m_dataSetId);

  }

  if(m_revisionIdHasBeenSet)
  {
   payload.WithString("RevisionId", m_revisionId);

  }

  return payload;
}

} // namespace Model
} // namespace DataExchange
} // namespace Aws
