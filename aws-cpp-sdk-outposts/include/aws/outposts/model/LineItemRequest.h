/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Outposts
{
namespace Model
{

  /**
   * <p>Information about a line item request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/outposts-2019-12-03/LineItemRequest">AWS
   * API Reference</a></p>
   */
  class LineItemRequest
  {
  public:
    AWS_OUTPOSTS_API LineItemRequest();
    AWS_OUTPOSTS_API LineItemRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_OUTPOSTS_API LineItemRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OUTPOSTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the catalog item.</p>
     */
    inline const Aws::String& GetCatalogItemId() const{ return m_catalogItemId; }

    /**
     * <p>The ID of the catalog item.</p>
     */
    inline bool CatalogItemIdHasBeenSet() const { return m_catalogItemIdHasBeenSet; }

    /**
     * <p>The ID of the catalog item.</p>
     */
    inline void SetCatalogItemId(const Aws::String& value) { m_catalogItemIdHasBeenSet = true; m_catalogItemId = value; }

    /**
     * <p>The ID of the catalog item.</p>
     */
    inline void SetCatalogItemId(Aws::String&& value) { m_catalogItemIdHasBeenSet = true; m_catalogItemId = std::move(value); }

    /**
     * <p>The ID of the catalog item.</p>
     */
    inline void SetCatalogItemId(const char* value) { m_catalogItemIdHasBeenSet = true; m_catalogItemId.assign(value); }

    /**
     * <p>The ID of the catalog item.</p>
     */
    inline LineItemRequest& WithCatalogItemId(const Aws::String& value) { SetCatalogItemId(value); return *this;}

    /**
     * <p>The ID of the catalog item.</p>
     */
    inline LineItemRequest& WithCatalogItemId(Aws::String&& value) { SetCatalogItemId(std::move(value)); return *this;}

    /**
     * <p>The ID of the catalog item.</p>
     */
    inline LineItemRequest& WithCatalogItemId(const char* value) { SetCatalogItemId(value); return *this;}


    /**
     * <p>The quantity of a line item request.</p>
     */
    inline int GetQuantity() const{ return m_quantity; }

    /**
     * <p>The quantity of a line item request.</p>
     */
    inline bool QuantityHasBeenSet() const { return m_quantityHasBeenSet; }

    /**
     * <p>The quantity of a line item request.</p>
     */
    inline void SetQuantity(int value) { m_quantityHasBeenSet = true; m_quantity = value; }

    /**
     * <p>The quantity of a line item request.</p>
     */
    inline LineItemRequest& WithQuantity(int value) { SetQuantity(value); return *this;}

  private:

    Aws::String m_catalogItemId;
    bool m_catalogItemIdHasBeenSet = false;

    int m_quantity;
    bool m_quantityHasBeenSet = false;
  };

} // namespace Model
} // namespace Outposts
} // namespace Aws
