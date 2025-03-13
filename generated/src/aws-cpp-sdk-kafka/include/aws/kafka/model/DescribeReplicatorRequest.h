/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/kafka/KafkaRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Kafka
{
namespace Model
{

  /**
   */
  class DescribeReplicatorRequest : public KafkaRequest
  {
  public:
    AWS_KAFKA_API DescribeReplicatorRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeReplicator"; }

    AWS_KAFKA_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the replicator to be described.</p>
     */
    inline const Aws::String& GetReplicatorArn() const { return m_replicatorArn; }
    inline bool ReplicatorArnHasBeenSet() const { return m_replicatorArnHasBeenSet; }
    template<typename ReplicatorArnT = Aws::String>
    void SetReplicatorArn(ReplicatorArnT&& value) { m_replicatorArnHasBeenSet = true; m_replicatorArn = std::forward<ReplicatorArnT>(value); }
    template<typename ReplicatorArnT = Aws::String>
    DescribeReplicatorRequest& WithReplicatorArn(ReplicatorArnT&& value) { SetReplicatorArn(std::forward<ReplicatorArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_replicatorArn;
    bool m_replicatorArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
