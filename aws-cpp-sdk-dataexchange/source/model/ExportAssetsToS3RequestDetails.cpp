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

#include <aws/dataexchange/model/ExportAssetsToS3RequestDetails.h>
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

ExportAssetsToS3RequestDetails::ExportAssetsToS3RequestDetails() : 
    m_assetDestinationsHasBeenSet(false),
    m_dataSetIdHasBeenSet(false),
    m_revisionIdHasBeenSet(false)
{
}

ExportAssetsToS3RequestDetails::ExportAssetsToS3RequestDetails(JsonView jsonValue) : 
    m_assetDestinationsHasBeenSet(false),
    m_dataSetIdHasBeenSet(false),
    m_revisionIdHasBeenSet(false)
{
  *this = jsonValue;
}

ExportAssetsToS3RequestDetails& ExportAssetsToS3RequestDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AssetDestinations"))
  {
    Array<JsonView> assetDestinationsJsonList = jsonValue.GetArray("AssetDestinations");
    for(unsigned assetDestinationsIndex = 0; assetDestinationsIndex < assetDestinationsJsonList.GetLength(); ++assetDestinationsIndex)
    {
      m_assetDestinations.push_back(assetDestinationsJsonList[assetDestinationsIndex].AsObject());
    }
    m_assetDestinationsHasBeenSet = true;
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

JsonValue ExportAssetsToS3RequestDetails::Jsonize() const
{
  JsonValue payload;

  if(m_assetDestinationsHasBeenSet)
  {
   Array<JsonValue> assetDestinationsJsonList(m_assetDestinations.size());
   for(unsigned assetDestinationsIndex = 0; assetDestinationsIndex < assetDestinationsJsonList.GetLength(); ++assetDestinationsIndex)
   {
     assetDestinationsJsonList[assetDestinationsIndex].AsObject(m_assetDestinations[assetDestinationsIndex].Jsonize());
   }
   payload.WithArray("AssetDestinations", std::move(assetDestinationsJsonList));

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
