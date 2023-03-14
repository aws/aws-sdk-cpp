/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/groundstation/GroundStation_EXPORTS.h>
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
namespace GroundStation
{
namespace Model
{
  class GetAgentConfigurationResult
  {
  public:
    AWS_GROUNDSTATION_API GetAgentConfigurationResult();
    AWS_GROUNDSTATION_API GetAgentConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GROUNDSTATION_API GetAgentConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>UUID of agent.</p>
     */
    inline const Aws::String& GetAgentId() const{ return m_agentId; }

    /**
     * <p>UUID of agent.</p>
     */
    inline void SetAgentId(const Aws::String& value) { m_agentId = value; }

    /**
     * <p>UUID of agent.</p>
     */
    inline void SetAgentId(Aws::String&& value) { m_agentId = std::move(value); }

    /**
     * <p>UUID of agent.</p>
     */
    inline void SetAgentId(const char* value) { m_agentId.assign(value); }

    /**
     * <p>UUID of agent.</p>
     */
    inline GetAgentConfigurationResult& WithAgentId(const Aws::String& value) { SetAgentId(value); return *this;}

    /**
     * <p>UUID of agent.</p>
     */
    inline GetAgentConfigurationResult& WithAgentId(Aws::String&& value) { SetAgentId(std::move(value)); return *this;}

    /**
     * <p>UUID of agent.</p>
     */
    inline GetAgentConfigurationResult& WithAgentId(const char* value) { SetAgentId(value); return *this;}


    /**
     * <p>Tasking document for agent.</p>
     */
    inline const Aws::String& GetTaskingDocument() const{ return m_taskingDocument; }

    /**
     * <p>Tasking document for agent.</p>
     */
    inline void SetTaskingDocument(const Aws::String& value) { m_taskingDocument = value; }

    /**
     * <p>Tasking document for agent.</p>
     */
    inline void SetTaskingDocument(Aws::String&& value) { m_taskingDocument = std::move(value); }

    /**
     * <p>Tasking document for agent.</p>
     */
    inline void SetTaskingDocument(const char* value) { m_taskingDocument.assign(value); }

    /**
     * <p>Tasking document for agent.</p>
     */
    inline GetAgentConfigurationResult& WithTaskingDocument(const Aws::String& value) { SetTaskingDocument(value); return *this;}

    /**
     * <p>Tasking document for agent.</p>
     */
    inline GetAgentConfigurationResult& WithTaskingDocument(Aws::String&& value) { SetTaskingDocument(std::move(value)); return *this;}

    /**
     * <p>Tasking document for agent.</p>
     */
    inline GetAgentConfigurationResult& WithTaskingDocument(const char* value) { SetTaskingDocument(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetAgentConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetAgentConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetAgentConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_agentId;

    Aws::String m_taskingDocument;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
