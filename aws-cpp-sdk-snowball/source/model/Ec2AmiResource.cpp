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

#include <aws/snowball/model/Ec2AmiResource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Snowball
{
namespace Model
{

Ec2AmiResource::Ec2AmiResource() : 
    m_amiIdHasBeenSet(false),
    m_snowballAmiIdHasBeenSet(false)
{
}

Ec2AmiResource::Ec2AmiResource(JsonView jsonValue) : 
    m_amiIdHasBeenSet(false),
    m_snowballAmiIdHasBeenSet(false)
{
  *this = jsonValue;
}

Ec2AmiResource& Ec2AmiResource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AmiId"))
  {
    m_amiId = jsonValue.GetString("AmiId");

    m_amiIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SnowballAmiId"))
  {
    m_snowballAmiId = jsonValue.GetString("SnowballAmiId");

    m_snowballAmiIdHasBeenSet = true;
  }

  return *this;
}

JsonValue Ec2AmiResource::Jsonize() const
{
  JsonValue payload;

  if(m_amiIdHasBeenSet)
  {
   payload.WithString("AmiId", m_amiId);

  }

  if(m_snowballAmiIdHasBeenSet)
  {
   payload.WithString("SnowballAmiId", m_snowballAmiId);

  }

  return payload;
}

} // namespace Model
} // namespace Snowball
} // namespace Aws
