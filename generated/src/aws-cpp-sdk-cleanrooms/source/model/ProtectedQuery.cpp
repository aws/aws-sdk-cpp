/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/ProtectedQuery.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CleanRooms
{
namespace Model
{

ProtectedQuery::ProtectedQuery() : 
    m_idHasBeenSet(false),
    m_membershipIdHasBeenSet(false),
    m_membershipArnHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_sqlParametersHasBeenSet(false),
    m_status(ProtectedQueryStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_resultConfigurationHasBeenSet(false),
    m_statisticsHasBeenSet(false),
    m_resultHasBeenSet(false),
    m_errorHasBeenSet(false),
    m_differentialPrivacyHasBeenSet(false)
{
}

ProtectedQuery::ProtectedQuery(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_membershipIdHasBeenSet(false),
    m_membershipArnHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_sqlParametersHasBeenSet(false),
    m_status(ProtectedQueryStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_resultConfigurationHasBeenSet(false),
    m_statisticsHasBeenSet(false),
    m_resultHasBeenSet(false),
    m_errorHasBeenSet(false),
    m_differentialPrivacyHasBeenSet(false)
{
  *this = jsonValue;
}

ProtectedQuery& ProtectedQuery::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("membershipId"))
  {
    m_membershipId = jsonValue.GetString("membershipId");

    m_membershipIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("membershipArn"))
  {
    m_membershipArn = jsonValue.GetString("membershipArn");

    m_membershipArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createTime"))
  {
    m_createTime = jsonValue.GetDouble("createTime");

    m_createTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sqlParameters"))
  {
    m_sqlParameters = jsonValue.GetObject("sqlParameters");

    m_sqlParametersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = ProtectedQueryStatusMapper::GetProtectedQueryStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resultConfiguration"))
  {
    m_resultConfiguration = jsonValue.GetObject("resultConfiguration");

    m_resultConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("statistics"))
  {
    m_statistics = jsonValue.GetObject("statistics");

    m_statisticsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("result"))
  {
    m_result = jsonValue.GetObject("result");

    m_resultHasBeenSet = true;
  }

  if(jsonValue.ValueExists("error"))
  {
    m_error = jsonValue.GetObject("error");

    m_errorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("differentialPrivacy"))
  {
    m_differentialPrivacy = jsonValue.GetObject("differentialPrivacy");

    m_differentialPrivacyHasBeenSet = true;
  }

  return *this;
}

JsonValue ProtectedQuery::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_membershipIdHasBeenSet)
  {
   payload.WithString("membershipId", m_membershipId);

  }

  if(m_membershipArnHasBeenSet)
  {
   payload.WithString("membershipArn", m_membershipArn);

  }

  if(m_createTimeHasBeenSet)
  {
   payload.WithDouble("createTime", m_createTime.SecondsWithMSPrecision());
  }

  if(m_sqlParametersHasBeenSet)
  {
   payload.WithObject("sqlParameters", m_sqlParameters.Jsonize());

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", ProtectedQueryStatusMapper::GetNameForProtectedQueryStatus(m_status));
  }

  if(m_resultConfigurationHasBeenSet)
  {
   payload.WithObject("resultConfiguration", m_resultConfiguration.Jsonize());

  }

  if(m_statisticsHasBeenSet)
  {
   payload.WithObject("statistics", m_statistics.Jsonize());

  }

  if(m_resultHasBeenSet)
  {
   payload.WithObject("result", m_result.Jsonize());

  }

  if(m_errorHasBeenSet)
  {
   payload.WithObject("error", m_error.Jsonize());

  }

  if(m_differentialPrivacyHasBeenSet)
  {
   payload.WithObject("differentialPrivacy", m_differentialPrivacy.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
