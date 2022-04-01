﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/LightsailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Lightsail
{
namespace Model
{

  /**
   */
  class AWS_LIGHTSAIL_API GetRelationalDatabaseParametersRequest : public LightsailRequest
  {
  public:
    GetRelationalDatabaseParametersRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetRelationalDatabaseParameters"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of your database for which to get parameters.</p>
     */
    inline const Aws::String& GetRelationalDatabaseName() const{ return m_relationalDatabaseName; }

    /**
     * <p>The name of your database for which to get parameters.</p>
     */
    inline bool RelationalDatabaseNameHasBeenSet() const { return m_relationalDatabaseNameHasBeenSet; }

    /**
     * <p>The name of your database for which to get parameters.</p>
     */
    inline void SetRelationalDatabaseName(const Aws::String& value) { m_relationalDatabaseNameHasBeenSet = true; m_relationalDatabaseName = value; }

    /**
     * <p>The name of your database for which to get parameters.</p>
     */
    inline void SetRelationalDatabaseName(Aws::String&& value) { m_relationalDatabaseNameHasBeenSet = true; m_relationalDatabaseName = std::move(value); }

    /**
     * <p>The name of your database for which to get parameters.</p>
     */
    inline void SetRelationalDatabaseName(const char* value) { m_relationalDatabaseNameHasBeenSet = true; m_relationalDatabaseName.assign(value); }

    /**
     * <p>The name of your database for which to get parameters.</p>
     */
    inline GetRelationalDatabaseParametersRequest& WithRelationalDatabaseName(const Aws::String& value) { SetRelationalDatabaseName(value); return *this;}

    /**
     * <p>The name of your database for which to get parameters.</p>
     */
    inline GetRelationalDatabaseParametersRequest& WithRelationalDatabaseName(Aws::String&& value) { SetRelationalDatabaseName(std::move(value)); return *this;}

    /**
     * <p>The name of your database for which to get parameters.</p>
     */
    inline GetRelationalDatabaseParametersRequest& WithRelationalDatabaseName(const char* value) { SetRelationalDatabaseName(value); return *this;}


    /**
     * <p>The token to advance to the next page of results from your request.</p> <p>To
     * get a page token, perform an initial
     * <code>GetRelationalDatabaseParameters</code> request. If your results are
     * paginated, the response will return a next page token that you can specify as
     * the page token in a subsequent request.</p>
     */
    inline const Aws::String& GetPageToken() const{ return m_pageToken; }

    /**
     * <p>The token to advance to the next page of results from your request.</p> <p>To
     * get a page token, perform an initial
     * <code>GetRelationalDatabaseParameters</code> request. If your results are
     * paginated, the response will return a next page token that you can specify as
     * the page token in a subsequent request.</p>
     */
    inline bool PageTokenHasBeenSet() const { return m_pageTokenHasBeenSet; }

    /**
     * <p>The token to advance to the next page of results from your request.</p> <p>To
     * get a page token, perform an initial
     * <code>GetRelationalDatabaseParameters</code> request. If your results are
     * paginated, the response will return a next page token that you can specify as
     * the page token in a subsequent request.</p>
     */
    inline void SetPageToken(const Aws::String& value) { m_pageTokenHasBeenSet = true; m_pageToken = value; }

    /**
     * <p>The token to advance to the next page of results from your request.</p> <p>To
     * get a page token, perform an initial
     * <code>GetRelationalDatabaseParameters</code> request. If your results are
     * paginated, the response will return a next page token that you can specify as
     * the page token in a subsequent request.</p>
     */
    inline void SetPageToken(Aws::String&& value) { m_pageTokenHasBeenSet = true; m_pageToken = std::move(value); }

    /**
     * <p>The token to advance to the next page of results from your request.</p> <p>To
     * get a page token, perform an initial
     * <code>GetRelationalDatabaseParameters</code> request. If your results are
     * paginated, the response will return a next page token that you can specify as
     * the page token in a subsequent request.</p>
     */
    inline void SetPageToken(const char* value) { m_pageTokenHasBeenSet = true; m_pageToken.assign(value); }

    /**
     * <p>The token to advance to the next page of results from your request.</p> <p>To
     * get a page token, perform an initial
     * <code>GetRelationalDatabaseParameters</code> request. If your results are
     * paginated, the response will return a next page token that you can specify as
     * the page token in a subsequent request.</p>
     */
    inline GetRelationalDatabaseParametersRequest& WithPageToken(const Aws::String& value) { SetPageToken(value); return *this;}

    /**
     * <p>The token to advance to the next page of results from your request.</p> <p>To
     * get a page token, perform an initial
     * <code>GetRelationalDatabaseParameters</code> request. If your results are
     * paginated, the response will return a next page token that you can specify as
     * the page token in a subsequent request.</p>
     */
    inline GetRelationalDatabaseParametersRequest& WithPageToken(Aws::String&& value) { SetPageToken(std::move(value)); return *this;}

    /**
     * <p>The token to advance to the next page of results from your request.</p> <p>To
     * get a page token, perform an initial
     * <code>GetRelationalDatabaseParameters</code> request. If your results are
     * paginated, the response will return a next page token that you can specify as
     * the page token in a subsequent request.</p>
     */
    inline GetRelationalDatabaseParametersRequest& WithPageToken(const char* value) { SetPageToken(value); return *this;}

  private:

    Aws::String m_relationalDatabaseName;
    bool m_relationalDatabaseNameHasBeenSet;

    Aws::String m_pageToken;
    bool m_pageTokenHasBeenSet;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
