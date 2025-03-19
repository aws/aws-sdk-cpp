/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace/Finspace_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/finspace/model/KxScalingGroup.h>
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
namespace finspace
{
namespace Model
{
  class ListKxScalingGroupsResult
  {
  public:
    AWS_FINSPACE_API ListKxScalingGroupsResult() = default;
    AWS_FINSPACE_API ListKxScalingGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FINSPACE_API ListKxScalingGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> A list of scaling groups available in a kdb environment.</p>
     */
    inline const Aws::Vector<KxScalingGroup>& GetScalingGroups() const { return m_scalingGroups; }
    template<typename ScalingGroupsT = Aws::Vector<KxScalingGroup>>
    void SetScalingGroups(ScalingGroupsT&& value) { m_scalingGroupsHasBeenSet = true; m_scalingGroups = std::forward<ScalingGroupsT>(value); }
    template<typename ScalingGroupsT = Aws::Vector<KxScalingGroup>>
    ListKxScalingGroupsResult& WithScalingGroups(ScalingGroupsT&& value) { SetScalingGroups(std::forward<ScalingGroupsT>(value)); return *this;}
    template<typename ScalingGroupsT = KxScalingGroup>
    ListKxScalingGroupsResult& AddScalingGroups(ScalingGroupsT&& value) { m_scalingGroupsHasBeenSet = true; m_scalingGroups.emplace_back(std::forward<ScalingGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> A token that indicates where a results page should begin. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListKxScalingGroupsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListKxScalingGroupsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<KxScalingGroup> m_scalingGroups;
    bool m_scalingGroupsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace finspace
} // namespace Aws
