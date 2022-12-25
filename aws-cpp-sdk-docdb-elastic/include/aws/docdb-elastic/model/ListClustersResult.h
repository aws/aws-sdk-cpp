/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/docdb-elastic/DocDBElastic_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/docdb-elastic/model/ClusterInList.h>
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
namespace DocDBElastic
{
namespace Model
{
  class ListClustersResult
  {
  public:
    AWS_DOCDBELASTIC_API ListClustersResult();
    AWS_DOCDBELASTIC_API ListClustersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DOCDBELASTIC_API ListClustersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of Elastic DocumentDB cluster.</p>
     */
    inline const Aws::Vector<ClusterInList>& GetClusters() const{ return m_clusters; }

    /**
     * <p>A list of Elastic DocumentDB cluster.</p>
     */
    inline void SetClusters(const Aws::Vector<ClusterInList>& value) { m_clusters = value; }

    /**
     * <p>A list of Elastic DocumentDB cluster.</p>
     */
    inline void SetClusters(Aws::Vector<ClusterInList>&& value) { m_clusters = std::move(value); }

    /**
     * <p>A list of Elastic DocumentDB cluster.</p>
     */
    inline ListClustersResult& WithClusters(const Aws::Vector<ClusterInList>& value) { SetClusters(value); return *this;}

    /**
     * <p>A list of Elastic DocumentDB cluster.</p>
     */
    inline ListClustersResult& WithClusters(Aws::Vector<ClusterInList>&& value) { SetClusters(std::move(value)); return *this;}

    /**
     * <p>A list of Elastic DocumentDB cluster.</p>
     */
    inline ListClustersResult& AddClusters(const ClusterInList& value) { m_clusters.push_back(value); return *this; }

    /**
     * <p>A list of Elastic DocumentDB cluster.</p>
     */
    inline ListClustersResult& AddClusters(ClusterInList&& value) { m_clusters.push_back(std::move(value)); return *this; }


    /**
     * <p>The response will provide a nextToken if there is more data beyond the
     * maxResults.</p> <p>If there is no more data in the responce, the nextToken will
     * not be returned.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The response will provide a nextToken if there is more data beyond the
     * maxResults.</p> <p>If there is no more data in the responce, the nextToken will
     * not be returned.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The response will provide a nextToken if there is more data beyond the
     * maxResults.</p> <p>If there is no more data in the responce, the nextToken will
     * not be returned.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The response will provide a nextToken if there is more data beyond the
     * maxResults.</p> <p>If there is no more data in the responce, the nextToken will
     * not be returned.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The response will provide a nextToken if there is more data beyond the
     * maxResults.</p> <p>If there is no more data in the responce, the nextToken will
     * not be returned.</p>
     */
    inline ListClustersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The response will provide a nextToken if there is more data beyond the
     * maxResults.</p> <p>If there is no more data in the responce, the nextToken will
     * not be returned.</p>
     */
    inline ListClustersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The response will provide a nextToken if there is more data beyond the
     * maxResults.</p> <p>If there is no more data in the responce, the nextToken will
     * not be returned.</p>
     */
    inline ListClustersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ClusterInList> m_clusters;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace DocDBElastic
} // namespace Aws
