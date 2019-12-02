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

#include <aws/imagebuilder/model/Ami.h>
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

Ami::Ami() : 
    m_regionHasBeenSet(false),
    m_imageHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_stateHasBeenSet(false)
{
}

Ami::Ami(JsonView jsonValue) : 
    m_regionHasBeenSet(false),
    m_imageHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_stateHasBeenSet(false)
{
  *this = jsonValue;
}

Ami& Ami::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("region"))
  {
    m_region = jsonValue.GetString("region");

    m_regionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("image"))
  {
    m_image = jsonValue.GetString("image");

    m_imageHasBeenSet = true;
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

  if(jsonValue.ValueExists("state"))
  {
    m_state = jsonValue.GetObject("state");

    m_stateHasBeenSet = true;
  }

  return *this;
}

JsonValue Ami::Jsonize() const
{
  JsonValue payload;

  if(m_regionHasBeenSet)
  {
   payload.WithString("region", m_region);

  }

  if(m_imageHasBeenSet)
  {
   payload.WithString("image", m_image);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithObject("state", m_state.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
