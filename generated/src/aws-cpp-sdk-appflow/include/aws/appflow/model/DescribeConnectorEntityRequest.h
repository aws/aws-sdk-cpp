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
    AWS_APPFLOW_API DescribeConnectorEntityRequest();

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
    inline const Aws::String& GetConnectorEntityName() const{ return m_connectorEntityName; }
    inline bool ConnectorEntityNameHasBeenSet() const { return m_connectorEntityNameHasBeenSet; }
    inline void SetConnectorEntityName(const Aws::String& value) { m_connectorEntityNameHasBeenSet = true; m_connectorEntityName = value; }
    inline void SetConnectorEntityName(Aws::String&& value) { m_connectorEntityNameHasBeenSet = true; m_connectorEntityName = std::move(value); }
    inline void SetConnectorEntityName(const char* value) { m_connectorEntityNameHasBeenSet = true; m_connectorEntityName.assign(value); }
    inline DescribeConnectorEntityRequest& WithConnectorEntityName(const Aws::String& value) { SetConnectorEntityName(value); return *this;}
    inline DescribeConnectorEntityRequest& WithConnectorEntityName(Aws::String&& value) { SetConnectorEntityName(std::move(value)); return *this;}
    inline DescribeConnectorEntityRequest& WithConnectorEntityName(const char* value) { SetConnectorEntityName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The type of connector application, such as Salesforce, Amplitude, and so on.
     * </p>
     */
    inline const ConnectorType& GetConnectorType() const{ return m_connectorType; }
    inline bool ConnectorTypeHasBeenSet() const { return m_connectorTypeHasBeenSet; }
    inline void SetConnectorType(const ConnectorType& value) { m_connectorTypeHasBeenSet = true; m_connectorType = value; }
    inline void SetConnectorType(ConnectorType&& value) { m_connectorTypeHasBeenSet = true; m_connectorType = std::move(value); }
    inline DescribeConnectorEntityRequest& WithConnectorType(const ConnectorType& value) { SetConnectorType(value); return *this;}
    inline DescribeConnectorEntityRequest& WithConnectorType(ConnectorType&& value) { SetConnectorType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the connector profile. The name is unique for each
     * <code>ConnectorProfile</code> in the Amazon Web Services account. </p>
     */
    inline const Aws::String& GetConnectorProfileName() const{ return m_connectorProfileName; }
    inline bool ConnectorProfileNameHasBeenSet() const { return m_connectorProfileNameHasBeenSet; }
    inline void SetConnectorProfileName(const Aws::String& value) { m_connectorProfileNameHasBeenSet = true; m_connectorProfileName = value; }
    inline void SetConnectorProfileName(Aws::String&& value) { m_connectorProfileNameHasBeenSet = true; m_connectorProfileName = std::move(value); }
    inline void SetConnectorProfileName(const char* value) { m_connectorProfileNameHasBeenSet = true; m_connectorProfileName.assign(value); }
    inline DescribeConnectorEntityRequest& WithConnectorProfileName(const Aws::String& value) { SetConnectorProfileName(value); return *this;}
    inline DescribeConnectorEntityRequest& WithConnectorProfileName(Aws::String&& value) { SetConnectorProfileName(std::move(value)); return *this;}
    inline DescribeConnectorEntityRequest& WithConnectorProfileName(const char* value) { SetConnectorProfileName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the API that's used by the connector.</p>
     */
    inline const Aws::String& GetApiVersion() const{ return m_apiVersion; }
    inline bool ApiVersionHasBeenSet() const { return m_apiVersionHasBeenSet; }
    inline void SetApiVersion(const Aws::String& value) { m_apiVersionHasBeenSet = true; m_apiVersion = value; }
    inline void SetApiVersion(Aws::String&& value) { m_apiVersionHasBeenSet = true; m_apiVersion = std::move(value); }
    inline void SetApiVersion(const char* value) { m_apiVersionHasBeenSet = true; m_apiVersion.assign(value); }
    inline DescribeConnectorEntityRequest& WithApiVersion(const Aws::String& value) { SetApiVersion(value); return *this;}
    inline DescribeConnectorEntityRequest& WithApiVersion(Aws::String&& value) { SetApiVersion(std::move(value)); return *this;}
    inline DescribeConnectorEntityRequest& WithApiVersion(const char* value) { SetApiVersion(value); return *this;}
    ///@}
  private:

    Aws::String m_connectorEntityName;
    bool m_connectorEntityNameHasBeenSet = false;

    ConnectorType m_connectorType;
    bool m_connectorTypeHasBeenSet = false;

    Aws::String m_connectorProfileName;
    bool m_connectorProfileNameHasBeenSet = false;

    Aws::String m_apiVersion;
    bool m_apiVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
