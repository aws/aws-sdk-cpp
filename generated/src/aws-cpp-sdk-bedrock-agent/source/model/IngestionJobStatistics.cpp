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
    m_numberOfDocumentsScanned(0),
    m_numberOfDocumentsScannedHasBeenSet(false),
    m_numberOfNewDocumentsIndexed(0),
    m_numberOfNewDocumentsIndexedHasBeenSet(false),
    m_numberOfModifiedDocumentsIndexed(0),
    m_numberOfModifiedDocumentsIndexedHasBeenSet(false),
    m_numberOfDocumentsDeleted(0),
    m_numberOfDocumentsDeletedHasBeenSet(false),
    m_numberOfDocumentsFailed(0),
    m_numberOfDocumentsFailedHasBeenSet(false)
{
}

IngestionJobStatistics::IngestionJobStatistics(JsonView jsonValue) : 
    m_numberOfDocumentsScanned(0),
    m_numberOfDocumentsScannedHasBeenSet(false),
    m_numberOfNewDocumentsIndexed(0),
    m_numberOfNewDocumentsIndexedHasBeenSet(false),
    m_numberOfModifiedDocumentsIndexed(0),
    m_numberOfModifiedDocumentsIndexedHasBeenSet(false),
    m_numberOfDocumentsDeleted(0),
    m_numberOfDocumentsDeletedHasBeenSet(false),
    m_numberOfDocumentsFailed(0),
    m_numberOfDocumentsFailedHasBeenSet(false)
{
  *this = jsonValue;
}

IngestionJobStatistics& IngestionJobStatistics::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("numberOfDocumentsScanned"))
  {
    m_numberOfDocumentsScanned = jsonValue.GetInt64("numberOfDocumentsScanned");

    m_numberOfDocumentsScannedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("numberOfNewDocumentsIndexed"))
  {
    m_numberOfNewDocumentsIndexed = jsonValue.GetInt64("numberOfNewDocumentsIndexed");

    m_numberOfNewDocumentsIndexedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("numberOfModifiedDocumentsIndexed"))
  {
    m_numberOfModifiedDocumentsIndexed = jsonValue.GetInt64("numberOfModifiedDocumentsIndexed");

    m_numberOfModifiedDocumentsIndexedHasBeenSet = true;
  }

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

  return *this;
}

JsonValue IngestionJobStatistics::Jsonize() const
{
  JsonValue payload;

  if(m_numberOfDocumentsScannedHasBeenSet)
  {
   payload.WithInt64("numberOfDocumentsScanned", m_numberOfDocumentsScanned);

  }

  if(m_numberOfNewDocumentsIndexedHasBeenSet)
  {
   payload.WithInt64("numberOfNewDocumentsIndexed", m_numberOfNewDocumentsIndexed);

  }

  if(m_numberOfModifiedDocumentsIndexedHasBeenSet)
  {
   payload.WithInt64("numberOfModifiedDocumentsIndexed", m_numberOfModifiedDocumentsIndexed);

  }

  if(m_numberOfDocumentsDeletedHasBeenSet)
  {
   payload.WithInt64("numberOfDocumentsDeleted", m_numberOfDocumentsDeleted);

  }

  if(m_numberOfDocumentsFailedHasBeenSet)
  {
   payload.WithInt64("numberOfDocumentsFailed", m_numberOfDocumentsFailed);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
