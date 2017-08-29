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
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/model/AutomationExecution.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SSM
{
namespace Model
{
  class AWS_SSM_API GetAutomationExecutionResult
  {
  public:
    GetAutomationExecutionResult();
    GetAutomationExecutionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetAutomationExecutionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Detailed information about the current state of an automation execution.</p>
     */
    inline const AutomationExecution& GetAutomationExecution() const{ return m_automationExecution; }

    /**
     * <p>Detailed information about the current state of an automation execution.</p>
     */
    inline void SetAutomationExecution(const AutomationExecution& value) { m_automationExecution = value; }

    /**
     * <p>Detailed information about the current state of an automation execution.</p>
     */
    inline void SetAutomationExecution(AutomationExecution&& value) { m_automationExecution = std::move(value); }

    /**
     * <p>Detailed information about the current state of an automation execution.</p>
     */
    inline GetAutomationExecutionResult& WithAutomationExecution(const AutomationExecution& value) { SetAutomationExecution(value); return *this;}

    /**
     * <p>Detailed information about the current state of an automation execution.</p>
     */
    inline GetAutomationExecutionResult& WithAutomationExecution(AutomationExecution&& value) { SetAutomationExecution(std::move(value)); return *this;}

  private:

    AutomationExecution m_automationExecution;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
