/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/kafka/KafkaRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Kafka
{
namespace Model
{

  /**
   * 
            <p>Associates sasl scram secrets to cluster.</p>
        
   * <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/BatchAssociateScramSecretRequest">AWS
   * API Reference</a></p>
   */
  class BatchAssociateScramSecretRequest : public KafkaRequest
  {
  public:
    AWS_KAFKA_API BatchAssociateScramSecretRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchAssociateScramSecret"; }

    AWS_KAFKA_API Aws::String SerializePayload() const override;


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
    BatchAssociateScramSecretRequest& WithClusterArn(ClusterArnT&& value) { SetClusterArn(std::forward<ClusterArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>List of AWS Secrets Manager secret ARNs.</p>
         
     */
    inline const Aws::Vector<Aws::String>& GetSecretArnList() const { return m_secretArnList; }
    inline bool SecretArnListHasBeenSet() const { return m_secretArnListHasBeenSet; }
    template<typename SecretArnListT = Aws::Vector<Aws::String>>
    void SetSecretArnList(SecretArnListT&& value) { m_secretArnListHasBeenSet = true; m_secretArnList = std::forward<SecretArnListT>(value); }
    template<typename SecretArnListT = Aws::Vector<Aws::String>>
    BatchAssociateScramSecretRequest& WithSecretArnList(SecretArnListT&& value) { SetSecretArnList(std::forward<SecretArnListT>(value)); return *this;}
    template<typename SecretArnListT = Aws::String>
    BatchAssociateScramSecretRequest& AddSecretArnList(SecretArnListT&& value) { m_secretArnListHasBeenSet = true; m_secretArnList.emplace_back(std::forward<SecretArnListT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_clusterArn;
    bool m_clusterArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_secretArnList;
    bool m_secretArnListHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
