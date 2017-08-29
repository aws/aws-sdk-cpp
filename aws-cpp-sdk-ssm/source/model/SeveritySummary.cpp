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

#include <aws/ssm/model/SeveritySummary.h>
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

SeveritySummary::SeveritySummary() : 
    m_criticalCount(0),
    m_criticalCountHasBeenSet(false),
    m_highCount(0),
    m_highCountHasBeenSet(false),
    m_mediumCount(0),
    m_mediumCountHasBeenSet(false),
    m_lowCount(0),
    m_lowCountHasBeenSet(false),
    m_informationalCount(0),
    m_informationalCountHasBeenSet(false),
    m_unspecifiedCount(0),
    m_unspecifiedCountHasBeenSet(false)
{
}

SeveritySummary::SeveritySummary(const JsonValue& jsonValue) : 
    m_criticalCount(0),
    m_criticalCountHasBeenSet(false),
    m_highCount(0),
    m_highCountHasBeenSet(false),
    m_mediumCount(0),
    m_mediumCountHasBeenSet(false),
    m_lowCount(0),
    m_lowCountHasBeenSet(false),
    m_informationalCount(0),
    m_informationalCountHasBeenSet(false),
    m_unspecifiedCount(0),
    m_unspecifiedCountHasBeenSet(false)
{
  *this = jsonValue;
}

SeveritySummary& SeveritySummary::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("CriticalCount"))
  {
    m_criticalCount = jsonValue.GetInteger("CriticalCount");

    m_criticalCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HighCount"))
  {
    m_highCount = jsonValue.GetInteger("HighCount");

    m_highCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MediumCount"))
  {
    m_mediumCount = jsonValue.GetInteger("MediumCount");

    m_mediumCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LowCount"))
  {
    m_lowCount = jsonValue.GetInteger("LowCount");

    m_lowCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InformationalCount"))
  {
    m_informationalCount = jsonValue.GetInteger("InformationalCount");

    m_informationalCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UnspecifiedCount"))
  {
    m_unspecifiedCount = jsonValue.GetInteger("UnspecifiedCount");

    m_unspecifiedCountHasBeenSet = true;
  }

  return *this;
}

JsonValue SeveritySummary::Jsonize() const
{
  JsonValue payload;

  if(m_criticalCountHasBeenSet)
  {
   payload.WithInteger("CriticalCount", m_criticalCount);

  }

  if(m_highCountHasBeenSet)
  {
   payload.WithInteger("HighCount", m_highCount);

  }

  if(m_mediumCountHasBeenSet)
  {
   payload.WithInteger("MediumCount", m_mediumCount);

  }

  if(m_lowCountHasBeenSet)
  {
   payload.WithInteger("LowCount", m_lowCount);

  }

  if(m_informationalCountHasBeenSet)
  {
   payload.WithInteger("InformationalCount", m_informationalCount);

  }

  if(m_unspecifiedCountHasBeenSet)
  {
   payload.WithInteger("UnspecifiedCount", m_unspecifiedCount);

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws
