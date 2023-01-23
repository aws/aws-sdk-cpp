/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/StreamFile.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

StreamFile::StreamFile() : 
    m_fileId(0),
    m_fileIdHasBeenSet(false),
    m_s3LocationHasBeenSet(false)
{
}

StreamFile::StreamFile(JsonView jsonValue) : 
    m_fileId(0),
    m_fileIdHasBeenSet(false),
    m_s3LocationHasBeenSet(false)
{
  *this = jsonValue;
}

StreamFile& StreamFile::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("fileId"))
  {
    m_fileId = jsonValue.GetInteger("fileId");

    m_fileIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("s3Location"))
  {
    m_s3Location = jsonValue.GetObject("s3Location");

    m_s3LocationHasBeenSet = true;
  }

  return *this;
}

JsonValue StreamFile::Jsonize() const
{
  JsonValue payload;

  if(m_fileIdHasBeenSet)
  {
   payload.WithInteger("fileId", m_fileId);

  }

  if(m_s3LocationHasBeenSet)
  {
   payload.WithObject("s3Location", m_s3Location.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
