/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/FsxUpdateProtocol.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataSync
{
namespace Model
{

FsxUpdateProtocol::FsxUpdateProtocol(JsonView jsonValue)
{
  *this = jsonValue;
}

FsxUpdateProtocol& FsxUpdateProtocol::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("NFS"))
  {
    m_nFS = jsonValue.GetObject("NFS");
    m_nFSHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SMB"))
  {
    m_sMB = jsonValue.GetObject("SMB");
    m_sMBHasBeenSet = true;
  }
  return *this;
}

JsonValue FsxUpdateProtocol::Jsonize() const
{
  JsonValue payload;

  if(m_nFSHasBeenSet)
  {
   payload.WithObject("NFS", m_nFS.Jsonize());

  }

  if(m_sMBHasBeenSet)
  {
   payload.WithObject("SMB", m_sMB.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace DataSync
} // namespace Aws
