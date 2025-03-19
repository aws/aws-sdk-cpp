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
    AWS_KAFKA_API RebootBrokerRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RebootBroker"; }

    AWS_KAFKA_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * 
            <p>The list of broker IDs to be rebooted. The reboot-broker
     * operation supports rebooting one broker at a time.</p>
         
     */
    inline const Aws::Vector<Aws::String>& GetBrokerIds() const { return m_brokerIds; }
    inline bool BrokerIdsHasBeenSet() const { return m_brokerIdsHasBeenSet; }
    template<typename BrokerIdsT = Aws::Vector<Aws::String>>
    void SetBrokerIds(BrokerIdsT&& value) { m_brokerIdsHasBeenSet = true; m_brokerIds = std::forward<BrokerIdsT>(value); }
    template<typename BrokerIdsT = Aws::Vector<Aws::String>>
    RebootBrokerRequest& WithBrokerIds(BrokerIdsT&& value) { SetBrokerIds(std::forward<BrokerIdsT>(value)); return *this;}
    template<typename BrokerIdsT = Aws::String>
    RebootBrokerRequest& AddBrokerIds(BrokerIdsT&& value) { m_brokerIdsHasBeenSet = true; m_brokerIds.emplace_back(std::forward<BrokerIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * 
            <p>The Amazon Resource Name (ARN) of the cluster to be
     * updated.</p>
         
     */
    inline const Aws::String& GetClusterArn() const { return m_clusterArn; }
    inline bool ClusterArnHasBeenSet() const { return m_clusterArnHasBeenSet; }
    template<typename ClusterArnT = Aws::String>
    void SetClusterArn(ClusterArnT&& value) { m_clusterArnHasBeenSet = true; m_clusterArn = std::forward<ClusterArnT>(value); }
    template<typename ClusterArnT = Aws::String>
    RebootBrokerRequest& WithClusterArn(ClusterArnT&& value) { SetClusterArn(std::forward<ClusterArnT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_brokerIds;
    bool m_brokerIdsHasBeenSet = false;

    Aws::String m_clusterArn;
    bool m_clusterArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
