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

#include <aws/ssm/model/Session.h>
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

Session::Session() : 
    m_sessionIdHasBeenSet(false),
    m_targetHasBeenSet(false),
    m_status(SessionStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_startDateHasBeenSet(false),
    m_endDateHasBeenSet(false),
    m_documentNameHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_detailsHasBeenSet(false),
    m_outputUrlHasBeenSet(false)
{
}

Session::Session(JsonView jsonValue) : 
    m_sessionIdHasBeenSet(false),
    m_targetHasBeenSet(false),
    m_status(SessionStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_startDateHasBeenSet(false),
    m_endDateHasBeenSet(false),
    m_documentNameHasBeenSet(false),
    m_ownerHasBeenSet(false),
    m_detailsHasBeenSet(false),
    m_outputUrlHasBeenSet(false)
{
  *this = jsonValue;
}

Session& Session::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SessionId"))
  {
    m_sessionId = jsonValue.GetString("SessionId");

    m_sessionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Target"))
  {
    m_target = jsonValue.GetString("Target");

    m_targetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = SessionStatusMapper::GetSessionStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StartDate"))
  {
    m_startDate = jsonValue.GetDouble("StartDate");

    m_startDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndDate"))
  {
    m_endDate = jsonValue.GetDouble("EndDate");

    m_endDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DocumentName"))
  {
    m_documentName = jsonValue.GetString("DocumentName");

    m_documentNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Owner"))
  {
    m_owner = jsonValue.GetString("Owner");

    m_ownerHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Details"))
  {
    m_details = jsonValue.GetString("Details");

    m_detailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OutputUrl"))
  {
    m_outputUrl = jsonValue.GetObject("OutputUrl");

    m_outputUrlHasBeenSet = true;
  }

  return *this;
}

JsonValue Session::Jsonize() const
{
  JsonValue payload;

  if(m_sessionIdHasBeenSet)
  {
   payload.WithString("SessionId", m_sessionId);

  }

  if(m_targetHasBeenSet)
  {
   payload.WithString("Target", m_target);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", SessionStatusMapper::GetNameForSessionStatus(m_status));
  }

  if(m_startDateHasBeenSet)
  {
   payload.WithDouble("StartDate", m_startDate.SecondsWithMSPrecision());
  }

  if(m_endDateHasBeenSet)
  {
   payload.WithDouble("EndDate", m_endDate.SecondsWithMSPrecision());
  }

  if(m_documentNameHasBeenSet)
  {
   payload.WithString("DocumentName", m_documentName);

  }

  if(m_ownerHasBeenSet)
  {
   payload.WithString("Owner", m_owner);

  }

  if(m_detailsHasBeenSet)
  {
   payload.WithString("Details", m_details);

  }

  if(m_outputUrlHasBeenSet)
  {
   payload.WithObject("OutputUrl", m_outputUrl.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws
