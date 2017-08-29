/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opsworks/model/EcsCluster.h>
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
namespace OpsWorks
{
namespace Model
{
  /**
   * <p>Contains the response to a <code>DescribeEcsClusters</code>
   * request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DescribeEcsClustersResult">AWS
   * API Reference</a></p>
   */
  class AWS_OPSWORKS_API DescribeEcsClustersResult
  {
  public:
    DescribeEcsClustersResult();
    DescribeEcsClustersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeEcsClustersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of <code>EcsCluster</code> objects containing the cluster
     * descriptions.</p>
     */
    inline const Aws::Vector<EcsCluster>& GetEcsClusters() const{ return m_ecsClusters; }

    /**
     * <p>A list of <code>EcsCluster</code> objects containing the cluster
     * descriptions.</p>
     */
    inline void SetEcsClusters(const Aws::Vector<EcsCluster>& value) { m_ecsClusters = value; }

    /**
     * <p>A list of <code>EcsCluster</code> objects containing the cluster
     * descriptions.</p>
     */
    inline void SetEcsClusters(Aws::Vector<EcsCluster>&& value) { m_ecsClusters = std::move(value); }

    /**
     * <p>A list of <code>EcsCluster</code> objects containing the cluster
     * descriptions.</p>
     */
    inline DescribeEcsClustersResult& WithEcsClusters(const Aws::Vector<EcsCluster>& value) { SetEcsClusters(value); return *this;}

    /**
     * <p>A list of <code>EcsCluster</code> objects containing the cluster
     * descriptions.</p>
     */
    inline DescribeEcsClustersResult& WithEcsClusters(Aws::Vector<EcsCluster>&& value) { SetEcsClusters(std::move(value)); return *this;}

    /**
     * <p>A list of <code>EcsCluster</code> objects containing the cluster
     * descriptions.</p>
     */
    inline DescribeEcsClustersResult& AddEcsClusters(const EcsCluster& value) { m_ecsClusters.push_back(value); return *this; }

    /**
     * <p>A list of <code>EcsCluster</code> objects containing the cluster
     * descriptions.</p>
     */
    inline DescribeEcsClustersResult& AddEcsClusters(EcsCluster&& value) { m_ecsClusters.push_back(std::move(value)); return *this; }


    /**
     * <p>If a paginated request does not return all of the remaining results, this
     * parameter is set to a token that you can assign to the request object's
     * <code>NextToken</code> parameter to retrieve the next set of results. If the
     * previous paginated request returned all of the remaining results, this parameter
     * is set to <code>null</code>.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If a paginated request does not return all of the remaining results, this
     * parameter is set to a token that you can assign to the request object's
     * <code>NextToken</code> parameter to retrieve the next set of results. If the
     * previous paginated request returned all of the remaining results, this parameter
     * is set to <code>null</code>.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If a paginated request does not return all of the remaining results, this
     * parameter is set to a token that you can assign to the request object's
     * <code>NextToken</code> parameter to retrieve the next set of results. If the
     * previous paginated request returned all of the remaining results, this parameter
     * is set to <code>null</code>.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If a paginated request does not return all of the remaining results, this
     * parameter is set to a token that you can assign to the request object's
     * <code>NextToken</code> parameter to retrieve the next set of results. If the
     * previous paginated request returned all of the remaining results, this parameter
     * is set to <code>null</code>.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If a paginated request does not return all of the remaining results, this
     * parameter is set to a token that you can assign to the request object's
     * <code>NextToken</code> parameter to retrieve the next set of results. If the
     * previous paginated request returned all of the remaining results, this parameter
     * is set to <code>null</code>.</p>
     */
    inline DescribeEcsClustersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If a paginated request does not return all of the remaining results, this
     * parameter is set to a token that you can assign to the request object's
     * <code>NextToken</code> parameter to retrieve the next set of results. If the
     * previous paginated request returned all of the remaining results, this parameter
     * is set to <code>null</code>.</p>
     */
    inline DescribeEcsClustersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If a paginated request does not return all of the remaining results, this
     * parameter is set to a token that you can assign to the request object's
     * <code>NextToken</code> parameter to retrieve the next set of results. If the
     * previous paginated request returned all of the remaining results, this parameter
     * is set to <code>null</code>.</p>
     */
    inline DescribeEcsClustersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<EcsCluster> m_ecsClusters;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
