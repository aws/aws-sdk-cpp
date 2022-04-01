/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/ArchiveS3Settings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaLive
{
namespace Model
{

ArchiveS3Settings::ArchiveS3Settings() : 
    m_cannedAcl(S3CannedAcl::NOT_SET),
    m_cannedAclHasBeenSet(false)
{
}

ArchiveS3Settings::ArchiveS3Settings(JsonView jsonValue) : 
    m_cannedAcl(S3CannedAcl::NOT_SET),
    m_cannedAclHasBeenSet(false)
{
  *this = jsonValue;
}

ArchiveS3Settings& ArchiveS3Settings::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("cannedAcl"))
  {
    m_cannedAcl = S3CannedAclMapper::GetS3CannedAclForName(jsonValue.GetString("cannedAcl"));

    m_cannedAclHasBeenSet = true;
  }

  return *this;
}

JsonValue ArchiveS3Settings::Jsonize() const
{
  JsonValue payload;

  if(m_cannedAclHasBeenSet)
  {
   payload.WithString("cannedAcl", S3CannedAclMapper::GetNameForS3CannedAcl(m_cannedAcl));
  }

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
