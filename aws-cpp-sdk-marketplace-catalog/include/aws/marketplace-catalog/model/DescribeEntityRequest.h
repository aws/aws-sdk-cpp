/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class DescribeEntityRequest : public MarketplaceCatalogRequest
  {
  public:
    AWS_MARKETPLACECATALOG_API DescribeEntityRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeEntity"; }

    AWS_MARKETPLACECATALOG_API Aws::String SerializePayload() const override;

    AWS_MARKETPLACECATALOG_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


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
    bool m_catalogHasBeenSet = false;

    Aws::String m_entityId;
    bool m_entityIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MarketplaceCatalog
} // namespace Aws
