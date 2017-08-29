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
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace EMR
{
namespace Model
{
  /**
   * <p> The output for the <a>AddJobFlowSteps</a> operation. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/AddJobFlowStepsOutput">AWS
   * API Reference</a></p>
   */
  class AWS_EMR_API AddJobFlowStepsResult
  {
  public:
    AddJobFlowStepsResult();
    AddJobFlowStepsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AddJobFlowStepsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The identifiers of the list of steps added to the job flow.</p>
     */
    inline const Aws::Vector<Aws::String>& GetStepIds() const{ return m_stepIds; }

    /**
     * <p>The identifiers of the list of steps added to the job flow.</p>
     */
    inline void SetStepIds(const Aws::Vector<Aws::String>& value) { m_stepIds = value; }

    /**
     * <p>The identifiers of the list of steps added to the job flow.</p>
     */
    inline void SetStepIds(Aws::Vector<Aws::String>&& value) { m_stepIds = std::move(value); }

    /**
     * <p>The identifiers of the list of steps added to the job flow.</p>
     */
    inline AddJobFlowStepsResult& WithStepIds(const Aws::Vector<Aws::String>& value) { SetStepIds(value); return *this;}

    /**
     * <p>The identifiers of the list of steps added to the job flow.</p>
     */
    inline AddJobFlowStepsResult& WithStepIds(Aws::Vector<Aws::String>&& value) { SetStepIds(std::move(value)); return *this;}

    /**
     * <p>The identifiers of the list of steps added to the job flow.</p>
     */
    inline AddJobFlowStepsResult& AddStepIds(const Aws::String& value) { m_stepIds.push_back(value); return *this; }

    /**
     * <p>The identifiers of the list of steps added to the job flow.</p>
     */
    inline AddJobFlowStepsResult& AddStepIds(Aws::String&& value) { m_stepIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The identifiers of the list of steps added to the job flow.</p>
     */
    inline AddJobFlowStepsResult& AddStepIds(const char* value) { m_stepIds.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_stepIds;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
