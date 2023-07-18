/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/FsxProtocolNfs.h>
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

FsxProtocolNfs::FsxProtocolNfs() : 
    m_mountOptionsHasBeenSet(false)
{
}

FsxProtocolNfs::FsxProtocolNfs(JsonView jsonValue) : 
    m_mountOptionsHasBeenSet(false)
{
  *this = jsonValue;
}

FsxProtocolNfs& FsxProtocolNfs::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MountOptions"))
  {
    m_mountOptions = jsonValue.GetObject("MountOptions");

    m_mountOptionsHasBeenSet = true;
  }

  return *this;
}

JsonValue FsxProtocolNfs::Jsonize() const
{
  JsonValue payload;

  if(m_mountOptionsHasBeenSet)
  {
   payload.WithObject("MountOptions", m_mountOptions.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace DataSync
} // namespace Aws
