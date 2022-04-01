/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backupstorage/model/DataAlreadyExistsException.h>
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

DataAlreadyExistsException::DataAlreadyExistsException() : 
    m_messageHasBeenSet(false),
    m_checksumHasBeenSet(false),
    m_checksumAlgorithmHasBeenSet(false)
{
}

DataAlreadyExistsException::DataAlreadyExistsException(JsonView jsonValue) : 
    m_messageHasBeenSet(false),
    m_checksumHasBeenSet(false),
    m_checksumAlgorithmHasBeenSet(false)
{
  *this = jsonValue;
}

DataAlreadyExistsException& DataAlreadyExistsException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Checksum"))
  {
    m_checksum = jsonValue.GetString("Checksum");

    m_checksumHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ChecksumAlgorithm"))
  {
    m_checksumAlgorithm = jsonValue.GetString("ChecksumAlgorithm");

    m_checksumAlgorithmHasBeenSet = true;
  }

  return *this;
}

JsonValue DataAlreadyExistsException::Jsonize() const
{
  JsonValue payload;

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  if(m_checksumHasBeenSet)
  {
   payload.WithString("Checksum", m_checksum);

  }

  if(m_checksumAlgorithmHasBeenSet)
  {
   payload.WithString("ChecksumAlgorithm", m_checksumAlgorithm);

  }

  return payload;
}

} // namespace Model
} // namespace BackupStorage
} // namespace Aws
