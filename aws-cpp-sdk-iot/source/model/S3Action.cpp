/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/S3Action.h>
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

S3Action::S3Action() : 
    m_roleArnHasBeenSet(false),
    m_bucketNameHasBeenSet(false),
    m_keyHasBeenSet(false),
    m_cannedAcl(CannedAccessControlList::NOT_SET),
    m_cannedAclHasBeenSet(false)
{
}

S3Action::S3Action(JsonView jsonValue) : 
    m_roleArnHasBeenSet(false),
    m_bucketNameHasBeenSet(false),
    m_keyHasBeenSet(false),
    m_cannedAcl(CannedAccessControlList::NOT_SET),
    m_cannedAclHasBeenSet(false)
{
  *this = jsonValue;
}

S3Action& S3Action::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");

    m_roleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("bucketName"))
  {
    m_bucketName = jsonValue.GetString("bucketName");

    m_bucketNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("key"))
  {
    m_key = jsonValue.GetString("key");

    m_keyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("cannedAcl"))
  {
    m_cannedAcl = CannedAccessControlListMapper::GetCannedAccessControlListForName(jsonValue.GetString("cannedAcl"));

    m_cannedAclHasBeenSet = true;
  }

  return *this;
}

JsonValue S3Action::Jsonize() const
{
  JsonValue payload;

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  if(m_bucketNameHasBeenSet)
  {
   payload.WithString("bucketName", m_bucketName);

  }

  if(m_keyHasBeenSet)
  {
   payload.WithString("key", m_key);

  }

  if(m_cannedAclHasBeenSet)
  {
   payload.WithString("cannedAcl", CannedAccessControlListMapper::GetNameForCannedAccessControlList(m_cannedAcl));
  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
