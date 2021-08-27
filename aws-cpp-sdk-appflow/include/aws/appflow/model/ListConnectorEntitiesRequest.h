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
  class AWS_APPFLOW_API ListConnectorEntitiesRequest : public AppflowRequest
  {
  public:
    ListConnectorEntitiesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListConnectorEntities"; }

    Aws::String SerializePayload() const override;


    /**
     * <p> The name of the connector profile. The name is unique for each
     * <code>ConnectorProfile</code> in the AWS account, and is used to query the
     * downstream connector. </p>
     */
    inline const Aws::String& GetConnectorProfileName() const{ return m_connectorProfileName; }

    /**
     * <p> The name of the connector profile. The name is unique for each
     * <code>ConnectorProfile</code> in the AWS account, and is used to query the
     * downstream connector. </p>
     */
    inline bool ConnectorProfileNameHasBeenSet() const { return m_connectorProfileNameHasBeenSet; }

    /**
     * <p> The name of the connector profile. The name is unique for each
     * <code>ConnectorProfile</code> in the AWS account, and is used to query the
     * downstream connector. </p>
     */
    inline void SetConnectorProfileName(const Aws::String& value) { m_connectorProfileNameHasBeenSet = true; m_connectorProfileName = value; }

    /**
     * <p> The name of the connector profile. The name is unique for each
     * <code>ConnectorProfile</code> in the AWS account, and is used to query the
     * downstream connector. </p>
     */
    inline void SetConnectorProfileName(Aws::String&& value) { m_connectorProfileNameHasBeenSet = true; m_connectorProfileName = std::move(value); }

    /**
     * <p> The name of the connector profile. The name is unique for each
     * <code>ConnectorProfile</code> in the AWS account, and is used to query the
     * downstream connector. </p>
     */
    inline void SetConnectorProfileName(const char* value) { m_connectorProfileNameHasBeenSet = true; m_connectorProfileName.assign(value); }

    /**
     * <p> The name of the connector profile. The name is unique for each
     * <code>ConnectorProfile</code> in the AWS account, and is used to query the
     * downstream connector. </p>
     */
    inline ListConnectorEntitiesRequest& WithConnectorProfileName(const Aws::String& value) { SetConnectorProfileName(value); return *this;}

    /**
     * <p> The name of the connector profile. The name is unique for each
     * <code>ConnectorProfile</code> in the AWS account, and is used to query the
     * downstream connector. </p>
     */
    inline ListConnectorEntitiesRequest& WithConnectorProfileName(Aws::String&& value) { SetConnectorProfileName(std::move(value)); return *this;}

    /**
     * <p> The name of the connector profile. The name is unique for each
     * <code>ConnectorProfile</code> in the AWS account, and is used to query the
     * downstream connector. </p>
     */
    inline ListConnectorEntitiesRequest& WithConnectorProfileName(const char* value) { SetConnectorProfileName(value); return *this;}


    /**
     * <p> The type of connector, such as Salesforce, Amplitude, and so on. </p>
     */
    inline const ConnectorType& GetConnectorType() const{ return m_connectorType; }

    /**
     * <p> The type of connector, such as Salesforce, Amplitude, and so on. </p>
     */
    inline bool ConnectorTypeHasBeenSet() const { return m_connectorTypeHasBeenSet; }

    /**
     * <p> The type of connector, such as Salesforce, Amplitude, and so on. </p>
     */
    inline void SetConnectorType(const ConnectorType& value) { m_connectorTypeHasBeenSet = true; m_connectorType = value; }

    /**
     * <p> The type of connector, such as Salesforce, Amplitude, and so on. </p>
     */
    inline void SetConnectorType(ConnectorType&& value) { m_connectorTypeHasBeenSet = true; m_connectorType = std::move(value); }

    /**
     * <p> The type of connector, such as Salesforce, Amplitude, and so on. </p>
     */
    inline ListConnectorEntitiesRequest& WithConnectorType(const ConnectorType& value) { SetConnectorType(value); return *this;}

    /**
     * <p> The type of connector, such as Salesforce, Amplitude, and so on. </p>
     */
    inline ListConnectorEntitiesRequest& WithConnectorType(ConnectorType&& value) { SetConnectorType(std::move(value)); return *this;}


    /**
     * <p> This optional parameter is specific to connector implementation. Some
     * connectors support multiple levels or categories of entities. You can find out
     * the list of roots for such providers by sending a request without the
     * <code>entitiesPath</code> parameter. If the connector supports entities at
     * different roots, this initial request returns the list of roots. Otherwise, this
     * request returns all entities supported by the provider. </p>
     */
    inline const Aws::String& GetEntitiesPath() const{ return m_entitiesPath; }

    /**
     * <p> This optional parameter is specific to connector implementation. Some
     * connectors support multiple levels or categories of entities. You can find out
     * the list of roots for such providers by sending a request without the
     * <code>entitiesPath</code> parameter. If the connector supports entities at
     * different roots, this initial request returns the list of roots. Otherwise, this
     * request returns all entities supported by the provider. </p>
     */
    inline bool EntitiesPathHasBeenSet() const { return m_entitiesPathHasBeenSet; }

    /**
     * <p> This optional parameter is specific to connector implementation. Some
     * connectors support multiple levels or categories of entities. You can find out
     * the list of roots for such providers by sending a request without the
     * <code>entitiesPath</code> parameter. If the connector supports entities at
     * different roots, this initial request returns the list of roots. Otherwise, this
     * request returns all entities supported by the provider. </p>
     */
    inline void SetEntitiesPath(const Aws::String& value) { m_entitiesPathHasBeenSet = true; m_entitiesPath = value; }

    /**
     * <p> This optional parameter is specific to connector implementation. Some
     * connectors support multiple levels or categories of entities. You can find out
     * the list of roots for such providers by sending a request without the
     * <code>entitiesPath</code> parameter. If the connector supports entities at
     * different roots, this initial request returns the list of roots. Otherwise, this
     * request returns all entities supported by the provider. </p>
     */
    inline void SetEntitiesPath(Aws::String&& value) { m_entitiesPathHasBeenSet = true; m_entitiesPath = std::move(value); }

    /**
     * <p> This optional parameter is specific to connector implementation. Some
     * connectors support multiple levels or categories of entities. You can find out
     * the list of roots for such providers by sending a request without the
     * <code>entitiesPath</code> parameter. If the connector supports entities at
     * different roots, this initial request returns the list of roots. Otherwise, this
     * request returns all entities supported by the provider. </p>
     */
    inline void SetEntitiesPath(const char* value) { m_entitiesPathHasBeenSet = true; m_entitiesPath.assign(value); }

    /**
     * <p> This optional parameter is specific to connector implementation. Some
     * connectors support multiple levels or categories of entities. You can find out
     * the list of roots for such providers by sending a request without the
     * <code>entitiesPath</code> parameter. If the connector supports entities at
     * different roots, this initial request returns the list of roots. Otherwise, this
     * request returns all entities supported by the provider. </p>
     */
    inline ListConnectorEntitiesRequest& WithEntitiesPath(const Aws::String& value) { SetEntitiesPath(value); return *this;}

    /**
     * <p> This optional parameter is specific to connector implementation. Some
     * connectors support multiple levels or categories of entities. You can find out
     * the list of roots for such providers by sending a request without the
     * <code>entitiesPath</code> parameter. If the connector supports entities at
     * different roots, this initial request returns the list of roots. Otherwise, this
     * request returns all entities supported by the provider. </p>
     */
    inline ListConnectorEntitiesRequest& WithEntitiesPath(Aws::String&& value) { SetEntitiesPath(std::move(value)); return *this;}

    /**
     * <p> This optional parameter is specific to connector implementation. Some
     * connectors support multiple levels or categories of entities. You can find out
     * the list of roots for such providers by sending a request without the
     * <code>entitiesPath</code> parameter. If the connector supports entities at
     * different roots, this initial request returns the list of roots. Otherwise, this
     * request returns all entities supported by the provider. </p>
     */
    inline ListConnectorEntitiesRequest& WithEntitiesPath(const char* value) { SetEntitiesPath(value); return *this;}

  private:

    Aws::String m_connectorProfileName;
    bool m_connectorProfileNameHasBeenSet;

    ConnectorType m_connectorType;
    bool m_connectorTypeHasBeenSet;

    Aws::String m_entitiesPath;
    bool m_entitiesPathHasBeenSet;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
