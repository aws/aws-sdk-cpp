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
#include <aws/marketplace-catalog/MarketplaceCatalog_EXPORTS.h>
#include <aws/marketplace-catalog/MarketplaceCatalogRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace MarketplaceCatalog
{
namespace Model
{

  /**
   */
  class AWS_MARKETPLACECATALOG_API DescribeEntityRequest : public MarketplaceCatalogRequest
  {
  public:
    DescribeEntityRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeEntity"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>Required. The catalog related to the request. Fixed value:
     * <code>AWSMarketplace</code> </p>
     */
    inline const Aws::String& GetCatalog() const{ return m_catalog; }

    /**
     * <p>Required. The catalog related to the request. Fixed value:
     * <code>AWSMarketplace</code> </p>
     */
    inline bool CatalogHasBeenSet() const { return m_catalogHasBeenSet; }

    /**
     * <p>Required. The catalog related to the request. Fixed value:
     * <code>AWSMarketplace</code> </p>
     */
    inline void SetCatalog(const Aws::String& value) { m_catalogHasBeenSet = true; m_catalog = value; }

    /**
     * <p>Required. The catalog related to the request. Fixed value:
     * <code>AWSMarketplace</code> </p>
     */
    inline void SetCatalog(Aws::String&& value) { m_catalogHasBeenSet = true; m_catalog = std::move(value); }

    /**
     * <p>Required. The catalog related to the request. Fixed value:
     * <code>AWSMarketplace</code> </p>
     */
    inline void SetCatalog(const char* value) { m_catalogHasBeenSet = true; m_catalog.assign(value); }

    /**
     * <p>Required. The catalog related to the request. Fixed value:
     * <code>AWSMarketplace</code> </p>
     */
    inline DescribeEntityRequest& WithCatalog(const Aws::String& value) { SetCatalog(value); return *this;}

    /**
     * <p>Required. The catalog related to the request. Fixed value:
     * <code>AWSMarketplace</code> </p>
     */
    inline DescribeEntityRequest& WithCatalog(Aws::String&& value) { SetCatalog(std::move(value)); return *this;}

    /**
     * <p>Required. The catalog related to the request. Fixed value:
     * <code>AWSMarketplace</code> </p>
     */
    inline DescribeEntityRequest& WithCatalog(const char* value) { SetCatalog(value); return *this;}


    /**
     * <p>Required. The unique ID of the entity to describe.</p>
     */
    inline const Aws::String& GetEntityId() const{ return m_entityId; }

    /**
     * <p>Required. The unique ID of the entity to describe.</p>
     */
    inline bool EntityIdHasBeenSet() const { return m_entityIdHasBeenSet; }

    /**
     * <p>Required. The unique ID of the entity to describe.</p>
     */
    inline void SetEntityId(const Aws::String& value) { m_entityIdHasBeenSet = true; m_entityId = value; }

    /**
     * <p>Required. The unique ID of the entity to describe.</p>
     */
    inline void SetEntityId(Aws::String&& value) { m_entityIdHasBeenSet = true; m_entityId = std::move(value); }

    /**
     * <p>Required. The unique ID of the entity to describe.</p>
     */
    inline void SetEntityId(const char* value) { m_entityIdHasBeenSet = true; m_entityId.assign(value); }

    /**
     * <p>Required. The unique ID of the entity to describe.</p>
     */
    inline DescribeEntityRequest& WithEntityId(const Aws::String& value) { SetEntityId(value); return *this;}

    /**
     * <p>Required. The unique ID of the entity to describe.</p>
     */
    inline DescribeEntityRequest& WithEntityId(Aws::String&& value) { SetEntityId(std::move(value)); return *this;}

    /**
     * <p>Required. The unique ID of the entity to describe.</p>
     */
    inline DescribeEntityRequest& WithEntityId(const char* value) { SetEntityId(value); return *this;}

  private:

    Aws::String m_catalog;
    bool m_catalogHasBeenSet;

    Aws::String m_entityId;
    bool m_entityIdHasBeenSet;
  };

} // namespace Model
} // namespace MarketplaceCatalog
} // namespace Aws
