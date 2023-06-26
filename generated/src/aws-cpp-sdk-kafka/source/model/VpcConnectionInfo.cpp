/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafka/model/VpcConnectionInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Kafka
{
namespace Model
{

VpcConnectionInfo::VpcConnectionInfo() : 
    m_vpcConnectionArnHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_userIdentityHasBeenSet(false),
    m_creationTimeHasBeenSet(false)
{
}

VpcConnectionInfo::VpcConnectionInfo(JsonView jsonValue) : 
    m_vpcConnectionArnHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_userIdentityHasBeenSet(false),
    m_creationTimeHasBeenSet(false)
{
  *this = jsonValue;
}

VpcConnectionInfo& VpcConnectionInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("vpcConnectionArn"))
  {
    m_vpcConnectionArn = jsonValue.GetString("vpcConnectionArn");

    m_vpcConnectionArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("owner"))
  {
    m_owner = jsonValue.GetString("owner");

    m_ownerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("userIdentity"))
  {
    m_userIdentity = jsonValue.GetObject("userIdentity");

    m_userIdentityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetString("creationTime");

    m_creationTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue VpcConnectionInfo::Jsonize() const
{
  JsonValue payload;

  if(m_vpcConnectionArnHasBeenSet)
  {
   payload.WithString("vpcConnectionArn", m_vpcConnectionArn);

  }

  if(m_ownerHasBeenSet)
  {
   payload.WithString("owner", m_owner);

  }

  if(m_userIdentityHasBeenSet)
  {
   payload.WithObject("userIdentity", m_userIdentity.Jsonize());

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithString("creationTime", m_creationTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

} // namespace Model
} // namespace Kafka
} // namespace Aws
