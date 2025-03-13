/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudtrail/CloudTrail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudtrail/model/TrailInfo.h>
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
namespace CloudTrail
{
namespace Model
{
  class ListTrailsResult
  {
  public:
    AWS_CLOUDTRAIL_API ListTrailsResult() = default;
    AWS_CLOUDTRAIL_API ListTrailsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDTRAIL_API ListTrailsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Returns the name, ARN, and home Region of trails in the current account.</p>
     */
    inline const Aws::Vector<TrailInfo>& GetTrails() const { return m_trails; }
    template<typename TrailsT = Aws::Vector<TrailInfo>>
    void SetTrails(TrailsT&& value) { m_trailsHasBeenSet = true; m_trails = std::forward<TrailsT>(value); }
    template<typename TrailsT = Aws::Vector<TrailInfo>>
    ListTrailsResult& WithTrails(TrailsT&& value) { SetTrails(std::forward<TrailsT>(value)); return *this;}
    template<typename TrailsT = TrailInfo>
    ListTrailsResult& AddTrails(TrailsT&& value) { m_trailsHasBeenSet = true; m_trails.emplace_back(std::forward<TrailsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use to get the next page of results after a previous API call.
     * If the token does not appear, there are no more results to return. The token
     * must be passed in with the same parameters as the previous call. For example, if
     * the original call specified an AttributeKey of 'Username' with a value of
     * 'root', the call with NextToken should include those same parameters.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListTrailsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListTrailsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<TrailInfo> m_trails;
    bool m_trailsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
