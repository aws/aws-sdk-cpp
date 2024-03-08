/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/model/BotVersionReplicaSortAttribute.h>
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
   * <p>The sort category for the version replicated bots.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/BotVersionReplicaSortBy">AWS
   * API Reference</a></p>
   */
  class BotVersionReplicaSortBy
  {
  public:
    AWS_LEXMODELSV2_API BotVersionReplicaSortBy();
    AWS_LEXMODELSV2_API BotVersionReplicaSortBy(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API BotVersionReplicaSortBy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The attribute of the sort category for the version replicated bots.</p>
     */
    inline const BotVersionReplicaSortAttribute& GetAttribute() const{ return m_attribute; }

    /**
     * <p>The attribute of the sort category for the version replicated bots.</p>
     */
    inline bool AttributeHasBeenSet() const { return m_attributeHasBeenSet; }

    /**
     * <p>The attribute of the sort category for the version replicated bots.</p>
     */
    inline void SetAttribute(const BotVersionReplicaSortAttribute& value) { m_attributeHasBeenSet = true; m_attribute = value; }

    /**
     * <p>The attribute of the sort category for the version replicated bots.</p>
     */
    inline void SetAttribute(BotVersionReplicaSortAttribute&& value) { m_attributeHasBeenSet = true; m_attribute = std::move(value); }

    /**
     * <p>The attribute of the sort category for the version replicated bots.</p>
     */
    inline BotVersionReplicaSortBy& WithAttribute(const BotVersionReplicaSortAttribute& value) { SetAttribute(value); return *this;}

    /**
     * <p>The attribute of the sort category for the version replicated bots.</p>
     */
    inline BotVersionReplicaSortBy& WithAttribute(BotVersionReplicaSortAttribute&& value) { SetAttribute(std::move(value)); return *this;}


    /**
     * <p>The order of the sort category for the version replicated bots.</p>
     */
    inline const SortOrder& GetOrder() const{ return m_order; }

    /**
     * <p>The order of the sort category for the version replicated bots.</p>
     */
    inline bool OrderHasBeenSet() const { return m_orderHasBeenSet; }

    /**
     * <p>The order of the sort category for the version replicated bots.</p>
     */
    inline void SetOrder(const SortOrder& value) { m_orderHasBeenSet = true; m_order = value; }

    /**
     * <p>The order of the sort category for the version replicated bots.</p>
     */
    inline void SetOrder(SortOrder&& value) { m_orderHasBeenSet = true; m_order = std::move(value); }

    /**
     * <p>The order of the sort category for the version replicated bots.</p>
     */
    inline BotVersionReplicaSortBy& WithOrder(const SortOrder& value) { SetOrder(value); return *this;}

    /**
     * <p>The order of the sort category for the version replicated bots.</p>
     */
    inline BotVersionReplicaSortBy& WithOrder(SortOrder&& value) { SetOrder(std::move(value)); return *this;}

  private:

    BotVersionReplicaSortAttribute m_attribute;
    bool m_attributeHasBeenSet = false;

    SortOrder m_order;
    bool m_orderHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
