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
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class AWS_SSM_API StartAutomationExecutionResult
  {
  public:
    StartAutomationExecutionResult();
    StartAutomationExecutionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    StartAutomationExecutionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The unique ID of a newly scheduled automation execution.</p>
     */
    inline const Aws::String& GetAutomationExecutionId() const{ return m_automationExecutionId; }

    /**
     * <p>The unique ID of a newly scheduled automation execution.</p>
     */
    inline void SetAutomationExecutionId(const Aws::String& value) { m_automationExecutionId = value; }

    /**
     * <p>The unique ID of a newly scheduled automation execution.</p>
     */
    inline void SetAutomationExecutionId(Aws::String&& value) { m_automationExecutionId = std::move(value); }

    /**
     * <p>The unique ID of a newly scheduled automation execution.</p>
     */
    inline void SetAutomationExecutionId(const char* value) { m_automationExecutionId.assign(value); }

    /**
     * <p>The unique ID of a newly scheduled automation execution.</p>
     */
    inline StartAutomationExecutionResult& WithAutomationExecutionId(const Aws::String& value) { SetAutomationExecutionId(value); return *this;}

    /**
     * <p>The unique ID of a newly scheduled automation execution.</p>
     */
    inline StartAutomationExecutionResult& WithAutomationExecutionId(Aws::String&& value) { SetAutomationExecutionId(std::move(value)); return *this;}

    /**
     * <p>The unique ID of a newly scheduled automation execution.</p>
     */
    inline StartAutomationExecutionResult& WithAutomationExecutionId(const char* value) { SetAutomationExecutionId(value); return *this;}

  private:

    Aws::String m_automationExecutionId;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
