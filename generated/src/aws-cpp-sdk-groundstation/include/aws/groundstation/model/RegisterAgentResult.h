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
  class RegisterAgentResult
  {
  public:
    AWS_GROUNDSTATION_API RegisterAgentResult();
    AWS_GROUNDSTATION_API RegisterAgentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GROUNDSTATION_API RegisterAgentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>UUID of registered agent.</p>
     */
    inline const Aws::String& GetAgentId() const{ return m_agentId; }
    inline void SetAgentId(const Aws::String& value) { m_agentId = value; }
    inline void SetAgentId(Aws::String&& value) { m_agentId = std::move(value); }
    inline void SetAgentId(const char* value) { m_agentId.assign(value); }
    inline RegisterAgentResult& WithAgentId(const Aws::String& value) { SetAgentId(value); return *this;}
    inline RegisterAgentResult& WithAgentId(Aws::String&& value) { SetAgentId(std::move(value)); return *this;}
    inline RegisterAgentResult& WithAgentId(const char* value) { SetAgentId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline RegisterAgentResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline RegisterAgentResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline RegisterAgentResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_agentId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
