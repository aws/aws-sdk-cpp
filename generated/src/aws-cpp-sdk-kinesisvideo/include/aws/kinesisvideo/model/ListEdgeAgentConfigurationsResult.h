/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisvideo/KinesisVideo_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesisvideo/model/ListEdgeAgentConfigurationsEdgeConfig.h>
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
namespace KinesisVideo
{
namespace Model
{
  class ListEdgeAgentConfigurationsResult
  {
  public:
    AWS_KINESISVIDEO_API ListEdgeAgentConfigurationsResult();
    AWS_KINESISVIDEO_API ListEdgeAgentConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KINESISVIDEO_API ListEdgeAgentConfigurationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A description of a single stream's edge configuration.</p>
     */
    inline const Aws::Vector<ListEdgeAgentConfigurationsEdgeConfig>& GetEdgeConfigs() const{ return m_edgeConfigs; }

    /**
     * <p>A description of a single stream's edge configuration.</p>
     */
    inline void SetEdgeConfigs(const Aws::Vector<ListEdgeAgentConfigurationsEdgeConfig>& value) { m_edgeConfigs = value; }

    /**
     * <p>A description of a single stream's edge configuration.</p>
     */
    inline void SetEdgeConfigs(Aws::Vector<ListEdgeAgentConfigurationsEdgeConfig>&& value) { m_edgeConfigs = std::move(value); }

    /**
     * <p>A description of a single stream's edge configuration.</p>
     */
    inline ListEdgeAgentConfigurationsResult& WithEdgeConfigs(const Aws::Vector<ListEdgeAgentConfigurationsEdgeConfig>& value) { SetEdgeConfigs(value); return *this;}

    /**
     * <p>A description of a single stream's edge configuration.</p>
     */
    inline ListEdgeAgentConfigurationsResult& WithEdgeConfigs(Aws::Vector<ListEdgeAgentConfigurationsEdgeConfig>&& value) { SetEdgeConfigs(std::move(value)); return *this;}

    /**
     * <p>A description of a single stream's edge configuration.</p>
     */
    inline ListEdgeAgentConfigurationsResult& AddEdgeConfigs(const ListEdgeAgentConfigurationsEdgeConfig& value) { m_edgeConfigs.push_back(value); return *this; }

    /**
     * <p>A description of a single stream's edge configuration.</p>
     */
    inline ListEdgeAgentConfigurationsResult& AddEdgeConfigs(ListEdgeAgentConfigurationsEdgeConfig&& value) { m_edgeConfigs.push_back(std::move(value)); return *this; }


    /**
     * <p>If the response is truncated, the call returns this element with a given
     * token. To get the next batch of edge configurations, use this token in your next
     * request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the response is truncated, the call returns this element with a given
     * token. To get the next batch of edge configurations, use this token in your next
     * request.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the response is truncated, the call returns this element with a given
     * token. To get the next batch of edge configurations, use this token in your next
     * request.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the response is truncated, the call returns this element with a given
     * token. To get the next batch of edge configurations, use this token in your next
     * request.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the response is truncated, the call returns this element with a given
     * token. To get the next batch of edge configurations, use this token in your next
     * request.</p>
     */
    inline ListEdgeAgentConfigurationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the response is truncated, the call returns this element with a given
     * token. To get the next batch of edge configurations, use this token in your next
     * request.</p>
     */
    inline ListEdgeAgentConfigurationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the response is truncated, the call returns this element with a given
     * token. To get the next batch of edge configurations, use this token in your next
     * request.</p>
     */
    inline ListEdgeAgentConfigurationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListEdgeAgentConfigurationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListEdgeAgentConfigurationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListEdgeAgentConfigurationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<ListEdgeAgentConfigurationsEdgeConfig> m_edgeConfigs;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace KinesisVideo
} // namespace Aws
