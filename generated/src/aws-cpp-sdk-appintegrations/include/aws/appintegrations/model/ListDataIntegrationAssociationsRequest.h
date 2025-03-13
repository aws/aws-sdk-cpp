/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appintegrations/AppIntegrationsService_EXPORTS.h>
#include <aws/appintegrations/AppIntegrationsServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace AppIntegrationsService
{
namespace Model
{

  /**
   */
  class ListDataIntegrationAssociationsRequest : public AppIntegrationsServiceRequest
  {
  public:
    AWS_APPINTEGRATIONSSERVICE_API ListDataIntegrationAssociationsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListDataIntegrationAssociations"; }

    AWS_APPINTEGRATIONSSERVICE_API Aws::String SerializePayload() const override;

    AWS_APPINTEGRATIONSSERVICE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>A unique identifier for the DataIntegration.</p>
     */
    inline const Aws::String& GetDataIntegrationIdentifier() const { return m_dataIntegrationIdentifier; }
    inline bool DataIntegrationIdentifierHasBeenSet() const { return m_dataIntegrationIdentifierHasBeenSet; }
    template<typename DataIntegrationIdentifierT = Aws::String>
    void SetDataIntegrationIdentifier(DataIntegrationIdentifierT&& value) { m_dataIntegrationIdentifierHasBeenSet = true; m_dataIntegrationIdentifier = std::forward<DataIntegrationIdentifierT>(value); }
    template<typename DataIntegrationIdentifierT = Aws::String>
    ListDataIntegrationAssociationsRequest& WithDataIntegrationIdentifier(DataIntegrationIdentifierT&& value) { SetDataIntegrationIdentifier(std::forward<DataIntegrationIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListDataIntegrationAssociationsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return per page.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListDataIntegrationAssociationsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::String m_dataIntegrationIdentifier;
    bool m_dataIntegrationIdentifierHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace AppIntegrationsService
} // namespace Aws
