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

#include <aws/imagebuilder/model/ComponentConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace imagebuilder
{
namespace Model
{

ComponentConfiguration::ComponentConfiguration() : 
    m_componentArnHasBeenSet(false)
{
}

ComponentConfiguration::ComponentConfiguration(JsonView jsonValue) : 
    m_componentArnHasBeenSet(false)
{
  *this = jsonValue;
}

ComponentConfiguration& ComponentConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("componentArn"))
  {
    m_componentArn = jsonValue.GetString("componentArn");

    m_componentArnHasBeenSet = true;
  }

  return *this;
}

JsonValue ComponentConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_componentArnHasBeenSet)
  {
   payload.WithString("componentArn", m_componentArn);

  }

  return payload;
}

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
