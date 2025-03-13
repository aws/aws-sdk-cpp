/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents/IoTEvents_EXPORTS.h>
#include <aws/iotevents/IoTEventsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace IoTEvents
{
namespace Model
{

  /**
   */
  class GetDetectorModelAnalysisResultsRequest : public IoTEventsRequest
  {
  public:
    AWS_IOTEVENTS_API GetDetectorModelAnalysisResultsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetDetectorModelAnalysisResults"; }

    AWS_IOTEVENTS_API Aws::String SerializePayload() const override;

    AWS_IOTEVENTS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The ID of the analysis result that you want to retrieve.</p>
     */
    inline const Aws::String& GetAnalysisId() const { return m_analysisId; }
    inline bool AnalysisIdHasBeenSet() const { return m_analysisIdHasBeenSet; }
    template<typename AnalysisIdT = Aws::String>
    void SetAnalysisId(AnalysisIdT&& value) { m_analysisIdHasBeenSet = true; m_analysisId = std::forward<AnalysisIdT>(value); }
    template<typename AnalysisIdT = Aws::String>
    GetDetectorModelAnalysisResultsRequest& WithAnalysisId(AnalysisIdT&& value) { SetAnalysisId(std::forward<AnalysisIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token that you can use to return the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetDetectorModelAnalysisResultsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to be returned per request.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline GetDetectorModelAnalysisResultsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::String m_analysisId;
    bool m_analysisIdHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
