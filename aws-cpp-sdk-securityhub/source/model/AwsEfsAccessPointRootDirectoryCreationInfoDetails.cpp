/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsEfsAccessPointRootDirectoryCreationInfoDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsEfsAccessPointRootDirectoryCreationInfoDetails::AwsEfsAccessPointRootDirectoryCreationInfoDetails() : 
    m_ownerGidHasBeenSet(false),
    m_ownerUidHasBeenSet(false),
    m_permissionsHasBeenSet(false)
{
}

AwsEfsAccessPointRootDirectoryCreationInfoDetails::AwsEfsAccessPointRootDirectoryCreationInfoDetails(JsonView jsonValue) : 
    m_ownerGidHasBeenSet(false),
    m_ownerUidHasBeenSet(false),
    m_permissionsHasBeenSet(false)
{
  *this = jsonValue;
}

AwsEfsAccessPointRootDirectoryCreationInfoDetails& AwsEfsAccessPointRootDirectoryCreationInfoDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("OwnerGid"))
  {
    m_ownerGid = jsonValue.GetString("OwnerGid");

    m_ownerGidHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OwnerUid"))
  {
    m_ownerUid = jsonValue.GetString("OwnerUid");

    m_ownerUidHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Permissions"))
  {
    m_permissions = jsonValue.GetString("Permissions");

    m_permissionsHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsEfsAccessPointRootDirectoryCreationInfoDetails::Jsonize() const
{
  JsonValue payload;

  if(m_ownerGidHasBeenSet)
  {
   payload.WithString("OwnerGid", m_ownerGid);

  }

  if(m_ownerUidHasBeenSet)
  {
   payload.WithString("OwnerUid", m_ownerUid);

  }

  if(m_permissionsHasBeenSet)
  {
   payload.WithString("Permissions", m_permissions);

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
