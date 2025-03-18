/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/model/DQTransformOutput.h>
#include <aws/glue/model/DQResultsPublishingOptions.h>
#include <aws/glue/model/DQStopJobOnFailureOptions.h>
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
   * <p>Specifies your data quality evaluation criteria.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/EvaluateDataQuality">AWS
   * API Reference</a></p>
   */
  class EvaluateDataQuality
  {
  public:
    AWS_GLUE_API EvaluateDataQuality() = default;
    AWS_GLUE_API EvaluateDataQuality(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API EvaluateDataQuality& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the data quality evaluation.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    EvaluateDataQuality& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The inputs of your data quality evaluation.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInputs() const { return m_inputs; }
    inline bool InputsHasBeenSet() const { return m_inputsHasBeenSet; }
    template<typename InputsT = Aws::Vector<Aws::String>>
    void SetInputs(InputsT&& value) { m_inputsHasBeenSet = true; m_inputs = std::forward<InputsT>(value); }
    template<typename InputsT = Aws::Vector<Aws::String>>
    EvaluateDataQuality& WithInputs(InputsT&& value) { SetInputs(std::forward<InputsT>(value)); return *this;}
    template<typename InputsT = Aws::String>
    EvaluateDataQuality& AddInputs(InputsT&& value) { m_inputsHasBeenSet = true; m_inputs.emplace_back(std::forward<InputsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ruleset for your data quality evaluation.</p>
     */
    inline const Aws::String& GetRuleset() const { return m_ruleset; }
    inline bool RulesetHasBeenSet() const { return m_rulesetHasBeenSet; }
    template<typename RulesetT = Aws::String>
    void SetRuleset(RulesetT&& value) { m_rulesetHasBeenSet = true; m_ruleset = std::forward<RulesetT>(value); }
    template<typename RulesetT = Aws::String>
    EvaluateDataQuality& WithRuleset(RulesetT&& value) { SetRuleset(std::forward<RulesetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The output of your data quality evaluation.</p>
     */
    inline DQTransformOutput GetOutput() const { return m_output; }
    inline bool OutputHasBeenSet() const { return m_outputHasBeenSet; }
    inline void SetOutput(DQTransformOutput value) { m_outputHasBeenSet = true; m_output = value; }
    inline EvaluateDataQuality& WithOutput(DQTransformOutput value) { SetOutput(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Options to configure how your results are published.</p>
     */
    inline const DQResultsPublishingOptions& GetPublishingOptions() const { return m_publishingOptions; }
    inline bool PublishingOptionsHasBeenSet() const { return m_publishingOptionsHasBeenSet; }
    template<typename PublishingOptionsT = DQResultsPublishingOptions>
    void SetPublishingOptions(PublishingOptionsT&& value) { m_publishingOptionsHasBeenSet = true; m_publishingOptions = std::forward<PublishingOptionsT>(value); }
    template<typename PublishingOptionsT = DQResultsPublishingOptions>
    EvaluateDataQuality& WithPublishingOptions(PublishingOptionsT&& value) { SetPublishingOptions(std::forward<PublishingOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Options to configure how your job will stop if your data quality evaluation
     * fails.</p>
     */
    inline const DQStopJobOnFailureOptions& GetStopJobOnFailureOptions() const { return m_stopJobOnFailureOptions; }
    inline bool StopJobOnFailureOptionsHasBeenSet() const { return m_stopJobOnFailureOptionsHasBeenSet; }
    template<typename StopJobOnFailureOptionsT = DQStopJobOnFailureOptions>
    void SetStopJobOnFailureOptions(StopJobOnFailureOptionsT&& value) { m_stopJobOnFailureOptionsHasBeenSet = true; m_stopJobOnFailureOptions = std::forward<StopJobOnFailureOptionsT>(value); }
    template<typename StopJobOnFailureOptionsT = DQStopJobOnFailureOptions>
    EvaluateDataQuality& WithStopJobOnFailureOptions(StopJobOnFailureOptionsT&& value) { SetStopJobOnFailureOptions(std::forward<StopJobOnFailureOptionsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_inputs;
    bool m_inputsHasBeenSet = false;

    Aws::String m_ruleset;
    bool m_rulesetHasBeenSet = false;

    DQTransformOutput m_output{DQTransformOutput::NOT_SET};
    bool m_outputHasBeenSet = false;

    DQResultsPublishingOptions m_publishingOptions;
    bool m_publishingOptionsHasBeenSet = false;

    DQStopJobOnFailureOptions m_stopJobOnFailureOptions;
    bool m_stopJobOnFailureOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
