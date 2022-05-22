/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/outposts/model/LineItemStatus.h>
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
   * <p>Information about a line item.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/outposts-2019-12-03/LineItem">AWS
   * API Reference</a></p>
   */
  class AWS_OUTPOSTS_API LineItem
  {
  public:
    LineItem();
    LineItem(Aws::Utils::Json::JsonView jsonValue);
    LineItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The ID of the catalog item. </p>
     */
    inline const Aws::String& GetCatalogItemId() const{ return m_catalogItemId; }

    /**
     * <p> The ID of the catalog item. </p>
     */
    inline bool CatalogItemIdHasBeenSet() const { return m_catalogItemIdHasBeenSet; }

    /**
     * <p> The ID of the catalog item. </p>
     */
    inline void SetCatalogItemId(const Aws::String& value) { m_catalogItemIdHasBeenSet = true; m_catalogItemId = value; }

    /**
     * <p> The ID of the catalog item. </p>
     */
    inline void SetCatalogItemId(Aws::String&& value) { m_catalogItemIdHasBeenSet = true; m_catalogItemId = std::move(value); }

    /**
     * <p> The ID of the catalog item. </p>
     */
    inline void SetCatalogItemId(const char* value) { m_catalogItemIdHasBeenSet = true; m_catalogItemId.assign(value); }

    /**
     * <p> The ID of the catalog item. </p>
     */
    inline LineItem& WithCatalogItemId(const Aws::String& value) { SetCatalogItemId(value); return *this;}

    /**
     * <p> The ID of the catalog item. </p>
     */
    inline LineItem& WithCatalogItemId(Aws::String&& value) { SetCatalogItemId(std::move(value)); return *this;}

    /**
     * <p> The ID of the catalog item. </p>
     */
    inline LineItem& WithCatalogItemId(const char* value) { SetCatalogItemId(value); return *this;}


    /**
     * <p>The ID of the line item.</p>
     */
    inline const Aws::String& GetLineItemId() const{ return m_lineItemId; }

    /**
     * <p>The ID of the line item.</p>
     */
    inline bool LineItemIdHasBeenSet() const { return m_lineItemIdHasBeenSet; }

    /**
     * <p>The ID of the line item.</p>
     */
    inline void SetLineItemId(const Aws::String& value) { m_lineItemIdHasBeenSet = true; m_lineItemId = value; }

    /**
     * <p>The ID of the line item.</p>
     */
    inline void SetLineItemId(Aws::String&& value) { m_lineItemIdHasBeenSet = true; m_lineItemId = std::move(value); }

    /**
     * <p>The ID of the line item.</p>
     */
    inline void SetLineItemId(const char* value) { m_lineItemIdHasBeenSet = true; m_lineItemId.assign(value); }

    /**
     * <p>The ID of the line item.</p>
     */
    inline LineItem& WithLineItemId(const Aws::String& value) { SetLineItemId(value); return *this;}

    /**
     * <p>The ID of the line item.</p>
     */
    inline LineItem& WithLineItemId(Aws::String&& value) { SetLineItemId(std::move(value)); return *this;}

    /**
     * <p>The ID of the line item.</p>
     */
    inline LineItem& WithLineItemId(const char* value) { SetLineItemId(value); return *this;}


    /**
     * <p>The quantity of the line item.</p>
     */
    inline int GetQuantity() const{ return m_quantity; }

    /**
     * <p>The quantity of the line item.</p>
     */
    inline bool QuantityHasBeenSet() const { return m_quantityHasBeenSet; }

    /**
     * <p>The quantity of the line item.</p>
     */
    inline void SetQuantity(int value) { m_quantityHasBeenSet = true; m_quantity = value; }

    /**
     * <p>The quantity of the line item.</p>
     */
    inline LineItem& WithQuantity(int value) { SetQuantity(value); return *this;}


    /**
     * <p>The status of the line item.</p>
     */
    inline const LineItemStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the line item.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the line item.</p>
     */
    inline void SetStatus(const LineItemStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the line item.</p>
     */
    inline void SetStatus(LineItemStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the line item.</p>
     */
    inline LineItem& WithStatus(const LineItemStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the line item.</p>
     */
    inline LineItem& WithStatus(LineItemStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_catalogItemId;
    bool m_catalogItemIdHasBeenSet;

    Aws::String m_lineItemId;
    bool m_lineItemIdHasBeenSet;

    int m_quantity;
    bool m_quantityHasBeenSet;

    LineItemStatus m_status;
    bool m_statusHasBeenSet;
  };

} // namespace Model
} // namespace Outposts
} // namespace Aws
