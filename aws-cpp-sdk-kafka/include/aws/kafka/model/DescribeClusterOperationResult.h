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
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/kafka/model/ClusterOperationInfo.h>
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
  class AWS_KAFKA_API DescribeClusterOperationResult
  {
  public:
    DescribeClusterOperationResult();
    DescribeClusterOperationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeClusterOperationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * 
            <p>Cluster operation information</p>
         
     */
    inline const ClusterOperationInfo& GetClusterOperationInfo() const{ return m_clusterOperationInfo; }

    /**
     * 
            <p>Cluster operation information</p>
         
     */
    inline void SetClusterOperationInfo(const ClusterOperationInfo& value) { m_clusterOperationInfo = value; }

    /**
     * 
            <p>Cluster operation information</p>
         
     */
    inline void SetClusterOperationInfo(ClusterOperationInfo&& value) { m_clusterOperationInfo = std::move(value); }

    /**
     * 
            <p>Cluster operation information</p>
         
     */
    inline DescribeClusterOperationResult& WithClusterOperationInfo(const ClusterOperationInfo& value) { SetClusterOperationInfo(value); return *this;}

    /**
     * 
            <p>Cluster operation information</p>
         
     */
    inline DescribeClusterOperationResult& WithClusterOperationInfo(ClusterOperationInfo&& value) { SetClusterOperationInfo(std::move(value)); return *this;}

  private:

    ClusterOperationInfo m_clusterOperationInfo;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
