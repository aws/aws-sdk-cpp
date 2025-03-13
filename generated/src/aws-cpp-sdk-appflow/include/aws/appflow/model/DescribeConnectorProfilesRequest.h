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
    AWS_APPFLOW_API DescribeConnectorProfilesRequest() = default;

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
    inline const Aws::Vector<Aws::String>& GetConnectorProfileNames() const { return m_connectorProfileNames; }
    inline bool ConnectorProfileNamesHasBeenSet() const { return m_connectorProfileNamesHasBeenSet; }
    template<typename ConnectorProfileNamesT = Aws::Vector<Aws::String>>
    void SetConnectorProfileNames(ConnectorProfileNamesT&& value) { m_connectorProfileNamesHasBeenSet = true; m_connectorProfileNames = std::forward<ConnectorProfileNamesT>(value); }
    template<typename ConnectorProfileNamesT = Aws::Vector<Aws::String>>
    DescribeConnectorProfilesRequest& WithConnectorProfileNames(ConnectorProfileNamesT&& value) { SetConnectorProfileNames(std::forward<ConnectorProfileNamesT>(value)); return *this;}
    template<typename ConnectorProfileNamesT = Aws::String>
    DescribeConnectorProfilesRequest& AddConnectorProfileNames(ConnectorProfileNamesT&& value) { m_connectorProfileNamesHasBeenSet = true; m_connectorProfileNames.emplace_back(std::forward<ConnectorProfileNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The type of connector, such as Salesforce, Amplitude, and so on. </p>
     */
    inline ConnectorType GetConnectorType() const { return m_connectorType; }
    inline bool ConnectorTypeHasBeenSet() const { return m_connectorTypeHasBeenSet; }
    inline void SetConnectorType(ConnectorType value) { m_connectorTypeHasBeenSet = true; m_connectorType = value; }
    inline DescribeConnectorProfilesRequest& WithConnectorType(ConnectorType value) { SetConnectorType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the connector. The name is unique for each
     * <code>ConnectorRegistration</code> in your Amazon Web Services account. Only
     * needed if calling for CUSTOMCONNECTOR connector type/.</p>
     */
    inline const Aws::String& GetConnectorLabel() const { return m_connectorLabel; }
    inline bool ConnectorLabelHasBeenSet() const { return m_connectorLabelHasBeenSet; }
    template<typename ConnectorLabelT = Aws::String>
    void SetConnectorLabel(ConnectorLabelT&& value) { m_connectorLabelHasBeenSet = true; m_connectorLabel = std::forward<ConnectorLabelT>(value); }
    template<typename ConnectorLabelT = Aws::String>
    DescribeConnectorProfilesRequest& WithConnectorLabel(ConnectorLabelT&& value) { SetConnectorLabel(std::forward<ConnectorLabelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies the maximum number of items that should be returned in the result
     * set. The default for <code>maxResults</code> is 20 (for all paginated API
     * operations). </p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline DescribeConnectorProfilesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The pagination token for the next page of data. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeConnectorProfilesRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_connectorProfileNames;
    bool m_connectorProfileNamesHasBeenSet = false;

    ConnectorType m_connectorType{ConnectorType::NOT_SET};
    bool m_connectorTypeHasBeenSet = false;

    Aws::String m_connectorLabel;
    bool m_connectorLabelHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Appflow
} // namespace Aws
