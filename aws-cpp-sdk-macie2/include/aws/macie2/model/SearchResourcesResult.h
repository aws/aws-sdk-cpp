/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/macie2/model/MatchingResource.h>
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
namespace Macie2
{
namespace Model
{
  class SearchResourcesResult
  {
  public:
    AWS_MACIE2_API SearchResourcesResult();
    AWS_MACIE2_API SearchResourcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MACIE2_API SearchResourcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of objects, one for each resource that matches the filter criteria
     * specified in the request.</p>
     */
    inline const Aws::Vector<MatchingResource>& GetMatchingResources() const{ return m_matchingResources; }

    /**
     * <p>An array of objects, one for each resource that matches the filter criteria
     * specified in the request.</p>
     */
    inline void SetMatchingResources(const Aws::Vector<MatchingResource>& value) { m_matchingResources = value; }

    /**
     * <p>An array of objects, one for each resource that matches the filter criteria
     * specified in the request.</p>
     */
    inline void SetMatchingResources(Aws::Vector<MatchingResource>&& value) { m_matchingResources = std::move(value); }

    /**
     * <p>An array of objects, one for each resource that matches the filter criteria
     * specified in the request.</p>
     */
    inline SearchResourcesResult& WithMatchingResources(const Aws::Vector<MatchingResource>& value) { SetMatchingResources(value); return *this;}

    /**
     * <p>An array of objects, one for each resource that matches the filter criteria
     * specified in the request.</p>
     */
    inline SearchResourcesResult& WithMatchingResources(Aws::Vector<MatchingResource>&& value) { SetMatchingResources(std::move(value)); return *this;}

    /**
     * <p>An array of objects, one for each resource that matches the filter criteria
     * specified in the request.</p>
     */
    inline SearchResourcesResult& AddMatchingResources(const MatchingResource& value) { m_matchingResources.push_back(value); return *this; }

    /**
     * <p>An array of objects, one for each resource that matches the filter criteria
     * specified in the request.</p>
     */
    inline SearchResourcesResult& AddMatchingResources(MatchingResource&& value) { m_matchingResources.push_back(std::move(value)); return *this; }


    /**
     * <p>The string to use in a subsequent request to get the next page of results in
     * a paginated response. This value is null if there are no additional pages.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The string to use in a subsequent request to get the next page of results in
     * a paginated response. This value is null if there are no additional pages.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The string to use in a subsequent request to get the next page of results in
     * a paginated response. This value is null if there are no additional pages.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The string to use in a subsequent request to get the next page of results in
     * a paginated response. This value is null if there are no additional pages.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The string to use in a subsequent request to get the next page of results in
     * a paginated response. This value is null if there are no additional pages.</p>
     */
    inline SearchResourcesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The string to use in a subsequent request to get the next page of results in
     * a paginated response. This value is null if there are no additional pages.</p>
     */
    inline SearchResourcesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The string to use in a subsequent request to get the next page of results in
     * a paginated response. This value is null if there are no additional pages.</p>
     */
    inline SearchResourcesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<MatchingResource> m_matchingResources;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
