/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/events/CloudWatchEvents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/events/model/ApiDestination.h>
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
namespace CloudWatchEvents
{
namespace Model
{
  class ListApiDestinationsResult
  {
  public:
    AWS_CLOUDWATCHEVENTS_API ListApiDestinationsResult() = default;
    AWS_CLOUDWATCHEVENTS_API ListApiDestinationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHEVENTS_API ListApiDestinationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of <code>ApiDestination</code> objects that include information
     * about an API destination.</p>
     */
    inline const Aws::Vector<ApiDestination>& GetApiDestinations() const { return m_apiDestinations; }
    template<typename ApiDestinationsT = Aws::Vector<ApiDestination>>
    void SetApiDestinations(ApiDestinationsT&& value) { m_apiDestinationsHasBeenSet = true; m_apiDestinations = std::forward<ApiDestinationsT>(value); }
    template<typename ApiDestinationsT = Aws::Vector<ApiDestination>>
    ListApiDestinationsResult& WithApiDestinations(ApiDestinationsT&& value) { SetApiDestinations(std::forward<ApiDestinationsT>(value)); return *this;}
    template<typename ApiDestinationsT = ApiDestination>
    ListApiDestinationsResult& AddApiDestinations(ApiDestinationsT&& value) { m_apiDestinationsHasBeenSet = true; m_apiDestinations.emplace_back(std::forward<ApiDestinationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token you can use in a subsequent request to retrieve the next set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListApiDestinationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListApiDestinationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ApiDestination> m_apiDestinations;
    bool m_apiDestinationsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws
