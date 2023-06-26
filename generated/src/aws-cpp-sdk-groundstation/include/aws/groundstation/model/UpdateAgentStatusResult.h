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
  class UpdateAgentStatusResult
  {
  public:
    AWS_GROUNDSTATION_API UpdateAgentStatusResult();
    AWS_GROUNDSTATION_API UpdateAgentStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GROUNDSTATION_API UpdateAgentStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>UUID of updated agent.</p>
     */
    inline const Aws::String& GetAgentId() const{ return m_agentId; }

    /**
     * <p>UUID of updated agent.</p>
     */
    inline void SetAgentId(const Aws::String& value) { m_agentId = value; }

    /**
     * <p>UUID of updated agent.</p>
     */
    inline void SetAgentId(Aws::String&& value) { m_agentId = std::move(value); }

    /**
     * <p>UUID of updated agent.</p>
     */
    inline void SetAgentId(const char* value) { m_agentId.assign(value); }

    /**
     * <p>UUID of updated agent.</p>
     */
    inline UpdateAgentStatusResult& WithAgentId(const Aws::String& value) { SetAgentId(value); return *this;}

    /**
     * <p>UUID of updated agent.</p>
     */
    inline UpdateAgentStatusResult& WithAgentId(Aws::String&& value) { SetAgentId(std::move(value)); return *this;}

    /**
     * <p>UUID of updated agent.</p>
     */
    inline UpdateAgentStatusResult& WithAgentId(const char* value) { SetAgentId(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateAgentStatusResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateAgentStatusResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateAgentStatusResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_agentId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
