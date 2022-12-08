/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendations_EXPORTS.h>
#include <aws/migrationhubstrategy/model/Condition.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace MigrationHubStrategyRecommendations
{
namespace Model
{

  /**
   * <p>Defines the criteria of assessment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhubstrategy-2020-02-19/AssessmentTarget">AWS
   * API Reference</a></p>
   */
  class AssessmentTarget
  {
  public:
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API AssessmentTarget();
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API AssessmentTarget(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API AssessmentTarget& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Condition of an assessment.</p>
     */
    inline const Condition& GetCondition() const{ return m_condition; }

    /**
     * <p>Condition of an assessment.</p>
     */
    inline bool ConditionHasBeenSet() const { return m_conditionHasBeenSet; }

    /**
     * <p>Condition of an assessment.</p>
     */
    inline void SetCondition(const Condition& value) { m_conditionHasBeenSet = true; m_condition = value; }

    /**
     * <p>Condition of an assessment.</p>
     */
    inline void SetCondition(Condition&& value) { m_conditionHasBeenSet = true; m_condition = std::move(value); }

    /**
     * <p>Condition of an assessment.</p>
     */
    inline AssessmentTarget& WithCondition(const Condition& value) { SetCondition(value); return *this;}

    /**
     * <p>Condition of an assessment.</p>
     */
    inline AssessmentTarget& WithCondition(Condition&& value) { SetCondition(std::move(value)); return *this;}


    /**
     * <p>Name of an assessment.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Name of an assessment.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>Name of an assessment.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Name of an assessment.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Name of an assessment.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Name of an assessment.</p>
     */
    inline AssessmentTarget& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Name of an assessment.</p>
     */
    inline AssessmentTarget& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Name of an assessment.</p>
     */
    inline AssessmentTarget& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Values of an assessment.</p>
     */
    inline const Aws::Vector<Aws::String>& GetValues() const{ return m_values; }

    /**
     * <p>Values of an assessment.</p>
     */
    inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }

    /**
     * <p>Values of an assessment.</p>
     */
    inline void SetValues(const Aws::Vector<Aws::String>& value) { m_valuesHasBeenSet = true; m_values = value; }

    /**
     * <p>Values of an assessment.</p>
     */
    inline void SetValues(Aws::Vector<Aws::String>&& value) { m_valuesHasBeenSet = true; m_values = std::move(value); }

    /**
     * <p>Values of an assessment.</p>
     */
    inline AssessmentTarget& WithValues(const Aws::Vector<Aws::String>& value) { SetValues(value); return *this;}

    /**
     * <p>Values of an assessment.</p>
     */
    inline AssessmentTarget& WithValues(Aws::Vector<Aws::String>&& value) { SetValues(std::move(value)); return *this;}

    /**
     * <p>Values of an assessment.</p>
     */
    inline AssessmentTarget& AddValues(const Aws::String& value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

    /**
     * <p>Values of an assessment.</p>
     */
    inline AssessmentTarget& AddValues(Aws::String&& value) { m_valuesHasBeenSet = true; m_values.push_back(std::move(value)); return *this; }

    /**
     * <p>Values of an assessment.</p>
     */
    inline AssessmentTarget& AddValues(const char* value) { m_valuesHasBeenSet = true; m_values.push_back(value); return *this; }

  private:

    Condition m_condition;
    bool m_conditionHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_values;
    bool m_valuesHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
