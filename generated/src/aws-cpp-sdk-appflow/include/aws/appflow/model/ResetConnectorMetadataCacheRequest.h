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
  class ResetConnectorMetadataCacheRequest : public AppflowRequest
  {
  public:
    AWS_APPFLOW_API ResetConnectorMetadataCacheRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ResetConnectorMetadataCache"; }

    AWS_APPFLOW_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the connector profile that you want to reset cached metadata
     * for.</p> <p>You can omit this parameter if you're resetting the cache for any of
     * the following connectors: Amazon Connect, Amazon EventBridge, Amazon Lookout for
     * Metrics, Amazon S3, or Upsolver. If you're resetting the cache for any other
     * connector, you must include this parameter in your request.</p>
     */
    inline const Aws::String& GetConnectorProfileName() const { return m_connectorProfileName; }
    inline bool ConnectorProfileNameHasBeenSet() const { return m_connectorProfileNameHasBeenSet; }
    template<typename ConnectorProfileNameT = Aws::String>
    void SetConnectorProfileName(ConnectorProfileNameT&& value) { m_connectorProfileNameHasBeenSet = true; m_connectorProfileName = std::forward<ConnectorProfileNameT>(value); }
    template<typename ConnectorProfileNameT = Aws::String>
    ResetConnectorMetadataCacheRequest& WithConnectorProfileName(ConnectorProfileNameT&& value) { SetConnectorProfileName(std::forward<ConnectorProfileNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of connector to reset cached metadata for.</p> <p>You must include
     * this parameter in your request if you're resetting the cache for any of the
     * following connectors: Amazon Connect, Amazon EventBridge, Amazon Lookout for
     * Metrics, Amazon S3, or Upsolver. If you're resetting the cache for any other
     * connector, you can omit this parameter from your request. </p>
     */
    inline ConnectorType GetConnectorType() const { return m_connectorType; }
    inline bool ConnectorTypeHasBeenSet() const { return m_connectorTypeHasBeenSet; }
    inline void SetConnectorType(ConnectorType value) { m_connectorTypeHasBeenSet = true; m_connectorType = value; }
    inline ResetConnectorMetadataCacheRequest& WithConnectorType(ConnectorType value) { SetConnectorType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use this parameter if you want to reset cached metadata about the details for
     * an individual entity.</p> <p>If you don't include this parameter in your
     * request, Amazon AppFlow only resets cached metadata about entity names, not
     * entity details.</p>
     */
    inline const Aws::String& GetConnectorEntityName() const { return m_connectorEntityName; }
    inline bool ConnectorEntityNameHasBeenSet() const { return m_connectorEntityNameHasBeenSet; }
    template<typename ConnectorEntityNameT = Aws::String>
    void SetConnectorEntityName(ConnectorEntityNameT&& value) { m_connectorEntityNameHasBeenSet = true; m_connectorEntityName = std::forward<ConnectorEntityNameT>(value); }
    template<typename ConnectorEntityNameT = Aws::String>
    ResetConnectorMetadataCacheRequest& WithConnectorEntityName(ConnectorEntityNameT&& value) { SetConnectorEntityName(std::forward<ConnectorEntityNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use this parameter only if you’re resetting the cached metadata about a
     * nested entity. Only some connectors support nested entities. A nested entity is
     * one that has another entity as a parent. To use this parameter, specify the name
     * of the parent entity.</p> <p>To look up the parent-child relationship of
     * entities, you can send a ListConnectorEntities request that omits the
     * entitiesPath parameter. Amazon AppFlow will return a list of top-level entities.
     * For each one, it indicates whether the entity has nested entities. Then, in a
     * subsequent ListConnectorEntities request, you can specify a parent entity name
     * for the entitiesPath parameter. Amazon AppFlow will return a list of the child
     * entities for that parent.</p>
     */
    inline const Aws::String& GetEntitiesPath() const { return m_entitiesPath; }
    inline bool EntitiesPathHasBeenSet() const { return m_entitiesPathHasBeenSet; }
    template<typename EntitiesPathT = Aws::String>
    void SetEntitiesPath(EntitiesPathT&& value) { m_entitiesPathHasBeenSet = true; m_entitiesPath = std::forward<EntitiesPathT>(value); }
    template<typename EntitiesPathT = Aws::String>
    ResetConnectorMetadataCacheRequest& WithEntitiesPath(EntitiesPathT&& value) { SetEntitiesPath(std::forward<EntitiesPathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The API version that you specified in the connector profile that you’re
     * resetting cached metadata for. You must use this parameter only if the connector
     * supports multiple API versions or if the connector type is CustomConnector.</p>
     * <p>To look up how many versions a connector supports, use the DescribeConnectors
     * action. In the response, find the value that Amazon AppFlow returns for the
     * connectorVersion parameter.</p> <p>To look up the connector type, use the
     * DescribeConnectorProfiles action. In the response, find the value that Amazon
     * AppFlow returns for the connectorType parameter.</p> <p>To look up the API
     * version that you specified in a connector profile, use the
     * DescribeConnectorProfiles action.</p>
     */
    inline const Aws::String& GetApiVersion() const { return m_apiVersion; }
    inline bool ApiVersionHasBeenSet() const { return m_apiVersionHasBeenSet; }
    template<typename ApiVersionT = Aws::String>
    void SetApiVersion(ApiVersionT&& value) { m_apiVersionHasBeenSet = true; m_apiVersion = std::forward<ApiVersionT>(value); }
    template<typename ApiVersionT = Aws::String>
    ResetConnectorMetadataCacheRequest& WithApiVersion(ApiVersionT&& value) { SetApiVersion(std::forward<ApiVersionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_connectorProfileName;
    bool m_connectorProfileNameHasBeenSet = false;

    ConnectorType m_connectorType{ConnectorType::NOT_SET};
    bool m_connectorTypeHasBeenSet = false;

    Aws::String m_connectorEntityName;
    bool m_connectorEntityNameHasBeenSet = false;

    Aws::String m_entitiesPath;
    bool m_entitiesPathHasBeenSet = false;

    Aws::String m_apiVersion;
    bool m_apiVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
