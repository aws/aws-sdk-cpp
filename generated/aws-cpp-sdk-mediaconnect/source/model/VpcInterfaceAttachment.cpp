/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconnect/model/VpcInterfaceAttachment.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaConnect
{
namespace Model
{

VpcInterfaceAttachment::VpcInterfaceAttachment() : 
    m_vpcInterfaceNameHasBeenSet(false)
{
}

VpcInterfaceAttachment::VpcInterfaceAttachment(JsonView jsonValue) : 
    m_vpcInterfaceNameHasBeenSet(false)
{
  *this = jsonValue;
}

VpcInterfaceAttachment& VpcInterfaceAttachment::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("vpcInterfaceName"))
  {
    m_vpcInterfaceName = jsonValue.GetString("vpcInterfaceName");

    m_vpcInterfaceNameHasBeenSet = true;
  }

  return *this;
}

JsonValue VpcInterfaceAttachment::Jsonize() const
{
  JsonValue payload;

  if(m_vpcInterfaceNameHasBeenSet)
  {
   payload.WithString("vpcInterfaceName", m_vpcInterfaceName);

  }

  return payload;
}

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
