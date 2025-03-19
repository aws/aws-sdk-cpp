/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/appflow/AppflowRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appflow/model/ConnectorType.h>
#include <utility>

namespace Aws
{
namespace Appflow
{
namespace Model
{

  /**
   */
  class DescribeConnectorEntityRequest : public AppflowRequest
  {
  public:
    AWS_APPFLOW_API DescribeConnectorEntityRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeConnectorEntity"; }

    AWS_APPFLOW_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p> The entity name for that connector. </p>
     */
    inline const Aws::String& GetConnectorEntityName() const { return m_connectorEntityName; }
    inline bool ConnectorEntityNameHasBeenSet() const { return m_connectorEntityNameHasBeenSet; }
    template<typename ConnectorEntityNameT = Aws::String>
    void SetConnectorEntityName(ConnectorEntityNameT&& value) { m_connectorEntityNameHasBeenSet = true; m_connectorEntityName = std::forward<ConnectorEntityNameT>(value); }
    template<typename ConnectorEntityNameT = Aws::String>
    DescribeConnectorEntityRequest& WithConnectorEntityName(ConnectorEntityNameT&& value) { SetConnectorEntityName(std::forward<ConnectorEntityNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The type of connector application, such as Salesforce, Amplitude, and so on.
     * </p>
     */
    inline ConnectorType GetConnectorType() const { return m_connectorType; }
    inline bool ConnectorTypeHasBeenSet() const { return m_connectorTypeHasBeenSet; }
    inline void SetConnectorType(ConnectorType value) { m_connectorTypeHasBeenSet = true; m_connectorType = value; }
    inline DescribeConnectorEntityRequest& WithConnectorType(ConnectorType value) { SetConnectorType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the connector profile. The name is unique for each
     * <code>ConnectorProfile</code> in the Amazon Web Services account. </p>
     */
    inline const Aws::String& GetConnectorProfileName() const { return m_connectorProfileName; }
    inline bool ConnectorProfileNameHasBeenSet() const { return m_connectorProfileNameHasBeenSet; }
    template<typename ConnectorProfileNameT = Aws::String>
    void SetConnectorProfileName(ConnectorProfileNameT&& value) { m_connectorProfileNameHasBeenSet = true; m_connectorProfileName = std::forward<ConnectorProfileNameT>(value); }
    template<typename ConnectorProfileNameT = Aws::String>
    DescribeConnectorEntityRequest& WithConnectorProfileName(ConnectorProfileNameT&& value) { SetConnectorProfileName(std::forward<ConnectorProfileNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the API that's used by the connector.</p>
     */
    inline const Aws::String& GetApiVersion() const { return m_apiVersion; }
    inline bool ApiVersionHasBeenSet() const { return m_apiVersionHasBeenSet; }
    template<typename ApiVersionT = Aws::String>
    void SetApiVersion(ApiVersionT&& value) { m_apiVersionHasBeenSet = true; m_apiVersion = std::forward<ApiVersionT>(value); }
    template<typename ApiVersionT = Aws::String>
    DescribeConnectorEntityRequest& WithApiVersion(ApiVersionT&& value) { SetApiVersion(std::forward<ApiVersionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_connectorEntityName;
    bool m_connectorEntityNameHasBeenSet = false;

    ConnectorType m_connectorType{ConnectorType::NOT_SET};
    bool m_connectorTypeHasBeenSet = false;

    Aws::String m_connectorProfileName;
    bool m_connectorProfileNameHasBeenSet = false;

    Aws::String m_apiVersion;
    bool m_apiVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
