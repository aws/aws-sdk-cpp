﻿/**
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


    ///@{
    /**
     * <p>Provides an identifier to allow retrieval of paginated results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline DescribeClustersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeClustersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeClustersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The descriptions of your DAX clusters, in response to a
     * <i>DescribeClusters</i> request.</p>
     */
    inline const Aws::Vector<Cluster>& GetClusters() const{ return m_clusters; }
    inline void SetClusters(const Aws::Vector<Cluster>& value) { m_clusters = value; }
    inline void SetClusters(Aws::Vector<Cluster>&& value) { m_clusters = std::move(value); }
    inline DescribeClustersResult& WithClusters(const Aws::Vector<Cluster>& value) { SetClusters(value); return *this;}
    inline DescribeClustersResult& WithClusters(Aws::Vector<Cluster>&& value) { SetClusters(std::move(value)); return *this;}
    inline DescribeClustersResult& AddClusters(const Cluster& value) { m_clusters.push_back(value); return *this; }
    inline DescribeClustersResult& AddClusters(Cluster&& value) { m_clusters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeClustersResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeClustersResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeClustersResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<Cluster> m_clusters;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DAX
} // namespace Aws
