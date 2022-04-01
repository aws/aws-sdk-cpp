/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devicefarm/model/TestGridSession.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DeviceFarm
{
namespace Model
{

TestGridSession::TestGridSession() : 
    m_arnHasBeenSet(false),
    m_status(TestGridSessionStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_createdHasBeenSet(false),
    m_endedHasBeenSet(false),
    m_billingMinutes(0.0),
    m_billingMinutesHasBeenSet(false),
    m_seleniumPropertiesHasBeenSet(false)
{
}

TestGridSession::TestGridSession(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_status(TestGridSessionStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_createdHasBeenSet(false),
    m_endedHasBeenSet(false),
    m_billingMinutes(0.0),
    m_billingMinutesHasBeenSet(false),
    m_seleniumPropertiesHasBeenSet(false)
{
  *this = jsonValue;
}

TestGridSession& TestGridSession::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = TestGridSessionStatusMapper::GetTestGridSessionStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("created"))
  {
    m_created = jsonValue.GetDouble("created");

    m_createdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ended"))
  {
    m_ended = jsonValue.GetDouble("ended");

    m_endedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("billingMinutes"))
  {
    m_billingMinutes = jsonValue.GetDouble("billingMinutes");

    m_billingMinutesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("seleniumProperties"))
  {
    m_seleniumProperties = jsonValue.GetString("seleniumProperties");

    m_seleniumPropertiesHasBeenSet = true;
  }

  return *this;
}

JsonValue TestGridSession::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", TestGridSessionStatusMapper::GetNameForTestGridSessionStatus(m_status));
  }

  if(m_createdHasBeenSet)
  {
   payload.WithDouble("created", m_created.SecondsWithMSPrecision());
  }

  if(m_endedHasBeenSet)
  {
   payload.WithDouble("ended", m_ended.SecondsWithMSPrecision());
  }

  if(m_billingMinutesHasBeenSet)
  {
   payload.WithDouble("billingMinutes", m_billingMinutes);

  }

  if(m_seleniumPropertiesHasBeenSet)
  {
   payload.WithString("seleniumProperties", m_seleniumProperties);

  }

  return payload;
}

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
