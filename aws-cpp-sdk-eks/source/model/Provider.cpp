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

#include <aws/eks/model/Provider.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EKS
{
namespace Model
{

Provider::Provider() : 
    m_keyArnHasBeenSet(false)
{
}

Provider::Provider(JsonView jsonValue) : 
    m_keyArnHasBeenSet(false)
{
  *this = jsonValue;
}

Provider& Provider::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("keyArn"))
  {
    m_keyArn = jsonValue.GetString("keyArn");

    m_keyArnHasBeenSet = true;
  }

  return *this;
}

JsonValue Provider::Jsonize() const
{
  JsonValue payload;

  if(m_keyArnHasBeenSet)
  {
   payload.WithString("keyArn", m_keyArn);

  }

  return payload;
}

} // namespace Model
} // namespace EKS
} // namespace Aws
