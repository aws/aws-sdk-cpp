/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/discovery/ApplicationDiscoveryService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/discovery/model/OrderString.h>
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
namespace ApplicationDiscoveryService
{
namespace Model
{

  /**
   * <p>A field and direction for ordered output.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/discovery-2015-11-01/OrderByElement">AWS
   * API Reference</a></p>
   */
  class OrderByElement
  {
  public:
    AWS_APPLICATIONDISCOVERYSERVICE_API OrderByElement();
    AWS_APPLICATIONDISCOVERYSERVICE_API OrderByElement(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONDISCOVERYSERVICE_API OrderByElement& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONDISCOVERYSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The field on which to order.</p>
     */
    inline const Aws::String& GetFieldName() const{ return m_fieldName; }

    /**
     * <p>The field on which to order.</p>
     */
    inline bool FieldNameHasBeenSet() const { return m_fieldNameHasBeenSet; }

    /**
     * <p>The field on which to order.</p>
     */
    inline void SetFieldName(const Aws::String& value) { m_fieldNameHasBeenSet = true; m_fieldName = value; }

    /**
     * <p>The field on which to order.</p>
     */
    inline void SetFieldName(Aws::String&& value) { m_fieldNameHasBeenSet = true; m_fieldName = std::move(value); }

    /**
     * <p>The field on which to order.</p>
     */
    inline void SetFieldName(const char* value) { m_fieldNameHasBeenSet = true; m_fieldName.assign(value); }

    /**
     * <p>The field on which to order.</p>
     */
    inline OrderByElement& WithFieldName(const Aws::String& value) { SetFieldName(value); return *this;}

    /**
     * <p>The field on which to order.</p>
     */
    inline OrderByElement& WithFieldName(Aws::String&& value) { SetFieldName(std::move(value)); return *this;}

    /**
     * <p>The field on which to order.</p>
     */
    inline OrderByElement& WithFieldName(const char* value) { SetFieldName(value); return *this;}


    /**
     * <p>Ordering direction.</p>
     */
    inline const OrderString& GetSortOrder() const{ return m_sortOrder; }

    /**
     * <p>Ordering direction.</p>
     */
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }

    /**
     * <p>Ordering direction.</p>
     */
    inline void SetSortOrder(const OrderString& value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }

    /**
     * <p>Ordering direction.</p>
     */
    inline void SetSortOrder(OrderString&& value) { m_sortOrderHasBeenSet = true; m_sortOrder = std::move(value); }

    /**
     * <p>Ordering direction.</p>
     */
    inline OrderByElement& WithSortOrder(const OrderString& value) { SetSortOrder(value); return *this;}

    /**
     * <p>Ordering direction.</p>
     */
    inline OrderByElement& WithSortOrder(OrderString&& value) { SetSortOrder(std::move(value)); return *this;}

  private:

    Aws::String m_fieldName;
    bool m_fieldNameHasBeenSet = false;

    OrderString m_sortOrder;
    bool m_sortOrderHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
