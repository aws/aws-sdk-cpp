/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafka/model/VpcConnectionInfoServerless.h>
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

VpcConnectionInfoServerless::VpcConnectionInfoServerless() : 
    m_creationTimeHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_userIdentityHasBeenSet(false),
    m_vpcConnectionArnHasBeenSet(false)
{
}

VpcConnectionInfoServerless::VpcConnectionInfoServerless(JsonView jsonValue) : 
    m_creationTimeHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_userIdentityHasBeenSet(false),
    m_vpcConnectionArnHasBeenSet(false)
{
  *this = jsonValue;
}

VpcConnectionInfoServerless& VpcConnectionInfoServerless::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetString("creationTime");

    m_creationTimeHasBeenSet = true;
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

  if(jsonValue.ValueExists("vpcConnectionArn"))
  {
    m_vpcConnectionArn = jsonValue.GetString("vpcConnectionArn");

    m_vpcConnectionArnHasBeenSet = true;
  }

  return *this;
}

JsonValue VpcConnectionInfoServerless::Jsonize() const
{
  JsonValue payload;

  if(m_creationTimeHasBeenSet)
  {
   payload.WithString("creationTime", m_creationTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_ownerHasBeenSet)
  {
   payload.WithString("owner", m_owner);

  }

  if(m_userIdentityHasBeenSet)
  {
   payload.WithObject("userIdentity", m_userIdentity.Jsonize());

  }

  if(m_vpcConnectionArnHasBeenSet)
  {
   payload.WithString("vpcConnectionArn", m_vpcConnectionArn);

  }

  return payload;
}

} // namespace Model
} // namespace Kafka
} // namespace Aws
