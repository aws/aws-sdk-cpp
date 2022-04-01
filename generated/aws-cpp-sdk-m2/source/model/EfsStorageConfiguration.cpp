/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/m2/model/EfsStorageConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MainframeModernization
{
namespace Model
{

EfsStorageConfiguration::EfsStorageConfiguration() : 
    m_fileSystemIdHasBeenSet(false),
    m_mountPointHasBeenSet(false)
{
}

EfsStorageConfiguration::EfsStorageConfiguration(JsonView jsonValue) : 
    m_fileSystemIdHasBeenSet(false),
    m_mountPointHasBeenSet(false)
{
  *this = jsonValue;
}

EfsStorageConfiguration& EfsStorageConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("file-system-id"))
  {
    m_fileSystemId = jsonValue.GetString("file-system-id");

    m_fileSystemIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("mount-point"))
  {
    m_mountPoint = jsonValue.GetString("mount-point");

    m_mountPointHasBeenSet = true;
  }

  return *this;
}

JsonValue EfsStorageConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_fileSystemIdHasBeenSet)
  {
   payload.WithString("file-system-id", m_fileSystemId);

  }

  if(m_mountPointHasBeenSet)
  {
   payload.WithString("mount-point", m_mountPoint);

  }

  return payload;
}

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
