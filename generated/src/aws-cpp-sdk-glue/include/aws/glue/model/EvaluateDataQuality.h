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
    AWS_GLUE_API EvaluateDataQuality();
    AWS_GLUE_API EvaluateDataQuality(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API EvaluateDataQuality& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the data quality evaluation.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline EvaluateDataQuality& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline EvaluateDataQuality& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline EvaluateDataQuality& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The inputs of your data quality evaluation.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInputs() const{ return m_inputs; }
    inline bool InputsHasBeenSet() const { return m_inputsHasBeenSet; }
    inline void SetInputs(const Aws::Vector<Aws::String>& value) { m_inputsHasBeenSet = true; m_inputs = value; }
    inline void SetInputs(Aws::Vector<Aws::String>&& value) { m_inputsHasBeenSet = true; m_inputs = std::move(value); }
    inline EvaluateDataQuality& WithInputs(const Aws::Vector<Aws::String>& value) { SetInputs(value); return *this;}
    inline EvaluateDataQuality& WithInputs(Aws::Vector<Aws::String>&& value) { SetInputs(std::move(value)); return *this;}
    inline EvaluateDataQuality& AddInputs(const Aws::String& value) { m_inputsHasBeenSet = true; m_inputs.push_back(value); return *this; }
    inline EvaluateDataQuality& AddInputs(Aws::String&& value) { m_inputsHasBeenSet = true; m_inputs.push_back(std::move(value)); return *this; }
    inline EvaluateDataQuality& AddInputs(const char* value) { m_inputsHasBeenSet = true; m_inputs.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ruleset for your data quality evaluation.</p>
     */
    inline const Aws::String& GetRuleset() const{ return m_ruleset; }
    inline bool RulesetHasBeenSet() const { return m_rulesetHasBeenSet; }
    inline void SetRuleset(const Aws::String& value) { m_rulesetHasBeenSet = true; m_ruleset = value; }
    inline void SetRuleset(Aws::String&& value) { m_rulesetHasBeenSet = true; m_ruleset = std::move(value); }
    inline void SetRuleset(const char* value) { m_rulesetHasBeenSet = true; m_ruleset.assign(value); }
    inline EvaluateDataQuality& WithRuleset(const Aws::String& value) { SetRuleset(value); return *this;}
    inline EvaluateDataQuality& WithRuleset(Aws::String&& value) { SetRuleset(std::move(value)); return *this;}
    inline EvaluateDataQuality& WithRuleset(const char* value) { SetRuleset(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The output of your data quality evaluation.</p>
     */
    inline const DQTransformOutput& GetOutput() const{ return m_output; }
    inline bool OutputHasBeenSet() const { return m_outputHasBeenSet; }
    inline void SetOutput(const DQTransformOutput& value) { m_outputHasBeenSet = true; m_output = value; }
    inline void SetOutput(DQTransformOutput&& value) { m_outputHasBeenSet = true; m_output = std::move(value); }
    inline EvaluateDataQuality& WithOutput(const DQTransformOutput& value) { SetOutput(value); return *this;}
    inline EvaluateDataQuality& WithOutput(DQTransformOutput&& value) { SetOutput(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Options to configure how your results are published.</p>
     */
    inline const DQResultsPublishingOptions& GetPublishingOptions() const{ return m_publishingOptions; }
    inline bool PublishingOptionsHasBeenSet() const { return m_publishingOptionsHasBeenSet; }
    inline void SetPublishingOptions(const DQResultsPublishingOptions& value) { m_publishingOptionsHasBeenSet = true; m_publishingOptions = value; }
    inline void SetPublishingOptions(DQResultsPublishingOptions&& value) { m_publishingOptionsHasBeenSet = true; m_publishingOptions = std::move(value); }
    inline EvaluateDataQuality& WithPublishingOptions(const DQResultsPublishingOptions& value) { SetPublishingOptions(value); return *this;}
    inline EvaluateDataQuality& WithPublishingOptions(DQResultsPublishingOptions&& value) { SetPublishingOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Options to configure how your job will stop if your data quality evaluation
     * fails.</p>
     */
    inline const DQStopJobOnFailureOptions& GetStopJobOnFailureOptions() const{ return m_stopJobOnFailureOptions; }
    inline bool StopJobOnFailureOptionsHasBeenSet() const { return m_stopJobOnFailureOptionsHasBeenSet; }
    inline void SetStopJobOnFailureOptions(const DQStopJobOnFailureOptions& value) { m_stopJobOnFailureOptionsHasBeenSet = true; m_stopJobOnFailureOptions = value; }
    inline void SetStopJobOnFailureOptions(DQStopJobOnFailureOptions&& value) { m_stopJobOnFailureOptionsHasBeenSet = true; m_stopJobOnFailureOptions = std::move(value); }
    inline EvaluateDataQuality& WithStopJobOnFailureOptions(const DQStopJobOnFailureOptions& value) { SetStopJobOnFailureOptions(value); return *this;}
    inline EvaluateDataQuality& WithStopJobOnFailureOptions(DQStopJobOnFailureOptions&& value) { SetStopJobOnFailureOptions(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_inputs;
    bool m_inputsHasBeenSet = false;

    Aws::String m_ruleset;
    bool m_rulesetHasBeenSet = false;

    DQTransformOutput m_output;
    bool m_outputHasBeenSet = false;

    DQResultsPublishingOptions m_publishingOptions;
    bool m_publishingOptionsHasBeenSet = false;

    DQStopJobOnFailureOptions m_stopJobOnFailureOptions;
    bool m_stopJobOnFailureOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
