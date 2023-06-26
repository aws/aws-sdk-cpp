/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/TaskDefinition.h>
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
namespace ECS
{
namespace Model
{
  class DeregisterTaskDefinitionResult
  {
  public:
    AWS_ECS_API DeregisterTaskDefinitionResult();
    AWS_ECS_API DeregisterTaskDefinitionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ECS_API DeregisterTaskDefinitionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The full description of the deregistered task.</p>
     */
    inline const TaskDefinition& GetTaskDefinition() const{ return m_taskDefinition; }

    /**
     * <p>The full description of the deregistered task.</p>
     */
    inline void SetTaskDefinition(const TaskDefinition& value) { m_taskDefinition = value; }

    /**
     * <p>The full description of the deregistered task.</p>
     */
    inline void SetTaskDefinition(TaskDefinition&& value) { m_taskDefinition = std::move(value); }

    /**
     * <p>The full description of the deregistered task.</p>
     */
    inline DeregisterTaskDefinitionResult& WithTaskDefinition(const TaskDefinition& value) { SetTaskDefinition(value); return *this;}

    /**
     * <p>The full description of the deregistered task.</p>
     */
    inline DeregisterTaskDefinitionResult& WithTaskDefinition(TaskDefinition&& value) { SetTaskDefinition(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DeregisterTaskDefinitionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DeregisterTaskDefinitionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DeregisterTaskDefinitionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    TaskDefinition m_taskDefinition;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
