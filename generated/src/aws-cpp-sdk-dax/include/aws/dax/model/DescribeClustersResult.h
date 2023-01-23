/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dax/DAX_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dax/model/Cluster.h>
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
namespace DAX
{
namespace Model
{
  class DescribeClustersResult
  {
  public:
    AWS_DAX_API DescribeClustersResult();
    AWS_DAX_API DescribeClustersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DAX_API DescribeClustersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Provides an identifier to allow retrieval of paginated results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Provides an identifier to allow retrieval of paginated results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Provides an identifier to allow retrieval of paginated results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Provides an identifier to allow retrieval of paginated results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Provides an identifier to allow retrieval of paginated results.</p>
     */
    inline DescribeClustersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Provides an identifier to allow retrieval of paginated results.</p>
     */
    inline DescribeClustersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Provides an identifier to allow retrieval of paginated results.</p>
     */
    inline DescribeClustersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The descriptions of your DAX clusters, in response to a
     * <i>DescribeClusters</i> request.</p>
     */
    inline const Aws::Vector<Cluster>& GetClusters() const{ return m_clusters; }

    /**
     * <p>The descriptions of your DAX clusters, in response to a
     * <i>DescribeClusters</i> request.</p>
     */
    inline void SetClusters(const Aws::Vector<Cluster>& value) { m_clusters = value; }

    /**
     * <p>The descriptions of your DAX clusters, in response to a
     * <i>DescribeClusters</i> request.</p>
     */
    inline void SetClusters(Aws::Vector<Cluster>&& value) { m_clusters = std::move(value); }

    /**
     * <p>The descriptions of your DAX clusters, in response to a
     * <i>DescribeClusters</i> request.</p>
     */
    inline DescribeClustersResult& WithClusters(const Aws::Vector<Cluster>& value) { SetClusters(value); return *this;}

    /**
     * <p>The descriptions of your DAX clusters, in response to a
     * <i>DescribeClusters</i> request.</p>
     */
    inline DescribeClustersResult& WithClusters(Aws::Vector<Cluster>&& value) { SetClusters(std::move(value)); return *this;}

    /**
     * <p>The descriptions of your DAX clusters, in response to a
     * <i>DescribeClusters</i> request.</p>
     */
    inline DescribeClustersResult& AddClusters(const Cluster& value) { m_clusters.push_back(value); return *this; }

    /**
     * <p>The descriptions of your DAX clusters, in response to a
     * <i>DescribeClusters</i> request.</p>
     */
    inline DescribeClustersResult& AddClusters(Cluster&& value) { m_clusters.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<Cluster> m_clusters;
  };

} // namespace Model
} // namespace DAX
} // namespace Aws
