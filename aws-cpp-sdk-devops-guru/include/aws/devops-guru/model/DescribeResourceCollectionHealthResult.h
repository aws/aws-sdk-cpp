/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-guru/model/CloudFormationHealth.h>
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
namespace DevOpsGuru
{
namespace Model
{
  class AWS_DEVOPSGURU_API DescribeResourceCollectionHealthResult
  {
  public:
    DescribeResourceCollectionHealthResult();
    DescribeResourceCollectionHealthResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeResourceCollectionHealthResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The returned <code>CloudFormationHealthOverview</code> object that contains
     * an <code>InsightHealthOverview</code> object with the requested system health
     * information. </p>
     */
    inline const Aws::Vector<CloudFormationHealth>& GetCloudFormation() const{ return m_cloudFormation; }

    /**
     * <p> The returned <code>CloudFormationHealthOverview</code> object that contains
     * an <code>InsightHealthOverview</code> object with the requested system health
     * information. </p>
     */
    inline void SetCloudFormation(const Aws::Vector<CloudFormationHealth>& value) { m_cloudFormation = value; }

    /**
     * <p> The returned <code>CloudFormationHealthOverview</code> object that contains
     * an <code>InsightHealthOverview</code> object with the requested system health
     * information. </p>
     */
    inline void SetCloudFormation(Aws::Vector<CloudFormationHealth>&& value) { m_cloudFormation = std::move(value); }

    /**
     * <p> The returned <code>CloudFormationHealthOverview</code> object that contains
     * an <code>InsightHealthOverview</code> object with the requested system health
     * information. </p>
     */
    inline DescribeResourceCollectionHealthResult& WithCloudFormation(const Aws::Vector<CloudFormationHealth>& value) { SetCloudFormation(value); return *this;}

    /**
     * <p> The returned <code>CloudFormationHealthOverview</code> object that contains
     * an <code>InsightHealthOverview</code> object with the requested system health
     * information. </p>
     */
    inline DescribeResourceCollectionHealthResult& WithCloudFormation(Aws::Vector<CloudFormationHealth>&& value) { SetCloudFormation(std::move(value)); return *this;}

    /**
     * <p> The returned <code>CloudFormationHealthOverview</code> object that contains
     * an <code>InsightHealthOverview</code> object with the requested system health
     * information. </p>
     */
    inline DescribeResourceCollectionHealthResult& AddCloudFormation(const CloudFormationHealth& value) { m_cloudFormation.push_back(value); return *this; }

    /**
     * <p> The returned <code>CloudFormationHealthOverview</code> object that contains
     * an <code>InsightHealthOverview</code> object with the requested system health
     * information. </p>
     */
    inline DescribeResourceCollectionHealthResult& AddCloudFormation(CloudFormationHealth&& value) { m_cloudFormation.push_back(std::move(value)); return *this; }


    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline DescribeResourceCollectionHealthResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline DescribeResourceCollectionHealthResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If there are no more pages, this value is null.</p>
     */
    inline DescribeResourceCollectionHealthResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<CloudFormationHealth> m_cloudFormation;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
