/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/IngestionJobStatistics.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockAgent
{
namespace Model
{

IngestionJobStatistics::IngestionJobStatistics() : 
    m_numberOfDocumentsDeleted(0),
    m_numberOfDocumentsDeletedHasBeenSet(false),
    m_numberOfDocumentsFailed(0),
    m_numberOfDocumentsFailedHasBeenSet(false),
    m_numberOfDocumentsScanned(0),
    m_numberOfDocumentsScannedHasBeenSet(false),
    m_numberOfMetadataDocumentsModified(0),
    m_numberOfMetadataDocumentsModifiedHasBeenSet(false),
    m_numberOfMetadataDocumentsScanned(0),
    m_numberOfMetadataDocumentsScannedHasBeenSet(false),
    m_numberOfModifiedDocumentsIndexed(0),
    m_numberOfModifiedDocumentsIndexedHasBeenSet(false),
    m_numberOfNewDocumentsIndexed(0),
    m_numberOfNewDocumentsIndexedHasBeenSet(false)
{
}

IngestionJobStatistics::IngestionJobStatistics(JsonView jsonValue) : 
    m_numberOfDocumentsDeleted(0),
    m_numberOfDocumentsDeletedHasBeenSet(false),
    m_numberOfDocumentsFailed(0),
    m_numberOfDocumentsFailedHasBeenSet(false),
    m_numberOfDocumentsScanned(0),
    m_numberOfDocumentsScannedHasBeenSet(false),
    m_numberOfMetadataDocumentsModified(0),
    m_numberOfMetadataDocumentsModifiedHasBeenSet(false),
    m_numberOfMetadataDocumentsScanned(0),
    m_numberOfMetadataDocumentsScannedHasBeenSet(false),
    m_numberOfModifiedDocumentsIndexed(0),
    m_numberOfModifiedDocumentsIndexedHasBeenSet(false),
    m_numberOfNewDocumentsIndexed(0),
    m_numberOfNewDocumentsIndexedHasBeenSet(false)
{
  *this = jsonValue;
}

IngestionJobStatistics& IngestionJobStatistics::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("numberOfDocumentsDeleted"))
  {
    m_numberOfDocumentsDeleted = jsonValue.GetInt64("numberOfDocumentsDeleted");

    m_numberOfDocumentsDeletedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("numberOfDocumentsFailed"))
  {
    m_numberOfDocumentsFailed = jsonValue.GetInt64("numberOfDocumentsFailed");

    m_numberOfDocumentsFailedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("numberOfDocumentsScanned"))
  {
    m_numberOfDocumentsScanned = jsonValue.GetInt64("numberOfDocumentsScanned");

    m_numberOfDocumentsScannedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("numberOfMetadataDocumentsModified"))
  {
    m_numberOfMetadataDocumentsModified = jsonValue.GetInt64("numberOfMetadataDocumentsModified");

    m_numberOfMetadataDocumentsModifiedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("numberOfMetadataDocumentsScanned"))
  {
    m_numberOfMetadataDocumentsScanned = jsonValue.GetInt64("numberOfMetadataDocumentsScanned");

    m_numberOfMetadataDocumentsScannedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("numberOfModifiedDocumentsIndexed"))
  {
    m_numberOfModifiedDocumentsIndexed = jsonValue.GetInt64("numberOfModifiedDocumentsIndexed");

    m_numberOfModifiedDocumentsIndexedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("numberOfNewDocumentsIndexed"))
  {
    m_numberOfNewDocumentsIndexed = jsonValue.GetInt64("numberOfNewDocumentsIndexed");

    m_numberOfNewDocumentsIndexedHasBeenSet = true;
  }

  return *this;
}

JsonValue IngestionJobStatistics::Jsonize() const
{
  JsonValue payload;

  if(m_numberOfDocumentsDeletedHasBeenSet)
  {
   payload.WithInt64("numberOfDocumentsDeleted", m_numberOfDocumentsDeleted);

  }

  if(m_numberOfDocumentsFailedHasBeenSet)
  {
   payload.WithInt64("numberOfDocumentsFailed", m_numberOfDocumentsFailed);

  }

  if(m_numberOfDocumentsScannedHasBeenSet)
  {
   payload.WithInt64("numberOfDocumentsScanned", m_numberOfDocumentsScanned);

  }

  if(m_numberOfMetadataDocumentsModifiedHasBeenSet)
  {
   payload.WithInt64("numberOfMetadataDocumentsModified", m_numberOfMetadataDocumentsModified);

  }

  if(m_numberOfMetadataDocumentsScannedHasBeenSet)
  {
   payload.WithInt64("numberOfMetadataDocumentsScanned", m_numberOfMetadataDocumentsScanned);

  }

  if(m_numberOfModifiedDocumentsIndexedHasBeenSet)
  {
   payload.WithInt64("numberOfModifiedDocumentsIndexed", m_numberOfModifiedDocumentsIndexed);

  }

  if(m_numberOfNewDocumentsIndexedHasBeenSet)
  {
   payload.WithInt64("numberOfNewDocumentsIndexed", m_numberOfNewDocumentsIndexed);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
