﻿/**
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
  class ListClustersResult
  {
  public:
    AWS_ECS_API ListClustersResult();
    AWS_ECS_API ListClustersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ECS_API ListClustersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of full Amazon Resource Name (ARN) entries for each cluster that's
     * associated with your account.</p>
     */
    inline const Aws::Vector<Aws::String>& GetClusterArns() const{ return m_clusterArns; }
    inline void SetClusterArns(const Aws::Vector<Aws::String>& value) { m_clusterArns = value; }
    inline void SetClusterArns(Aws::Vector<Aws::String>&& value) { m_clusterArns = std::move(value); }
    inline ListClustersResult& WithClusterArns(const Aws::Vector<Aws::String>& value) { SetClusterArns(value); return *this;}
    inline ListClustersResult& WithClusterArns(Aws::Vector<Aws::String>&& value) { SetClusterArns(std::move(value)); return *this;}
    inline ListClustersResult& AddClusterArns(const Aws::String& value) { m_clusterArns.push_back(value); return *this; }
    inline ListClustersResult& AddClusterArns(Aws::String&& value) { m_clusterArns.push_back(std::move(value)); return *this; }
    inline ListClustersResult& AddClusterArns(const char* value) { m_clusterArns.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListClusters</code> request. When the results of a
     * <code>ListClusters</code> request exceed <code>maxResults</code>, this value can
     * be used to retrieve the next page of results. This value is <code>null</code>
     * when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListClustersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListClustersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListClustersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListClustersResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListClustersResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListClustersResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_clusterArns;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
