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

#include <aws/cloud9/model/Environment.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Cloud9
{
namespace Model
{

Environment::Environment() : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_type(EnvironmentType::NOT_SET),
    m_typeHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_ownerArnHasBeenSet(false),
    m_lifecycleHasBeenSet(false)
{
}

Environment::Environment(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_type(EnvironmentType::NOT_SET),
    m_typeHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_ownerArnHasBeenSet(false),
    m_lifecycleHasBeenSet(false)
{
  *this = jsonValue;
}

Environment& Environment::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = EnvironmentTypeMapper::GetEnvironmentTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ownerArn"))
  {
    m_ownerArn = jsonValue.GetString("ownerArn");

    m_ownerArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lifecycle"))
  {
    m_lifecycle = jsonValue.GetObject("lifecycle");

    m_lifecycleHasBeenSet = true;
  }

  return *this;
}

JsonValue Environment::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", EnvironmentTypeMapper::GetNameForEnvironmentType(m_type));
  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_ownerArnHasBeenSet)
  {
   payload.WithString("ownerArn", m_ownerArn);

  }

  if(m_lifecycleHasBeenSet)
  {
   payload.WithObject("lifecycle", m_lifecycle.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Cloud9
} // namespace Aws
