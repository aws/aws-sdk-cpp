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
            <p>Disassociates sasl scram secrets to cluster.</p>
        
   * <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/BatchDisassociateScramSecretRequest">AWS
   * API Reference</a></p>
   */
  class BatchDisassociateScramSecretRequest : public KafkaRequest
  {
  public:
    AWS_KAFKA_API BatchDisassociateScramSecretRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchDisassociateScramSecret"; }

    AWS_KAFKA_API Aws::String SerializePayload() const override;


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
    inline BatchDisassociateScramSecretRequest& WithClusterArn(const Aws::String& value) { SetClusterArn(value); return *this;}

    /**
     * 
            <p>The Amazon Resource Name (ARN) of the cluster to be
     * updated.</p>
         
     */
    inline BatchDisassociateScramSecretRequest& WithClusterArn(Aws::String&& value) { SetClusterArn(std::move(value)); return *this;}

    /**
     * 
            <p>The Amazon Resource Name (ARN) of the cluster to be
     * updated.</p>
         
     */
    inline BatchDisassociateScramSecretRequest& WithClusterArn(const char* value) { SetClusterArn(value); return *this;}


    /**
     * 
            <p>List of AWS Secrets Manager secret ARNs.</p>
         
     */
    inline const Aws::Vector<Aws::String>& GetSecretArnList() const{ return m_secretArnList; }

    /**
     * 
            <p>List of AWS Secrets Manager secret ARNs.</p>
         
     */
    inline bool SecretArnListHasBeenSet() const { return m_secretArnListHasBeenSet; }

    /**
     * 
            <p>List of AWS Secrets Manager secret ARNs.</p>
         
     */
    inline void SetSecretArnList(const Aws::Vector<Aws::String>& value) { m_secretArnListHasBeenSet = true; m_secretArnList = value; }

    /**
     * 
            <p>List of AWS Secrets Manager secret ARNs.</p>
         
     */
    inline void SetSecretArnList(Aws::Vector<Aws::String>&& value) { m_secretArnListHasBeenSet = true; m_secretArnList = std::move(value); }

    /**
     * 
            <p>List of AWS Secrets Manager secret ARNs.</p>
         
     */
    inline BatchDisassociateScramSecretRequest& WithSecretArnList(const Aws::Vector<Aws::String>& value) { SetSecretArnList(value); return *this;}

    /**
     * 
            <p>List of AWS Secrets Manager secret ARNs.</p>
         
     */
    inline BatchDisassociateScramSecretRequest& WithSecretArnList(Aws::Vector<Aws::String>&& value) { SetSecretArnList(std::move(value)); return *this;}

    /**
     * 
            <p>List of AWS Secrets Manager secret ARNs.</p>
         
     */
    inline BatchDisassociateScramSecretRequest& AddSecretArnList(const Aws::String& value) { m_secretArnListHasBeenSet = true; m_secretArnList.push_back(value); return *this; }

    /**
     * 
            <p>List of AWS Secrets Manager secret ARNs.</p>
         
     */
    inline BatchDisassociateScramSecretRequest& AddSecretArnList(Aws::String&& value) { m_secretArnListHasBeenSet = true; m_secretArnList.push_back(std::move(value)); return *this; }

    /**
     * 
            <p>List of AWS Secrets Manager secret ARNs.</p>
         
     */
    inline BatchDisassociateScramSecretRequest& AddSecretArnList(const char* value) { m_secretArnListHasBeenSet = true; m_secretArnList.push_back(value); return *this; }

  private:

    Aws::String m_clusterArn;
    bool m_clusterArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_secretArnList;
    bool m_secretArnListHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
