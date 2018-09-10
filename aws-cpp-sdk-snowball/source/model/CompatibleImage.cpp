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

#include <aws/snowball/model/CompatibleImage.h>
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

CompatibleImage::CompatibleImage() : 
    m_amiIdHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

CompatibleImage::CompatibleImage(JsonView jsonValue) : 
    m_amiIdHasBeenSet(false),
    m_nameHasBeenSet(false)
{
  *this = jsonValue;
}

CompatibleImage& CompatibleImage::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AmiId"))
  {
    m_amiId = jsonValue.GetString("AmiId");

    m_amiIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  return *this;
}

JsonValue CompatibleImage::Jsonize() const
{
  JsonValue payload;

  if(m_amiIdHasBeenSet)
  {
   payload.WithString("AmiId", m_amiId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  return payload;
}

} // namespace Model
} // namespace Snowball
} // namespace Aws
