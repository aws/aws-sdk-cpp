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
    AWS_APPFLOW_API UnregisterConnectorRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UnregisterConnector"; }

    AWS_APPFLOW_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The label of the connector. The label is unique for each
     * <code>ConnectorRegistration</code> in your Amazon Web Services account.</p>
     */
    inline const Aws::String& GetConnectorLabel() const { return m_connectorLabel; }
    inline bool ConnectorLabelHasBeenSet() const { return m_connectorLabelHasBeenSet; }
    template<typename ConnectorLabelT = Aws::String>
    void SetConnectorLabel(ConnectorLabelT&& value) { m_connectorLabelHasBeenSet = true; m_connectorLabel = std::forward<ConnectorLabelT>(value); }
    template<typename ConnectorLabelT = Aws::String>
    UnregisterConnectorRequest& WithConnectorLabel(ConnectorLabelT&& value) { SetConnectorLabel(std::forward<ConnectorLabelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether Amazon AppFlow should unregister the connector, even if it
     * is currently in use in one or more connector profiles. The default value is
     * false.</p>
     */
    inline bool GetForceDelete() const { return m_forceDelete; }
    inline bool ForceDeleteHasBeenSet() const { return m_forceDeleteHasBeenSet; }
    inline void SetForceDelete(bool value) { m_forceDeleteHasBeenSet = true; m_forceDelete = value; }
    inline UnregisterConnectorRequest& WithForceDelete(bool value) { SetForceDelete(value); return *this;}
    ///@}
  private:

    Aws::String m_connectorLabel;
    bool m_connectorLabelHasBeenSet = false;

    bool m_forceDelete{false};
    bool m_forceDeleteHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
