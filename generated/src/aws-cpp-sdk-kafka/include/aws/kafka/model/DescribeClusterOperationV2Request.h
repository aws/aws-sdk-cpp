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
  class DescribeClusterOperationV2Request : public KafkaRequest
  {
  public:
    AWS_KAFKA_API DescribeClusterOperationV2Request();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeClusterOperationV2"; }

    AWS_KAFKA_API Aws::String SerializePayload() const override;


    /**
     * ARN of the cluster operation to describe.
     */
    inline const Aws::String& GetClusterOperationArn() const{ return m_clusterOperationArn; }

    /**
     * ARN of the cluster operation to describe.
     */
    inline bool ClusterOperationArnHasBeenSet() const { return m_clusterOperationArnHasBeenSet; }

    /**
     * ARN of the cluster operation to describe.
     */
    inline void SetClusterOperationArn(const Aws::String& value) { m_clusterOperationArnHasBeenSet = true; m_clusterOperationArn = value; }

    /**
     * ARN of the cluster operation to describe.
     */
    inline void SetClusterOperationArn(Aws::String&& value) { m_clusterOperationArnHasBeenSet = true; m_clusterOperationArn = std::move(value); }

    /**
     * ARN of the cluster operation to describe.
     */
    inline void SetClusterOperationArn(const char* value) { m_clusterOperationArnHasBeenSet = true; m_clusterOperationArn.assign(value); }

    /**
     * ARN of the cluster operation to describe.
     */
    inline DescribeClusterOperationV2Request& WithClusterOperationArn(const Aws::String& value) { SetClusterOperationArn(value); return *this;}

    /**
     * ARN of the cluster operation to describe.
     */
    inline DescribeClusterOperationV2Request& WithClusterOperationArn(Aws::String&& value) { SetClusterOperationArn(std::move(value)); return *this;}

    /**
     * ARN of the cluster operation to describe.
     */
    inline DescribeClusterOperationV2Request& WithClusterOperationArn(const char* value) { SetClusterOperationArn(value); return *this;}

  private:

    Aws::String m_clusterOperationArn;
    bool m_clusterOperationArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
