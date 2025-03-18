/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/SageMakerEndpoint.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Bedrock
{
namespace Model
{

SageMakerEndpoint::SageMakerEndpoint(JsonView jsonValue)
{
  *this = jsonValue;
}

SageMakerEndpoint& SageMakerEndpoint::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("initialInstanceCount"))
  {
    m_initialInstanceCount = jsonValue.GetInteger("initialInstanceCount");
    m_initialInstanceCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("instanceType"))
  {
    m_instanceType = jsonValue.GetString("instanceType");
    m_instanceTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("executionRole"))
  {
    m_executionRole = jsonValue.GetString("executionRole");
    m_executionRoleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("kmsEncryptionKey"))
  {
    m_kmsEncryptionKey = jsonValue.GetString("kmsEncryptionKey");
    m_kmsEncryptionKeyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("vpc"))
  {
    m_vpc = jsonValue.GetObject("vpc");
    m_vpcHasBeenSet = true;
  }
  return *this;
}

JsonValue SageMakerEndpoint::Jsonize() const
{
  JsonValue payload;

  if(m_initialInstanceCountHasBeenSet)
  {
   payload.WithInteger("initialInstanceCount", m_initialInstanceCount);

  }

  if(m_instanceTypeHasBeenSet)
  {
   payload.WithString("instanceType", m_instanceType);

  }

  if(m_executionRoleHasBeenSet)
  {
   payload.WithString("executionRole", m_executionRole);

  }

  if(m_kmsEncryptionKeyHasBeenSet)
  {
   payload.WithString("kmsEncryptionKey", m_kmsEncryptionKey);

  }

  if(m_vpcHasBeenSet)
  {
   payload.WithObject("vpc", m_vpc.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Bedrock
} // namespace Aws
