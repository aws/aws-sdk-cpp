/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/S3DestinationAccessControl.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaConvert
{
namespace Model
{

S3DestinationAccessControl::S3DestinationAccessControl() : 
    m_cannedAcl(S3ObjectCannedAcl::NOT_SET),
    m_cannedAclHasBeenSet(false)
{
}

S3DestinationAccessControl::S3DestinationAccessControl(JsonView jsonValue) : 
    m_cannedAcl(S3ObjectCannedAcl::NOT_SET),
    m_cannedAclHasBeenSet(false)
{
  *this = jsonValue;
}

S3DestinationAccessControl& S3DestinationAccessControl::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("cannedAcl"))
  {
    m_cannedAcl = S3ObjectCannedAclMapper::GetS3ObjectCannedAclForName(jsonValue.GetString("cannedAcl"));

    m_cannedAclHasBeenSet = true;
  }

  return *this;
}

JsonValue S3DestinationAccessControl::Jsonize() const
{
  JsonValue payload;

  if(m_cannedAclHasBeenSet)
  {
   payload.WithString("cannedAcl", S3ObjectCannedAclMapper::GetNameForS3ObjectCannedAcl(m_cannedAcl));
  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
