/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/model/SortOrder.h>
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
namespace DataZone
{
namespace Model
{

  /**
   * <p>The details of the way to sort search results.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/SearchSort">AWS
   * API Reference</a></p>
   */
  class SearchSort
  {
  public:
    AWS_DATAZONE_API SearchSort();
    AWS_DATAZONE_API SearchSort(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API SearchSort& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The attribute detail of the way to sort search results.</p>
     */
    inline const Aws::String& GetAttribute() const{ return m_attribute; }

    /**
     * <p>The attribute detail of the way to sort search results.</p>
     */
    inline bool AttributeHasBeenSet() const { return m_attributeHasBeenSet; }

    /**
     * <p>The attribute detail of the way to sort search results.</p>
     */
    inline void SetAttribute(const Aws::String& value) { m_attributeHasBeenSet = true; m_attribute = value; }

    /**
     * <p>The attribute detail of the way to sort search results.</p>
     */
    inline void SetAttribute(Aws::String&& value) { m_attributeHasBeenSet = true; m_attribute = std::move(value); }

    /**
     * <p>The attribute detail of the way to sort search results.</p>
     */
    inline void SetAttribute(const char* value) { m_attributeHasBeenSet = true; m_attribute.assign(value); }

    /**
     * <p>The attribute detail of the way to sort search results.</p>
     */
    inline SearchSort& WithAttribute(const Aws::String& value) { SetAttribute(value); return *this;}

    /**
     * <p>The attribute detail of the way to sort search results.</p>
     */
    inline SearchSort& WithAttribute(Aws::String&& value) { SetAttribute(std::move(value)); return *this;}

    /**
     * <p>The attribute detail of the way to sort search results.</p>
     */
    inline SearchSort& WithAttribute(const char* value) { SetAttribute(value); return *this;}


    /**
     * <p>The order detail of the wya to sort search results.</p>
     */
    inline const SortOrder& GetOrder() const{ return m_order; }

    /**
     * <p>The order detail of the wya to sort search results.</p>
     */
    inline bool OrderHasBeenSet() const { return m_orderHasBeenSet; }

    /**
     * <p>The order detail of the wya to sort search results.</p>
     */
    inline void SetOrder(const SortOrder& value) { m_orderHasBeenSet = true; m_order = value; }

    /**
     * <p>The order detail of the wya to sort search results.</p>
     */
    inline void SetOrder(SortOrder&& value) { m_orderHasBeenSet = true; m_order = std::move(value); }

    /**
     * <p>The order detail of the wya to sort search results.</p>
     */
    inline SearchSort& WithOrder(const SortOrder& value) { SetOrder(value); return *this;}

    /**
     * <p>The order detail of the wya to sort search results.</p>
     */
    inline SearchSort& WithOrder(SortOrder&& value) { SetOrder(std::move(value)); return *this;}

  private:

    Aws::String m_attribute;
    bool m_attributeHasBeenSet = false;

    SortOrder m_order;
    bool m_orderHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
