/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguruprofiler/CodeGuruProfiler_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codeguruprofiler/model/ProfileTime.h>
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
namespace CodeGuruProfiler
{
namespace Model
{
  /**
   * <p>The structure representing the listProfileTimesResponse.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeguruprofiler-2019-07-18/ListProfileTimesResponse">AWS
   * API Reference</a></p>
   */
  class ListProfileTimesResult
  {
  public:
    AWS_CODEGURUPROFILER_API ListProfileTimesResult() = default;
    AWS_CODEGURUPROFILER_API ListProfileTimesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEGURUPROFILER_API ListProfileTimesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListProfileTimes</code> request. When the results of a
     * <code>ListProfileTimes</code> request exceed <code>maxResults</code>, this value
     * can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListProfileTimesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of start times of the available profiles for the aggregation period
     * in the specified time range. </p>
     */
    inline const Aws::Vector<ProfileTime>& GetProfileTimes() const { return m_profileTimes; }
    template<typename ProfileTimesT = Aws::Vector<ProfileTime>>
    void SetProfileTimes(ProfileTimesT&& value) { m_profileTimesHasBeenSet = true; m_profileTimes = std::forward<ProfileTimesT>(value); }
    template<typename ProfileTimesT = Aws::Vector<ProfileTime>>
    ListProfileTimesResult& WithProfileTimes(ProfileTimesT&& value) { SetProfileTimes(std::forward<ProfileTimesT>(value)); return *this;}
    template<typename ProfileTimesT = ProfileTime>
    ListProfileTimesResult& AddProfileTimes(ProfileTimesT&& value) { m_profileTimesHasBeenSet = true; m_profileTimes.emplace_back(std::forward<ProfileTimesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListProfileTimesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<ProfileTime> m_profileTimes;
    bool m_profileTimesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruProfiler
} // namespace Aws
