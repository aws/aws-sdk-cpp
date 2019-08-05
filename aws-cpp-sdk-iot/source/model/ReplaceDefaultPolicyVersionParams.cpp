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

#include <aws/iot/model/ReplaceDefaultPolicyVersionParams.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

ReplaceDefaultPolicyVersionParams::ReplaceDefaultPolicyVersionParams() : 
    m_templateName(PolicyTemplateName::NOT_SET),
    m_templateNameHasBeenSet(false)
{
}

ReplaceDefaultPolicyVersionParams::ReplaceDefaultPolicyVersionParams(JsonView jsonValue) : 
    m_templateName(PolicyTemplateName::NOT_SET),
    m_templateNameHasBeenSet(false)
{
  *this = jsonValue;
}

ReplaceDefaultPolicyVersionParams& ReplaceDefaultPolicyVersionParams::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("templateName"))
  {
    m_templateName = PolicyTemplateNameMapper::GetPolicyTemplateNameForName(jsonValue.GetString("templateName"));

    m_templateNameHasBeenSet = true;
  }

  return *this;
}

JsonValue ReplaceDefaultPolicyVersionParams::Jsonize() const
{
  JsonValue payload;

  if(m_templateNameHasBeenSet)
  {
   payload.WithString("templateName", PolicyTemplateNameMapper::GetNameForPolicyTemplateName(m_templateName));
  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
