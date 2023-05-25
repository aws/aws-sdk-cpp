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
  class DescribeConnectorRequest : public KafkaConnectRequest
  {
  public:
    AWS_KAFKACONNECT_API DescribeConnectorRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeConnector"; }

    AWS_KAFKACONNECT_API Aws::String SerializePayload() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the connector that you want to
     * describe.</p>
     */
    inline const Aws::String& GetConnectorArn() const{ return m_connectorArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the connector that you want to
     * describe.</p>
     */
    inline bool ConnectorArnHasBeenSet() const { return m_connectorArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the connector that you want to
     * describe.</p>
     */
    inline void SetConnectorArn(const Aws::String& value) { m_connectorArnHasBeenSet = true; m_connectorArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the connector that you want to
     * describe.</p>
     */
    inline void SetConnectorArn(Aws::String&& value) { m_connectorArnHasBeenSet = true; m_connectorArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the connector that you want to
     * describe.</p>
     */
    inline void SetConnectorArn(const char* value) { m_connectorArnHasBeenSet = true; m_connectorArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the connector that you want to
     * describe.</p>
     */
    inline DescribeConnectorRequest& WithConnectorArn(const Aws::String& value) { SetConnectorArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the connector that you want to
     * describe.</p>
     */
    inline DescribeConnectorRequest& WithConnectorArn(Aws::String&& value) { SetConnectorArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the connector that you want to
     * describe.</p>
     */
    inline DescribeConnectorRequest& WithConnectorArn(const char* value) { SetConnectorArn(value); return *this;}

  private:

    Aws::String m_connectorArn;
    bool m_connectorArnHasBeenSet = false;
  };

} // namespace Model
} // namespace KafkaConnect
} // namespace Aws
