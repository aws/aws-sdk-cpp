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
  class ListContainerInstancesResult
  {
  public:
    AWS_ECS_API ListContainerInstancesResult();
    AWS_ECS_API ListContainerInstancesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ECS_API ListContainerInstancesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of container instances with full ARN entries for each container
     * instance associated with the specified cluster.</p>
     */
    inline const Aws::Vector<Aws::String>& GetContainerInstanceArns() const{ return m_containerInstanceArns; }

    /**
     * <p>The list of container instances with full ARN entries for each container
     * instance associated with the specified cluster.</p>
     */
    inline void SetContainerInstanceArns(const Aws::Vector<Aws::String>& value) { m_containerInstanceArns = value; }

    /**
     * <p>The list of container instances with full ARN entries for each container
     * instance associated with the specified cluster.</p>
     */
    inline void SetContainerInstanceArns(Aws::Vector<Aws::String>&& value) { m_containerInstanceArns = std::move(value); }

    /**
     * <p>The list of container instances with full ARN entries for each container
     * instance associated with the specified cluster.</p>
     */
    inline ListContainerInstancesResult& WithContainerInstanceArns(const Aws::Vector<Aws::String>& value) { SetContainerInstanceArns(value); return *this;}

    /**
     * <p>The list of container instances with full ARN entries for each container
     * instance associated with the specified cluster.</p>
     */
    inline ListContainerInstancesResult& WithContainerInstanceArns(Aws::Vector<Aws::String>&& value) { SetContainerInstanceArns(std::move(value)); return *this;}

    /**
     * <p>The list of container instances with full ARN entries for each container
     * instance associated with the specified cluster.</p>
     */
    inline ListContainerInstancesResult& AddContainerInstanceArns(const Aws::String& value) { m_containerInstanceArns.push_back(value); return *this; }

    /**
     * <p>The list of container instances with full ARN entries for each container
     * instance associated with the specified cluster.</p>
     */
    inline ListContainerInstancesResult& AddContainerInstanceArns(Aws::String&& value) { m_containerInstanceArns.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of container instances with full ARN entries for each container
     * instance associated with the specified cluster.</p>
     */
    inline ListContainerInstancesResult& AddContainerInstanceArns(const char* value) { m_containerInstanceArns.push_back(value); return *this; }


    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListContainerInstances</code> request. When the results of a
     * <code>ListContainerInstances</code> request exceed <code>maxResults</code>, this
     * value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListContainerInstances</code> request. When the results of a
     * <code>ListContainerInstances</code> request exceed <code>maxResults</code>, this
     * value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListContainerInstances</code> request. When the results of a
     * <code>ListContainerInstances</code> request exceed <code>maxResults</code>, this
     * value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListContainerInstances</code> request. When the results of a
     * <code>ListContainerInstances</code> request exceed <code>maxResults</code>, this
     * value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListContainerInstances</code> request. When the results of a
     * <code>ListContainerInstances</code> request exceed <code>maxResults</code>, this
     * value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline ListContainerInstancesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListContainerInstances</code> request. When the results of a
     * <code>ListContainerInstances</code> request exceed <code>maxResults</code>, this
     * value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline ListContainerInstancesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListContainerInstances</code> request. When the results of a
     * <code>ListContainerInstances</code> request exceed <code>maxResults</code>, this
     * value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline ListContainerInstancesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_containerInstanceArns;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
