/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/evidently/CloudWatchEvidently_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/evidently/model/FeatureSummary.h>
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
namespace CloudWatchEvidently
{
namespace Model
{
  class ListFeaturesResult
  {
  public:
    AWS_CLOUDWATCHEVIDENTLY_API ListFeaturesResult() = default;
    AWS_CLOUDWATCHEVIDENTLY_API ListFeaturesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHEVIDENTLY_API ListFeaturesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of structures that contain the configuration details of the features
     * in the specified project.</p>
     */
    inline const Aws::Vector<FeatureSummary>& GetFeatures() const { return m_features; }
    template<typename FeaturesT = Aws::Vector<FeatureSummary>>
    void SetFeatures(FeaturesT&& value) { m_featuresHasBeenSet = true; m_features = std::forward<FeaturesT>(value); }
    template<typename FeaturesT = Aws::Vector<FeatureSummary>>
    ListFeaturesResult& WithFeatures(FeaturesT&& value) { SetFeatures(std::forward<FeaturesT>(value)); return *this;}
    template<typename FeaturesT = FeatureSummary>
    ListFeaturesResult& AddFeatures(FeaturesT&& value) { m_featuresHasBeenSet = true; m_features.emplace_back(std::forward<FeaturesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use in a subsequent <code>ListFeatures</code> operation to
     * return the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListFeaturesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListFeaturesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<FeatureSummary> m_features;
    bool m_featuresHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
