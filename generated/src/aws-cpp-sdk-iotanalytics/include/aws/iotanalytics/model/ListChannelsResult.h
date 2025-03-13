/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotanalytics/IoTAnalytics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotanalytics/model/ChannelSummary.h>
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
namespace IoTAnalytics
{
namespace Model
{
  class ListChannelsResult
  {
  public:
    AWS_IOTANALYTICS_API ListChannelsResult() = default;
    AWS_IOTANALYTICS_API ListChannelsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTANALYTICS_API ListChannelsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of <code>ChannelSummary</code> objects.</p>
     */
    inline const Aws::Vector<ChannelSummary>& GetChannelSummaries() const { return m_channelSummaries; }
    template<typename ChannelSummariesT = Aws::Vector<ChannelSummary>>
    void SetChannelSummaries(ChannelSummariesT&& value) { m_channelSummariesHasBeenSet = true; m_channelSummaries = std::forward<ChannelSummariesT>(value); }
    template<typename ChannelSummariesT = Aws::Vector<ChannelSummary>>
    ListChannelsResult& WithChannelSummaries(ChannelSummariesT&& value) { SetChannelSummaries(std::forward<ChannelSummariesT>(value)); return *this;}
    template<typename ChannelSummariesT = ChannelSummary>
    ListChannelsResult& AddChannelSummaries(ChannelSummariesT&& value) { m_channelSummariesHasBeenSet = true; m_channelSummaries.emplace_back(std::forward<ChannelSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to retrieve the next set of results, or <code>null</code> if there
     * are no more results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListChannelsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListChannelsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ChannelSummary> m_channelSummaries;
    bool m_channelSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
