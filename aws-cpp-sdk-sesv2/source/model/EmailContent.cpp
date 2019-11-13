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

#include <aws/sesv2/model/EmailContent.h>
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

EmailContent::EmailContent() : 
    m_simpleHasBeenSet(false),
    m_rawHasBeenSet(false),
    m_templateHasBeenSet(false)
{
}

EmailContent::EmailContent(JsonView jsonValue) : 
    m_simpleHasBeenSet(false),
    m_rawHasBeenSet(false),
    m_templateHasBeenSet(false)
{
  *this = jsonValue;
}

EmailContent& EmailContent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Simple"))
  {
    m_simple = jsonValue.GetObject("Simple");

    m_simpleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Raw"))
  {
    m_raw = jsonValue.GetObject("Raw");

    m_rawHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Template"))
  {
    m_template = jsonValue.GetObject("Template");

    m_templateHasBeenSet = true;
  }

  return *this;
}

JsonValue EmailContent::Jsonize() const
{
  JsonValue payload;

  if(m_simpleHasBeenSet)
  {
   payload.WithObject("Simple", m_simple.Jsonize());

  }

  if(m_rawHasBeenSet)
  {
   payload.WithObject("Raw", m_raw.Jsonize());

  }

  if(m_templateHasBeenSet)
  {
   payload.WithObject("Template", m_template.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SESV2
} // namespace Aws
