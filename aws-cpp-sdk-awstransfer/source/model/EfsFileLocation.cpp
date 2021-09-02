/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/awstransfer/model/EfsFileLocation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Transfer
{
namespace Model
{

EfsFileLocation::EfsFileLocation() : 
    m_fileSystemIdHasBeenSet(false),
    m_pathHasBeenSet(false)
{
}

EfsFileLocation::EfsFileLocation(JsonView jsonValue) : 
    m_fileSystemIdHasBeenSet(false),
    m_pathHasBeenSet(false)
{
  *this = jsonValue;
}

EfsFileLocation& EfsFileLocation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FileSystemId"))
  {
    m_fileSystemId = jsonValue.GetString("FileSystemId");

    m_fileSystemIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Path"))
  {
    m_path = jsonValue.GetString("Path");

    m_pathHasBeenSet = true;
  }

  return *this;
}

JsonValue EfsFileLocation::Jsonize() const
{
  JsonValue payload;

  if(m_fileSystemIdHasBeenSet)
  {
   payload.WithString("FileSystemId", m_fileSystemId);

  }

  if(m_pathHasBeenSet)
  {
   payload.WithString("Path", m_path);

  }

  return payload;
}

} // namespace Model
} // namespace Transfer
} // namespace Aws
