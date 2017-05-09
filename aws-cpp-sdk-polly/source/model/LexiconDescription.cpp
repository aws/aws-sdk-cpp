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

#include <aws/polly/model/LexiconDescription.h>
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

LexiconDescription::LexiconDescription() : 
    m_nameHasBeenSet(false),
    m_attributesHasBeenSet(false)
{
}

LexiconDescription::LexiconDescription(const JsonValue& jsonValue) : 
    m_nameHasBeenSet(false),
    m_attributesHasBeenSet(false)
{
  *this = jsonValue;
}

LexiconDescription& LexiconDescription::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Attributes"))
  {
    m_attributes = jsonValue.GetObject("Attributes");

    m_attributesHasBeenSet = true;
  }

  return *this;
}

JsonValue LexiconDescription::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_attributesHasBeenSet)
  {
   payload.WithObject("Attributes", m_attributes.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Polly
} // namespace Aws