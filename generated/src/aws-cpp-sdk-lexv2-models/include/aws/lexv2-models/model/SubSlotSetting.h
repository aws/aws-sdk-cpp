/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/lexv2-models/model/Specifications.h>
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
   * <p>Specifications for the constituent sub slots and the expression for the
   * composite slot.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/SubSlotSetting">AWS
   * API Reference</a></p>
   */
  class SubSlotSetting
  {
  public:
    AWS_LEXMODELSV2_API SubSlotSetting();
    AWS_LEXMODELSV2_API SubSlotSetting(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API SubSlotSetting& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The expression text for defining the constituent sub slots in the composite
     * slot using logical AND and OR operators.</p>
     */
    inline const Aws::String& GetExpression() const{ return m_expression; }

    /**
     * <p>The expression text for defining the constituent sub slots in the composite
     * slot using logical AND and OR operators.</p>
     */
    inline bool ExpressionHasBeenSet() const { return m_expressionHasBeenSet; }

    /**
     * <p>The expression text for defining the constituent sub slots in the composite
     * slot using logical AND and OR operators.</p>
     */
    inline void SetExpression(const Aws::String& value) { m_expressionHasBeenSet = true; m_expression = value; }

    /**
     * <p>The expression text for defining the constituent sub slots in the composite
     * slot using logical AND and OR operators.</p>
     */
    inline void SetExpression(Aws::String&& value) { m_expressionHasBeenSet = true; m_expression = std::move(value); }

    /**
     * <p>The expression text for defining the constituent sub slots in the composite
     * slot using logical AND and OR operators.</p>
     */
    inline void SetExpression(const char* value) { m_expressionHasBeenSet = true; m_expression.assign(value); }

    /**
     * <p>The expression text for defining the constituent sub slots in the composite
     * slot using logical AND and OR operators.</p>
     */
    inline SubSlotSetting& WithExpression(const Aws::String& value) { SetExpression(value); return *this;}

    /**
     * <p>The expression text for defining the constituent sub slots in the composite
     * slot using logical AND and OR operators.</p>
     */
    inline SubSlotSetting& WithExpression(Aws::String&& value) { SetExpression(std::move(value)); return *this;}

    /**
     * <p>The expression text for defining the constituent sub slots in the composite
     * slot using logical AND and OR operators.</p>
     */
    inline SubSlotSetting& WithExpression(const char* value) { SetExpression(value); return *this;}


    /**
     * <p>Specifications for the constituent sub slots of a composite slot.</p>
     */
    inline const Aws::Map<Aws::String, Specifications>& GetSlotSpecifications() const{ return m_slotSpecifications; }

    /**
     * <p>Specifications for the constituent sub slots of a composite slot.</p>
     */
    inline bool SlotSpecificationsHasBeenSet() const { return m_slotSpecificationsHasBeenSet; }

    /**
     * <p>Specifications for the constituent sub slots of a composite slot.</p>
     */
    inline void SetSlotSpecifications(const Aws::Map<Aws::String, Specifications>& value) { m_slotSpecificationsHasBeenSet = true; m_slotSpecifications = value; }

    /**
     * <p>Specifications for the constituent sub slots of a composite slot.</p>
     */
    inline void SetSlotSpecifications(Aws::Map<Aws::String, Specifications>&& value) { m_slotSpecificationsHasBeenSet = true; m_slotSpecifications = std::move(value); }

    /**
     * <p>Specifications for the constituent sub slots of a composite slot.</p>
     */
    inline SubSlotSetting& WithSlotSpecifications(const Aws::Map<Aws::String, Specifications>& value) { SetSlotSpecifications(value); return *this;}

    /**
     * <p>Specifications for the constituent sub slots of a composite slot.</p>
     */
    inline SubSlotSetting& WithSlotSpecifications(Aws::Map<Aws::String, Specifications>&& value) { SetSlotSpecifications(std::move(value)); return *this;}

    /**
     * <p>Specifications for the constituent sub slots of a composite slot.</p>
     */
    inline SubSlotSetting& AddSlotSpecifications(const Aws::String& key, const Specifications& value) { m_slotSpecificationsHasBeenSet = true; m_slotSpecifications.emplace(key, value); return *this; }

    /**
     * <p>Specifications for the constituent sub slots of a composite slot.</p>
     */
    inline SubSlotSetting& AddSlotSpecifications(Aws::String&& key, const Specifications& value) { m_slotSpecificationsHasBeenSet = true; m_slotSpecifications.emplace(std::move(key), value); return *this; }

    /**
     * <p>Specifications for the constituent sub slots of a composite slot.</p>
     */
    inline SubSlotSetting& AddSlotSpecifications(const Aws::String& key, Specifications&& value) { m_slotSpecificationsHasBeenSet = true; m_slotSpecifications.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Specifications for the constituent sub slots of a composite slot.</p>
     */
    inline SubSlotSetting& AddSlotSpecifications(Aws::String&& key, Specifications&& value) { m_slotSpecificationsHasBeenSet = true; m_slotSpecifications.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Specifications for the constituent sub slots of a composite slot.</p>
     */
    inline SubSlotSetting& AddSlotSpecifications(const char* key, Specifications&& value) { m_slotSpecificationsHasBeenSet = true; m_slotSpecifications.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Specifications for the constituent sub slots of a composite slot.</p>
     */
    inline SubSlotSetting& AddSlotSpecifications(const char* key, const Specifications& value) { m_slotSpecificationsHasBeenSet = true; m_slotSpecifications.emplace(key, value); return *this; }

  private:

    Aws::String m_expression;
    bool m_expressionHasBeenSet = false;

    Aws::Map<Aws::String, Specifications> m_slotSpecifications;
    bool m_slotSpecificationsHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
