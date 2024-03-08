/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/model/GenerationSortByAttribute.h>
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
   * <p>Specifies the attribute and method by which to sort the generation request
   * information.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/GenerationSortBy">AWS
   * API Reference</a></p>
   */
  class GenerationSortBy
  {
  public:
    AWS_LEXMODELSV2_API GenerationSortBy();
    AWS_LEXMODELSV2_API GenerationSortBy(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API GenerationSortBy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The attribute by which to sort the generation request information. You can
     * sort by the following attributes.</p> <ul> <li> <p>
     * <code>creationStartTime</code> – The time at which the generation request was
     * created.</p> </li> <li> <p> <code>lastUpdatedTime</code> – The time at which the
     * generation request was last updated.</p> </li> </ul>
     */
    inline const GenerationSortByAttribute& GetAttribute() const{ return m_attribute; }

    /**
     * <p>The attribute by which to sort the generation request information. You can
     * sort by the following attributes.</p> <ul> <li> <p>
     * <code>creationStartTime</code> – The time at which the generation request was
     * created.</p> </li> <li> <p> <code>lastUpdatedTime</code> – The time at which the
     * generation request was last updated.</p> </li> </ul>
     */
    inline bool AttributeHasBeenSet() const { return m_attributeHasBeenSet; }

    /**
     * <p>The attribute by which to sort the generation request information. You can
     * sort by the following attributes.</p> <ul> <li> <p>
     * <code>creationStartTime</code> – The time at which the generation request was
     * created.</p> </li> <li> <p> <code>lastUpdatedTime</code> – The time at which the
     * generation request was last updated.</p> </li> </ul>
     */
    inline void SetAttribute(const GenerationSortByAttribute& value) { m_attributeHasBeenSet = true; m_attribute = value; }

    /**
     * <p>The attribute by which to sort the generation request information. You can
     * sort by the following attributes.</p> <ul> <li> <p>
     * <code>creationStartTime</code> – The time at which the generation request was
     * created.</p> </li> <li> <p> <code>lastUpdatedTime</code> – The time at which the
     * generation request was last updated.</p> </li> </ul>
     */
    inline void SetAttribute(GenerationSortByAttribute&& value) { m_attributeHasBeenSet = true; m_attribute = std::move(value); }

    /**
     * <p>The attribute by which to sort the generation request information. You can
     * sort by the following attributes.</p> <ul> <li> <p>
     * <code>creationStartTime</code> – The time at which the generation request was
     * created.</p> </li> <li> <p> <code>lastUpdatedTime</code> – The time at which the
     * generation request was last updated.</p> </li> </ul>
     */
    inline GenerationSortBy& WithAttribute(const GenerationSortByAttribute& value) { SetAttribute(value); return *this;}

    /**
     * <p>The attribute by which to sort the generation request information. You can
     * sort by the following attributes.</p> <ul> <li> <p>
     * <code>creationStartTime</code> – The time at which the generation request was
     * created.</p> </li> <li> <p> <code>lastUpdatedTime</code> – The time at which the
     * generation request was last updated.</p> </li> </ul>
     */
    inline GenerationSortBy& WithAttribute(GenerationSortByAttribute&& value) { SetAttribute(std::move(value)); return *this;}


    /**
     * <p>The order by which to sort the generation request information.</p>
     */
    inline const SortOrder& GetOrder() const{ return m_order; }

    /**
     * <p>The order by which to sort the generation request information.</p>
     */
    inline bool OrderHasBeenSet() const { return m_orderHasBeenSet; }

    /**
     * <p>The order by which to sort the generation request information.</p>
     */
    inline void SetOrder(const SortOrder& value) { m_orderHasBeenSet = true; m_order = value; }

    /**
     * <p>The order by which to sort the generation request information.</p>
     */
    inline void SetOrder(SortOrder&& value) { m_orderHasBeenSet = true; m_order = std::move(value); }

    /**
     * <p>The order by which to sort the generation request information.</p>
     */
    inline GenerationSortBy& WithOrder(const SortOrder& value) { SetOrder(value); return *this;}

    /**
     * <p>The order by which to sort the generation request information.</p>
     */
    inline GenerationSortBy& WithOrder(SortOrder&& value) { SetOrder(std::move(value)); return *this;}

  private:

    GenerationSortByAttribute m_attribute;
    bool m_attributeHasBeenSet = false;

    SortOrder m_order;
    bool m_orderHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
