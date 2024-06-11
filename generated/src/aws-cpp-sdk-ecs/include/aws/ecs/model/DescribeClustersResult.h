﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecs/model/Cluster.h>
#include <aws/ecs/model/Failure.h>
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
  class DescribeClustersResult
  {
  public:
    AWS_ECS_API DescribeClustersResult();
    AWS_ECS_API DescribeClustersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ECS_API DescribeClustersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of clusters.</p>
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
    /**
     * <p>Any failures associated with the call.</p>
     */
    inline const Aws::Vector<Failure>& GetFailures() const{ return m_failures; }
    inline void SetFailures(const Aws::Vector<Failure>& value) { m_failures = value; }
    inline void SetFailures(Aws::Vector<Failure>&& value) { m_failures = std::move(value); }
    inline DescribeClustersResult& WithFailures(const Aws::Vector<Failure>& value) { SetFailures(value); return *this;}
    inline DescribeClustersResult& WithFailures(Aws::Vector<Failure>&& value) { SetFailures(std::move(value)); return *this;}
    inline DescribeClustersResult& AddFailures(const Failure& value) { m_failures.push_back(value); return *this; }
    inline DescribeClustersResult& AddFailures(Failure&& value) { m_failures.push_back(std::move(value)); return *this; }
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

    Aws::Vector<Cluster> m_clusters;

    Aws::Vector<Failure> m_failures;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
