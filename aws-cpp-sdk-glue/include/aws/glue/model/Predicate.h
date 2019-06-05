/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_GLUE_API Predicate
  {
  public:
    Predicate();
    Predicate(Aws::Utils::Json::JsonView jsonValue);
    Predicate& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An optional field if only one condition is listed. If multiple conditions are
     * listed, then this field is required.</p>
     */
    inline const Logical& GetLogical() const{ return m_logical; }

    /**
     * <p>An optional field if only one condition is listed. If multiple conditions are
     * listed, then this field is required.</p>
     */
    inline bool LogicalHasBeenSet() const { return m_logicalHasBeenSet; }

    /**
     * <p>An optional field if only one condition is listed. If multiple conditions are
     * listed, then this field is required.</p>
     */
    inline void SetLogical(const Logical& value) { m_logicalHasBeenSet = true; m_logical = value; }

    /**
     * <p>An optional field if only one condition is listed. If multiple conditions are
     * listed, then this field is required.</p>
     */
    inline void SetLogical(Logical&& value) { m_logicalHasBeenSet = true; m_logical = std::move(value); }

    /**
     * <p>An optional field if only one condition is listed. If multiple conditions are
     * listed, then this field is required.</p>
     */
    inline Predicate& WithLogical(const Logical& value) { SetLogical(value); return *this;}

    /**
     * <p>An optional field if only one condition is listed. If multiple conditions are
     * listed, then this field is required.</p>
     */
    inline Predicate& WithLogical(Logical&& value) { SetLogical(std::move(value)); return *this;}


    /**
     * <p>A list of the conditions that determine when the trigger will fire.</p>
     */
    inline const Aws::Vector<Condition>& GetConditions() const{ return m_conditions; }

    /**
     * <p>A list of the conditions that determine when the trigger will fire.</p>
     */
    inline bool ConditionsHasBeenSet() const { return m_conditionsHasBeenSet; }

    /**
     * <p>A list of the conditions that determine when the trigger will fire.</p>
     */
    inline void SetConditions(const Aws::Vector<Condition>& value) { m_conditionsHasBeenSet = true; m_conditions = value; }

    /**
     * <p>A list of the conditions that determine when the trigger will fire.</p>
     */
    inline void SetConditions(Aws::Vector<Condition>&& value) { m_conditionsHasBeenSet = true; m_conditions = std::move(value); }

    /**
     * <p>A list of the conditions that determine when the trigger will fire.</p>
     */
    inline Predicate& WithConditions(const Aws::Vector<Condition>& value) { SetConditions(value); return *this;}

    /**
     * <p>A list of the conditions that determine when the trigger will fire.</p>
     */
    inline Predicate& WithConditions(Aws::Vector<Condition>&& value) { SetConditions(std::move(value)); return *this;}

    /**
     * <p>A list of the conditions that determine when the trigger will fire.</p>
     */
    inline Predicate& AddConditions(const Condition& value) { m_conditionsHasBeenSet = true; m_conditions.push_back(value); return *this; }

    /**
     * <p>A list of the conditions that determine when the trigger will fire.</p>
     */
    inline Predicate& AddConditions(Condition&& value) { m_conditionsHasBeenSet = true; m_conditions.push_back(std::move(value)); return *this; }

  private:

    Logical m_logical;
    bool m_logicalHasBeenSet;

    Aws::Vector<Condition> m_conditions;
    bool m_conditionsHasBeenSet;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
