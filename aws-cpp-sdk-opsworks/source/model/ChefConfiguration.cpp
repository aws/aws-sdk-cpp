/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/opsworks/model/ChefConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace OpsWorks
{
namespace Model
{

ChefConfiguration::ChefConfiguration() : 
    m_manageBerkshelf(false),
    m_manageBerkshelfHasBeenSet(false),
    m_berkshelfVersionHasBeenSet(false)
{
}

ChefConfiguration::ChefConfiguration(const JsonValue& jsonValue) : 
    m_manageBerkshelf(false),
    m_manageBerkshelfHasBeenSet(false),
    m_berkshelfVersionHasBeenSet(false)
{
  *this = jsonValue;
}

ChefConfiguration& ChefConfiguration::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("ManageBerkshelf"))
  {
    m_manageBerkshelf = jsonValue.GetBool("ManageBerkshelf");

    m_manageBerkshelfHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BerkshelfVersion"))
  {
    m_berkshelfVersion = jsonValue.GetString("BerkshelfVersion");

    m_berkshelfVersionHasBeenSet = true;
  }

  return *this;
}

JsonValue ChefConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_manageBerkshelfHasBeenSet)
  {
   payload.WithBool("ManageBerkshelf", m_manageBerkshelf);

  }

  if(m_berkshelfVersionHasBeenSet)
  {
   payload.WithString("BerkshelfVersion", m_berkshelfVersion);

  }

  return payload;
}

} // namespace Model
} // namespace OpsWorks
} // namespace Aws