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
    AWS_KINESISVIDEO_API ListEdgeAgentConfigurationsResult() = default;
    AWS_KINESISVIDEO_API ListEdgeAgentConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KINESISVIDEO_API ListEdgeAgentConfigurationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A description of a single stream's edge configuration.</p>
     */
    inline const Aws::Vector<ListEdgeAgentConfigurationsEdgeConfig>& GetEdgeConfigs() const { return m_edgeConfigs; }
    template<typename EdgeConfigsT = Aws::Vector<ListEdgeAgentConfigurationsEdgeConfig>>
    void SetEdgeConfigs(EdgeConfigsT&& value) { m_edgeConfigsHasBeenSet = true; m_edgeConfigs = std::forward<EdgeConfigsT>(value); }
    template<typename EdgeConfigsT = Aws::Vector<ListEdgeAgentConfigurationsEdgeConfig>>
    ListEdgeAgentConfigurationsResult& WithEdgeConfigs(EdgeConfigsT&& value) { SetEdgeConfigs(std::forward<EdgeConfigsT>(value)); return *this;}
    template<typename EdgeConfigsT = ListEdgeAgentConfigurationsEdgeConfig>
    ListEdgeAgentConfigurationsResult& AddEdgeConfigs(EdgeConfigsT&& value) { m_edgeConfigsHasBeenSet = true; m_edgeConfigs.emplace_back(std::forward<EdgeConfigsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the response is truncated, the call returns this element with a given
     * token. To get the next batch of edge configurations, use this token in your next
     * request.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListEdgeAgentConfigurationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListEdgeAgentConfigurationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ListEdgeAgentConfigurationsEdgeConfig> m_edgeConfigs;
    bool m_edgeConfigsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisVideo
} // namespace Aws
