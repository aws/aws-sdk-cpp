/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
    AWS_DEADLINE_API ParameterSpace() = default;
    AWS_DEADLINE_API ParameterSpace(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API ParameterSpace& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The parameters to search for.</p>
     */
    inline const Aws::Vector<StepParameter>& GetParameters() const { return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    template<typename ParametersT = Aws::Vector<StepParameter>>
    void SetParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters = std::forward<ParametersT>(value); }
    template<typename ParametersT = Aws::Vector<StepParameter>>
    ParameterSpace& WithParameters(ParametersT&& value) { SetParameters(std::forward<ParametersT>(value)); return *this;}
    template<typename ParametersT = StepParameter>
    ParameterSpace& AddParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters.emplace_back(std::forward<ParametersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The combination expression to use in the search.</p>
     */
    inline const Aws::String& GetCombination() const { return m_combination; }
    inline bool CombinationHasBeenSet() const { return m_combinationHasBeenSet; }
    template<typename CombinationT = Aws::String>
    void SetCombination(CombinationT&& value) { m_combinationHasBeenSet = true; m_combination = std::forward<CombinationT>(value); }
    template<typename CombinationT = Aws::String>
    ParameterSpace& WithCombination(CombinationT&& value) { SetCombination(std::forward<CombinationT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<StepParameter> m_parameters;
    bool m_parametersHasBeenSet = false;

    Aws::String m_combination;
    bool m_combinationHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
