/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/kafka/KafkaRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Kafka
{
namespace Model
{

  /**
   * Reboots a node.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/RebootBrokerRequest">AWS
   * API Reference</a></p>
   */
  class RebootBrokerRequest : public KafkaRequest
  {
  public:
    AWS_KAFKA_API RebootBrokerRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RebootBroker"; }

    AWS_KAFKA_API Aws::String SerializePayload() const override;


    /**
     * 
            <p>The list of broker IDs to be rebooted. The reboot-broker
     * operation supports rebooting one broker at a time.</p>
         
     */
    inline const Aws::Vector<Aws::String>& GetBrokerIds() const{ return m_brokerIds; }

    /**
     * 
            <p>The list of broker IDs to be rebooted. The reboot-broker
     * operation supports rebooting one broker at a time.</p>
         
     */
    inline bool BrokerIdsHasBeenSet() const { return m_brokerIdsHasBeenSet; }

    /**
     * 
            <p>The list of broker IDs to be rebooted. The reboot-broker
     * operation supports rebooting one broker at a time.</p>
         
     */
    inline void SetBrokerIds(const Aws::Vector<Aws::String>& value) { m_brokerIdsHasBeenSet = true; m_brokerIds = value; }

    /**
     * 
            <p>The list of broker IDs to be rebooted. The reboot-broker
     * operation supports rebooting one broker at a time.</p>
         
     */
    inline void SetBrokerIds(Aws::Vector<Aws::String>&& value) { m_brokerIdsHasBeenSet = true; m_brokerIds = std::move(value); }

    /**
     * 
            <p>The list of broker IDs to be rebooted. The reboot-broker
     * operation supports rebooting one broker at a time.</p>
         
     */
    inline RebootBrokerRequest& WithBrokerIds(const Aws::Vector<Aws::String>& value) { SetBrokerIds(value); return *this;}

    /**
     * 
            <p>The list of broker IDs to be rebooted. The reboot-broker
     * operation supports rebooting one broker at a time.</p>
         
     */
    inline RebootBrokerRequest& WithBrokerIds(Aws::Vector<Aws::String>&& value) { SetBrokerIds(std::move(value)); return *this;}

    /**
     * 
            <p>The list of broker IDs to be rebooted. The reboot-broker
     * operation supports rebooting one broker at a time.</p>
         
     */
    inline RebootBrokerRequest& AddBrokerIds(const Aws::String& value) { m_brokerIdsHasBeenSet = true; m_brokerIds.push_back(value); return *this; }

    /**
     * 
            <p>The list of broker IDs to be rebooted. The reboot-broker
     * operation supports rebooting one broker at a time.</p>
         
     */
    inline RebootBrokerRequest& AddBrokerIds(Aws::String&& value) { m_brokerIdsHasBeenSet = true; m_brokerIds.push_back(std::move(value)); return *this; }

    /**
     * 
            <p>The list of broker IDs to be rebooted. The reboot-broker
     * operation supports rebooting one broker at a time.</p>
         
     */
    inline RebootBrokerRequest& AddBrokerIds(const char* value) { m_brokerIdsHasBeenSet = true; m_brokerIds.push_back(value); return *this; }


    /**
     * 
            <p>The Amazon Resource Name (ARN) of the cluster to be
     * updated.</p>
         
     */
    inline const Aws::String& GetClusterArn() const{ return m_clusterArn; }

    /**
     * 
            <p>The Amazon Resource Name (ARN) of the cluster to be
     * updated.</p>
         
     */
    inline bool ClusterArnHasBeenSet() const { return m_clusterArnHasBeenSet; }

    /**
     * 
            <p>The Amazon Resource Name (ARN) of the cluster to be
     * updated.</p>
         
     */
    inline void SetClusterArn(const Aws::String& value) { m_clusterArnHasBeenSet = true; m_clusterArn = value; }

    /**
     * 
            <p>The Amazon Resource Name (ARN) of the cluster to be
     * updated.</p>
         
     */
    inline void SetClusterArn(Aws::String&& value) { m_clusterArnHasBeenSet = true; m_clusterArn = std::move(value); }

    /**
     * 
            <p>The Amazon Resource Name (ARN) of the cluster to be
     * updated.</p>
         
     */
    inline void SetClusterArn(const char* value) { m_clusterArnHasBeenSet = true; m_clusterArn.assign(value); }

    /**
     * 
            <p>The Amazon Resource Name (ARN) of the cluster to be
     * updated.</p>
         
     */
    inline RebootBrokerRequest& WithClusterArn(const Aws::String& value) { SetClusterArn(value); return *this;}

    /**
     * 
            <p>The Amazon Resource Name (ARN) of the cluster to be
     * updated.</p>
         
     */
    inline RebootBrokerRequest& WithClusterArn(Aws::String&& value) { SetClusterArn(std::move(value)); return *this;}

    /**
     * 
            <p>The Amazon Resource Name (ARN) of the cluster to be
     * updated.</p>
         
     */
    inline RebootBrokerRequest& WithClusterArn(const char* value) { SetClusterArn(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_brokerIds;
    bool m_brokerIdsHasBeenSet = false;

    Aws::String m_clusterArn;
    bool m_clusterArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
