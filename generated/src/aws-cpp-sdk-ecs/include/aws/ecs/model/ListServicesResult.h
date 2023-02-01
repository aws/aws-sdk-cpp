/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace ECS
{
namespace Model
{
  class ListServicesResult
  {
  public:
    AWS_ECS_API ListServicesResult();
    AWS_ECS_API ListServicesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ECS_API ListServicesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of full ARN entries for each service that's associated with the
     * specified cluster.</p>
     */
    inline const Aws::Vector<Aws::String>& GetServiceArns() const{ return m_serviceArns; }

    /**
     * <p>The list of full ARN entries for each service that's associated with the
     * specified cluster.</p>
     */
    inline void SetServiceArns(const Aws::Vector<Aws::String>& value) { m_serviceArns = value; }

    /**
     * <p>The list of full ARN entries for each service that's associated with the
     * specified cluster.</p>
     */
    inline void SetServiceArns(Aws::Vector<Aws::String>&& value) { m_serviceArns = std::move(value); }

    /**
     * <p>The list of full ARN entries for each service that's associated with the
     * specified cluster.</p>
     */
    inline ListServicesResult& WithServiceArns(const Aws::Vector<Aws::String>& value) { SetServiceArns(value); return *this;}

    /**
     * <p>The list of full ARN entries for each service that's associated with the
     * specified cluster.</p>
     */
    inline ListServicesResult& WithServiceArns(Aws::Vector<Aws::String>&& value) { SetServiceArns(std::move(value)); return *this;}

    /**
     * <p>The list of full ARN entries for each service that's associated with the
     * specified cluster.</p>
     */
    inline ListServicesResult& AddServiceArns(const Aws::String& value) { m_serviceArns.push_back(value); return *this; }

    /**
     * <p>The list of full ARN entries for each service that's associated with the
     * specified cluster.</p>
     */
    inline ListServicesResult& AddServiceArns(Aws::String&& value) { m_serviceArns.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of full ARN entries for each service that's associated with the
     * specified cluster.</p>
     */
    inline ListServicesResult& AddServiceArns(const char* value) { m_serviceArns.push_back(value); return *this; }


    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListServices</code> request. When the results of a
     * <code>ListServices</code> request exceed <code>maxResults</code>, this value can
     * be used to retrieve the next page of results. This value is <code>null</code>
     * when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListServices</code> request. When the results of a
     * <code>ListServices</code> request exceed <code>maxResults</code>, this value can
     * be used to retrieve the next page of results. This value is <code>null</code>
     * when there are no more results to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListServices</code> request. When the results of a
     * <code>ListServices</code> request exceed <code>maxResults</code>, this value can
     * be used to retrieve the next page of results. This value is <code>null</code>
     * when there are no more results to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListServices</code> request. When the results of a
     * <code>ListServices</code> request exceed <code>maxResults</code>, this value can
     * be used to retrieve the next page of results. This value is <code>null</code>
     * when there are no more results to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListServices</code> request. When the results of a
     * <code>ListServices</code> request exceed <code>maxResults</code>, this value can
     * be used to retrieve the next page of results. This value is <code>null</code>
     * when there are no more results to return.</p>
     */
    inline ListServicesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListServices</code> request. When the results of a
     * <code>ListServices</code> request exceed <code>maxResults</code>, this value can
     * be used to retrieve the next page of results. This value is <code>null</code>
     * when there are no more results to return.</p>
     */
    inline ListServicesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListServices</code> request. When the results of a
     * <code>ListServices</code> request exceed <code>maxResults</code>, this value can
     * be used to retrieve the next page of results. This value is <code>null</code>
     * when there are no more results to return.</p>
     */
    inline ListServicesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_serviceArns;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
