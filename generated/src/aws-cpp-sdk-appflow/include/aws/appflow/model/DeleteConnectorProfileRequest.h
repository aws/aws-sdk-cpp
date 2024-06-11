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
  class DeleteConnectorProfileRequest : public AppflowRequest
  {
  public:
    AWS_APPFLOW_API DeleteConnectorProfileRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteConnectorProfile"; }

    AWS_APPFLOW_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p> The name of the connector profile. The name is unique for each
     * <code>ConnectorProfile</code> in your account. </p>
     */
    inline const Aws::String& GetConnectorProfileName() const{ return m_connectorProfileName; }
    inline bool ConnectorProfileNameHasBeenSet() const { return m_connectorProfileNameHasBeenSet; }
    inline void SetConnectorProfileName(const Aws::String& value) { m_connectorProfileNameHasBeenSet = true; m_connectorProfileName = value; }
    inline void SetConnectorProfileName(Aws::String&& value) { m_connectorProfileNameHasBeenSet = true; m_connectorProfileName = std::move(value); }
    inline void SetConnectorProfileName(const char* value) { m_connectorProfileNameHasBeenSet = true; m_connectorProfileName.assign(value); }
    inline DeleteConnectorProfileRequest& WithConnectorProfileName(const Aws::String& value) { SetConnectorProfileName(value); return *this;}
    inline DeleteConnectorProfileRequest& WithConnectorProfileName(Aws::String&& value) { SetConnectorProfileName(std::move(value)); return *this;}
    inline DeleteConnectorProfileRequest& WithConnectorProfileName(const char* value) { SetConnectorProfileName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Indicates whether Amazon AppFlow should delete the profile, even if it is
     * currently in use in one or more flows. </p>
     */
    inline bool GetForceDelete() const{ return m_forceDelete; }
    inline bool ForceDeleteHasBeenSet() const { return m_forceDeleteHasBeenSet; }
    inline void SetForceDelete(bool value) { m_forceDeleteHasBeenSet = true; m_forceDelete = value; }
    inline DeleteConnectorProfileRequest& WithForceDelete(bool value) { SetForceDelete(value); return *this;}
    ///@}
  private:

    Aws::String m_connectorProfileName;
    bool m_connectorProfileNameHasBeenSet = false;

    bool m_forceDelete;
    bool m_forceDeleteHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
