/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class AgentAlreadyRunningAssessment
  {
  public:
    AWS_INSPECTOR_API AgentAlreadyRunningAssessment();
    AWS_INSPECTOR_API AgentAlreadyRunningAssessment(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR_API AgentAlreadyRunningAssessment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    bool m_agentIdHasBeenSet = false;

    Aws::String m_assessmentRunArn;
    bool m_assessmentRunArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
