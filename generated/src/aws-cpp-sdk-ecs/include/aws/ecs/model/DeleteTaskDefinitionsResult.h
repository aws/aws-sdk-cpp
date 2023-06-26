/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecs/model/TaskDefinition.h>
#include <aws/ecs/model/Failure.h>
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
namespace ECS
{
namespace Model
{
  class DeleteTaskDefinitionsResult
  {
  public:
    AWS_ECS_API DeleteTaskDefinitionsResult();
    AWS_ECS_API DeleteTaskDefinitionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ECS_API DeleteTaskDefinitionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of deleted task definitions.</p>
     */
    inline const Aws::Vector<TaskDefinition>& GetTaskDefinitions() const{ return m_taskDefinitions; }

    /**
     * <p>The list of deleted task definitions.</p>
     */
    inline void SetTaskDefinitions(const Aws::Vector<TaskDefinition>& value) { m_taskDefinitions = value; }

    /**
     * <p>The list of deleted task definitions.</p>
     */
    inline void SetTaskDefinitions(Aws::Vector<TaskDefinition>&& value) { m_taskDefinitions = std::move(value); }

    /**
     * <p>The list of deleted task definitions.</p>
     */
    inline DeleteTaskDefinitionsResult& WithTaskDefinitions(const Aws::Vector<TaskDefinition>& value) { SetTaskDefinitions(value); return *this;}

    /**
     * <p>The list of deleted task definitions.</p>
     */
    inline DeleteTaskDefinitionsResult& WithTaskDefinitions(Aws::Vector<TaskDefinition>&& value) { SetTaskDefinitions(std::move(value)); return *this;}

    /**
     * <p>The list of deleted task definitions.</p>
     */
    inline DeleteTaskDefinitionsResult& AddTaskDefinitions(const TaskDefinition& value) { m_taskDefinitions.push_back(value); return *this; }

    /**
     * <p>The list of deleted task definitions.</p>
     */
    inline DeleteTaskDefinitionsResult& AddTaskDefinitions(TaskDefinition&& value) { m_taskDefinitions.push_back(std::move(value)); return *this; }


    /**
     * <p>Any failures associated with the call.</p>
     */
    inline const Aws::Vector<Failure>& GetFailures() const{ return m_failures; }

    /**
     * <p>Any failures associated with the call.</p>
     */
    inline void SetFailures(const Aws::Vector<Failure>& value) { m_failures = value; }

    /**
     * <p>Any failures associated with the call.</p>
     */
    inline void SetFailures(Aws::Vector<Failure>&& value) { m_failures = std::move(value); }

    /**
     * <p>Any failures associated with the call.</p>
     */
    inline DeleteTaskDefinitionsResult& WithFailures(const Aws::Vector<Failure>& value) { SetFailures(value); return *this;}

    /**
     * <p>Any failures associated with the call.</p>
     */
    inline DeleteTaskDefinitionsResult& WithFailures(Aws::Vector<Failure>&& value) { SetFailures(std::move(value)); return *this;}

    /**
     * <p>Any failures associated with the call.</p>
     */
    inline DeleteTaskDefinitionsResult& AddFailures(const Failure& value) { m_failures.push_back(value); return *this; }

    /**
     * <p>Any failures associated with the call.</p>
     */
    inline DeleteTaskDefinitionsResult& AddFailures(Failure&& value) { m_failures.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DeleteTaskDefinitionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DeleteTaskDefinitionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DeleteTaskDefinitionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<TaskDefinition> m_taskDefinitions;

    Aws::Vector<Failure> m_failures;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
