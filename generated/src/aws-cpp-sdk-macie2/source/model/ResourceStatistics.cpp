/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/ResourceStatistics.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Macie2
{
namespace Model
{

ResourceStatistics::ResourceStatistics() : 
    m_totalBytesClassified(0),
    m_totalBytesClassifiedHasBeenSet(false),
    m_totalDetections(0),
    m_totalDetectionsHasBeenSet(false),
    m_totalDetectionsSuppressed(0),
    m_totalDetectionsSuppressedHasBeenSet(false),
    m_totalItemsClassified(0),
    m_totalItemsClassifiedHasBeenSet(false),
    m_totalItemsSensitive(0),
    m_totalItemsSensitiveHasBeenSet(false),
    m_totalItemsSkipped(0),
    m_totalItemsSkippedHasBeenSet(false),
    m_totalItemsSkippedInvalidEncryption(0),
    m_totalItemsSkippedInvalidEncryptionHasBeenSet(false),
    m_totalItemsSkippedInvalidKms(0),
    m_totalItemsSkippedInvalidKmsHasBeenSet(false),
    m_totalItemsSkippedPermissionDenied(0),
    m_totalItemsSkippedPermissionDeniedHasBeenSet(false)
{
}

ResourceStatistics::ResourceStatistics(JsonView jsonValue) : 
    m_totalBytesClassified(0),
    m_totalBytesClassifiedHasBeenSet(false),
    m_totalDetections(0),
    m_totalDetectionsHasBeenSet(false),
    m_totalDetectionsSuppressed(0),
    m_totalDetectionsSuppressedHasBeenSet(false),
    m_totalItemsClassified(0),
    m_totalItemsClassifiedHasBeenSet(false),
    m_totalItemsSensitive(0),
    m_totalItemsSensitiveHasBeenSet(false),
    m_totalItemsSkipped(0),
    m_totalItemsSkippedHasBeenSet(false),
    m_totalItemsSkippedInvalidEncryption(0),
    m_totalItemsSkippedInvalidEncryptionHasBeenSet(false),
    m_totalItemsSkippedInvalidKms(0),
    m_totalItemsSkippedInvalidKmsHasBeenSet(false),
    m_totalItemsSkippedPermissionDenied(0),
    m_totalItemsSkippedPermissionDeniedHasBeenSet(false)
{
  *this = jsonValue;
}

ResourceStatistics& ResourceStatistics::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("totalBytesClassified"))
  {
    m_totalBytesClassified = jsonValue.GetInt64("totalBytesClassified");

    m_totalBytesClassifiedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("totalDetections"))
  {
    m_totalDetections = jsonValue.GetInt64("totalDetections");

    m_totalDetectionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("totalDetectionsSuppressed"))
  {
    m_totalDetectionsSuppressed = jsonValue.GetInt64("totalDetectionsSuppressed");

    m_totalDetectionsSuppressedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("totalItemsClassified"))
  {
    m_totalItemsClassified = jsonValue.GetInt64("totalItemsClassified");

    m_totalItemsClassifiedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("totalItemsSensitive"))
  {
    m_totalItemsSensitive = jsonValue.GetInt64("totalItemsSensitive");

    m_totalItemsSensitiveHasBeenSet = true;
  }

  if(jsonValue.ValueExists("totalItemsSkipped"))
  {
    m_totalItemsSkipped = jsonValue.GetInt64("totalItemsSkipped");

    m_totalItemsSkippedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("totalItemsSkippedInvalidEncryption"))
  {
    m_totalItemsSkippedInvalidEncryption = jsonValue.GetInt64("totalItemsSkippedInvalidEncryption");

    m_totalItemsSkippedInvalidEncryptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("totalItemsSkippedInvalidKms"))
  {
    m_totalItemsSkippedInvalidKms = jsonValue.GetInt64("totalItemsSkippedInvalidKms");

    m_totalItemsSkippedInvalidKmsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("totalItemsSkippedPermissionDenied"))
  {
    m_totalItemsSkippedPermissionDenied = jsonValue.GetInt64("totalItemsSkippedPermissionDenied");

    m_totalItemsSkippedPermissionDeniedHasBeenSet = true;
  }

  return *this;
}

JsonValue ResourceStatistics::Jsonize() const
{
  JsonValue payload;

  if(m_totalBytesClassifiedHasBeenSet)
  {
   payload.WithInt64("totalBytesClassified", m_totalBytesClassified);

  }

  if(m_totalDetectionsHasBeenSet)
  {
   payload.WithInt64("totalDetections", m_totalDetections);

  }

  if(m_totalDetectionsSuppressedHasBeenSet)
  {
   payload.WithInt64("totalDetectionsSuppressed", m_totalDetectionsSuppressed);

  }

  if(m_totalItemsClassifiedHasBeenSet)
  {
   payload.WithInt64("totalItemsClassified", m_totalItemsClassified);

  }

  if(m_totalItemsSensitiveHasBeenSet)
  {
   payload.WithInt64("totalItemsSensitive", m_totalItemsSensitive);

  }

  if(m_totalItemsSkippedHasBeenSet)
  {
   payload.WithInt64("totalItemsSkipped", m_totalItemsSkipped);

  }

  if(m_totalItemsSkippedInvalidEncryptionHasBeenSet)
  {
   payload.WithInt64("totalItemsSkippedInvalidEncryption", m_totalItemsSkippedInvalidEncryption);

  }

  if(m_totalItemsSkippedInvalidKmsHasBeenSet)
  {
   payload.WithInt64("totalItemsSkippedInvalidKms", m_totalItemsSkippedInvalidKms);

  }

  if(m_totalItemsSkippedPermissionDeniedHasBeenSet)
  {
   payload.WithInt64("totalItemsSkippedPermissionDenied", m_totalItemsSkippedPermissionDenied);

  }

  return payload;
}

} // namespace Model
} // namespace Macie2
} // namespace Aws
