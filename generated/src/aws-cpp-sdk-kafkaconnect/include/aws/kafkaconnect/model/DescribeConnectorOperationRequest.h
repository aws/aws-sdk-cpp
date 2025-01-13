/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafkaconnect/KafkaConnect_EXPORTS.h>
#include <aws/kafkaconnect/KafkaConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace KafkaConnect
{
namespace Model
{

  /**
   */
  class DescribeConnectorOperationRequest : public KafkaConnectRequest
  {
  public:
    AWS_KAFKACONNECT_API DescribeConnectorOperationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeConnectorOperation"; }

    AWS_KAFKACONNECT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>ARN of the connector operation to be described.</p>
     */
    inline const Aws::String& GetConnectorOperationArn() const{ return m_connectorOperationArn; }
    inline bool ConnectorOperationArnHasBeenSet() const { return m_connectorOperationArnHasBeenSet; }
    inline void SetConnectorOperationArn(const Aws::String& value) { m_connectorOperationArnHasBeenSet = true; m_connectorOperationArn = value; }
    inline void SetConnectorOperationArn(Aws::String&& value) { m_connectorOperationArnHasBeenSet = true; m_connectorOperationArn = std::move(value); }
    inline void SetConnectorOperationArn(const char* value) { m_connectorOperationArnHasBeenSet = true; m_connectorOperationArn.assign(value); }
    inline DescribeConnectorOperationRequest& WithConnectorOperationArn(const Aws::String& value) { SetConnectorOperationArn(value); return *this;}
    inline DescribeConnectorOperationRequest& WithConnectorOperationArn(Aws::String&& value) { SetConnectorOperationArn(std::move(value)); return *this;}
    inline DescribeConnectorOperationRequest& WithConnectorOperationArn(const char* value) { SetConnectorOperationArn(value); return *this;}
    ///@}
  private:

    Aws::String m_connectorOperationArn;
    bool m_connectorOperationArnHasBeenSet = false;
  };

} // namespace Model
} // namespace KafkaConnect
} // namespace Aws
