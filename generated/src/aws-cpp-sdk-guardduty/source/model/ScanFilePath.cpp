/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/ScanFilePath.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GuardDuty
{
namespace Model
{

ScanFilePath::ScanFilePath() : 
    m_filePathHasBeenSet(false),
    m_volumeArnHasBeenSet(false),
    m_hashHasBeenSet(false),
    m_fileNameHasBeenSet(false)
{
}

ScanFilePath::ScanFilePath(JsonView jsonValue) : 
    m_filePathHasBeenSet(false),
    m_volumeArnHasBeenSet(false),
    m_hashHasBeenSet(false),
    m_fileNameHasBeenSet(false)
{
  *this = jsonValue;
}

ScanFilePath& ScanFilePath::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("filePath"))
  {
    m_filePath = jsonValue.GetString("filePath");

    m_filePathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("volumeArn"))
  {
    m_volumeArn = jsonValue.GetString("volumeArn");

    m_volumeArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("hash"))
  {
    m_hash = jsonValue.GetString("hash");

    m_hashHasBeenSet = true;
  }

  if(jsonValue.ValueExists("fileName"))
  {
    m_fileName = jsonValue.GetString("fileName");

    m_fileNameHasBeenSet = true;
  }

  return *this;
}

JsonValue ScanFilePath::Jsonize() const
{
  JsonValue payload;

  if(m_filePathHasBeenSet)
  {
   payload.WithString("filePath", m_filePath);

  }

  if(m_volumeArnHasBeenSet)
  {
   payload.WithString("volumeArn", m_volumeArn);

  }

  if(m_hashHasBeenSet)
  {
   payload.WithString("hash", m_hash);

  }

  if(m_fileNameHasBeenSet)
  {
   payload.WithString("fileName", m_fileName);

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
