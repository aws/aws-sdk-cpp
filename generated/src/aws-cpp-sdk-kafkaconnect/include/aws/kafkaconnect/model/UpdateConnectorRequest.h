/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafkaconnect/KafkaConnect_EXPORTS.h>
#include <aws/kafkaconnect/KafkaConnectRequest.h>
#include <aws/kafkaconnect/model/CapacityUpdate.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace KafkaConnect
{
namespace Model
{

  /**
   */
  class UpdateConnectorRequest : public KafkaConnectRequest
  {
  public:
    AWS_KAFKACONNECT_API UpdateConnectorRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateConnector"; }

    AWS_KAFKACONNECT_API Aws::String SerializePayload() const override;

    AWS_KAFKACONNECT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The target capacity.</p>
     */
    inline const CapacityUpdate& GetCapacity() const{ return m_capacity; }

    /**
     * <p>The target capacity.</p>
     */
    inline bool CapacityHasBeenSet() const { return m_capacityHasBeenSet; }

    /**
     * <p>The target capacity.</p>
     */
    inline void SetCapacity(const CapacityUpdate& value) { m_capacityHasBeenSet = true; m_capacity = value; }

    /**
     * <p>The target capacity.</p>
     */
    inline void SetCapacity(CapacityUpdate&& value) { m_capacityHasBeenSet = true; m_capacity = std::move(value); }

    /**
     * <p>The target capacity.</p>
     */
    inline UpdateConnectorRequest& WithCapacity(const CapacityUpdate& value) { SetCapacity(value); return *this;}

    /**
     * <p>The target capacity.</p>
     */
    inline UpdateConnectorRequest& WithCapacity(CapacityUpdate&& value) { SetCapacity(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the connector that you want to update.</p>
     */
    inline const Aws::String& GetConnectorArn() const{ return m_connectorArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the connector that you want to update.</p>
     */
    inline bool ConnectorArnHasBeenSet() const { return m_connectorArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the connector that you want to update.</p>
     */
    inline void SetConnectorArn(const Aws::String& value) { m_connectorArnHasBeenSet = true; m_connectorArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the connector that you want to update.</p>
     */
    inline void SetConnectorArn(Aws::String&& value) { m_connectorArnHasBeenSet = true; m_connectorArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the connector that you want to update.</p>
     */
    inline void SetConnectorArn(const char* value) { m_connectorArnHasBeenSet = true; m_connectorArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the connector that you want to update.</p>
     */
    inline UpdateConnectorRequest& WithConnectorArn(const Aws::String& value) { SetConnectorArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the connector that you want to update.</p>
     */
    inline UpdateConnectorRequest& WithConnectorArn(Aws::String&& value) { SetConnectorArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the connector that you want to update.</p>
     */
    inline UpdateConnectorRequest& WithConnectorArn(const char* value) { SetConnectorArn(value); return *this;}


    /**
     * <p>The current version of the connector that you want to update.</p>
     */
    inline const Aws::String& GetCurrentVersion() const{ return m_currentVersion; }

    /**
     * <p>The current version of the connector that you want to update.</p>
     */
    inline bool CurrentVersionHasBeenSet() const { return m_currentVersionHasBeenSet; }

    /**
     * <p>The current version of the connector that you want to update.</p>
     */
    inline void SetCurrentVersion(const Aws::String& value) { m_currentVersionHasBeenSet = true; m_currentVersion = value; }

    /**
     * <p>The current version of the connector that you want to update.</p>
     */
    inline void SetCurrentVersion(Aws::String&& value) { m_currentVersionHasBeenSet = true; m_currentVersion = std::move(value); }

    /**
     * <p>The current version of the connector that you want to update.</p>
     */
    inline void SetCurrentVersion(const char* value) { m_currentVersionHasBeenSet = true; m_currentVersion.assign(value); }

    /**
     * <p>The current version of the connector that you want to update.</p>
     */
    inline UpdateConnectorRequest& WithCurrentVersion(const Aws::String& value) { SetCurrentVersion(value); return *this;}

    /**
     * <p>The current version of the connector that you want to update.</p>
     */
    inline UpdateConnectorRequest& WithCurrentVersion(Aws::String&& value) { SetCurrentVersion(std::move(value)); return *this;}

    /**
     * <p>The current version of the connector that you want to update.</p>
     */
    inline UpdateConnectorRequest& WithCurrentVersion(const char* value) { SetCurrentVersion(value); return *this;}

  private:

    CapacityUpdate m_capacity;
    bool m_capacityHasBeenSet = false;

    Aws::String m_connectorArn;
    bool m_connectorArnHasBeenSet = false;

    Aws::String m_currentVersion;
    bool m_currentVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace KafkaConnect
} // namespace Aws
