﻿/*
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

#include <aws/mturk-requester/model/QualificationRequirement.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MTurk
{
namespace Model
{

QualificationRequirement::QualificationRequirement() : 
    m_qualificationTypeIdHasBeenSet(false),
    m_comparator(Comparator::NOT_SET),
    m_comparatorHasBeenSet(false),
    m_integerValuesHasBeenSet(false),
    m_localeValuesHasBeenSet(false),
    m_actionsGuarded(HITAccessActions::NOT_SET),
    m_actionsGuardedHasBeenSet(false)
{
}

QualificationRequirement::QualificationRequirement(JsonView jsonValue) : 
    m_qualificationTypeIdHasBeenSet(false),
    m_comparator(Comparator::NOT_SET),
    m_comparatorHasBeenSet(false),
    m_integerValuesHasBeenSet(false),
    m_localeValuesHasBeenSet(false),
    m_actionsGuarded(HITAccessActions::NOT_SET),
    m_actionsGuardedHasBeenSet(false)
{
  *this = jsonValue;
}

QualificationRequirement& QualificationRequirement::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("QualificationTypeId"))
  {
    m_qualificationTypeId = jsonValue.GetString("QualificationTypeId");

    m_qualificationTypeIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Comparator"))
  {
    m_comparator = ComparatorMapper::GetComparatorForName(jsonValue.GetString("Comparator"));

    m_comparatorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IntegerValues"))
  {
    Array<JsonView> integerValuesJsonList = jsonValue.GetArray("IntegerValues");
    for(unsigned integerValuesIndex = 0; integerValuesIndex < integerValuesJsonList.GetLength(); ++integerValuesIndex)
    {
      m_integerValues.push_back(integerValuesJsonList[integerValuesIndex].AsInteger());
    }
    m_integerValuesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LocaleValues"))
  {
    Array<JsonView> localeValuesJsonList = jsonValue.GetArray("LocaleValues");
    for(unsigned localeValuesIndex = 0; localeValuesIndex < localeValuesJsonList.GetLength(); ++localeValuesIndex)
    {
      m_localeValues.push_back(localeValuesJsonList[localeValuesIndex].AsObject());
    }
    m_localeValuesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ActionsGuarded"))
  {
    m_actionsGuarded = HITAccessActionsMapper::GetHITAccessActionsForName(jsonValue.GetString("ActionsGuarded"));

    m_actionsGuardedHasBeenSet = true;
  }

  return *this;
}

JsonValue QualificationRequirement::Jsonize() const
{
  JsonValue payload;

  if(m_qualificationTypeIdHasBeenSet)
  {
   payload.WithString("QualificationTypeId", m_qualificationTypeId);

  }

  if(m_comparatorHasBeenSet)
  {
   payload.WithString("Comparator", ComparatorMapper::GetNameForComparator(m_comparator));
  }

  if(m_integerValuesHasBeenSet)
  {
   Array<JsonValue> integerValuesJsonList(m_integerValues.size());
   for(unsigned integerValuesIndex = 0; integerValuesIndex < integerValuesJsonList.GetLength(); ++integerValuesIndex)
   {
     integerValuesJsonList[integerValuesIndex].AsInteger(m_integerValues[integerValuesIndex]);
   }
   payload.WithArray("IntegerValues", std::move(integerValuesJsonList));

  }

  if(m_localeValuesHasBeenSet)
  {
   Array<JsonValue> localeValuesJsonList(m_localeValues.size());
   for(unsigned localeValuesIndex = 0; localeValuesIndex < localeValuesJsonList.GetLength(); ++localeValuesIndex)
   {
     localeValuesJsonList[localeValuesIndex].AsObject(m_localeValues[localeValuesIndex].Jsonize());
   }
   payload.WithArray("LocaleValues", std::move(localeValuesJsonList));

  }

  if(m_actionsGuardedHasBeenSet)
  {
   payload.WithString("ActionsGuarded", HITAccessActionsMapper::GetNameForHITAccessActions(m_actionsGuarded));
  }

  return payload;
}

} // namespace Model
} // namespace MTurk
} // namespace Aws
