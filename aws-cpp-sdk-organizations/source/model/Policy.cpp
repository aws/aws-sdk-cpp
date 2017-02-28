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
#include <aws/organizations/model/Policy.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Organizations
{
namespace Model
{

Policy::Policy() : 
    m_policySummaryHasBeenSet(false),
    m_contentHasBeenSet(false)
{
}

Policy::Policy(const JsonValue& jsonValue) : 
    m_policySummaryHasBeenSet(false),
    m_contentHasBeenSet(false)
{
  *this = jsonValue;
}

Policy& Policy::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("PolicySummary"))
  {
    m_policySummary = jsonValue.GetObject("PolicySummary");

    m_policySummaryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Content"))
  {
    m_content = jsonValue.GetString("Content");

    m_contentHasBeenSet = true;
  }

  return *this;
}

JsonValue Policy::Jsonize() const
{
  JsonValue payload;

  if(m_policySummaryHasBeenSet)
  {
   payload.WithObject("PolicySummary", m_policySummary.Jsonize());

  }

  if(m_contentHasBeenSet)
  {
   payload.WithString("Content", m_content);

  }

  return payload;
}

} // namespace Model
} // namespace Organizations
} // namespace Aws