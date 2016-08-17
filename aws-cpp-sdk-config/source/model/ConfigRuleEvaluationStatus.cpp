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
#include <aws/config/model/ConfigRuleEvaluationStatus.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ConfigService
{
namespace Model
{

ConfigRuleEvaluationStatus::ConfigRuleEvaluationStatus() : 
    m_configRuleNameHasBeenSet(false),
    m_configRuleArnHasBeenSet(false),
    m_configRuleIdHasBeenSet(false),
    m_lastSuccessfulInvocationTimeHasBeenSet(false),
    m_lastFailedInvocationTimeHasBeenSet(false),
    m_lastSuccessfulEvaluationTimeHasBeenSet(false),
    m_lastFailedEvaluationTimeHasBeenSet(false),
    m_firstActivatedTimeHasBeenSet(false),
    m_lastErrorCodeHasBeenSet(false),
    m_lastErrorMessageHasBeenSet(false),
    m_firstEvaluationStarted(false),
    m_firstEvaluationStartedHasBeenSet(false)
{
}

ConfigRuleEvaluationStatus::ConfigRuleEvaluationStatus(const JsonValue& jsonValue) : 
    m_configRuleNameHasBeenSet(false),
    m_configRuleArnHasBeenSet(false),
    m_configRuleIdHasBeenSet(false),
    m_lastSuccessfulInvocationTimeHasBeenSet(false),
    m_lastFailedInvocationTimeHasBeenSet(false),
    m_lastSuccessfulEvaluationTimeHasBeenSet(false),
    m_lastFailedEvaluationTimeHasBeenSet(false),
    m_firstActivatedTimeHasBeenSet(false),
    m_lastErrorCodeHasBeenSet(false),
    m_lastErrorMessageHasBeenSet(false),
    m_firstEvaluationStarted(false),
    m_firstEvaluationStartedHasBeenSet(false)
{
  *this = jsonValue;
}

ConfigRuleEvaluationStatus& ConfigRuleEvaluationStatus::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("ConfigRuleName"))
  {
    m_configRuleName = jsonValue.GetString("ConfigRuleName");

    m_configRuleNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConfigRuleArn"))
  {
    m_configRuleArn = jsonValue.GetString("ConfigRuleArn");

    m_configRuleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConfigRuleId"))
  {
    m_configRuleId = jsonValue.GetString("ConfigRuleId");

    m_configRuleIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastSuccessfulInvocationTime"))
  {
    m_lastSuccessfulInvocationTime = jsonValue.GetDouble("LastSuccessfulInvocationTime");

    m_lastSuccessfulInvocationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastFailedInvocationTime"))
  {
    m_lastFailedInvocationTime = jsonValue.GetDouble("LastFailedInvocationTime");

    m_lastFailedInvocationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastSuccessfulEvaluationTime"))
  {
    m_lastSuccessfulEvaluationTime = jsonValue.GetDouble("LastSuccessfulEvaluationTime");

    m_lastSuccessfulEvaluationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastFailedEvaluationTime"))
  {
    m_lastFailedEvaluationTime = jsonValue.GetDouble("LastFailedEvaluationTime");

    m_lastFailedEvaluationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FirstActivatedTime"))
  {
    m_firstActivatedTime = jsonValue.GetDouble("FirstActivatedTime");

    m_firstActivatedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastErrorCode"))
  {
    m_lastErrorCode = jsonValue.GetString("LastErrorCode");

    m_lastErrorCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastErrorMessage"))
  {
    m_lastErrorMessage = jsonValue.GetString("LastErrorMessage");

    m_lastErrorMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FirstEvaluationStarted"))
  {
    m_firstEvaluationStarted = jsonValue.GetBool("FirstEvaluationStarted");

    m_firstEvaluationStartedHasBeenSet = true;
  }

  return *this;
}

JsonValue ConfigRuleEvaluationStatus::Jsonize() const
{
  JsonValue payload;

  if(m_configRuleNameHasBeenSet)
  {
   payload.WithString("ConfigRuleName", m_configRuleName);

  }

  if(m_configRuleArnHasBeenSet)
  {
   payload.WithString("ConfigRuleArn", m_configRuleArn);

  }

  if(m_configRuleIdHasBeenSet)
  {
   payload.WithString("ConfigRuleId", m_configRuleId);

  }

  if(m_lastSuccessfulInvocationTimeHasBeenSet)
  {
   payload.WithDouble("LastSuccessfulInvocationTime", m_lastSuccessfulInvocationTime.SecondsWithMSPrecision());
  }

  if(m_lastFailedInvocationTimeHasBeenSet)
  {
   payload.WithDouble("LastFailedInvocationTime", m_lastFailedInvocationTime.SecondsWithMSPrecision());
  }

  if(m_lastSuccessfulEvaluationTimeHasBeenSet)
  {
   payload.WithDouble("LastSuccessfulEvaluationTime", m_lastSuccessfulEvaluationTime.SecondsWithMSPrecision());
  }

  if(m_lastFailedEvaluationTimeHasBeenSet)
  {
   payload.WithDouble("LastFailedEvaluationTime", m_lastFailedEvaluationTime.SecondsWithMSPrecision());
  }

  if(m_firstActivatedTimeHasBeenSet)
  {
   payload.WithDouble("FirstActivatedTime", m_firstActivatedTime.SecondsWithMSPrecision());
  }

  if(m_lastErrorCodeHasBeenSet)
  {
   payload.WithString("LastErrorCode", m_lastErrorCode);

  }

  if(m_lastErrorMessageHasBeenSet)
  {
   payload.WithString("LastErrorMessage", m_lastErrorMessage);

  }

  if(m_firstEvaluationStartedHasBeenSet)
  {
   payload.WithBool("FirstEvaluationStarted", m_firstEvaluationStarted);

  }

  return payload;
}

} // namespace Model
} // namespace ConfigService
} // namespace Aws