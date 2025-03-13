/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/Logical.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/model/Condition.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>Defines the predicate of the trigger, which determines when it
   * fires.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/Predicate">AWS API
   * Reference</a></p>
   */
  class Predicate
  {
  public:
    AWS_GLUE_API Predicate() = default;
    AWS_GLUE_API Predicate(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Predicate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An optional field if only one condition is listed. If multiple conditions are
     * listed, then this field is required.</p>
     */
    inline Logical GetLogical() const { return m_logical; }
    inline bool LogicalHasBeenSet() const { return m_logicalHasBeenSet; }
    inline void SetLogical(Logical value) { m_logicalHasBeenSet = true; m_logical = value; }
    inline Predicate& WithLogical(Logical value) { SetLogical(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the conditions that determine when the trigger will fire.</p>
     */
    inline const Aws::Vector<Condition>& GetConditions() const { return m_conditions; }
    inline bool ConditionsHasBeenSet() const { return m_conditionsHasBeenSet; }
    template<typename ConditionsT = Aws::Vector<Condition>>
    void SetConditions(ConditionsT&& value) { m_conditionsHasBeenSet = true; m_conditions = std::forward<ConditionsT>(value); }
    template<typename ConditionsT = Aws::Vector<Condition>>
    Predicate& WithConditions(ConditionsT&& value) { SetConditions(std::forward<ConditionsT>(value)); return *this;}
    template<typename ConditionsT = Condition>
    Predicate& AddConditions(ConditionsT&& value) { m_conditionsHasBeenSet = true; m_conditions.emplace_back(std::forward<ConditionsT>(value)); return *this; }
    ///@}
  private:

    Logical m_logical{Logical::NOT_SET};
    bool m_logicalHasBeenSet = false;

    Aws::Vector<Condition> m_conditions;
    bool m_conditionsHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
