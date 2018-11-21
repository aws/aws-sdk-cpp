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

#include <aws/ssm/model/DocumentDefaultVersionDescription.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSM
{
namespace Model
{

DocumentDefaultVersionDescription::DocumentDefaultVersionDescription() : 
    m_nameHasBeenSet(false),
    m_defaultVersionHasBeenSet(false),
    m_defaultVersionNameHasBeenSet(false)
{
}

DocumentDefaultVersionDescription::DocumentDefaultVersionDescription(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_defaultVersionHasBeenSet(false),
    m_defaultVersionNameHasBeenSet(false)
{
  *this = jsonValue;
}

DocumentDefaultVersionDescription& DocumentDefaultVersionDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DefaultVersion"))
  {
    m_defaultVersion = jsonValue.GetString("DefaultVersion");

    m_defaultVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DefaultVersionName"))
  {
    m_defaultVersionName = jsonValue.GetString("DefaultVersionName");

    m_defaultVersionNameHasBeenSet = true;
  }

  return *this;
}

JsonValue DocumentDefaultVersionDescription::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_defaultVersionHasBeenSet)
  {
   payload.WithString("DefaultVersion", m_defaultVersion);

  }

  if(m_defaultVersionNameHasBeenSet)
  {
   payload.WithString("DefaultVersionName", m_defaultVersionName);

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws
