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

#include <aws/ssm/model/CompliantSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSM
{
namespace Model
{

CompliantSummary::CompliantSummary() : 
    m_compliantCount(0),
    m_compliantCountHasBeenSet(false),
    m_severitySummaryHasBeenSet(false)
{
}

CompliantSummary::CompliantSummary(const JsonValue& jsonValue) : 
    m_compliantCount(0),
    m_compliantCountHasBeenSet(false),
    m_severitySummaryHasBeenSet(false)
{
  *this = jsonValue;
}

CompliantSummary& CompliantSummary::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("CompliantCount"))
  {
    m_compliantCount = jsonValue.GetInteger("CompliantCount");

    m_compliantCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SeveritySummary"))
  {
    m_severitySummary = jsonValue.GetObject("SeveritySummary");

    m_severitySummaryHasBeenSet = true;
  }

  return *this;
}

JsonValue CompliantSummary::Jsonize() const
{
  JsonValue payload;

  if(m_compliantCountHasBeenSet)
  {
   payload.WithInteger("CompliantCount", m_compliantCount);

  }

  if(m_severitySummaryHasBeenSet)
  {
   payload.WithObject("SeveritySummary", m_severitySummary.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws
