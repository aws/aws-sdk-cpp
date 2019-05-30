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
  class AWS_KAFKA_API DescribeClusterResult
  {
  public:
    DescribeClusterResult();
    DescribeClusterResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeClusterResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
