/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/model/AggregatedUtterancesSortAttribute.h>
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
   * <p>Specifies attributes for sorting a list of utterances.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/AggregatedUtterancesSortBy">AWS
   * API Reference</a></p>
   */
  class AggregatedUtterancesSortBy
  {
  public:
    AWS_LEXMODELSV2_API AggregatedUtterancesSortBy();
    AWS_LEXMODELSV2_API AggregatedUtterancesSortBy(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API AggregatedUtterancesSortBy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The utterance attribute to sort by.</p>
     */
    inline const AggregatedUtterancesSortAttribute& GetAttribute() const{ return m_attribute; }

    /**
     * <p>The utterance attribute to sort by.</p>
     */
    inline bool AttributeHasBeenSet() const { return m_attributeHasBeenSet; }

    /**
     * <p>The utterance attribute to sort by.</p>
     */
    inline void SetAttribute(const AggregatedUtterancesSortAttribute& value) { m_attributeHasBeenSet = true; m_attribute = value; }

    /**
     * <p>The utterance attribute to sort by.</p>
     */
    inline void SetAttribute(AggregatedUtterancesSortAttribute&& value) { m_attributeHasBeenSet = true; m_attribute = std::move(value); }

    /**
     * <p>The utterance attribute to sort by.</p>
     */
    inline AggregatedUtterancesSortBy& WithAttribute(const AggregatedUtterancesSortAttribute& value) { SetAttribute(value); return *this;}

    /**
     * <p>The utterance attribute to sort by.</p>
     */
    inline AggregatedUtterancesSortBy& WithAttribute(AggregatedUtterancesSortAttribute&& value) { SetAttribute(std::move(value)); return *this;}


    /**
     * <p>Specifies whether to sort the aggregated utterances in ascending or
     * descending order.</p>
     */
    inline const SortOrder& GetOrder() const{ return m_order; }

    /**
     * <p>Specifies whether to sort the aggregated utterances in ascending or
     * descending order.</p>
     */
    inline bool OrderHasBeenSet() const { return m_orderHasBeenSet; }

    /**
     * <p>Specifies whether to sort the aggregated utterances in ascending or
     * descending order.</p>
     */
    inline void SetOrder(const SortOrder& value) { m_orderHasBeenSet = true; m_order = value; }

    /**
     * <p>Specifies whether to sort the aggregated utterances in ascending or
     * descending order.</p>
     */
    inline void SetOrder(SortOrder&& value) { m_orderHasBeenSet = true; m_order = std::move(value); }

    /**
     * <p>Specifies whether to sort the aggregated utterances in ascending or
     * descending order.</p>
     */
    inline AggregatedUtterancesSortBy& WithOrder(const SortOrder& value) { SetOrder(value); return *this;}

    /**
     * <p>Specifies whether to sort the aggregated utterances in ascending or
     * descending order.</p>
     */
    inline AggregatedUtterancesSortBy& WithOrder(SortOrder&& value) { SetOrder(std::move(value)); return *this;}

  private:

    AggregatedUtterancesSortAttribute m_attribute;
    bool m_attributeHasBeenSet = false;

    SortOrder m_order;
    bool m_orderHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
