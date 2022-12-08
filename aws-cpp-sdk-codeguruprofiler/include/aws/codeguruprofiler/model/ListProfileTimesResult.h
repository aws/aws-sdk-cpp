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
    AWS_CODEGURUPROFILER_API ListProfileTimesResult();
    AWS_CODEGURUPROFILER_API ListProfileTimesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEGURUPROFILER_API ListProfileTimesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListProfileTimes</code> request. When the results of a
     * <code>ListProfileTimes</code> request exceed <code>maxResults</code>, this value
     * can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListProfileTimes</code> request. When the results of a
     * <code>ListProfileTimes</code> request exceed <code>maxResults</code>, this value
     * can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListProfileTimes</code> request. When the results of a
     * <code>ListProfileTimes</code> request exceed <code>maxResults</code>, this value
     * can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListProfileTimes</code> request. When the results of a
     * <code>ListProfileTimes</code> request exceed <code>maxResults</code>, this value
     * can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListProfileTimes</code> request. When the results of a
     * <code>ListProfileTimes</code> request exceed <code>maxResults</code>, this value
     * can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return. </p>
     */
    inline ListProfileTimesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListProfileTimes</code> request. When the results of a
     * <code>ListProfileTimes</code> request exceed <code>maxResults</code>, this value
     * can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return. </p>
     */
    inline ListProfileTimesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListProfileTimes</code> request. When the results of a
     * <code>ListProfileTimes</code> request exceed <code>maxResults</code>, this value
     * can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return. </p>
     */
    inline ListProfileTimesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The list of start times of the available profiles for the aggregation period
     * in the specified time range. </p>
     */
    inline const Aws::Vector<ProfileTime>& GetProfileTimes() const{ return m_profileTimes; }

    /**
     * <p>The list of start times of the available profiles for the aggregation period
     * in the specified time range. </p>
     */
    inline void SetProfileTimes(const Aws::Vector<ProfileTime>& value) { m_profileTimes = value; }

    /**
     * <p>The list of start times of the available profiles for the aggregation period
     * in the specified time range. </p>
     */
    inline void SetProfileTimes(Aws::Vector<ProfileTime>&& value) { m_profileTimes = std::move(value); }

    /**
     * <p>The list of start times of the available profiles for the aggregation period
     * in the specified time range. </p>
     */
    inline ListProfileTimesResult& WithProfileTimes(const Aws::Vector<ProfileTime>& value) { SetProfileTimes(value); return *this;}

    /**
     * <p>The list of start times of the available profiles for the aggregation period
     * in the specified time range. </p>
     */
    inline ListProfileTimesResult& WithProfileTimes(Aws::Vector<ProfileTime>&& value) { SetProfileTimes(std::move(value)); return *this;}

    /**
     * <p>The list of start times of the available profiles for the aggregation period
     * in the specified time range. </p>
     */
    inline ListProfileTimesResult& AddProfileTimes(const ProfileTime& value) { m_profileTimes.push_back(value); return *this; }

    /**
     * <p>The list of start times of the available profiles for the aggregation period
     * in the specified time range. </p>
     */
    inline ListProfileTimesResult& AddProfileTimes(ProfileTime&& value) { m_profileTimes.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<ProfileTime> m_profileTimes;
  };

} // namespace Model
} // namespace CodeGuruProfiler
} // namespace Aws
