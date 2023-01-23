/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
