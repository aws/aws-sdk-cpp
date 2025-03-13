/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/model/LightsailDistribution.h>
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
namespace Lightsail
{
namespace Model
{
  class GetDistributionsResult
  {
  public:
    AWS_LIGHTSAIL_API GetDistributionsResult() = default;
    AWS_LIGHTSAIL_API GetDistributionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LIGHTSAIL_API GetDistributionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of objects that describe your distributions.</p>
     */
    inline const Aws::Vector<LightsailDistribution>& GetDistributions() const { return m_distributions; }
    template<typename DistributionsT = Aws::Vector<LightsailDistribution>>
    void SetDistributions(DistributionsT&& value) { m_distributionsHasBeenSet = true; m_distributions = std::forward<DistributionsT>(value); }
    template<typename DistributionsT = Aws::Vector<LightsailDistribution>>
    GetDistributionsResult& WithDistributions(DistributionsT&& value) { SetDistributions(std::forward<DistributionsT>(value)); return *this;}
    template<typename DistributionsT = LightsailDistribution>
    GetDistributionsResult& AddDistributions(DistributionsT&& value) { m_distributionsHasBeenSet = true; m_distributions.emplace_back(std::forward<DistributionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to advance to the next page of results from your request.</p> <p>A
     * next page token is not returned if there are no more results to display.</p>
     * <p>To get the next page of results, perform another
     * <code>GetDistributions</code> request and specify the next page token using the
     * <code>pageToken</code> parameter.</p>
     */
    inline const Aws::String& GetNextPageToken() const { return m_nextPageToken; }
    template<typename NextPageTokenT = Aws::String>
    void SetNextPageToken(NextPageTokenT&& value) { m_nextPageTokenHasBeenSet = true; m_nextPageToken = std::forward<NextPageTokenT>(value); }
    template<typename NextPageTokenT = Aws::String>
    GetDistributionsResult& WithNextPageToken(NextPageTokenT&& value) { SetNextPageToken(std::forward<NextPageTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetDistributionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<LightsailDistribution> m_distributions;
    bool m_distributionsHasBeenSet = false;

    Aws::String m_nextPageToken;
    bool m_nextPageTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
