/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/ContainerInstance.h>
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
  class UpdateContainerAgentResult
  {
  public:
    AWS_ECS_API UpdateContainerAgentResult();
    AWS_ECS_API UpdateContainerAgentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ECS_API UpdateContainerAgentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The container instance that the container agent was updated for.</p>
     */
    inline const ContainerInstance& GetContainerInstance() const{ return m_containerInstance; }

    /**
     * <p>The container instance that the container agent was updated for.</p>
     */
    inline void SetContainerInstance(const ContainerInstance& value) { m_containerInstance = value; }

    /**
     * <p>The container instance that the container agent was updated for.</p>
     */
    inline void SetContainerInstance(ContainerInstance&& value) { m_containerInstance = std::move(value); }

    /**
     * <p>The container instance that the container agent was updated for.</p>
     */
    inline UpdateContainerAgentResult& WithContainerInstance(const ContainerInstance& value) { SetContainerInstance(value); return *this;}

    /**
     * <p>The container instance that the container agent was updated for.</p>
     */
    inline UpdateContainerAgentResult& WithContainerInstance(ContainerInstance&& value) { SetContainerInstance(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateContainerAgentResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateContainerAgentResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateContainerAgentResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ContainerInstance m_containerInstance;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
