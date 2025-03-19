/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/imagebuilder/model/ImageScanFindingAggregation.h>
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
namespace imagebuilder
{
namespace Model
{
  class ListImageScanFindingAggregationsResult
  {
  public:
    AWS_IMAGEBUILDER_API ListImageScanFindingAggregationsResult() = default;
    AWS_IMAGEBUILDER_API ListImageScanFindingAggregationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IMAGEBUILDER_API ListImageScanFindingAggregationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The request ID that uniquely identifies this request.</p>
     */
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListImageScanFindingAggregationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The aggregation type specifies what type of key is used to group the image
     * scan findings. Image Builder returns results based on the request filter. If you
     * didn't specify a filter in the request, the type defaults to
     * <code>accountId</code>.</p> <p class="title"> <b>Aggregation types</b> </p> <ul>
     * <li> <p>accountId</p> </li> <li> <p>imageBuildVersionArn</p> </li> <li>
     * <p>imagePipelineArn</p> </li> <li> <p>vulnerabilityId</p> </li> </ul> <p>Each
     * aggregation includes counts by severity level for medium severity and higher
     * level findings, plus a total for all of the findings for each key value.</p>
     */
    inline const Aws::String& GetAggregationType() const { return m_aggregationType; }
    template<typename AggregationTypeT = Aws::String>
    void SetAggregationType(AggregationTypeT&& value) { m_aggregationTypeHasBeenSet = true; m_aggregationType = std::forward<AggregationTypeT>(value); }
    template<typename AggregationTypeT = Aws::String>
    ListImageScanFindingAggregationsResult& WithAggregationType(AggregationTypeT&& value) { SetAggregationType(std::forward<AggregationTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of image scan finding aggregations that match the filter
     * criteria.</p>
     */
    inline const Aws::Vector<ImageScanFindingAggregation>& GetResponses() const { return m_responses; }
    template<typename ResponsesT = Aws::Vector<ImageScanFindingAggregation>>
    void SetResponses(ResponsesT&& value) { m_responsesHasBeenSet = true; m_responses = std::forward<ResponsesT>(value); }
    template<typename ResponsesT = Aws::Vector<ImageScanFindingAggregation>>
    ListImageScanFindingAggregationsResult& WithResponses(ResponsesT&& value) { SetResponses(std::forward<ResponsesT>(value)); return *this;}
    template<typename ResponsesT = ImageScanFindingAggregation>
    ListImageScanFindingAggregationsResult& AddResponses(ResponsesT&& value) { m_responsesHasBeenSet = true; m_responses.emplace_back(std::forward<ResponsesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The next token used for paginated responses. When this field isn't empty,
     * there are additional elements that the service hasn't included in this request.
     * Use this token with the next request to retrieve additional objects.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListImageScanFindingAggregationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;

    Aws::String m_aggregationType;
    bool m_aggregationTypeHasBeenSet = false;

    Aws::Vector<ImageScanFindingAggregation> m_responses;
    bool m_responsesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
