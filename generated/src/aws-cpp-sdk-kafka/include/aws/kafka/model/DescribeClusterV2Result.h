/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/kafka/model/Cluster.h>
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
  class DescribeClusterV2Result
  {
  public:
    AWS_KAFKA_API DescribeClusterV2Result();
    AWS_KAFKA_API DescribeClusterV2Result(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KAFKA_API DescribeClusterV2Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * 
            <p>The cluster information.</p>
         
     */
    inline const Cluster& GetClusterInfo() const{ return m_clusterInfo; }

    /**
     * 
            <p>The cluster information.</p>
         
     */
    inline void SetClusterInfo(const Cluster& value) { m_clusterInfo = value; }

    /**
     * 
            <p>The cluster information.</p>
         
     */
    inline void SetClusterInfo(Cluster&& value) { m_clusterInfo = std::move(value); }

    /**
     * 
            <p>The cluster information.</p>
         
     */
    inline DescribeClusterV2Result& WithClusterInfo(const Cluster& value) { SetClusterInfo(value); return *this;}

    /**
     * 
            <p>The cluster information.</p>
         
     */
    inline DescribeClusterV2Result& WithClusterInfo(Cluster&& value) { SetClusterInfo(std::move(value)); return *this;}

  private:

    Cluster m_clusterInfo;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
