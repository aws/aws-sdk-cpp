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

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ConfigService
{
namespace Model
{

  /**
   * <p>Status information for your AWS managed Config rules. The status includes
   * information such as the last time the rule ran, the last time it failed, and the
   * related error for the last failure.</p> <p>This action does not return status
   * information about custom AWS Config rules.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/ConfigRuleEvaluationStatus">AWS
   * API Reference</a></p>
   */
  class AWS_CONFIGSERVICE_API ConfigRuleEvaluationStatus
  {
  public:
    ConfigRuleEvaluationStatus();
    ConfigRuleEvaluationStatus(Aws::Utils::Json::JsonView jsonValue);
    ConfigRuleEvaluationStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the AWS Config rule.</p>
     */
    inline const Aws::String& GetConfigRuleName() const{ return m_configRuleName; }

    /**
     * <p>The name of the AWS Config rule.</p>
     */
    inline bool ConfigRuleNameHasBeenSet() const { return m_configRuleNameHasBeenSet; }

    /**
     * <p>The name of the AWS Config rule.</p>
     */
    inline void SetConfigRuleName(const Aws::String& value) { m_configRuleNameHasBeenSet = true; m_configRuleName = value; }

    /**
     * <p>The name of the AWS Config rule.</p>
     */
    inline void SetConfigRuleName(Aws::String&& value) { m_configRuleNameHasBeenSet = true; m_configRuleName = std::move(value); }

    /**
     * <p>The name of the AWS Config rule.</p>
     */
    inline void SetConfigRuleName(const char* value) { m_configRuleNameHasBeenSet = true; m_configRuleName.assign(value); }

    /**
     * <p>The name of the AWS Config rule.</p>
     */
    inline ConfigRuleEvaluationStatus& WithConfigRuleName(const Aws::String& value) { SetConfigRuleName(value); return *this;}

    /**
     * <p>The name of the AWS Config rule.</p>
     */
    inline ConfigRuleEvaluationStatus& WithConfigRuleName(Aws::String&& value) { SetConfigRuleName(std::move(value)); return *this;}

    /**
     * <p>The name of the AWS Config rule.</p>
     */
    inline ConfigRuleEvaluationStatus& WithConfigRuleName(const char* value) { SetConfigRuleName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Config rule.</p>
     */
    inline const Aws::String& GetConfigRuleArn() const{ return m_configRuleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Config rule.</p>
     */
    inline bool ConfigRuleArnHasBeenSet() const { return m_configRuleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Config rule.</p>
     */
    inline void SetConfigRuleArn(const Aws::String& value) { m_configRuleArnHasBeenSet = true; m_configRuleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Config rule.</p>
     */
    inline void SetConfigRuleArn(Aws::String&& value) { m_configRuleArnHasBeenSet = true; m_configRuleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Config rule.</p>
     */
    inline void SetConfigRuleArn(const char* value) { m_configRuleArnHasBeenSet = true; m_configRuleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Config rule.</p>
     */
    inline ConfigRuleEvaluationStatus& WithConfigRuleArn(const Aws::String& value) { SetConfigRuleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Config rule.</p>
     */
    inline ConfigRuleEvaluationStatus& WithConfigRuleArn(Aws::String&& value) { SetConfigRuleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the AWS Config rule.</p>
     */
    inline ConfigRuleEvaluationStatus& WithConfigRuleArn(const char* value) { SetConfigRuleArn(value); return *this;}


    /**
     * <p>The ID of the AWS Config rule.</p>
     */
    inline const Aws::String& GetConfigRuleId() const{ return m_configRuleId; }

    /**
     * <p>The ID of the AWS Config rule.</p>
     */
    inline bool ConfigRuleIdHasBeenSet() const { return m_configRuleIdHasBeenSet; }

    /**
     * <p>The ID of the AWS Config rule.</p>
     */
    inline void SetConfigRuleId(const Aws::String& value) { m_configRuleIdHasBeenSet = true; m_configRuleId = value; }

    /**
     * <p>The ID of the AWS Config rule.</p>
     */
    inline void SetConfigRuleId(Aws::String&& value) { m_configRuleIdHasBeenSet = true; m_configRuleId = std::move(value); }

    /**
     * <p>The ID of the AWS Config rule.</p>
     */
    inline void SetConfigRuleId(const char* value) { m_configRuleIdHasBeenSet = true; m_configRuleId.assign(value); }

    /**
     * <p>The ID of the AWS Config rule.</p>
     */
    inline ConfigRuleEvaluationStatus& WithConfigRuleId(const Aws::String& value) { SetConfigRuleId(value); return *this;}

    /**
     * <p>The ID of the AWS Config rule.</p>
     */
    inline ConfigRuleEvaluationStatus& WithConfigRuleId(Aws::String&& value) { SetConfigRuleId(std::move(value)); return *this;}

    /**
     * <p>The ID of the AWS Config rule.</p>
     */
    inline ConfigRuleEvaluationStatus& WithConfigRuleId(const char* value) { SetConfigRuleId(value); return *this;}


    /**
     * <p>The time that AWS Config last successfully invoked the AWS Config rule to
     * evaluate your AWS resources.</p>
     */
    inline const Aws::Utils::DateTime& GetLastSuccessfulInvocationTime() const{ return m_lastSuccessfulInvocationTime; }

    /**
     * <p>The time that AWS Config last successfully invoked the AWS Config rule to
     * evaluate your AWS resources.</p>
     */
    inline bool LastSuccessfulInvocationTimeHasBeenSet() const { return m_lastSuccessfulInvocationTimeHasBeenSet; }

    /**
     * <p>The time that AWS Config last successfully invoked the AWS Config rule to
     * evaluate your AWS resources.</p>
     */
    inline void SetLastSuccessfulInvocationTime(const Aws::Utils::DateTime& value) { m_lastSuccessfulInvocationTimeHasBeenSet = true; m_lastSuccessfulInvocationTime = value; }

    /**
     * <p>The time that AWS Config last successfully invoked the AWS Config rule to
     * evaluate your AWS resources.</p>
     */
    inline void SetLastSuccessfulInvocationTime(Aws::Utils::DateTime&& value) { m_lastSuccessfulInvocationTimeHasBeenSet = true; m_lastSuccessfulInvocationTime = std::move(value); }

    /**
     * <p>The time that AWS Config last successfully invoked the AWS Config rule to
     * evaluate your AWS resources.</p>
     */
    inline ConfigRuleEvaluationStatus& WithLastSuccessfulInvocationTime(const Aws::Utils::DateTime& value) { SetLastSuccessfulInvocationTime(value); return *this;}

    /**
     * <p>The time that AWS Config last successfully invoked the AWS Config rule to
     * evaluate your AWS resources.</p>
     */
    inline ConfigRuleEvaluationStatus& WithLastSuccessfulInvocationTime(Aws::Utils::DateTime&& value) { SetLastSuccessfulInvocationTime(std::move(value)); return *this;}


    /**
     * <p>The time that AWS Config last failed to invoke the AWS Config rule to
     * evaluate your AWS resources.</p>
     */
    inline const Aws::Utils::DateTime& GetLastFailedInvocationTime() const{ return m_lastFailedInvocationTime; }

    /**
     * <p>The time that AWS Config last failed to invoke the AWS Config rule to
     * evaluate your AWS resources.</p>
     */
    inline bool LastFailedInvocationTimeHasBeenSet() const { return m_lastFailedInvocationTimeHasBeenSet; }

    /**
     * <p>The time that AWS Config last failed to invoke the AWS Config rule to
     * evaluate your AWS resources.</p>
     */
    inline void SetLastFailedInvocationTime(const Aws::Utils::DateTime& value) { m_lastFailedInvocationTimeHasBeenSet = true; m_lastFailedInvocationTime = value; }

    /**
     * <p>The time that AWS Config last failed to invoke the AWS Config rule to
     * evaluate your AWS resources.</p>
     */
    inline void SetLastFailedInvocationTime(Aws::Utils::DateTime&& value) { m_lastFailedInvocationTimeHasBeenSet = true; m_lastFailedInvocationTime = std::move(value); }

    /**
     * <p>The time that AWS Config last failed to invoke the AWS Config rule to
     * evaluate your AWS resources.</p>
     */
    inline ConfigRuleEvaluationStatus& WithLastFailedInvocationTime(const Aws::Utils::DateTime& value) { SetLastFailedInvocationTime(value); return *this;}

    /**
     * <p>The time that AWS Config last failed to invoke the AWS Config rule to
     * evaluate your AWS resources.</p>
     */
    inline ConfigRuleEvaluationStatus& WithLastFailedInvocationTime(Aws::Utils::DateTime&& value) { SetLastFailedInvocationTime(std::move(value)); return *this;}


    /**
     * <p>The time that AWS Config last successfully evaluated your AWS resources
     * against the rule.</p>
     */
    inline const Aws::Utils::DateTime& GetLastSuccessfulEvaluationTime() const{ return m_lastSuccessfulEvaluationTime; }

    /**
     * <p>The time that AWS Config last successfully evaluated your AWS resources
     * against the rule.</p>
     */
    inline bool LastSuccessfulEvaluationTimeHasBeenSet() const { return m_lastSuccessfulEvaluationTimeHasBeenSet; }

    /**
     * <p>The time that AWS Config last successfully evaluated your AWS resources
     * against the rule.</p>
     */
    inline void SetLastSuccessfulEvaluationTime(const Aws::Utils::DateTime& value) { m_lastSuccessfulEvaluationTimeHasBeenSet = true; m_lastSuccessfulEvaluationTime = value; }

    /**
     * <p>The time that AWS Config last successfully evaluated your AWS resources
     * against the rule.</p>
     */
    inline void SetLastSuccessfulEvaluationTime(Aws::Utils::DateTime&& value) { m_lastSuccessfulEvaluationTimeHasBeenSet = true; m_lastSuccessfulEvaluationTime = std::move(value); }

    /**
     * <p>The time that AWS Config last successfully evaluated your AWS resources
     * against the rule.</p>
     */
    inline ConfigRuleEvaluationStatus& WithLastSuccessfulEvaluationTime(const Aws::Utils::DateTime& value) { SetLastSuccessfulEvaluationTime(value); return *this;}

    /**
     * <p>The time that AWS Config last successfully evaluated your AWS resources
     * against the rule.</p>
     */
    inline ConfigRuleEvaluationStatus& WithLastSuccessfulEvaluationTime(Aws::Utils::DateTime&& value) { SetLastSuccessfulEvaluationTime(std::move(value)); return *this;}


    /**
     * <p>The time that AWS Config last failed to evaluate your AWS resources against
     * the rule.</p>
     */
    inline const Aws::Utils::DateTime& GetLastFailedEvaluationTime() const{ return m_lastFailedEvaluationTime; }

    /**
     * <p>The time that AWS Config last failed to evaluate your AWS resources against
     * the rule.</p>
     */
    inline bool LastFailedEvaluationTimeHasBeenSet() const { return m_lastFailedEvaluationTimeHasBeenSet; }

    /**
     * <p>The time that AWS Config last failed to evaluate your AWS resources against
     * the rule.</p>
     */
    inline void SetLastFailedEvaluationTime(const Aws::Utils::DateTime& value) { m_lastFailedEvaluationTimeHasBeenSet = true; m_lastFailedEvaluationTime = value; }

    /**
     * <p>The time that AWS Config last failed to evaluate your AWS resources against
     * the rule.</p>
     */
    inline void SetLastFailedEvaluationTime(Aws::Utils::DateTime&& value) { m_lastFailedEvaluationTimeHasBeenSet = true; m_lastFailedEvaluationTime = std::move(value); }

    /**
     * <p>The time that AWS Config last failed to evaluate your AWS resources against
     * the rule.</p>
     */
    inline ConfigRuleEvaluationStatus& WithLastFailedEvaluationTime(const Aws::Utils::DateTime& value) { SetLastFailedEvaluationTime(value); return *this;}

    /**
     * <p>The time that AWS Config last failed to evaluate your AWS resources against
     * the rule.</p>
     */
    inline ConfigRuleEvaluationStatus& WithLastFailedEvaluationTime(Aws::Utils::DateTime&& value) { SetLastFailedEvaluationTime(std::move(value)); return *this;}


    /**
     * <p>The time that you first activated the AWS Config rule.</p>
     */
    inline const Aws::Utils::DateTime& GetFirstActivatedTime() const{ return m_firstActivatedTime; }

    /**
     * <p>The time that you first activated the AWS Config rule.</p>
     */
    inline bool FirstActivatedTimeHasBeenSet() const { return m_firstActivatedTimeHasBeenSet; }

    /**
     * <p>The time that you first activated the AWS Config rule.</p>
     */
    inline void SetFirstActivatedTime(const Aws::Utils::DateTime& value) { m_firstActivatedTimeHasBeenSet = true; m_firstActivatedTime = value; }

    /**
     * <p>The time that you first activated the AWS Config rule.</p>
     */
    inline void SetFirstActivatedTime(Aws::Utils::DateTime&& value) { m_firstActivatedTimeHasBeenSet = true; m_firstActivatedTime = std::move(value); }

    /**
     * <p>The time that you first activated the AWS Config rule.</p>
     */
    inline ConfigRuleEvaluationStatus& WithFirstActivatedTime(const Aws::Utils::DateTime& value) { SetFirstActivatedTime(value); return *this;}

    /**
     * <p>The time that you first activated the AWS Config rule.</p>
     */
    inline ConfigRuleEvaluationStatus& WithFirstActivatedTime(Aws::Utils::DateTime&& value) { SetFirstActivatedTime(std::move(value)); return *this;}


    /**
     * <p>The error code that AWS Config returned when the rule last failed.</p>
     */
    inline const Aws::String& GetLastErrorCode() const{ return m_lastErrorCode; }

    /**
     * <p>The error code that AWS Config returned when the rule last failed.</p>
     */
    inline bool LastErrorCodeHasBeenSet() const { return m_lastErrorCodeHasBeenSet; }

    /**
     * <p>The error code that AWS Config returned when the rule last failed.</p>
     */
    inline void SetLastErrorCode(const Aws::String& value) { m_lastErrorCodeHasBeenSet = true; m_lastErrorCode = value; }

    /**
     * <p>The error code that AWS Config returned when the rule last failed.</p>
     */
    inline void SetLastErrorCode(Aws::String&& value) { m_lastErrorCodeHasBeenSet = true; m_lastErrorCode = std::move(value); }

    /**
     * <p>The error code that AWS Config returned when the rule last failed.</p>
     */
    inline void SetLastErrorCode(const char* value) { m_lastErrorCodeHasBeenSet = true; m_lastErrorCode.assign(value); }

    /**
     * <p>The error code that AWS Config returned when the rule last failed.</p>
     */
    inline ConfigRuleEvaluationStatus& WithLastErrorCode(const Aws::String& value) { SetLastErrorCode(value); return *this;}

    /**
     * <p>The error code that AWS Config returned when the rule last failed.</p>
     */
    inline ConfigRuleEvaluationStatus& WithLastErrorCode(Aws::String&& value) { SetLastErrorCode(std::move(value)); return *this;}

    /**
     * <p>The error code that AWS Config returned when the rule last failed.</p>
     */
    inline ConfigRuleEvaluationStatus& WithLastErrorCode(const char* value) { SetLastErrorCode(value); return *this;}


    /**
     * <p>The error message that AWS Config returned when the rule last failed.</p>
     */
    inline const Aws::String& GetLastErrorMessage() const{ return m_lastErrorMessage; }

    /**
     * <p>The error message that AWS Config returned when the rule last failed.</p>
     */
    inline bool LastErrorMessageHasBeenSet() const { return m_lastErrorMessageHasBeenSet; }

    /**
     * <p>The error message that AWS Config returned when the rule last failed.</p>
     */
    inline void SetLastErrorMessage(const Aws::String& value) { m_lastErrorMessageHasBeenSet = true; m_lastErrorMessage = value; }

    /**
     * <p>The error message that AWS Config returned when the rule last failed.</p>
     */
    inline void SetLastErrorMessage(Aws::String&& value) { m_lastErrorMessageHasBeenSet = true; m_lastErrorMessage = std::move(value); }

    /**
     * <p>The error message that AWS Config returned when the rule last failed.</p>
     */
    inline void SetLastErrorMessage(const char* value) { m_lastErrorMessageHasBeenSet = true; m_lastErrorMessage.assign(value); }

    /**
     * <p>The error message that AWS Config returned when the rule last failed.</p>
     */
    inline ConfigRuleEvaluationStatus& WithLastErrorMessage(const Aws::String& value) { SetLastErrorMessage(value); return *this;}

    /**
     * <p>The error message that AWS Config returned when the rule last failed.</p>
     */
    inline ConfigRuleEvaluationStatus& WithLastErrorMessage(Aws::String&& value) { SetLastErrorMessage(std::move(value)); return *this;}

    /**
     * <p>The error message that AWS Config returned when the rule last failed.</p>
     */
    inline ConfigRuleEvaluationStatus& WithLastErrorMessage(const char* value) { SetLastErrorMessage(value); return *this;}


    /**
     * <p>Indicates whether AWS Config has evaluated your resources against the rule at
     * least once.</p> <ul> <li> <p> <code>true</code> - AWS Config has evaluated your
     * AWS resources against the rule at least once.</p> </li> <li> <p>
     * <code>false</code> - AWS Config has not once finished evaluating your AWS
     * resources against the rule.</p> </li> </ul>
     */
    inline bool GetFirstEvaluationStarted() const{ return m_firstEvaluationStarted; }

    /**
     * <p>Indicates whether AWS Config has evaluated your resources against the rule at
     * least once.</p> <ul> <li> <p> <code>true</code> - AWS Config has evaluated your
     * AWS resources against the rule at least once.</p> </li> <li> <p>
     * <code>false</code> - AWS Config has not once finished evaluating your AWS
     * resources against the rule.</p> </li> </ul>
     */
    inline bool FirstEvaluationStartedHasBeenSet() const { return m_firstEvaluationStartedHasBeenSet; }

    /**
     * <p>Indicates whether AWS Config has evaluated your resources against the rule at
     * least once.</p> <ul> <li> <p> <code>true</code> - AWS Config has evaluated your
     * AWS resources against the rule at least once.</p> </li> <li> <p>
     * <code>false</code> - AWS Config has not once finished evaluating your AWS
     * resources against the rule.</p> </li> </ul>
     */
    inline void SetFirstEvaluationStarted(bool value) { m_firstEvaluationStartedHasBeenSet = true; m_firstEvaluationStarted = value; }

    /**
     * <p>Indicates whether AWS Config has evaluated your resources against the rule at
     * least once.</p> <ul> <li> <p> <code>true</code> - AWS Config has evaluated your
     * AWS resources against the rule at least once.</p> </li> <li> <p>
     * <code>false</code> - AWS Config has not once finished evaluating your AWS
     * resources against the rule.</p> </li> </ul>
     */
    inline ConfigRuleEvaluationStatus& WithFirstEvaluationStarted(bool value) { SetFirstEvaluationStarted(value); return *this;}

  private:

    Aws::String m_configRuleName;
    bool m_configRuleNameHasBeenSet;

    Aws::String m_configRuleArn;
    bool m_configRuleArnHasBeenSet;

    Aws::String m_configRuleId;
    bool m_configRuleIdHasBeenSet;

    Aws::Utils::DateTime m_lastSuccessfulInvocationTime;
    bool m_lastSuccessfulInvocationTimeHasBeenSet;

    Aws::Utils::DateTime m_lastFailedInvocationTime;
    bool m_lastFailedInvocationTimeHasBeenSet;

    Aws::Utils::DateTime m_lastSuccessfulEvaluationTime;
    bool m_lastSuccessfulEvaluationTimeHasBeenSet;

    Aws::Utils::DateTime m_lastFailedEvaluationTime;
    bool m_lastFailedEvaluationTimeHasBeenSet;

    Aws::Utils::DateTime m_firstActivatedTime;
    bool m_firstActivatedTimeHasBeenSet;

    Aws::String m_lastErrorCode;
    bool m_lastErrorCodeHasBeenSet;

    Aws::String m_lastErrorMessage;
    bool m_lastErrorMessageHasBeenSet;

    bool m_firstEvaluationStarted;
    bool m_firstEvaluationStartedHasBeenSet;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
