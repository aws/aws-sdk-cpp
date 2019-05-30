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
  class AWS_KAFKA_API CreateClusterResult
  {
  public:
    CreateClusterResult();
    CreateClusterResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateClusterResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline CreateClusterResult& WithClusterArn(const Aws::String& value) { SetClusterArn(value); return *this;}

    /**
     * 
            <p>The Amazon Resource Name (ARN) of the cluster.</p>
         
     */
    inline CreateClusterResult& WithClusterArn(Aws::String&& value) { SetClusterArn(std::move(value)); return *this;}

    /**
     * 
            <p>The Amazon Resource Name (ARN) of the cluster.</p>
         
     */
    inline CreateClusterResult& WithClusterArn(const char* value) { SetClusterArn(value); return *this;}


    /**
     * 
            <p>The name of the MSK cluster.</p>
         
     */
    inline const Aws::String& GetClusterName() const{ return m_clusterName; }

    /**
     * 
            <p>The name of the MSK cluster.</p>
         
     */
    inline void SetClusterName(const Aws::String& value) { m_clusterName = value; }

    /**
     * 
            <p>The name of the MSK cluster.</p>
         
     */
    inline void SetClusterName(Aws::String&& value) { m_clusterName = std::move(value); }

    /**
     * 
            <p>The name of the MSK cluster.</p>
         
     */
    inline void SetClusterName(const char* value) { m_clusterName.assign(value); }

    /**
     * 
            <p>The name of the MSK cluster.</p>
         
     */
    inline CreateClusterResult& WithClusterName(const Aws::String& value) { SetClusterName(value); return *this;}

    /**
     * 
            <p>The name of the MSK cluster.</p>
         
     */
    inline CreateClusterResult& WithClusterName(Aws::String&& value) { SetClusterName(std::move(value)); return *this;}

    /**
     * 
            <p>The name of the MSK cluster.</p>
         
     */
    inline CreateClusterResult& WithClusterName(const char* value) { SetClusterName(value); return *this;}


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
    inline CreateClusterResult& WithState(const ClusterState& value) { SetState(value); return *this;}

    /**
     * 
            <p>The state of the cluster. The possible states are CREATING,
     * ACTIVE, and FAILED.</p>
         
     */
    inline CreateClusterResult& WithState(ClusterState&& value) { SetState(std::move(value)); return *this;}

  private:

    Aws::String m_clusterArn;

    Aws::String m_clusterName;

    ClusterState m_state;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
