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
    AWS_IMAGEBUILDER_API ListImageScanFindingAggregationsResult();
    AWS_IMAGEBUILDER_API ListImageScanFindingAggregationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IMAGEBUILDER_API ListImageScanFindingAggregationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The request ID that uniquely identifies this request.</p>
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListImageScanFindingAggregationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListImageScanFindingAggregationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListImageScanFindingAggregationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
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
    inline const Aws::String& GetAggregationType() const{ return m_aggregationType; }
    inline void SetAggregationType(const Aws::String& value) { m_aggregationType = value; }
    inline void SetAggregationType(Aws::String&& value) { m_aggregationType = std::move(value); }
    inline void SetAggregationType(const char* value) { m_aggregationType.assign(value); }
    inline ListImageScanFindingAggregationsResult& WithAggregationType(const Aws::String& value) { SetAggregationType(value); return *this;}
    inline ListImageScanFindingAggregationsResult& WithAggregationType(Aws::String&& value) { SetAggregationType(std::move(value)); return *this;}
    inline ListImageScanFindingAggregationsResult& WithAggregationType(const char* value) { SetAggregationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of image scan finding aggregations that match the filter
     * criteria.</p>
     */
    inline const Aws::Vector<ImageScanFindingAggregation>& GetResponses() const{ return m_responses; }
    inline void SetResponses(const Aws::Vector<ImageScanFindingAggregation>& value) { m_responses = value; }
    inline void SetResponses(Aws::Vector<ImageScanFindingAggregation>&& value) { m_responses = std::move(value); }
    inline ListImageScanFindingAggregationsResult& WithResponses(const Aws::Vector<ImageScanFindingAggregation>& value) { SetResponses(value); return *this;}
    inline ListImageScanFindingAggregationsResult& WithResponses(Aws::Vector<ImageScanFindingAggregation>&& value) { SetResponses(std::move(value)); return *this;}
    inline ListImageScanFindingAggregationsResult& AddResponses(const ImageScanFindingAggregation& value) { m_responses.push_back(value); return *this; }
    inline ListImageScanFindingAggregationsResult& AddResponses(ImageScanFindingAggregation&& value) { m_responses.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The next token used for paginated responses. When this field isn't empty,
     * there are additional elements that the service hasn't included in this request.
     * Use this token with the next request to retrieve additional objects.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListImageScanFindingAggregationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListImageScanFindingAggregationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListImageScanFindingAggregationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}
  private:

    Aws::String m_requestId;

    Aws::String m_aggregationType;

    Aws::Vector<ImageScanFindingAggregation> m_responses;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
