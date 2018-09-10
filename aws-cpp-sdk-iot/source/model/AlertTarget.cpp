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

#include <aws/iot/model/AlertTarget.h>
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

AlertTarget::AlertTarget() : 
    m_alertTargetArnHasBeenSet(false),
    m_roleArnHasBeenSet(false)
{
}

AlertTarget::AlertTarget(JsonView jsonValue) : 
    m_alertTargetArnHasBeenSet(false),
    m_roleArnHasBeenSet(false)
{
  *this = jsonValue;
}

AlertTarget& AlertTarget::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("alertTargetArn"))
  {
    m_alertTargetArn = jsonValue.GetString("alertTargetArn");

    m_alertTargetArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");

    m_roleArnHasBeenSet = true;
  }

  return *this;
}

JsonValue AlertTarget::Jsonize() const
{
  JsonValue payload;

  if(m_alertTargetArnHasBeenSet)
  {
   payload.WithString("alertTargetArn", m_alertTargetArn);

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
