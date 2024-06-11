/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appflow/Appflow_EXPORTS.h>
#include <aws/appflow/AppflowRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/appflow/model/ConnectorType.h>
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
  class DescribeConnectorProfilesRequest : public AppflowRequest
  {
  public:
    AWS_APPFLOW_API DescribeConnectorProfilesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeConnectorProfiles"; }

    AWS_APPFLOW_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p> The name of the connector profile. The name is unique for each
     * <code>ConnectorProfile</code> in the Amazon Web Services account. </p>
     */
    inline const Aws::Vector<Aws::String>& GetConnectorProfileNames() const{ return m_connectorProfileNames; }
    inline bool ConnectorProfileNamesHasBeenSet() const { return m_connectorProfileNamesHasBeenSet; }
    inline void SetConnectorProfileNames(const Aws::Vector<Aws::String>& value) { m_connectorProfileNamesHasBeenSet = true; m_connectorProfileNames = value; }
    inline void SetConnectorProfileNames(Aws::Vector<Aws::String>&& value) { m_connectorProfileNamesHasBeenSet = true; m_connectorProfileNames = std::move(value); }
    inline DescribeConnectorProfilesRequest& WithConnectorProfileNames(const Aws::Vector<Aws::String>& value) { SetConnectorProfileNames(value); return *this;}
    inline DescribeConnectorProfilesRequest& WithConnectorProfileNames(Aws::Vector<Aws::String>&& value) { SetConnectorProfileNames(std::move(value)); return *this;}
    inline DescribeConnectorProfilesRequest& AddConnectorProfileNames(const Aws::String& value) { m_connectorProfileNamesHasBeenSet = true; m_connectorProfileNames.push_back(value); return *this; }
    inline DescribeConnectorProfilesRequest& AddConnectorProfileNames(Aws::String&& value) { m_connectorProfileNamesHasBeenSet = true; m_connectorProfileNames.push_back(std::move(value)); return *this; }
    inline DescribeConnectorProfilesRequest& AddConnectorProfileNames(const char* value) { m_connectorProfileNamesHasBeenSet = true; m_connectorProfileNames.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p> The type of connector, such as Salesforce, Amplitude, and so on. </p>
     */
    inline const ConnectorType& GetConnectorType() const{ return m_connectorType; }
    inline bool ConnectorTypeHasBeenSet() const { return m_connectorTypeHasBeenSet; }
    inline void SetConnectorType(const ConnectorType& value) { m_connectorTypeHasBeenSet = true; m_connectorType = value; }
    inline void SetConnectorType(ConnectorType&& value) { m_connectorTypeHasBeenSet = true; m_connectorType = std::move(value); }
    inline DescribeConnectorProfilesRequest& WithConnectorType(const ConnectorType& value) { SetConnectorType(value); return *this;}
    inline DescribeConnectorProfilesRequest& WithConnectorType(ConnectorType&& value) { SetConnectorType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the connector. The name is unique for each
     * <code>ConnectorRegistration</code> in your Amazon Web Services account. Only
     * needed if calling for CUSTOMCONNECTOR connector type/.</p>
     */
    inline const Aws::String& GetConnectorLabel() const{ return m_connectorLabel; }
    inline bool ConnectorLabelHasBeenSet() const { return m_connectorLabelHasBeenSet; }
    inline void SetConnectorLabel(const Aws::String& value) { m_connectorLabelHasBeenSet = true; m_connectorLabel = value; }
    inline void SetConnectorLabel(Aws::String&& value) { m_connectorLabelHasBeenSet = true; m_connectorLabel = std::move(value); }
    inline void SetConnectorLabel(const char* value) { m_connectorLabelHasBeenSet = true; m_connectorLabel.assign(value); }
    inline DescribeConnectorProfilesRequest& WithConnectorLabel(const Aws::String& value) { SetConnectorLabel(value); return *this;}
    inline DescribeConnectorProfilesRequest& WithConnectorLabel(Aws::String&& value) { SetConnectorLabel(std::move(value)); return *this;}
    inline DescribeConnectorProfilesRequest& WithConnectorLabel(const char* value) { SetConnectorLabel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies the maximum number of items that should be returned in the result
     * set. The default for <code>maxResults</code> is 20 (for all paginated API
     * operations). </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline DescribeConnectorProfilesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The pagination token for the next page of data. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline DescribeConnectorProfilesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeConnectorProfilesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeConnectorProfilesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_connectorProfileNames;
    bool m_connectorProfileNamesHasBeenSet = false;

    ConnectorType m_connectorType;
    bool m_connectorTypeHasBeenSet = false;

    Aws::String m_connectorLabel;
    bool m_connectorLabelHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
