/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/kafka/model/ClusterInfo.h>
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
namespace Kafka
{
namespace Model
{
  class DescribeClusterResult
  {
  public:
    AWS_KAFKA_API DescribeClusterResult();
    AWS_KAFKA_API DescribeClusterResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KAFKA_API DescribeClusterResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * 
            <p>The cluster information.</p>
         
     */
    inline const ClusterInfo& GetClusterInfo() const{ return m_clusterInfo; }

    /**
     * 
            <p>The cluster information.</p>
         
     */
    inline void SetClusterInfo(const ClusterInfo& value) { m_clusterInfo = value; }

    /**
     * 
            <p>The cluster information.</p>
         
     */
    inline void SetClusterInfo(ClusterInfo&& value) { m_clusterInfo = std::move(value); }

    /**
     * 
            <p>The cluster information.</p>
         
     */
    inline DescribeClusterResult& WithClusterInfo(const ClusterInfo& value) { SetClusterInfo(value); return *this;}

    /**
     * 
            <p>The cluster information.</p>
         
     */
    inline DescribeClusterResult& WithClusterInfo(ClusterInfo&& value) { SetClusterInfo(std::move(value)); return *this;}

  private:

    ClusterInfo m_clusterInfo;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
