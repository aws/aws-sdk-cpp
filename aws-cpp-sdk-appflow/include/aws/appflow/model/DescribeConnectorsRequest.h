/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/appflow/AppflowRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class DescribeConnectorsRequest : public AppflowRequest
  {
  public:
    AWS_APPFLOW_API DescribeConnectorsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeConnectors"; }

    AWS_APPFLOW_API Aws::String SerializePayload() const override;


    /**
     * <p> The type of connector, such as Salesforce, Amplitude, and so on. </p>
     */
    inline const Aws::Vector<ConnectorType>& GetConnectorTypes() const{ return m_connectorTypes; }

    /**
     * <p> The type of connector, such as Salesforce, Amplitude, and so on. </p>
     */
    inline bool ConnectorTypesHasBeenSet() const { return m_connectorTypesHasBeenSet; }

    /**
     * <p> The type of connector, such as Salesforce, Amplitude, and so on. </p>
     */
    inline void SetConnectorTypes(const Aws::Vector<ConnectorType>& value) { m_connectorTypesHasBeenSet = true; m_connectorTypes = value; }

    /**
     * <p> The type of connector, such as Salesforce, Amplitude, and so on. </p>
     */
    inline void SetConnectorTypes(Aws::Vector<ConnectorType>&& value) { m_connectorTypesHasBeenSet = true; m_connectorTypes = std::move(value); }

    /**
     * <p> The type of connector, such as Salesforce, Amplitude, and so on. </p>
     */
    inline DescribeConnectorsRequest& WithConnectorTypes(const Aws::Vector<ConnectorType>& value) { SetConnectorTypes(value); return *this;}

    /**
     * <p> The type of connector, such as Salesforce, Amplitude, and so on. </p>
     */
    inline DescribeConnectorsRequest& WithConnectorTypes(Aws::Vector<ConnectorType>&& value) { SetConnectorTypes(std::move(value)); return *this;}

    /**
     * <p> The type of connector, such as Salesforce, Amplitude, and so on. </p>
     */
    inline DescribeConnectorsRequest& AddConnectorTypes(const ConnectorType& value) { m_connectorTypesHasBeenSet = true; m_connectorTypes.push_back(value); return *this; }

    /**
     * <p> The type of connector, such as Salesforce, Amplitude, and so on. </p>
     */
    inline DescribeConnectorsRequest& AddConnectorTypes(ConnectorType&& value) { m_connectorTypesHasBeenSet = true; m_connectorTypes.push_back(std::move(value)); return *this; }


    /**
     * <p>The maximum number of items that should be returned in the result set. The
     * default is 20.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of items that should be returned in the result set. The
     * default is 20.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of items that should be returned in the result set. The
     * default is 20.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of items that should be returned in the result set. The
     * default is 20.</p>
     */
    inline DescribeConnectorsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p> The pagination token for the next page of data. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> The pagination token for the next page of data. </p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p> The pagination token for the next page of data. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p> The pagination token for the next page of data. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p> The pagination token for the next page of data. </p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p> The pagination token for the next page of data. </p>
     */
    inline DescribeConnectorsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> The pagination token for the next page of data. </p>
     */
    inline DescribeConnectorsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> The pagination token for the next page of data. </p>
     */
    inline DescribeConnectorsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ConnectorType> m_connectorTypes;
    bool m_connectorTypesHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
