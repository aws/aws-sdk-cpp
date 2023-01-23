/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backupstorage/model/Chunk.h>
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

Chunk::Chunk() : 
    m_index(0),
    m_indexHasBeenSet(false),
    m_length(0),
    m_lengthHasBeenSet(false),
    m_checksumHasBeenSet(false),
    m_checksumAlgorithm(DataChecksumAlgorithm::NOT_SET),
    m_checksumAlgorithmHasBeenSet(false),
    m_chunkTokenHasBeenSet(false)
{
}

Chunk::Chunk(JsonView jsonValue) : 
    m_index(0),
    m_indexHasBeenSet(false),
    m_length(0),
    m_lengthHasBeenSet(false),
    m_checksumHasBeenSet(false),
    m_checksumAlgorithm(DataChecksumAlgorithm::NOT_SET),
    m_checksumAlgorithmHasBeenSet(false),
    m_chunkTokenHasBeenSet(false)
{
  *this = jsonValue;
}

Chunk& Chunk::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Index"))
  {
    m_index = jsonValue.GetInt64("Index");

    m_indexHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Length"))
  {
    m_length = jsonValue.GetInt64("Length");

    m_lengthHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Checksum"))
  {
    m_checksum = jsonValue.GetString("Checksum");

    m_checksumHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ChecksumAlgorithm"))
  {
    m_checksumAlgorithm = DataChecksumAlgorithmMapper::GetDataChecksumAlgorithmForName(jsonValue.GetString("ChecksumAlgorithm"));

    m_checksumAlgorithmHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ChunkToken"))
  {
    m_chunkToken = jsonValue.GetString("ChunkToken");

    m_chunkTokenHasBeenSet = true;
  }

  return *this;
}

JsonValue Chunk::Jsonize() const
{
  JsonValue payload;

  if(m_indexHasBeenSet)
  {
   payload.WithInt64("Index", m_index);

  }

  if(m_lengthHasBeenSet)
  {
   payload.WithInt64("Length", m_length);

  }

  if(m_checksumHasBeenSet)
  {
   payload.WithString("Checksum", m_checksum);

  }

  if(m_checksumAlgorithmHasBeenSet)
  {
   payload.WithString("ChecksumAlgorithm", DataChecksumAlgorithmMapper::GetNameForDataChecksumAlgorithm(m_checksumAlgorithm));
  }

  if(m_chunkTokenHasBeenSet)
  {
   payload.WithString("ChunkToken", m_chunkToken);

  }

  return payload;
}

} // namespace Model
} // namespace BackupStorage
} // namespace Aws
