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

#include <aws/polly/model/Lexicon.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Polly
{
namespace Model
{

Lexicon::Lexicon() : 
    m_contentHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

Lexicon::Lexicon(const JsonValue& jsonValue) : 
    m_contentHasBeenSet(false),
    m_nameHasBeenSet(false)
{
  *this = jsonValue;
}

Lexicon& Lexicon::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Content"))
  {
    m_content = jsonValue.GetString("Content");

    m_contentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  return *this;
}

JsonValue Lexicon::Jsonize() const
{
  JsonValue payload;

  if(m_contentHasBeenSet)
  {
   payload.WithString("Content", m_content);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  return payload;
}

} // namespace Model
} // namespace Polly
} // namespace Aws