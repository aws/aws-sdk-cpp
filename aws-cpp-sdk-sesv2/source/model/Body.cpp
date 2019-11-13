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

#include <aws/sesv2/model/Body.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SESV2
{
namespace Model
{

Body::Body() : 
    m_textHasBeenSet(false),
    m_htmlHasBeenSet(false)
{
}

Body::Body(JsonView jsonValue) : 
    m_textHasBeenSet(false),
    m_htmlHasBeenSet(false)
{
  *this = jsonValue;
}

Body& Body::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Text"))
  {
    m_text = jsonValue.GetObject("Text");

    m_textHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Html"))
  {
    m_html = jsonValue.GetObject("Html");

    m_htmlHasBeenSet = true;
  }

  return *this;
}

JsonValue Body::Jsonize() const
{
  JsonValue payload;

  if(m_textHasBeenSet)
  {
   payload.WithObject("Text", m_text.Jsonize());

  }

  if(m_htmlHasBeenSet)
  {
   payload.WithObject("Html", m_html.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SESV2
} // namespace Aws
