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
#include <aws/cloudhsmv2/CloudHSMV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudhsmv2/model/Cluster.h>
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
namespace CloudHSMV2
{
namespace Model
{
  class AWS_CLOUDHSMV2_API DescribeClustersResult
  {
  public:
    DescribeClustersResult();
    DescribeClustersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeClustersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of clusters.</p>
     */
    inline const Aws::Vector<Cluster>& GetClusters() const{ return m_clusters; }

    /**
     * <p>A list of clusters.</p>
     */
    inline void SetClusters(const Aws::Vector<Cluster>& value) { m_clusters = value; }

    /**
     * <p>A list of clusters.</p>
     */
    inline void SetClusters(Aws::Vector<Cluster>&& value) { m_clusters = std::move(value); }

    /**
     * <p>A list of clusters.</p>
     */
    inline DescribeClustersResult& WithClusters(const Aws::Vector<Cluster>& value) { SetClusters(value); return *this;}

    /**
     * <p>A list of clusters.</p>
     */
    inline DescribeClustersResult& WithClusters(Aws::Vector<Cluster>&& value) { SetClusters(std::move(value)); return *this;}

    /**
     * <p>A list of clusters.</p>
     */
    inline DescribeClustersResult& AddClusters(const Cluster& value) { m_clusters.push_back(value); return *this; }

    /**
     * <p>A list of clusters.</p>
     */
    inline DescribeClustersResult& AddClusters(Cluster&& value) { m_clusters.push_back(std::move(value)); return *this; }


    /**
     * <p>An opaque string that indicates that the response contains only a subset of
     * clusters. Use this value in a subsequent <code>DescribeClusters</code> request
     * to get more clusters.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>An opaque string that indicates that the response contains only a subset of
     * clusters. Use this value in a subsequent <code>DescribeClusters</code> request
     * to get more clusters.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>An opaque string that indicates that the response contains only a subset of
     * clusters. Use this value in a subsequent <code>DescribeClusters</code> request
     * to get more clusters.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>An opaque string that indicates that the response contains only a subset of
     * clusters. Use this value in a subsequent <code>DescribeClusters</code> request
     * to get more clusters.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>An opaque string that indicates that the response contains only a subset of
     * clusters. Use this value in a subsequent <code>DescribeClusters</code> request
     * to get more clusters.</p>
     */
    inline DescribeClustersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>An opaque string that indicates that the response contains only a subset of
     * clusters. Use this value in a subsequent <code>DescribeClusters</code> request
     * to get more clusters.</p>
     */
    inline DescribeClustersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>An opaque string that indicates that the response contains only a subset of
     * clusters. Use this value in a subsequent <code>DescribeClusters</code> request
     * to get more clusters.</p>
     */
    inline DescribeClustersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Cluster> m_clusters;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace CloudHSMV2
} // namespace Aws
