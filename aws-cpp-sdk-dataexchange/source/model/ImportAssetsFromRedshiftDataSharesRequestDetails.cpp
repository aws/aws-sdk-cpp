/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dataexchange/model/ImportAssetsFromRedshiftDataSharesRequestDetails.h>
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

ImportAssetsFromRedshiftDataSharesRequestDetails::ImportAssetsFromRedshiftDataSharesRequestDetails() : 
    m_assetSourcesHasBeenSet(false),
    m_dataSetIdHasBeenSet(false),
    m_revisionIdHasBeenSet(false)
{
}

ImportAssetsFromRedshiftDataSharesRequestDetails::ImportAssetsFromRedshiftDataSharesRequestDetails(JsonView jsonValue) : 
    m_assetSourcesHasBeenSet(false),
    m_dataSetIdHasBeenSet(false),
    m_revisionIdHasBeenSet(false)
{
  *this = jsonValue;
}

ImportAssetsFromRedshiftDataSharesRequestDetails& ImportAssetsFromRedshiftDataSharesRequestDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AssetSources"))
  {
    Aws::Utils::Array<JsonView> assetSourcesJsonList = jsonValue.GetArray("AssetSources");
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

JsonValue ImportAssetsFromRedshiftDataSharesRequestDetails::Jsonize() const
{
  JsonValue payload;

  if(m_assetSourcesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> assetSourcesJsonList(m_assetSources.size());
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
