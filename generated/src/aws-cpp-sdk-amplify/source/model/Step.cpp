﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplify/model/Step.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Amplify
{
namespace Model
{

Step::Step() : 
    m_stepNameHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_status(JobStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_logUrlHasBeenSet(false),
    m_artifactsUrlHasBeenSet(false),
    m_testArtifactsUrlHasBeenSet(false),
    m_testConfigUrlHasBeenSet(false),
    m_screenshotsHasBeenSet(false),
    m_statusReasonHasBeenSet(false),
    m_contextHasBeenSet(false)
{
}

Step::Step(JsonView jsonValue) : 
    m_stepNameHasBeenSet(false),
    m_startTimeHasBeenSet(false),
    m_status(JobStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_logUrlHasBeenSet(false),
    m_artifactsUrlHasBeenSet(false),
    m_testArtifactsUrlHasBeenSet(false),
    m_testConfigUrlHasBeenSet(false),
    m_screenshotsHasBeenSet(false),
    m_statusReasonHasBeenSet(false),
    m_contextHasBeenSet(false)
{
  *this = jsonValue;
}

Step& Step::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("stepName"))
  {
    m_stepName = jsonValue.GetString("stepName");

    m_stepNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("startTime"))
  {
    m_startTime = jsonValue.GetDouble("startTime");

    m_startTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = JobStatusMapper::GetJobStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("endTime"))
  {
    m_endTime = jsonValue.GetDouble("endTime");

    m_endTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("logUrl"))
  {
    m_logUrl = jsonValue.GetString("logUrl");

    m_logUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("artifactsUrl"))
  {
    m_artifactsUrl = jsonValue.GetString("artifactsUrl");

    m_artifactsUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("testArtifactsUrl"))
  {
    m_testArtifactsUrl = jsonValue.GetString("testArtifactsUrl");

    m_testArtifactsUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("testConfigUrl"))
  {
    m_testConfigUrl = jsonValue.GetString("testConfigUrl");

    m_testConfigUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("screenshots"))
  {
    Aws::Map<Aws::String, JsonView> screenshotsJsonMap = jsonValue.GetObject("screenshots").GetAllObjects();
    for(auto& screenshotsItem : screenshotsJsonMap)
    {
      m_screenshots[screenshotsItem.first] = screenshotsItem.second.AsString();
    }
    m_screenshotsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("statusReason"))
  {
    m_statusReason = jsonValue.GetString("statusReason");

    m_statusReasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("context"))
  {
    m_context = jsonValue.GetString("context");

    m_contextHasBeenSet = true;
  }

  return *this;
}

JsonValue Step::Jsonize() const
{
  JsonValue payload;

  if(m_stepNameHasBeenSet)
  {
   payload.WithString("stepName", m_stepName);

  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithDouble("startTime", m_startTime.SecondsWithMSPrecision());
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", JobStatusMapper::GetNameForJobStatus(m_status));
  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithDouble("endTime", m_endTime.SecondsWithMSPrecision());
  }

  if(m_logUrlHasBeenSet)
  {
   payload.WithString("logUrl", m_logUrl);

  }

  if(m_artifactsUrlHasBeenSet)
  {
   payload.WithString("artifactsUrl", m_artifactsUrl);

  }

  if(m_testArtifactsUrlHasBeenSet)
  {
   payload.WithString("testArtifactsUrl", m_testArtifactsUrl);

  }

  if(m_testConfigUrlHasBeenSet)
  {
   payload.WithString("testConfigUrl", m_testConfigUrl);

  }

  if(m_screenshotsHasBeenSet)
  {
   JsonValue screenshotsJsonMap;
   for(auto& screenshotsItem : m_screenshots)
   {
     screenshotsJsonMap.WithString(screenshotsItem.first, screenshotsItem.second);
   }
   payload.WithObject("screenshots", std::move(screenshotsJsonMap));

  }

  if(m_statusReasonHasBeenSet)
  {
   payload.WithString("statusReason", m_statusReason);

  }

  if(m_contextHasBeenSet)
  {
   payload.WithString("context", m_context);

  }

  return payload;
}

} // namespace Model
} // namespace Amplify
} // namespace Aws
