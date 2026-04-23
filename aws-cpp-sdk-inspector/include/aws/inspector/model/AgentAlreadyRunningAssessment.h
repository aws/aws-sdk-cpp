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
#include <aws/inspector/Inspector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Inspector
{
namespace Model
{

  /**
   * <p>Used in the exception error that is thrown if you start an assessment run for
   * an assessment target that includes an EC2 instance that is already participating
   * in another started assessment run.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/AgentAlreadyRunningAssessment">AWS
   * API Reference</a></p>
   */
  class AWS_INSPECTOR_API AgentAlreadyRunningAssessment
  {
  public:
    AgentAlreadyRunningAssessment();
    AgentAlreadyRunningAssessment(Aws::Utils::Json::JsonView jsonValue);
    AgentAlreadyRunningAssessment& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>ID of the agent that is running on an EC2 instance that is already
     * participating in another started assessment run.</p>
     */
    inline const Aws::String& GetAgentId() const{ return m_agentId; }

    /**
     * <p>ID of the agent that is running on an EC2 instance that is already
     * participating in another started assessment run.</p>
     */
    inline bool AgentIdHasBeenSet() const { return m_agentIdHasBeenSet; }

    /**
     * <p>ID of the agent that is running on an EC2 instance that is already
     * participating in another started assessment run.</p>
     */
    inline void SetAgentId(const Aws::String& value) { m_agentIdHasBeenSet = true; m_agentId = value; }

    /**
     * <p>ID of the agent that is running on an EC2 instance that is already
     * participating in another started assessment run.</p>
     */
    inline void SetAgentId(Aws::String&& value) { m_agentIdHasBeenSet = true; m_agentId = std::move(value); }

    /**
     * <p>ID of the agent that is running on an EC2 instance that is already
     * participating in another started assessment run.</p>
     */
    inline void SetAgentId(const char* value) { m_agentIdHasBeenSet = true; m_agentId.assign(value); }

    /**
     * <p>ID of the agent that is running on an EC2 instance that is already
     * participating in another started assessment run.</p>
     */
    inline AgentAlreadyRunningAssessment& WithAgentId(const Aws::String& value) { SetAgentId(value); return *this;}

    /**
     * <p>ID of the agent that is running on an EC2 instance that is already
     * participating in another started assessment run.</p>
     */
    inline AgentAlreadyRunningAssessment& WithAgentId(Aws::String&& value) { SetAgentId(std::move(value)); return *this;}

    /**
     * <p>ID of the agent that is running on an EC2 instance that is already
     * participating in another started assessment run.</p>
     */
    inline AgentAlreadyRunningAssessment& WithAgentId(const char* value) { SetAgentId(value); return *this;}


    /**
     * <p>The ARN of the assessment run that has already been started.</p>
     */
    inline const Aws::String& GetAssessmentRunArn() const{ return m_assessmentRunArn; }

    /**
     * <p>The ARN of the assessment run that has already been started.</p>
     */
    inline bool AssessmentRunArnHasBeenSet() const { return m_assessmentRunArnHasBeenSet; }

    /**
     * <p>The ARN of the assessment run that has already been started.</p>
     */
    inline void SetAssessmentRunArn(const Aws::String& value) { m_assessmentRunArnHasBeenSet = true; m_assessmentRunArn = value; }

    /**
     * <p>The ARN of the assessment run that has already been started.</p>
     */
    inline void SetAssessmentRunArn(Aws::String&& value) { m_assessmentRunArnHasBeenSet = true; m_assessmentRunArn = std::move(value); }

    /**
     * <p>The ARN of the assessment run that has already been started.</p>
     */
    inline void SetAssessmentRunArn(const char* value) { m_assessmentRunArnHasBeenSet = true; m_assessmentRunArn.assign(value); }

    /**
     * <p>The ARN of the assessment run that has already been started.</p>
     */
    inline AgentAlreadyRunningAssessment& WithAssessmentRunArn(const Aws::String& value) { SetAssessmentRunArn(value); return *this;}

    /**
     * <p>The ARN of the assessment run that has already been started.</p>
     */
    inline AgentAlreadyRunningAssessment& WithAssessmentRunArn(Aws::String&& value) { SetAssessmentRunArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the assessment run that has already been started.</p>
     */
    inline AgentAlreadyRunningAssessment& WithAssessmentRunArn(const char* value) { SetAssessmentRunArn(value); return *this;}

  private:

    Aws::String m_agentId;
    bool m_agentIdHasBeenSet;

    Aws::String m_assessmentRunArn;
    bool m_assessmentRunArnHasBeenSet;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
