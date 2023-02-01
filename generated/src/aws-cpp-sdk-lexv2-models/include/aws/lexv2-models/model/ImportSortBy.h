/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/model/ImportSortAttribute.h>
#include <aws/lexv2-models/model/SortOrder.h>
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
namespace LexModelsV2
{
namespace Model
{

  /**
   * <p>Provides information for sorting a list of imports.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/ImportSortBy">AWS
   * API Reference</a></p>
   */
  class ImportSortBy
  {
  public:
    AWS_LEXMODELSV2_API ImportSortBy();
    AWS_LEXMODELSV2_API ImportSortBy(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API ImportSortBy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The export field to use for sorting.</p>
     */
    inline const ImportSortAttribute& GetAttribute() const{ return m_attribute; }

    /**
     * <p>The export field to use for sorting.</p>
     */
    inline bool AttributeHasBeenSet() const { return m_attributeHasBeenSet; }

    /**
     * <p>The export field to use for sorting.</p>
     */
    inline void SetAttribute(const ImportSortAttribute& value) { m_attributeHasBeenSet = true; m_attribute = value; }

    /**
     * <p>The export field to use for sorting.</p>
     */
    inline void SetAttribute(ImportSortAttribute&& value) { m_attributeHasBeenSet = true; m_attribute = std::move(value); }

    /**
     * <p>The export field to use for sorting.</p>
     */
    inline ImportSortBy& WithAttribute(const ImportSortAttribute& value) { SetAttribute(value); return *this;}

    /**
     * <p>The export field to use for sorting.</p>
     */
    inline ImportSortBy& WithAttribute(ImportSortAttribute&& value) { SetAttribute(std::move(value)); return *this;}


    /**
     * <p>The order to sort the list.</p>
     */
    inline const SortOrder& GetOrder() const{ return m_order; }

    /**
     * <p>The order to sort the list.</p>
     */
    inline bool OrderHasBeenSet() const { return m_orderHasBeenSet; }

    /**
     * <p>The order to sort the list.</p>
     */
    inline void SetOrder(const SortOrder& value) { m_orderHasBeenSet = true; m_order = value; }

    /**
     * <p>The order to sort the list.</p>
     */
    inline void SetOrder(SortOrder&& value) { m_orderHasBeenSet = true; m_order = std::move(value); }

    /**
     * <p>The order to sort the list.</p>
     */
    inline ImportSortBy& WithOrder(const SortOrder& value) { SetOrder(value); return *this;}

    /**
     * <p>The order to sort the list.</p>
     */
    inline ImportSortBy& WithOrder(SortOrder&& value) { SetOrder(std::move(value)); return *this;}

  private:

    ImportSortAttribute m_attribute;
    bool m_attributeHasBeenSet = false;

    SortOrder m_order;
    bool m_orderHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
