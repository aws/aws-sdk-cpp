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
  class ListConnectorEntitiesRequest : public AppflowRequest
  {
  public:
    AWS_APPFLOW_API ListConnectorEntitiesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListConnectorEntities"; }

    AWS_APPFLOW_API Aws::String SerializePayload() const override;


    /**
     * <p> The name of the connector profile. The name is unique for each
     * <code>ConnectorProfile</code> in the Amazon Web Services account, and is used to
     * query the downstream connector. </p>
     */
    inline const Aws::String& GetConnectorProfileName() const{ return m_connectorProfileName; }

    /**
     * <p> The name of the connector profile. The name is unique for each
     * <code>ConnectorProfile</code> in the Amazon Web Services account, and is used to
     * query the downstream connector. </p>
     */
    inline bool ConnectorProfileNameHasBeenSet() const { return m_connectorProfileNameHasBeenSet; }

    /**
     * <p> The name of the connector profile. The name is unique for each
     * <code>ConnectorProfile</code> in the Amazon Web Services account, and is used to
     * query the downstream connector. </p>
     */
    inline void SetConnectorProfileName(const Aws::String& value) { m_connectorProfileNameHasBeenSet = true; m_connectorProfileName = value; }

    /**
     * <p> The name of the connector profile. The name is unique for each
     * <code>ConnectorProfile</code> in the Amazon Web Services account, and is used to
     * query the downstream connector. </p>
     */
    inline void SetConnectorProfileName(Aws::String&& value) { m_connectorProfileNameHasBeenSet = true; m_connectorProfileName = std::move(value); }

    /**
     * <p> The name of the connector profile. The name is unique for each
     * <code>ConnectorProfile</code> in the Amazon Web Services account, and is used to
     * query the downstream connector. </p>
     */
    inline void SetConnectorProfileName(const char* value) { m_connectorProfileNameHasBeenSet = true; m_connectorProfileName.assign(value); }

    /**
     * <p> The name of the connector profile. The name is unique for each
     * <code>ConnectorProfile</code> in the Amazon Web Services account, and is used to
     * query the downstream connector. </p>
     */
    inline ListConnectorEntitiesRequest& WithConnectorProfileName(const Aws::String& value) { SetConnectorProfileName(value); return *this;}

    /**
     * <p> The name of the connector profile. The name is unique for each
     * <code>ConnectorProfile</code> in the Amazon Web Services account, and is used to
     * query the downstream connector. </p>
     */
    inline ListConnectorEntitiesRequest& WithConnectorProfileName(Aws::String&& value) { SetConnectorProfileName(std::move(value)); return *this;}

    /**
     * <p> The name of the connector profile. The name is unique for each
     * <code>ConnectorProfile</code> in the Amazon Web Services account, and is used to
     * query the downstream connector. </p>
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


    /**
     * <p>The version of the API that's used by the connector.</p>
     */
    inline const Aws::String& GetApiVersion() const{ return m_apiVersion; }

    /**
     * <p>The version of the API that's used by the connector.</p>
     */
    inline bool ApiVersionHasBeenSet() const { return m_apiVersionHasBeenSet; }

    /**
     * <p>The version of the API that's used by the connector.</p>
     */
    inline void SetApiVersion(const Aws::String& value) { m_apiVersionHasBeenSet = true; m_apiVersion = value; }

    /**
     * <p>The version of the API that's used by the connector.</p>
     */
    inline void SetApiVersion(Aws::String&& value) { m_apiVersionHasBeenSet = true; m_apiVersion = std::move(value); }

    /**
     * <p>The version of the API that's used by the connector.</p>
     */
    inline void SetApiVersion(const char* value) { m_apiVersionHasBeenSet = true; m_apiVersion.assign(value); }

    /**
     * <p>The version of the API that's used by the connector.</p>
     */
    inline ListConnectorEntitiesRequest& WithApiVersion(const Aws::String& value) { SetApiVersion(value); return *this;}

    /**
     * <p>The version of the API that's used by the connector.</p>
     */
    inline ListConnectorEntitiesRequest& WithApiVersion(Aws::String&& value) { SetApiVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the API that's used by the connector.</p>
     */
    inline ListConnectorEntitiesRequest& WithApiVersion(const char* value) { SetApiVersion(value); return *this;}


    /**
     * <p>The maximum number of items that the operation returns in the response.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of items that the operation returns in the response.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of items that the operation returns in the response.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of items that the operation returns in the response.</p>
     */
    inline ListConnectorEntitiesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>A token that was provided by your prior <code>ListConnectorEntities</code>
     * operation if the response was too big for the page size. You specify this token
     * to get the next page of results in paginated response.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token that was provided by your prior <code>ListConnectorEntities</code>
     * operation if the response was too big for the page size. You specify this token
     * to get the next page of results in paginated response.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>A token that was provided by your prior <code>ListConnectorEntities</code>
     * operation if the response was too big for the page size. You specify this token
     * to get the next page of results in paginated response.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A token that was provided by your prior <code>ListConnectorEntities</code>
     * operation if the response was too big for the page size. You specify this token
     * to get the next page of results in paginated response.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>A token that was provided by your prior <code>ListConnectorEntities</code>
     * operation if the response was too big for the page size. You specify this token
     * to get the next page of results in paginated response.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A token that was provided by your prior <code>ListConnectorEntities</code>
     * operation if the response was too big for the page size. You specify this token
     * to get the next page of results in paginated response.</p>
     */
    inline ListConnectorEntitiesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token that was provided by your prior <code>ListConnectorEntities</code>
     * operation if the response was too big for the page size. You specify this token
     * to get the next page of results in paginated response.</p>
     */
    inline ListConnectorEntitiesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token that was provided by your prior <code>ListConnectorEntities</code>
     * operation if the response was too big for the page size. You specify this token
     * to get the next page of results in paginated response.</p>
     */
    inline ListConnectorEntitiesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_connectorProfileName;
    bool m_connectorProfileNameHasBeenSet = false;

    ConnectorType m_connectorType;
    bool m_connectorTypeHasBeenSet = false;

    Aws::String m_entitiesPath;
    bool m_entitiesPathHasBeenSet = false;

    Aws::String m_apiVersion;
    bool m_apiVersionHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
