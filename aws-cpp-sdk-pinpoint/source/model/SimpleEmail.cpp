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

#include <aws/pinpoint/model/SimpleEmail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

SimpleEmail::SimpleEmail() : 
    m_htmlPartHasBeenSet(false),
    m_subjectHasBeenSet(false),
    m_textPartHasBeenSet(false)
{
}

SimpleEmail::SimpleEmail(JsonView jsonValue) : 
    m_htmlPartHasBeenSet(false),
    m_subjectHasBeenSet(false),
    m_textPartHasBeenSet(false)
{
  *this = jsonValue;
}

SimpleEmail& SimpleEmail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("HtmlPart"))
  {
    m_htmlPart = jsonValue.GetObject("HtmlPart");

    m_htmlPartHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Subject"))
  {
    m_subject = jsonValue.GetObject("Subject");

    m_subjectHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TextPart"))
  {
    m_textPart = jsonValue.GetObject("TextPart");

    m_textPartHasBeenSet = true;
  }

  return *this;
}

JsonValue SimpleEmail::Jsonize() const
{
  JsonValue payload;

  if(m_htmlPartHasBeenSet)
  {
   payload.WithObject("HtmlPart", m_htmlPart.Jsonize());

  }

  if(m_subjectHasBeenSet)
  {
   payload.WithObject("Subject", m_subject.Jsonize());

  }

  if(m_textPartHasBeenSet)
  {
   payload.WithObject("TextPart", m_textPart.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
