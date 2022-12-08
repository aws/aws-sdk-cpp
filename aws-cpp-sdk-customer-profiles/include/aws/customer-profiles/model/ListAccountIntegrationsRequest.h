/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/customer-profiles/CustomerProfilesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace CustomerProfiles
{
namespace Model
{

  /**
   */
  class ListAccountIntegrationsRequest : public CustomerProfilesRequest
  {
  public:
    AWS_CUSTOMERPROFILES_API ListAccountIntegrationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListAccountIntegrations"; }

    AWS_CUSTOMERPROFILES_API Aws::String SerializePayload() const override;

    AWS_CUSTOMERPROFILES_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The URI of the S3 bucket or any other type of data source.</p>
     */
    inline const Aws::String& GetUri() const{ return m_uri; }

    /**
     * <p>The URI of the S3 bucket or any other type of data source.</p>
     */
    inline bool UriHasBeenSet() const { return m_uriHasBeenSet; }

    /**
     * <p>The URI of the S3 bucket or any other type of data source.</p>
     */
    inline void SetUri(const Aws::String& value) { m_uriHasBeenSet = true; m_uri = value; }

    /**
     * <p>The URI of the S3 bucket or any other type of data source.</p>
     */
    inline void SetUri(Aws::String&& value) { m_uriHasBeenSet = true; m_uri = std::move(value); }

    /**
     * <p>The URI of the S3 bucket or any other type of data source.</p>
     */
    inline void SetUri(const char* value) { m_uriHasBeenSet = true; m_uri.assign(value); }

    /**
     * <p>The URI of the S3 bucket or any other type of data source.</p>
     */
    inline ListAccountIntegrationsRequest& WithUri(const Aws::String& value) { SetUri(value); return *this;}

    /**
     * <p>The URI of the S3 bucket or any other type of data source.</p>
     */
    inline ListAccountIntegrationsRequest& WithUri(Aws::String&& value) { SetUri(std::move(value)); return *this;}

    /**
     * <p>The URI of the S3 bucket or any other type of data source.</p>
     */
    inline ListAccountIntegrationsRequest& WithUri(const char* value) { SetUri(value); return *this;}


    /**
     * <p>The pagination token from the previous ListAccountIntegrations API call.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token from the previous ListAccountIntegrations API call.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The pagination token from the previous ListAccountIntegrations API call.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The pagination token from the previous ListAccountIntegrations API call.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The pagination token from the previous ListAccountIntegrations API call.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The pagination token from the previous ListAccountIntegrations API call.</p>
     */
    inline ListAccountIntegrationsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token from the previous ListAccountIntegrations API call.</p>
     */
    inline ListAccountIntegrationsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token from the previous ListAccountIntegrations API call.</p>
     */
    inline ListAccountIntegrationsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of objects returned per page.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of objects returned per page.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of objects returned per page.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of objects returned per page.</p>
     */
    inline ListAccountIntegrationsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>Boolean to indicate if hidden integration should be returned. Defaults to
     * <code>False</code>.</p>
     */
    inline bool GetIncludeHidden() const{ return m_includeHidden; }

    /**
     * <p>Boolean to indicate if hidden integration should be returned. Defaults to
     * <code>False</code>.</p>
     */
    inline bool IncludeHiddenHasBeenSet() const { return m_includeHiddenHasBeenSet; }

    /**
     * <p>Boolean to indicate if hidden integration should be returned. Defaults to
     * <code>False</code>.</p>
     */
    inline void SetIncludeHidden(bool value) { m_includeHiddenHasBeenSet = true; m_includeHidden = value; }

    /**
     * <p>Boolean to indicate if hidden integration should be returned. Defaults to
     * <code>False</code>.</p>
     */
    inline ListAccountIntegrationsRequest& WithIncludeHidden(bool value) { SetIncludeHidden(value); return *this;}

  private:

    Aws::String m_uri;
    bool m_uriHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    bool m_includeHidden;
    bool m_includeHiddenHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
