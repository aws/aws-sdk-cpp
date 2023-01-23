/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kafka/model/ClusterState.h>
#include <aws/kafka/model/ClusterType.h>
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
  class CreateClusterV2Result
  {
  public:
    AWS_KAFKA_API CreateClusterV2Result();
    AWS_KAFKA_API CreateClusterV2Result(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KAFKA_API CreateClusterV2Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline CreateClusterV2Result& WithClusterArn(const Aws::String& value) { SetClusterArn(value); return *this;}

    /**
     * 
            <p>The Amazon Resource Name (ARN) of the cluster.</p>
         
     */
    inline CreateClusterV2Result& WithClusterArn(Aws::String&& value) { SetClusterArn(std::move(value)); return *this;}

    /**
     * 
            <p>The Amazon Resource Name (ARN) of the cluster.</p>
         
     */
    inline CreateClusterV2Result& WithClusterArn(const char* value) { SetClusterArn(value); return *this;}


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
    inline CreateClusterV2Result& WithClusterName(const Aws::String& value) { SetClusterName(value); return *this;}

    /**
     * 
            <p>The name of the MSK cluster.</p>
         
     */
    inline CreateClusterV2Result& WithClusterName(Aws::String&& value) { SetClusterName(std::move(value)); return *this;}

    /**
     * 
            <p>The name of the MSK cluster.</p>
         
     */
    inline CreateClusterV2Result& WithClusterName(const char* value) { SetClusterName(value); return *this;}


    /**
     * 
            <p>The state of the cluster. The possible states are ACTIVE,
     * CREATING, DELETING, FAILED, HEALING, MAINTENANCE, REBOOTING_BROKER, and
     * UPDATING.</p>
         
     */
    inline const ClusterState& GetState() const{ return m_state; }

    /**
     * 
            <p>The state of the cluster. The possible states are ACTIVE,
     * CREATING, DELETING, FAILED, HEALING, MAINTENANCE, REBOOTING_BROKER, and
     * UPDATING.</p>
         
     */
    inline void SetState(const ClusterState& value) { m_state = value; }

    /**
     * 
            <p>The state of the cluster. The possible states are ACTIVE,
     * CREATING, DELETING, FAILED, HEALING, MAINTENANCE, REBOOTING_BROKER, and
     * UPDATING.</p>
         
     */
    inline void SetState(ClusterState&& value) { m_state = std::move(value); }

    /**
     * 
            <p>The state of the cluster. The possible states are ACTIVE,
     * CREATING, DELETING, FAILED, HEALING, MAINTENANCE, REBOOTING_BROKER, and
     * UPDATING.</p>
         
     */
    inline CreateClusterV2Result& WithState(const ClusterState& value) { SetState(value); return *this;}

    /**
     * 
            <p>The state of the cluster. The possible states are ACTIVE,
     * CREATING, DELETING, FAILED, HEALING, MAINTENANCE, REBOOTING_BROKER, and
     * UPDATING.</p>
         
     */
    inline CreateClusterV2Result& WithState(ClusterState&& value) { SetState(std::move(value)); return *this;}


    /**
     * 
            <p>The type of the cluster. The possible states are PROVISIONED or
     * SERVERLESS.</p>
         
     */
    inline const ClusterType& GetClusterType() const{ return m_clusterType; }

    /**
     * 
            <p>The type of the cluster. The possible states are PROVISIONED or
     * SERVERLESS.</p>
         
     */
    inline void SetClusterType(const ClusterType& value) { m_clusterType = value; }

    /**
     * 
            <p>The type of the cluster. The possible states are PROVISIONED or
     * SERVERLESS.</p>
         
     */
    inline void SetClusterType(ClusterType&& value) { m_clusterType = std::move(value); }

    /**
     * 
            <p>The type of the cluster. The possible states are PROVISIONED or
     * SERVERLESS.</p>
         
     */
    inline CreateClusterV2Result& WithClusterType(const ClusterType& value) { SetClusterType(value); return *this;}

    /**
     * 
            <p>The type of the cluster. The possible states are PROVISIONED or
     * SERVERLESS.</p>
         
     */
    inline CreateClusterV2Result& WithClusterType(ClusterType&& value) { SetClusterType(std::move(value)); return *this;}

  private:

    Aws::String m_clusterArn;

    Aws::String m_clusterName;

    ClusterState m_state;

    ClusterType m_clusterType;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
