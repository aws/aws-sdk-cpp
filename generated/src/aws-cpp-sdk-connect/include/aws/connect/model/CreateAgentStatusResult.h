/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
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
namespace Connect
{
namespace Model
{
  class CreateAgentStatusResult
  {
  public:
    AWS_CONNECT_API CreateAgentStatusResult();
    AWS_CONNECT_API CreateAgentStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API CreateAgentStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the agent status.</p>
     */
    inline const Aws::String& GetAgentStatusARN() const{ return m_agentStatusARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the agent status.</p>
     */
    inline void SetAgentStatusARN(const Aws::String& value) { m_agentStatusARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the agent status.</p>
     */
    inline void SetAgentStatusARN(Aws::String&& value) { m_agentStatusARN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the agent status.</p>
     */
    inline void SetAgentStatusARN(const char* value) { m_agentStatusARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the agent status.</p>
     */
    inline CreateAgentStatusResult& WithAgentStatusARN(const Aws::String& value) { SetAgentStatusARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the agent status.</p>
     */
    inline CreateAgentStatusResult& WithAgentStatusARN(Aws::String&& value) { SetAgentStatusARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the agent status.</p>
     */
    inline CreateAgentStatusResult& WithAgentStatusARN(const char* value) { SetAgentStatusARN(value); return *this;}


    /**
     * <p>The identifier of the agent status.</p>
     */
    inline const Aws::String& GetAgentStatusId() const{ return m_agentStatusId; }

    /**
     * <p>The identifier of the agent status.</p>
     */
    inline void SetAgentStatusId(const Aws::String& value) { m_agentStatusId = value; }

    /**
     * <p>The identifier of the agent status.</p>
     */
    inline void SetAgentStatusId(Aws::String&& value) { m_agentStatusId = std::move(value); }

    /**
     * <p>The identifier of the agent status.</p>
     */
    inline void SetAgentStatusId(const char* value) { m_agentStatusId.assign(value); }

    /**
     * <p>The identifier of the agent status.</p>
     */
    inline CreateAgentStatusResult& WithAgentStatusId(const Aws::String& value) { SetAgentStatusId(value); return *this;}

    /**
     * <p>The identifier of the agent status.</p>
     */
    inline CreateAgentStatusResult& WithAgentStatusId(Aws::String&& value) { SetAgentStatusId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the agent status.</p>
     */
    inline CreateAgentStatusResult& WithAgentStatusId(const char* value) { SetAgentStatusId(value); return *this;}

  private:

    Aws::String m_agentStatusARN;

    Aws::String m_agentStatusId;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
