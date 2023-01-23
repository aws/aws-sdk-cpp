/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    m_encryptionHasBeenSet(false),
    m_revisionIdHasBeenSet(false)
{
}

ExportAssetsToS3RequestDetails::ExportAssetsToS3RequestDetails(JsonView jsonValue) : 
    m_assetDestinationsHasBeenSet(false),
    m_dataSetIdHasBeenSet(false),
    m_encryptionHasBeenSet(false),
    m_revisionIdHasBeenSet(false)
{
  *this = jsonValue;
}

ExportAssetsToS3RequestDetails& ExportAssetsToS3RequestDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AssetDestinations"))
  {
    Aws::Utils::Array<JsonView> assetDestinationsJsonList = jsonValue.GetArray("AssetDestinations");
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

  if(jsonValue.ValueExists("Encryption"))
  {
    m_encryption = jsonValue.GetObject("Encryption");

    m_encryptionHasBeenSet = true;
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
   Aws::Utils::Array<JsonValue> assetDestinationsJsonList(m_assetDestinations.size());
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

  if(m_encryptionHasBeenSet)
  {
   payload.WithObject("Encryption", m_encryption.Jsonize());

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
