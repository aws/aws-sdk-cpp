/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backupstorage/model/BackupObject.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BackupStorage
{
namespace Model
{

BackupObject::BackupObject() : 
    m_nameHasBeenSet(false),
    m_chunksCount(0),
    m_chunksCountHasBeenSet(false),
    m_metadataStringHasBeenSet(false),
    m_objectChecksumHasBeenSet(false),
    m_objectChecksumAlgorithm(SummaryChecksumAlgorithm::NOT_SET),
    m_objectChecksumAlgorithmHasBeenSet(false),
    m_objectTokenHasBeenSet(false)
{
}

BackupObject::BackupObject(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_chunksCount(0),
    m_chunksCountHasBeenSet(false),
    m_metadataStringHasBeenSet(false),
    m_objectChecksumHasBeenSet(false),
    m_objectChecksumAlgorithm(SummaryChecksumAlgorithm::NOT_SET),
    m_objectChecksumAlgorithmHasBeenSet(false),
    m_objectTokenHasBeenSet(false)
{
  *this = jsonValue;
}

BackupObject& BackupObject::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ChunksCount"))
  {
    m_chunksCount = jsonValue.GetInt64("ChunksCount");

    m_chunksCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MetadataString"))
  {
    m_metadataString = jsonValue.GetString("MetadataString");

    m_metadataStringHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ObjectChecksum"))
  {
    m_objectChecksum = jsonValue.GetString("ObjectChecksum");

    m_objectChecksumHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ObjectChecksumAlgorithm"))
  {
    m_objectChecksumAlgorithm = SummaryChecksumAlgorithmMapper::GetSummaryChecksumAlgorithmForName(jsonValue.GetString("ObjectChecksumAlgorithm"));

    m_objectChecksumAlgorithmHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ObjectToken"))
  {
    m_objectToken = jsonValue.GetString("ObjectToken");

    m_objectTokenHasBeenSet = true;
  }

  return *this;
}

JsonValue BackupObject::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_chunksCountHasBeenSet)
  {
   payload.WithInt64("ChunksCount", m_chunksCount);

  }

  if(m_metadataStringHasBeenSet)
  {
   payload.WithString("MetadataString", m_metadataString);

  }

  if(m_objectChecksumHasBeenSet)
  {
   payload.WithString("ObjectChecksum", m_objectChecksum);

  }

  if(m_objectChecksumAlgorithmHasBeenSet)
  {
   payload.WithString("ObjectChecksumAlgorithm", SummaryChecksumAlgorithmMapper::GetNameForSummaryChecksumAlgorithm(m_objectChecksumAlgorithm));
  }

  if(m_objectTokenHasBeenSet)
  {
   payload.WithString("ObjectToken", m_objectToken);

  }

  return payload;
}

} // namespace Model
} // namespace BackupStorage
} // namespace Aws
