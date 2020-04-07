/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
