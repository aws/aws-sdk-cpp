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

#include <aws/xray/model/SamplingRuleRecord.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace XRay
{
namespace Model
{

SamplingRuleRecord::SamplingRuleRecord() : 
    m_samplingRuleHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_modifiedAtHasBeenSet(false)
{
}

SamplingRuleRecord::SamplingRuleRecord(JsonView jsonValue) : 
    m_samplingRuleHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_modifiedAtHasBeenSet(false)
{
  *this = jsonValue;
}

SamplingRuleRecord& SamplingRuleRecord::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SamplingRule"))
  {
    m_samplingRule = jsonValue.GetObject("SamplingRule");

    m_samplingRuleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetDouble("CreatedAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ModifiedAt"))
  {
    m_modifiedAt = jsonValue.GetDouble("ModifiedAt");

    m_modifiedAtHasBeenSet = true;
  }

  return *this;
}

JsonValue SamplingRuleRecord::Jsonize() const
{
  JsonValue payload;

  if(m_samplingRuleHasBeenSet)
  {
   payload.WithObject("SamplingRule", m_samplingRule.Jsonize());

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("CreatedAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_modifiedAtHasBeenSet)
  {
   payload.WithDouble("ModifiedAt", m_modifiedAt.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace XRay
} // namespace Aws
