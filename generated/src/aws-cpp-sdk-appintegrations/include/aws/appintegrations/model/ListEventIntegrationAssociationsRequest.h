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
  class ListEventIntegrationAssociationsRequest : public AppIntegrationsServiceRequest
  {
  public:
    AWS_APPINTEGRATIONSSERVICE_API ListEventIntegrationAssociationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListEventIntegrationAssociations"; }

    AWS_APPINTEGRATIONSSERVICE_API Aws::String SerializePayload() const override;

    AWS_APPINTEGRATIONSSERVICE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The name of the event integration. </p>
     */
    inline const Aws::String& GetEventIntegrationName() const{ return m_eventIntegrationName; }
    inline bool EventIntegrationNameHasBeenSet() const { return m_eventIntegrationNameHasBeenSet; }
    inline void SetEventIntegrationName(const Aws::String& value) { m_eventIntegrationNameHasBeenSet = true; m_eventIntegrationName = value; }
    inline void SetEventIntegrationName(Aws::String&& value) { m_eventIntegrationNameHasBeenSet = true; m_eventIntegrationName = std::move(value); }
    inline void SetEventIntegrationName(const char* value) { m_eventIntegrationNameHasBeenSet = true; m_eventIntegrationName.assign(value); }
    inline ListEventIntegrationAssociationsRequest& WithEventIntegrationName(const Aws::String& value) { SetEventIntegrationName(value); return *this;}
    inline ListEventIntegrationAssociationsRequest& WithEventIntegrationName(Aws::String&& value) { SetEventIntegrationName(std::move(value)); return *this;}
    inline ListEventIntegrationAssociationsRequest& WithEventIntegrationName(const char* value) { SetEventIntegrationName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListEventIntegrationAssociationsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListEventIntegrationAssociationsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListEventIntegrationAssociationsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return per page.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListEventIntegrationAssociationsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::String m_eventIntegrationName;
    bool m_eventIntegrationNameHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace AppIntegrationsService
} // namespace Aws
