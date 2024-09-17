/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codepipeline/model/Condition.h>
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
namespace CodePipeline
{
namespace Model
{

  /**
   * <p>The conditions for making checks for entry to a stage. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/BeforeEntryConditions">AWS
   * API Reference</a></p>
   */
  class BeforeEntryConditions
  {
  public:
    AWS_CODEPIPELINE_API BeforeEntryConditions();
    AWS_CODEPIPELINE_API BeforeEntryConditions(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API BeforeEntryConditions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The conditions that are configured as entry conditions.</p>
     */
    inline const Aws::Vector<Condition>& GetConditions() const{ return m_conditions; }
    inline bool ConditionsHasBeenSet() const { return m_conditionsHasBeenSet; }
    inline void SetConditions(const Aws::Vector<Condition>& value) { m_conditionsHasBeenSet = true; m_conditions = value; }
    inline void SetConditions(Aws::Vector<Condition>&& value) { m_conditionsHasBeenSet = true; m_conditions = std::move(value); }
    inline BeforeEntryConditions& WithConditions(const Aws::Vector<Condition>& value) { SetConditions(value); return *this;}
    inline BeforeEntryConditions& WithConditions(Aws::Vector<Condition>&& value) { SetConditions(std::move(value)); return *this;}
    inline BeforeEntryConditions& AddConditions(const Condition& value) { m_conditionsHasBeenSet = true; m_conditions.push_back(value); return *this; }
    inline BeforeEntryConditions& AddConditions(Condition&& value) { m_conditionsHasBeenSet = true; m_conditions.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Condition> m_conditions;
    bool m_conditionsHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
