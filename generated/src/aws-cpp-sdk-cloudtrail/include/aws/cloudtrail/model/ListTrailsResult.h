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
    AWS_CLOUDTRAIL_API ListTrailsResult();
    AWS_CLOUDTRAIL_API ListTrailsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDTRAIL_API ListTrailsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Returns the name, ARN, and home region of trails in the current account.</p>
     */
    inline const Aws::Vector<TrailInfo>& GetTrails() const{ return m_trails; }

    /**
     * <p>Returns the name, ARN, and home region of trails in the current account.</p>
     */
    inline void SetTrails(const Aws::Vector<TrailInfo>& value) { m_trails = value; }

    /**
     * <p>Returns the name, ARN, and home region of trails in the current account.</p>
     */
    inline void SetTrails(Aws::Vector<TrailInfo>&& value) { m_trails = std::move(value); }

    /**
     * <p>Returns the name, ARN, and home region of trails in the current account.</p>
     */
    inline ListTrailsResult& WithTrails(const Aws::Vector<TrailInfo>& value) { SetTrails(value); return *this;}

    /**
     * <p>Returns the name, ARN, and home region of trails in the current account.</p>
     */
    inline ListTrailsResult& WithTrails(Aws::Vector<TrailInfo>&& value) { SetTrails(std::move(value)); return *this;}

    /**
     * <p>Returns the name, ARN, and home region of trails in the current account.</p>
     */
    inline ListTrailsResult& AddTrails(const TrailInfo& value) { m_trails.push_back(value); return *this; }

    /**
     * <p>Returns the name, ARN, and home region of trails in the current account.</p>
     */
    inline ListTrailsResult& AddTrails(TrailInfo&& value) { m_trails.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to use to get the next page of results after a previous API call.
     * If the token does not appear, there are no more results to return. The token
     * must be passed in with the same parameters as the previous call. For example, if
     * the original call specified an AttributeKey of 'Username' with a value of
     * 'root', the call with NextToken should include those same parameters.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use to get the next page of results after a previous API call.
     * If the token does not appear, there are no more results to return. The token
     * must be passed in with the same parameters as the previous call. For example, if
     * the original call specified an AttributeKey of 'Username' with a value of
     * 'root', the call with NextToken should include those same parameters.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use to get the next page of results after a previous API call.
     * If the token does not appear, there are no more results to return. The token
     * must be passed in with the same parameters as the previous call. For example, if
     * the original call specified an AttributeKey of 'Username' with a value of
     * 'root', the call with NextToken should include those same parameters.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to use to get the next page of results after a previous API call.
     * If the token does not appear, there are no more results to return. The token
     * must be passed in with the same parameters as the previous call. For example, if
     * the original call specified an AttributeKey of 'Username' with a value of
     * 'root', the call with NextToken should include those same parameters.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use to get the next page of results after a previous API call.
     * If the token does not appear, there are no more results to return. The token
     * must be passed in with the same parameters as the previous call. For example, if
     * the original call specified an AttributeKey of 'Username' with a value of
     * 'root', the call with NextToken should include those same parameters.</p>
     */
    inline ListTrailsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to get the next page of results after a previous API call.
     * If the token does not appear, there are no more results to return. The token
     * must be passed in with the same parameters as the previous call. For example, if
     * the original call specified an AttributeKey of 'Username' with a value of
     * 'root', the call with NextToken should include those same parameters.</p>
     */
    inline ListTrailsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to get the next page of results after a previous API call.
     * If the token does not appear, there are no more results to return. The token
     * must be passed in with the same parameters as the previous call. For example, if
     * the original call specified an AttributeKey of 'Username' with a value of
     * 'root', the call with NextToken should include those same parameters.</p>
     */
    inline ListTrailsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<TrailInfo> m_trails;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace CloudTrail
} // namespace Aws
