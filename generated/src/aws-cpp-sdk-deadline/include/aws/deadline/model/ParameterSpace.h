/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/deadline/model/StepParameter.h>
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
namespace deadline
{
namespace Model
{

  /**
   * <p>The details of a search for two or more step parameters.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/ParameterSpace">AWS
   * API Reference</a></p>
   */
  class ParameterSpace
  {
  public:
    AWS_DEADLINE_API ParameterSpace();
    AWS_DEADLINE_API ParameterSpace(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API ParameterSpace& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The combination expression to use in the search.</p>
     */
    inline const Aws::String& GetCombination() const{ return m_combination; }

    /**
     * <p>The combination expression to use in the search.</p>
     */
    inline bool CombinationHasBeenSet() const { return m_combinationHasBeenSet; }

    /**
     * <p>The combination expression to use in the search.</p>
     */
    inline void SetCombination(const Aws::String& value) { m_combinationHasBeenSet = true; m_combination = value; }

    /**
     * <p>The combination expression to use in the search.</p>
     */
    inline void SetCombination(Aws::String&& value) { m_combinationHasBeenSet = true; m_combination = std::move(value); }

    /**
     * <p>The combination expression to use in the search.</p>
     */
    inline void SetCombination(const char* value) { m_combinationHasBeenSet = true; m_combination.assign(value); }

    /**
     * <p>The combination expression to use in the search.</p>
     */
    inline ParameterSpace& WithCombination(const Aws::String& value) { SetCombination(value); return *this;}

    /**
     * <p>The combination expression to use in the search.</p>
     */
    inline ParameterSpace& WithCombination(Aws::String&& value) { SetCombination(std::move(value)); return *this;}

    /**
     * <p>The combination expression to use in the search.</p>
     */
    inline ParameterSpace& WithCombination(const char* value) { SetCombination(value); return *this;}


    /**
     * <p>The parameters to search for.</p>
     */
    inline const Aws::Vector<StepParameter>& GetParameters() const{ return m_parameters; }

    /**
     * <p>The parameters to search for.</p>
     */
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }

    /**
     * <p>The parameters to search for.</p>
     */
    inline void SetParameters(const Aws::Vector<StepParameter>& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>The parameters to search for.</p>
     */
    inline void SetParameters(Aws::Vector<StepParameter>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }

    /**
     * <p>The parameters to search for.</p>
     */
    inline ParameterSpace& WithParameters(const Aws::Vector<StepParameter>& value) { SetParameters(value); return *this;}

    /**
     * <p>The parameters to search for.</p>
     */
    inline ParameterSpace& WithParameters(Aws::Vector<StepParameter>&& value) { SetParameters(std::move(value)); return *this;}

    /**
     * <p>The parameters to search for.</p>
     */
    inline ParameterSpace& AddParameters(const StepParameter& value) { m_parametersHasBeenSet = true; m_parameters.push_back(value); return *this; }

    /**
     * <p>The parameters to search for.</p>
     */
    inline ParameterSpace& AddParameters(StepParameter&& value) { m_parametersHasBeenSet = true; m_parameters.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_combination;
    bool m_combinationHasBeenSet = false;

    Aws::Vector<StepParameter> m_parameters;
    bool m_parametersHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
