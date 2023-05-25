/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gamelift/model/Build.h>
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
namespace GameLift
{
namespace Model
{
  class ListBuildsResult
  {
  public:
    AWS_GAMELIFT_API ListBuildsResult();
    AWS_GAMELIFT_API ListBuildsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMELIFT_API ListBuildsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A collection of build resources that match the request.</p>
     */
    inline const Aws::Vector<Build>& GetBuilds() const{ return m_builds; }

    /**
     * <p>A collection of build resources that match the request.</p>
     */
    inline void SetBuilds(const Aws::Vector<Build>& value) { m_builds = value; }

    /**
     * <p>A collection of build resources that match the request.</p>
     */
    inline void SetBuilds(Aws::Vector<Build>&& value) { m_builds = std::move(value); }

    /**
     * <p>A collection of build resources that match the request.</p>
     */
    inline ListBuildsResult& WithBuilds(const Aws::Vector<Build>& value) { SetBuilds(value); return *this;}

    /**
     * <p>A collection of build resources that match the request.</p>
     */
    inline ListBuildsResult& WithBuilds(Aws::Vector<Build>&& value) { SetBuilds(std::move(value)); return *this;}

    /**
     * <p>A collection of build resources that match the request.</p>
     */
    inline ListBuildsResult& AddBuilds(const Build& value) { m_builds.push_back(value); return *this; }

    /**
     * <p>A collection of build resources that match the request.</p>
     */
    inline ListBuildsResult& AddBuilds(Build&& value) { m_builds.push_back(std::move(value)); return *this; }


    /**
     * <p>A token that indicates where to resume retrieving results on the next call to
     * this operation. If no token is returned, these results represent the end of the
     * list.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token that indicates where to resume retrieving results on the next call to
     * this operation. If no token is returned, these results represent the end of the
     * list.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token that indicates where to resume retrieving results on the next call to
     * this operation. If no token is returned, these results represent the end of the
     * list.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token that indicates where to resume retrieving results on the next call to
     * this operation. If no token is returned, these results represent the end of the
     * list.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token that indicates where to resume retrieving results on the next call to
     * this operation. If no token is returned, these results represent the end of the
     * list.</p>
     */
    inline ListBuildsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token that indicates where to resume retrieving results on the next call to
     * this operation. If no token is returned, these results represent the end of the
     * list.</p>
     */
    inline ListBuildsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token that indicates where to resume retrieving results on the next call to
     * this operation. If no token is returned, these results represent the end of the
     * list.</p>
     */
    inline ListBuildsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListBuildsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListBuildsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListBuildsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<Build> m_builds;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
