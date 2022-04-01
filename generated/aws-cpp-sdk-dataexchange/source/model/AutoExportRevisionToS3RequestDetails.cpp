/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dataexchange/model/AutoExportRevisionToS3RequestDetails.h>
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

AutoExportRevisionToS3RequestDetails::AutoExportRevisionToS3RequestDetails() : 
    m_encryptionHasBeenSet(false),
    m_revisionDestinationHasBeenSet(false)
{
}

AutoExportRevisionToS3RequestDetails::AutoExportRevisionToS3RequestDetails(JsonView jsonValue) : 
    m_encryptionHasBeenSet(false),
    m_revisionDestinationHasBeenSet(false)
{
  *this = jsonValue;
}

AutoExportRevisionToS3RequestDetails& AutoExportRevisionToS3RequestDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Encryption"))
  {
    m_encryption = jsonValue.GetObject("Encryption");

    m_encryptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RevisionDestination"))
  {
    m_revisionDestination = jsonValue.GetObject("RevisionDestination");

    m_revisionDestinationHasBeenSet = true;
  }

  return *this;
}

JsonValue AutoExportRevisionToS3RequestDetails::Jsonize() const
{
  JsonValue payload;

  if(m_encryptionHasBeenSet)
  {
   payload.WithObject("Encryption", m_encryption.Jsonize());

  }

  if(m_revisionDestinationHasBeenSet)
  {
   payload.WithObject("RevisionDestination", m_revisionDestination.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace DataExchange
} // namespace Aws
