/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class GetAutomationExecutionResult
  {
  public:
    AWS_SSM_API GetAutomationExecutionResult();
    AWS_SSM_API GetAutomationExecutionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API GetAutomationExecutionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
