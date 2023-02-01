/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dataexchange/model/ExportRevisionsToS3RequestDetails.h>
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

ExportRevisionsToS3RequestDetails::ExportRevisionsToS3RequestDetails() : 
    m_dataSetIdHasBeenSet(false),
    m_encryptionHasBeenSet(false),
    m_revisionDestinationsHasBeenSet(false)
{
}

ExportRevisionsToS3RequestDetails::ExportRevisionsToS3RequestDetails(JsonView jsonValue) : 
    m_dataSetIdHasBeenSet(false),
    m_encryptionHasBeenSet(false),
    m_revisionDestinationsHasBeenSet(false)
{
  *this = jsonValue;
}

ExportRevisionsToS3RequestDetails& ExportRevisionsToS3RequestDetails::operator =(JsonView jsonValue)
{
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

  if(jsonValue.ValueExists("RevisionDestinations"))
  {
    Aws::Utils::Array<JsonView> revisionDestinationsJsonList = jsonValue.GetArray("RevisionDestinations");
    for(unsigned revisionDestinationsIndex = 0; revisionDestinationsIndex < revisionDestinationsJsonList.GetLength(); ++revisionDestinationsIndex)
    {
      m_revisionDestinations.push_back(revisionDestinationsJsonList[revisionDestinationsIndex].AsObject());
    }
    m_revisionDestinationsHasBeenSet = true;
  }

  return *this;
}

JsonValue ExportRevisionsToS3RequestDetails::Jsonize() const
{
  JsonValue payload;

  if(m_dataSetIdHasBeenSet)
  {
   payload.WithString("DataSetId", m_dataSetId);

  }

  if(m_encryptionHasBeenSet)
  {
   payload.WithObject("Encryption", m_encryption.Jsonize());

  }

  if(m_revisionDestinationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> revisionDestinationsJsonList(m_revisionDestinations.size());
   for(unsigned revisionDestinationsIndex = 0; revisionDestinationsIndex < revisionDestinationsJsonList.GetLength(); ++revisionDestinationsIndex)
   {
     revisionDestinationsJsonList[revisionDestinationsIndex].AsObject(m_revisionDestinations[revisionDestinationsIndex].Jsonize());
   }
   payload.WithArray("RevisionDestinations", std::move(revisionDestinationsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace DataExchange
} // namespace Aws
