/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/servicecatalog/ServiceCatalogRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicecatalog/model/AccessLevelFilter.h>
#include <utility>

namespace Aws
{
namespace ServiceCatalog
{
namespace Model
{

  /**
   */
  class AWS_SERVICECATALOG_API ListProvisionedProductPlansRequest : public ServiceCatalogRequest
  {
  public:
    ListProvisionedProductPlansRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListProvisionedProductPlans"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The language code.</p> <ul> <li> <p> <code>en</code> - English (default)</p>
     * </li> <li> <p> <code>jp</code> - Japanese</p> </li> <li> <p> <code>zh</code> -
     * Chinese</p> </li> </ul>
     */
    inline const Aws::String& GetAcceptLanguage() const{ return m_acceptLanguage; }

    /**
     * <p>The language code.</p> <ul> <li> <p> <code>en</code> - English (default)</p>
     * </li> <li> <p> <code>jp</code> - Japanese</p> </li> <li> <p> <code>zh</code> -
     * Chinese</p> </li> </ul>
     */
    inline bool AcceptLanguageHasBeenSet() const { return m_acceptLanguageHasBeenSet; }

    /**
     * <p>The language code.</p> <ul> <li> <p> <code>en</code> - English (default)</p>
     * </li> <li> <p> <code>jp</code> - Japanese</p> </li> <li> <p> <code>zh</code> -
     * Chinese</p> </li> </ul>
     */
    inline void SetAcceptLanguage(const Aws::String& value) { m_acceptLanguageHasBeenSet = true; m_acceptLanguage = value; }

    /**
     * <p>The language code.</p> <ul> <li> <p> <code>en</code> - English (default)</p>
     * </li> <li> <p> <code>jp</code> - Japanese</p> </li> <li> <p> <code>zh</code> -
     * Chinese</p> </li> </ul>
     */
    inline void SetAcceptLanguage(Aws::String&& value) { m_acceptLanguageHasBeenSet = true; m_acceptLanguage = std::move(value); }

    /**
     * <p>The language code.</p> <ul> <li> <p> <code>en</code> - English (default)</p>
     * </li> <li> <p> <code>jp</code> - Japanese</p> </li> <li> <p> <code>zh</code> -
     * Chinese</p> </li> </ul>
     */
    inline void SetAcceptLanguage(const char* value) { m_acceptLanguageHasBeenSet = true; m_acceptLanguage.assign(value); }

    /**
     * <p>The language code.</p> <ul> <li> <p> <code>en</code> - English (default)</p>
     * </li> <li> <p> <code>jp</code> - Japanese</p> </li> <li> <p> <code>zh</code> -
     * Chinese</p> </li> </ul>
     */
    inline ListProvisionedProductPlansRequest& WithAcceptLanguage(const Aws::String& value) { SetAcceptLanguage(value); return *this;}

    /**
     * <p>The language code.</p> <ul> <li> <p> <code>en</code> - English (default)</p>
     * </li> <li> <p> <code>jp</code> - Japanese</p> </li> <li> <p> <code>zh</code> -
     * Chinese</p> </li> </ul>
     */
    inline ListProvisionedProductPlansRequest& WithAcceptLanguage(Aws::String&& value) { SetAcceptLanguage(std::move(value)); return *this;}

    /**
     * <p>The language code.</p> <ul> <li> <p> <code>en</code> - English (default)</p>
     * </li> <li> <p> <code>jp</code> - Japanese</p> </li> <li> <p> <code>zh</code> -
     * Chinese</p> </li> </ul>
     */
    inline ListProvisionedProductPlansRequest& WithAcceptLanguage(const char* value) { SetAcceptLanguage(value); return *this;}


    /**
     * <p>The product identifier.</p>
     */
    inline const Aws::String& GetProvisionProductId() const{ return m_provisionProductId; }

    /**
     * <p>The product identifier.</p>
     */
    inline bool ProvisionProductIdHasBeenSet() const { return m_provisionProductIdHasBeenSet; }

    /**
     * <p>The product identifier.</p>
     */
    inline void SetProvisionProductId(const Aws::String& value) { m_provisionProductIdHasBeenSet = true; m_provisionProductId = value; }

    /**
     * <p>The product identifier.</p>
     */
    inline void SetProvisionProductId(Aws::String&& value) { m_provisionProductIdHasBeenSet = true; m_provisionProductId = std::move(value); }

    /**
     * <p>The product identifier.</p>
     */
    inline void SetProvisionProductId(const char* value) { m_provisionProductIdHasBeenSet = true; m_provisionProductId.assign(value); }

    /**
     * <p>The product identifier.</p>
     */
    inline ListProvisionedProductPlansRequest& WithProvisionProductId(const Aws::String& value) { SetProvisionProductId(value); return *this;}

    /**
     * <p>The product identifier.</p>
     */
    inline ListProvisionedProductPlansRequest& WithProvisionProductId(Aws::String&& value) { SetProvisionProductId(std::move(value)); return *this;}

    /**
     * <p>The product identifier.</p>
     */
    inline ListProvisionedProductPlansRequest& WithProvisionProductId(const char* value) { SetProvisionProductId(value); return *this;}


    /**
     * <p>The maximum number of items to return with this call.</p>
     */
    inline int GetPageSize() const{ return m_pageSize; }

    /**
     * <p>The maximum number of items to return with this call.</p>
     */
    inline bool PageSizeHasBeenSet() const { return m_pageSizeHasBeenSet; }

    /**
     * <p>The maximum number of items to return with this call.</p>
     */
    inline void SetPageSize(int value) { m_pageSizeHasBeenSet = true; m_pageSize = value; }

    /**
     * <p>The maximum number of items to return with this call.</p>
     */
    inline ListProvisionedProductPlansRequest& WithPageSize(int value) { SetPageSize(value); return *this;}


    /**
     * <p>The page token for the next set of results. To retrieve the first set of
     * results, use null.</p>
     */
    inline const Aws::String& GetPageToken() const{ return m_pageToken; }

    /**
     * <p>The page token for the next set of results. To retrieve the first set of
     * results, use null.</p>
     */
    inline bool PageTokenHasBeenSet() const { return m_pageTokenHasBeenSet; }

    /**
     * <p>The page token for the next set of results. To retrieve the first set of
     * results, use null.</p>
     */
    inline void SetPageToken(const Aws::String& value) { m_pageTokenHasBeenSet = true; m_pageToken = value; }

    /**
     * <p>The page token for the next set of results. To retrieve the first set of
     * results, use null.</p>
     */
    inline void SetPageToken(Aws::String&& value) { m_pageTokenHasBeenSet = true; m_pageToken = std::move(value); }

    /**
     * <p>The page token for the next set of results. To retrieve the first set of
     * results, use null.</p>
     */
    inline void SetPageToken(const char* value) { m_pageTokenHasBeenSet = true; m_pageToken.assign(value); }

    /**
     * <p>The page token for the next set of results. To retrieve the first set of
     * results, use null.</p>
     */
    inline ListProvisionedProductPlansRequest& WithPageToken(const Aws::String& value) { SetPageToken(value); return *this;}

    /**
     * <p>The page token for the next set of results. To retrieve the first set of
     * results, use null.</p>
     */
    inline ListProvisionedProductPlansRequest& WithPageToken(Aws::String&& value) { SetPageToken(std::move(value)); return *this;}

    /**
     * <p>The page token for the next set of results. To retrieve the first set of
     * results, use null.</p>
     */
    inline ListProvisionedProductPlansRequest& WithPageToken(const char* value) { SetPageToken(value); return *this;}


    /**
     * <p>The access level to use to obtain results. The default is
     * <code>User</code>.</p>
     */
    inline const AccessLevelFilter& GetAccessLevelFilter() const{ return m_accessLevelFilter; }

    /**
     * <p>The access level to use to obtain results. The default is
     * <code>User</code>.</p>
     */
    inline bool AccessLevelFilterHasBeenSet() const { return m_accessLevelFilterHasBeenSet; }

    /**
     * <p>The access level to use to obtain results. The default is
     * <code>User</code>.</p>
     */
    inline void SetAccessLevelFilter(const AccessLevelFilter& value) { m_accessLevelFilterHasBeenSet = true; m_accessLevelFilter = value; }

    /**
     * <p>The access level to use to obtain results. The default is
     * <code>User</code>.</p>
     */
    inline void SetAccessLevelFilter(AccessLevelFilter&& value) { m_accessLevelFilterHasBeenSet = true; m_accessLevelFilter = std::move(value); }

    /**
     * <p>The access level to use to obtain results. The default is
     * <code>User</code>.</p>
     */
    inline ListProvisionedProductPlansRequest& WithAccessLevelFilter(const AccessLevelFilter& value) { SetAccessLevelFilter(value); return *this;}

    /**
     * <p>The access level to use to obtain results. The default is
     * <code>User</code>.</p>
     */
    inline ListProvisionedProductPlansRequest& WithAccessLevelFilter(AccessLevelFilter&& value) { SetAccessLevelFilter(std::move(value)); return *this;}

  private:

    Aws::String m_acceptLanguage;
    bool m_acceptLanguageHasBeenSet;

    Aws::String m_provisionProductId;
    bool m_provisionProductIdHasBeenSet;

    int m_pageSize;
    bool m_pageSizeHasBeenSet;

    Aws::String m_pageToken;
    bool m_pageTokenHasBeenSet;

    AccessLevelFilter m_accessLevelFilter;
    bool m_accessLevelFilterHasBeenSet;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
