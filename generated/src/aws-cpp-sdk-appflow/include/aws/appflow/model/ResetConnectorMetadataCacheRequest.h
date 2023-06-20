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
    AWS_APPFLOW_API ResetConnectorMetadataCacheRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ResetConnectorMetadataCache"; }

    AWS_APPFLOW_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the connector profile that you want to reset cached metadata
     * for.</p> <p>You can omit this parameter if you're resetting the cache for any of
     * the following connectors: Amazon Connect, Amazon EventBridge, Amazon Lookout for
     * Metrics, Amazon S3, or Upsolver. If you're resetting the cache for any other
     * connector, you must include this parameter in your request.</p>
     */
    inline const Aws::String& GetConnectorProfileName() const{ return m_connectorProfileName; }

    /**
     * <p>The name of the connector profile that you want to reset cached metadata
     * for.</p> <p>You can omit this parameter if you're resetting the cache for any of
     * the following connectors: Amazon Connect, Amazon EventBridge, Amazon Lookout for
     * Metrics, Amazon S3, or Upsolver. If you're resetting the cache for any other
     * connector, you must include this parameter in your request.</p>
     */
    inline bool ConnectorProfileNameHasBeenSet() const { return m_connectorProfileNameHasBeenSet; }

    /**
     * <p>The name of the connector profile that you want to reset cached metadata
     * for.</p> <p>You can omit this parameter if you're resetting the cache for any of
     * the following connectors: Amazon Connect, Amazon EventBridge, Amazon Lookout for
     * Metrics, Amazon S3, or Upsolver. If you're resetting the cache for any other
     * connector, you must include this parameter in your request.</p>
     */
    inline void SetConnectorProfileName(const Aws::String& value) { m_connectorProfileNameHasBeenSet = true; m_connectorProfileName = value; }

    /**
     * <p>The name of the connector profile that you want to reset cached metadata
     * for.</p> <p>You can omit this parameter if you're resetting the cache for any of
     * the following connectors: Amazon Connect, Amazon EventBridge, Amazon Lookout for
     * Metrics, Amazon S3, or Upsolver. If you're resetting the cache for any other
     * connector, you must include this parameter in your request.</p>
     */
    inline void SetConnectorProfileName(Aws::String&& value) { m_connectorProfileNameHasBeenSet = true; m_connectorProfileName = std::move(value); }

    /**
     * <p>The name of the connector profile that you want to reset cached metadata
     * for.</p> <p>You can omit this parameter if you're resetting the cache for any of
     * the following connectors: Amazon Connect, Amazon EventBridge, Amazon Lookout for
     * Metrics, Amazon S3, or Upsolver. If you're resetting the cache for any other
     * connector, you must include this parameter in your request.</p>
     */
    inline void SetConnectorProfileName(const char* value) { m_connectorProfileNameHasBeenSet = true; m_connectorProfileName.assign(value); }

    /**
     * <p>The name of the connector profile that you want to reset cached metadata
     * for.</p> <p>You can omit this parameter if you're resetting the cache for any of
     * the following connectors: Amazon Connect, Amazon EventBridge, Amazon Lookout for
     * Metrics, Amazon S3, or Upsolver. If you're resetting the cache for any other
     * connector, you must include this parameter in your request.</p>
     */
    inline ResetConnectorMetadataCacheRequest& WithConnectorProfileName(const Aws::String& value) { SetConnectorProfileName(value); return *this;}

    /**
     * <p>The name of the connector profile that you want to reset cached metadata
     * for.</p> <p>You can omit this parameter if you're resetting the cache for any of
     * the following connectors: Amazon Connect, Amazon EventBridge, Amazon Lookout for
     * Metrics, Amazon S3, or Upsolver. If you're resetting the cache for any other
     * connector, you must include this parameter in your request.</p>
     */
    inline ResetConnectorMetadataCacheRequest& WithConnectorProfileName(Aws::String&& value) { SetConnectorProfileName(std::move(value)); return *this;}

    /**
     * <p>The name of the connector profile that you want to reset cached metadata
     * for.</p> <p>You can omit this parameter if you're resetting the cache for any of
     * the following connectors: Amazon Connect, Amazon EventBridge, Amazon Lookout for
     * Metrics, Amazon S3, or Upsolver. If you're resetting the cache for any other
     * connector, you must include this parameter in your request.</p>
     */
    inline ResetConnectorMetadataCacheRequest& WithConnectorProfileName(const char* value) { SetConnectorProfileName(value); return *this;}


    /**
     * <p>The type of connector to reset cached metadata for.</p> <p>You must include
     * this parameter in your request if you're resetting the cache for any of the
     * following connectors: Amazon Connect, Amazon EventBridge, Amazon Lookout for
     * Metrics, Amazon S3, or Upsolver. If you're resetting the cache for any other
     * connector, you can omit this parameter from your request. </p>
     */
    inline const ConnectorType& GetConnectorType() const{ return m_connectorType; }

    /**
     * <p>The type of connector to reset cached metadata for.</p> <p>You must include
     * this parameter in your request if you're resetting the cache for any of the
     * following connectors: Amazon Connect, Amazon EventBridge, Amazon Lookout for
     * Metrics, Amazon S3, or Upsolver. If you're resetting the cache for any other
     * connector, you can omit this parameter from your request. </p>
     */
    inline bool ConnectorTypeHasBeenSet() const { return m_connectorTypeHasBeenSet; }

    /**
     * <p>The type of connector to reset cached metadata for.</p> <p>You must include
     * this parameter in your request if you're resetting the cache for any of the
     * following connectors: Amazon Connect, Amazon EventBridge, Amazon Lookout for
     * Metrics, Amazon S3, or Upsolver. If you're resetting the cache for any other
     * connector, you can omit this parameter from your request. </p>
     */
    inline void SetConnectorType(const ConnectorType& value) { m_connectorTypeHasBeenSet = true; m_connectorType = value; }

    /**
     * <p>The type of connector to reset cached metadata for.</p> <p>You must include
     * this parameter in your request if you're resetting the cache for any of the
     * following connectors: Amazon Connect, Amazon EventBridge, Amazon Lookout for
     * Metrics, Amazon S3, or Upsolver. If you're resetting the cache for any other
     * connector, you can omit this parameter from your request. </p>
     */
    inline void SetConnectorType(ConnectorType&& value) { m_connectorTypeHasBeenSet = true; m_connectorType = std::move(value); }

    /**
     * <p>The type of connector to reset cached metadata for.</p> <p>You must include
     * this parameter in your request if you're resetting the cache for any of the
     * following connectors: Amazon Connect, Amazon EventBridge, Amazon Lookout for
     * Metrics, Amazon S3, or Upsolver. If you're resetting the cache for any other
     * connector, you can omit this parameter from your request. </p>
     */
    inline ResetConnectorMetadataCacheRequest& WithConnectorType(const ConnectorType& value) { SetConnectorType(value); return *this;}

    /**
     * <p>The type of connector to reset cached metadata for.</p> <p>You must include
     * this parameter in your request if you're resetting the cache for any of the
     * following connectors: Amazon Connect, Amazon EventBridge, Amazon Lookout for
     * Metrics, Amazon S3, or Upsolver. If you're resetting the cache for any other
     * connector, you can omit this parameter from your request. </p>
     */
    inline ResetConnectorMetadataCacheRequest& WithConnectorType(ConnectorType&& value) { SetConnectorType(std::move(value)); return *this;}


    /**
     * <p>Use this parameter if you want to reset cached metadata about the details for
     * an individual entity.</p> <p>If you don't include this parameter in your
     * request, Amazon AppFlow only resets cached metadata about entity names, not
     * entity details.</p>
     */
    inline const Aws::String& GetConnectorEntityName() const{ return m_connectorEntityName; }

    /**
     * <p>Use this parameter if you want to reset cached metadata about the details for
     * an individual entity.</p> <p>If you don't include this parameter in your
     * request, Amazon AppFlow only resets cached metadata about entity names, not
     * entity details.</p>
     */
    inline bool ConnectorEntityNameHasBeenSet() const { return m_connectorEntityNameHasBeenSet; }

    /**
     * <p>Use this parameter if you want to reset cached metadata about the details for
     * an individual entity.</p> <p>If you don't include this parameter in your
     * request, Amazon AppFlow only resets cached metadata about entity names, not
     * entity details.</p>
     */
    inline void SetConnectorEntityName(const Aws::String& value) { m_connectorEntityNameHasBeenSet = true; m_connectorEntityName = value; }

    /**
     * <p>Use this parameter if you want to reset cached metadata about the details for
     * an individual entity.</p> <p>If you don't include this parameter in your
     * request, Amazon AppFlow only resets cached metadata about entity names, not
     * entity details.</p>
     */
    inline void SetConnectorEntityName(Aws::String&& value) { m_connectorEntityNameHasBeenSet = true; m_connectorEntityName = std::move(value); }

    /**
     * <p>Use this parameter if you want to reset cached metadata about the details for
     * an individual entity.</p> <p>If you don't include this parameter in your
     * request, Amazon AppFlow only resets cached metadata about entity names, not
     * entity details.</p>
     */
    inline void SetConnectorEntityName(const char* value) { m_connectorEntityNameHasBeenSet = true; m_connectorEntityName.assign(value); }

    /**
     * <p>Use this parameter if you want to reset cached metadata about the details for
     * an individual entity.</p> <p>If you don't include this parameter in your
     * request, Amazon AppFlow only resets cached metadata about entity names, not
     * entity details.</p>
     */
    inline ResetConnectorMetadataCacheRequest& WithConnectorEntityName(const Aws::String& value) { SetConnectorEntityName(value); return *this;}

    /**
     * <p>Use this parameter if you want to reset cached metadata about the details for
     * an individual entity.</p> <p>If you don't include this parameter in your
     * request, Amazon AppFlow only resets cached metadata about entity names, not
     * entity details.</p>
     */
    inline ResetConnectorMetadataCacheRequest& WithConnectorEntityName(Aws::String&& value) { SetConnectorEntityName(std::move(value)); return *this;}

    /**
     * <p>Use this parameter if you want to reset cached metadata about the details for
     * an individual entity.</p> <p>If you don't include this parameter in your
     * request, Amazon AppFlow only resets cached metadata about entity names, not
     * entity details.</p>
     */
    inline ResetConnectorMetadataCacheRequest& WithConnectorEntityName(const char* value) { SetConnectorEntityName(value); return *this;}


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
    inline const Aws::String& GetEntitiesPath() const{ return m_entitiesPath; }

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
    inline bool EntitiesPathHasBeenSet() const { return m_entitiesPathHasBeenSet; }

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
    inline void SetEntitiesPath(const Aws::String& value) { m_entitiesPathHasBeenSet = true; m_entitiesPath = value; }

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
    inline void SetEntitiesPath(Aws::String&& value) { m_entitiesPathHasBeenSet = true; m_entitiesPath = std::move(value); }

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
    inline void SetEntitiesPath(const char* value) { m_entitiesPathHasBeenSet = true; m_entitiesPath.assign(value); }

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
    inline ResetConnectorMetadataCacheRequest& WithEntitiesPath(const Aws::String& value) { SetEntitiesPath(value); return *this;}

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
    inline ResetConnectorMetadataCacheRequest& WithEntitiesPath(Aws::String&& value) { SetEntitiesPath(std::move(value)); return *this;}

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
    inline ResetConnectorMetadataCacheRequest& WithEntitiesPath(const char* value) { SetEntitiesPath(value); return *this;}


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
    inline const Aws::String& GetApiVersion() const{ return m_apiVersion; }

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
    inline bool ApiVersionHasBeenSet() const { return m_apiVersionHasBeenSet; }

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
    inline void SetApiVersion(const Aws::String& value) { m_apiVersionHasBeenSet = true; m_apiVersion = value; }

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
    inline void SetApiVersion(Aws::String&& value) { m_apiVersionHasBeenSet = true; m_apiVersion = std::move(value); }

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
    inline void SetApiVersion(const char* value) { m_apiVersionHasBeenSet = true; m_apiVersion.assign(value); }

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
    inline ResetConnectorMetadataCacheRequest& WithApiVersion(const Aws::String& value) { SetApiVersion(value); return *this;}

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
    inline ResetConnectorMetadataCacheRequest& WithApiVersion(Aws::String&& value) { SetApiVersion(std::move(value)); return *this;}

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
    inline ResetConnectorMetadataCacheRequest& WithApiVersion(const char* value) { SetApiVersion(value); return *this;}

  private:

    Aws::String m_connectorProfileName;
    bool m_connectorProfileNameHasBeenSet = false;

    ConnectorType m_connectorType;
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
