/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mturk-requester/model/Qualification.h>
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

Qualification::Qualification() : 
    m_qualificationTypeIdHasBeenSet(false),
    m_workerIdHasBeenSet(false),
    m_grantTimeHasBeenSet(false),
    m_integerValue(0),
    m_integerValueHasBeenSet(false),
    m_localeValueHasBeenSet(false),
    m_status(QualificationStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

Qualification::Qualification(JsonView jsonValue) : 
    m_qualificationTypeIdHasBeenSet(false),
    m_workerIdHasBeenSet(false),
    m_grantTimeHasBeenSet(false),
    m_integerValue(0),
    m_integerValueHasBeenSet(false),
    m_localeValueHasBeenSet(false),
    m_status(QualificationStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

Qualification& Qualification::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("QualificationTypeId"))
  {
    m_qualificationTypeId = jsonValue.GetString("QualificationTypeId");

    m_qualificationTypeIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WorkerId"))
  {
    m_workerId = jsonValue.GetString("WorkerId");

    m_workerIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("GrantTime"))
  {
    m_grantTime = jsonValue.GetDouble("GrantTime");

    m_grantTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IntegerValue"))
  {
    m_integerValue = jsonValue.GetInteger("IntegerValue");

    m_integerValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LocaleValue"))
  {
    m_localeValue = jsonValue.GetObject("LocaleValue");

    m_localeValueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = QualificationStatusMapper::GetQualificationStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue Qualification::Jsonize() const
{
  JsonValue payload;

  if(m_qualificationTypeIdHasBeenSet)
  {
   payload.WithString("QualificationTypeId", m_qualificationTypeId);

  }

  if(m_workerIdHasBeenSet)
  {
   payload.WithString("WorkerId", m_workerId);

  }

  if(m_grantTimeHasBeenSet)
  {
   payload.WithDouble("GrantTime", m_grantTime.SecondsWithMSPrecision());
  }

  if(m_integerValueHasBeenSet)
  {
   payload.WithInteger("IntegerValue", m_integerValue);

  }

  if(m_localeValueHasBeenSet)
  {
   payload.WithObject("LocaleValue", m_localeValue.Jsonize());

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", QualificationStatusMapper::GetNameForQualificationStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace MTurk
} // namespace Aws
