/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/appflow/AppflowRequest.h>
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
  class UnregisterConnectorRequest : public AppflowRequest
  {
  public:
    AWS_APPFLOW_API UnregisterConnectorRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UnregisterConnector"; }

    AWS_APPFLOW_API Aws::String SerializePayload() const override;


    /**
     * <p>The label of the connector. The label is unique for each
     * <code>ConnectorRegistration</code> in your Amazon Web Services account.</p>
     */
    inline const Aws::String& GetConnectorLabel() const{ return m_connectorLabel; }

    /**
     * <p>The label of the connector. The label is unique for each
     * <code>ConnectorRegistration</code> in your Amazon Web Services account.</p>
     */
    inline bool ConnectorLabelHasBeenSet() const { return m_connectorLabelHasBeenSet; }

    /**
     * <p>The label of the connector. The label is unique for each
     * <code>ConnectorRegistration</code> in your Amazon Web Services account.</p>
     */
    inline void SetConnectorLabel(const Aws::String& value) { m_connectorLabelHasBeenSet = true; m_connectorLabel = value; }

    /**
     * <p>The label of the connector. The label is unique for each
     * <code>ConnectorRegistration</code> in your Amazon Web Services account.</p>
     */
    inline void SetConnectorLabel(Aws::String&& value) { m_connectorLabelHasBeenSet = true; m_connectorLabel = std::move(value); }

    /**
     * <p>The label of the connector. The label is unique for each
     * <code>ConnectorRegistration</code> in your Amazon Web Services account.</p>
     */
    inline void SetConnectorLabel(const char* value) { m_connectorLabelHasBeenSet = true; m_connectorLabel.assign(value); }

    /**
     * <p>The label of the connector. The label is unique for each
     * <code>ConnectorRegistration</code> in your Amazon Web Services account.</p>
     */
    inline UnregisterConnectorRequest& WithConnectorLabel(const Aws::String& value) { SetConnectorLabel(value); return *this;}

    /**
     * <p>The label of the connector. The label is unique for each
     * <code>ConnectorRegistration</code> in your Amazon Web Services account.</p>
     */
    inline UnregisterConnectorRequest& WithConnectorLabel(Aws::String&& value) { SetConnectorLabel(std::move(value)); return *this;}

    /**
     * <p>The label of the connector. The label is unique for each
     * <code>ConnectorRegistration</code> in your Amazon Web Services account.</p>
     */
    inline UnregisterConnectorRequest& WithConnectorLabel(const char* value) { SetConnectorLabel(value); return *this;}


    /**
     * <p>Indicates whether Amazon AppFlow should unregister the connector, even if it
     * is currently in use in one or more connector profiles. The default value is
     * false.</p>
     */
    inline bool GetForceDelete() const{ return m_forceDelete; }

    /**
     * <p>Indicates whether Amazon AppFlow should unregister the connector, even if it
     * is currently in use in one or more connector profiles. The default value is
     * false.</p>
     */
    inline bool ForceDeleteHasBeenSet() const { return m_forceDeleteHasBeenSet; }

    /**
     * <p>Indicates whether Amazon AppFlow should unregister the connector, even if it
     * is currently in use in one or more connector profiles. The default value is
     * false.</p>
     */
    inline void SetForceDelete(bool value) { m_forceDeleteHasBeenSet = true; m_forceDelete = value; }

    /**
     * <p>Indicates whether Amazon AppFlow should unregister the connector, even if it
     * is currently in use in one or more connector profiles. The default value is
     * false.</p>
     */
    inline UnregisterConnectorRequest& WithForceDelete(bool value) { SetForceDelete(value); return *this;}

  private:

    Aws::String m_connectorLabel;
    bool m_connectorLabelHasBeenSet = false;

    bool m_forceDelete;
    bool m_forceDeleteHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
