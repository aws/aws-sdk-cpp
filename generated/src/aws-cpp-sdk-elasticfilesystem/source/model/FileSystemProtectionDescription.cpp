/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticfilesystem/model/FileSystemProtectionDescription.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EFS
{
namespace Model
{

FileSystemProtectionDescription::FileSystemProtectionDescription() : 
    m_replicationOverwriteProtection(ReplicationOverwriteProtection::NOT_SET),
    m_replicationOverwriteProtectionHasBeenSet(false),
    m_requestIdHasBeenSet(false)
{
}

FileSystemProtectionDescription::FileSystemProtectionDescription(JsonView jsonValue) : 
    m_replicationOverwriteProtection(ReplicationOverwriteProtection::NOT_SET),
    m_replicationOverwriteProtectionHasBeenSet(false),
    m_requestIdHasBeenSet(false)
{
  *this = jsonValue;
}

FileSystemProtectionDescription& FileSystemProtectionDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ReplicationOverwriteProtection"))
  {
    m_replicationOverwriteProtection = ReplicationOverwriteProtectionMapper::GetReplicationOverwriteProtectionForName(jsonValue.GetString("ReplicationOverwriteProtection"));

    m_replicationOverwriteProtectionHasBeenSet = true;
  }

  return *this;
}

JsonValue FileSystemProtectionDescription::Jsonize() const
{
  JsonValue payload;

  if(m_replicationOverwriteProtectionHasBeenSet)
  {
   payload.WithString("ReplicationOverwriteProtection", ReplicationOverwriteProtectionMapper::GetNameForReplicationOverwriteProtection(m_replicationOverwriteProtection));
  }

  return payload;
}

} // namespace Model
} // namespace EFS
} // namespace Aws
