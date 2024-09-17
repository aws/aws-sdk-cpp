/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/appflow/AppflowRequest.h>
#include <aws/appflow/model/ConnectorType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Appflow
{
namespace Model
{

  /**
   */
  class DescribeConnectorRequest : public AppflowRequest
  {
  public:
    AWS_APPFLOW_API DescribeConnectorRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeConnector"; }

    AWS_APPFLOW_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The connector type, such as CUSTOMCONNECTOR, Saleforce, Marketo. Please
     * choose CUSTOMCONNECTOR for Lambda based custom connectors.</p>
     */
    inline const ConnectorType& GetConnectorType() const{ return m_connectorType; }
    inline bool ConnectorTypeHasBeenSet() const { return m_connectorTypeHasBeenSet; }
    inline void SetConnectorType(const ConnectorType& value) { m_connectorTypeHasBeenSet = true; m_connectorType = value; }
    inline void SetConnectorType(ConnectorType&& value) { m_connectorTypeHasBeenSet = true; m_connectorType = std::move(value); }
    inline DescribeConnectorRequest& WithConnectorType(const ConnectorType& value) { SetConnectorType(value); return *this;}
    inline DescribeConnectorRequest& WithConnectorType(ConnectorType&& value) { SetConnectorType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The label of the connector. The label is unique for each
     * <code>ConnectorRegistration</code> in your Amazon Web Services account. Only
     * needed if calling for CUSTOMCONNECTOR connector type/.</p>
     */
    inline const Aws::String& GetConnectorLabel() const{ return m_connectorLabel; }
    inline bool ConnectorLabelHasBeenSet() const { return m_connectorLabelHasBeenSet; }
    inline void SetConnectorLabel(const Aws::String& value) { m_connectorLabelHasBeenSet = true; m_connectorLabel = value; }
    inline void SetConnectorLabel(Aws::String&& value) { m_connectorLabelHasBeenSet = true; m_connectorLabel = std::move(value); }
    inline void SetConnectorLabel(const char* value) { m_connectorLabelHasBeenSet = true; m_connectorLabel.assign(value); }
    inline DescribeConnectorRequest& WithConnectorLabel(const Aws::String& value) { SetConnectorLabel(value); return *this;}
    inline DescribeConnectorRequest& WithConnectorLabel(Aws::String&& value) { SetConnectorLabel(std::move(value)); return *this;}
    inline DescribeConnectorRequest& WithConnectorLabel(const char* value) { SetConnectorLabel(value); return *this;}
    ///@}
  private:

    ConnectorType m_connectorType;
    bool m_connectorTypeHasBeenSet = false;

    Aws::String m_connectorLabel;
    bool m_connectorLabelHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
