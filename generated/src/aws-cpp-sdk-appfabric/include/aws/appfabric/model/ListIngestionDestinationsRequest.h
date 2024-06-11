﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appfabric/AppFabric_EXPORTS.h>
#include <aws/appfabric/AppFabricRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace AppFabric
{
namespace Model
{

  /**
   */
  class ListIngestionDestinationsRequest : public AppFabricRequest
  {
  public:
    AWS_APPFABRIC_API ListIngestionDestinationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListIngestionDestinations"; }

    AWS_APPFABRIC_API Aws::String SerializePayload() const override;

    AWS_APPFABRIC_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) or Universal Unique Identifier (UUID) of the
     * app bundle to use for the request.</p>
     */
    inline const Aws::String& GetAppBundleIdentifier() const{ return m_appBundleIdentifier; }
    inline bool AppBundleIdentifierHasBeenSet() const { return m_appBundleIdentifierHasBeenSet; }
    inline void SetAppBundleIdentifier(const Aws::String& value) { m_appBundleIdentifierHasBeenSet = true; m_appBundleIdentifier = value; }
    inline void SetAppBundleIdentifier(Aws::String&& value) { m_appBundleIdentifierHasBeenSet = true; m_appBundleIdentifier = std::move(value); }
    inline void SetAppBundleIdentifier(const char* value) { m_appBundleIdentifierHasBeenSet = true; m_appBundleIdentifier.assign(value); }
    inline ListIngestionDestinationsRequest& WithAppBundleIdentifier(const Aws::String& value) { SetAppBundleIdentifier(value); return *this;}
    inline ListIngestionDestinationsRequest& WithAppBundleIdentifier(Aws::String&& value) { SetAppBundleIdentifier(std::move(value)); return *this;}
    inline ListIngestionDestinationsRequest& WithAppBundleIdentifier(const char* value) { SetAppBundleIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) or Universal Unique Identifier (UUID) of the
     * ingestion to use for the request.</p>
     */
    inline const Aws::String& GetIngestionIdentifier() const{ return m_ingestionIdentifier; }
    inline bool IngestionIdentifierHasBeenSet() const { return m_ingestionIdentifierHasBeenSet; }
    inline void SetIngestionIdentifier(const Aws::String& value) { m_ingestionIdentifierHasBeenSet = true; m_ingestionIdentifier = value; }
    inline void SetIngestionIdentifier(Aws::String&& value) { m_ingestionIdentifierHasBeenSet = true; m_ingestionIdentifier = std::move(value); }
    inline void SetIngestionIdentifier(const char* value) { m_ingestionIdentifierHasBeenSet = true; m_ingestionIdentifier.assign(value); }
    inline ListIngestionDestinationsRequest& WithIngestionIdentifier(const Aws::String& value) { SetIngestionIdentifier(value); return *this;}
    inline ListIngestionDestinationsRequest& WithIngestionIdentifier(Aws::String&& value) { SetIngestionIdentifier(std::move(value)); return *this;}
    inline ListIngestionDestinationsRequest& WithIngestionIdentifier(const char* value) { SetIngestionIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results that are returned per call. You can use
     * <code>nextToken</code> to obtain further pages of results.</p> <p>This is only
     * an upper limit. The actual number of results returned per call might be fewer
     * than the specified maximum.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListIngestionDestinationsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If <code>nextToken</code> is returned, there are more results available. The
     * value of <code>nextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page. Keep all
     * other arguments unchanged. Each pagination token expires after 24 hours. Using
     * an expired pagination token will return an <i>HTTP 400 InvalidToken
     * error</i>.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListIngestionDestinationsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListIngestionDestinationsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListIngestionDestinationsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}
  private:

    Aws::String m_appBundleIdentifier;
    bool m_appBundleIdentifierHasBeenSet = false;

    Aws::String m_ingestionIdentifier;
    bool m_ingestionIdentifierHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace AppFabric
} // namespace Aws
