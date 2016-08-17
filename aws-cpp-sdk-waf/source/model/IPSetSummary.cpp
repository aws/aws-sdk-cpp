/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/waf/model/IPSetSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WAF
{
namespace Model
{

IPSetSummary::IPSetSummary() : 
    m_iPSetIdHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

IPSetSummary::IPSetSummary(const JsonValue& jsonValue) : 
    m_iPSetIdHasBeenSet(false),
    m_nameHasBeenSet(false)
{
  *this = jsonValue;
}

IPSetSummary& IPSetSummary::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("IPSetId"))
  {
    m_iPSetId = jsonValue.GetString("IPSetId");

    m_iPSetIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  return *this;
}

JsonValue IPSetSummary::Jsonize() const
{
  JsonValue payload;

  if(m_iPSetIdHasBeenSet)
  {
   payload.WithString("IPSetId", m_iPSetId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  return payload;
}

} // namespace Model
} // namespace WAF
} // namespace Aws