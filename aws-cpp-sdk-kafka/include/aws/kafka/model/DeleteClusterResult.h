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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kafka/model/ClusterState.h>
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
  class AWS_KAFKA_API DeleteClusterResult
  {
  public:
    DeleteClusterResult();
    DeleteClusterResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DeleteClusterResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * 
            <p>The Amazon Resource Name (ARN) of the cluster.</p>
         
     */
    inline const Aws::String& GetClusterArn() const{ return m_clusterArn; }

    /**
     * 
            <p>The Amazon Resource Name (ARN) of the cluster.</p>
         
     */
    inline void SetClusterArn(const Aws::String& value) { m_clusterArn = value; }

    /**
     * 
            <p>The Amazon Resource Name (ARN) of the cluster.</p>
         
     */
    inline void SetClusterArn(Aws::String&& value) { m_clusterArn = std::move(value); }

    /**
     * 
            <p>The Amazon Resource Name (ARN) of the cluster.</p>
         
     */
    inline void SetClusterArn(const char* value) { m_clusterArn.assign(value); }

    /**
     * 
            <p>The Amazon Resource Name (ARN) of the cluster.</p>
         
     */
    inline DeleteClusterResult& WithClusterArn(const Aws::String& value) { SetClusterArn(value); return *this;}

    /**
     * 
            <p>The Amazon Resource Name (ARN) of the cluster.</p>
         
     */
    inline DeleteClusterResult& WithClusterArn(Aws::String&& value) { SetClusterArn(std::move(value)); return *this;}

    /**
     * 
            <p>The Amazon Resource Name (ARN) of the cluster.</p>
         
     */
    inline DeleteClusterResult& WithClusterArn(const char* value) { SetClusterArn(value); return *this;}


    /**
     * 
            <p>The state of the cluster. The possible states are CREATING,
     * ACTIVE, and FAILED.</p>
         
     */
    inline const ClusterState& GetState() const{ return m_state; }

    /**
     * 
            <p>The state of the cluster. The possible states are CREATING,
     * ACTIVE, and FAILED.</p>
         
     */
    inline void SetState(const ClusterState& value) { m_state = value; }

    /**
     * 
            <p>The state of the cluster. The possible states are CREATING,
     * ACTIVE, and FAILED.</p>
         
     */
    inline void SetState(ClusterState&& value) { m_state = std::move(value); }

    /**
     * 
            <p>The state of the cluster. The possible states are CREATING,
     * ACTIVE, and FAILED.</p>
         
     */
    inline DeleteClusterResult& WithState(const ClusterState& value) { SetState(value); return *this;}

    /**
     * 
            <p>The state of the cluster. The possible states are CREATING,
     * ACTIVE, and FAILED.</p>
         
     */
    inline DeleteClusterResult& WithState(ClusterState&& value) { SetState(std::move(value)); return *this;}

  private:

    Aws::String m_clusterArn;

    ClusterState m_state;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
