/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/glue/model/DQResultsPublishingOptions.h>
#include <aws/glue/model/DQStopJobOnFailureOptions.h>
#include <aws/glue/model/AdditionalOptionKeys.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/EvaluateDataQualityMultiFrame">AWS
   * API Reference</a></p>
   */
  class EvaluateDataQualityMultiFrame
  {
  public:
    AWS_GLUE_API EvaluateDataQualityMultiFrame();
    AWS_GLUE_API EvaluateDataQualityMultiFrame(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API EvaluateDataQualityMultiFrame& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline EvaluateDataQualityMultiFrame& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline EvaluateDataQualityMultiFrame& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline EvaluateDataQualityMultiFrame& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The inputs of your data quality evaluation. The first input in this list is
     * the primary data source.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInputs() const{ return m_inputs; }
    inline bool InputsHasBeenSet() const { return m_inputsHasBeenSet; }
    inline void SetInputs(const Aws::Vector<Aws::String>& value) { m_inputsHasBeenSet = true; m_inputs = value; }
    inline void SetInputs(Aws::Vector<Aws::String>&& value) { m_inputsHasBeenSet = true; m_inputs = std::move(value); }
    inline EvaluateDataQualityMultiFrame& WithInputs(const Aws::Vector<Aws::String>& value) { SetInputs(value); return *this;}
    inline EvaluateDataQualityMultiFrame& WithInputs(Aws::Vector<Aws::String>&& value) { SetInputs(std::move(value)); return *this;}
    inline EvaluateDataQualityMultiFrame& AddInputs(const Aws::String& value) { m_inputsHasBeenSet = true; m_inputs.push_back(value); return *this; }
    inline EvaluateDataQualityMultiFrame& AddInputs(Aws::String&& value) { m_inputsHasBeenSet = true; m_inputs.push_back(std::move(value)); return *this; }
    inline EvaluateDataQualityMultiFrame& AddInputs(const char* value) { m_inputsHasBeenSet = true; m_inputs.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The aliases of all data sources except primary.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAdditionalDataSources() const{ return m_additionalDataSources; }
    inline bool AdditionalDataSourcesHasBeenSet() const { return m_additionalDataSourcesHasBeenSet; }
    inline void SetAdditionalDataSources(const Aws::Map<Aws::String, Aws::String>& value) { m_additionalDataSourcesHasBeenSet = true; m_additionalDataSources = value; }
    inline void SetAdditionalDataSources(Aws::Map<Aws::String, Aws::String>&& value) { m_additionalDataSourcesHasBeenSet = true; m_additionalDataSources = std::move(value); }
    inline EvaluateDataQualityMultiFrame& WithAdditionalDataSources(const Aws::Map<Aws::String, Aws::String>& value) { SetAdditionalDataSources(value); return *this;}
    inline EvaluateDataQualityMultiFrame& WithAdditionalDataSources(Aws::Map<Aws::String, Aws::String>&& value) { SetAdditionalDataSources(std::move(value)); return *this;}
    inline EvaluateDataQualityMultiFrame& AddAdditionalDataSources(const Aws::String& key, const Aws::String& value) { m_additionalDataSourcesHasBeenSet = true; m_additionalDataSources.emplace(key, value); return *this; }
    inline EvaluateDataQualityMultiFrame& AddAdditionalDataSources(Aws::String&& key, const Aws::String& value) { m_additionalDataSourcesHasBeenSet = true; m_additionalDataSources.emplace(std::move(key), value); return *this; }
    inline EvaluateDataQualityMultiFrame& AddAdditionalDataSources(const Aws::String& key, Aws::String&& value) { m_additionalDataSourcesHasBeenSet = true; m_additionalDataSources.emplace(key, std::move(value)); return *this; }
    inline EvaluateDataQualityMultiFrame& AddAdditionalDataSources(Aws::String&& key, Aws::String&& value) { m_additionalDataSourcesHasBeenSet = true; m_additionalDataSources.emplace(std::move(key), std::move(value)); return *this; }
    inline EvaluateDataQualityMultiFrame& AddAdditionalDataSources(const char* key, Aws::String&& value) { m_additionalDataSourcesHasBeenSet = true; m_additionalDataSources.emplace(key, std::move(value)); return *this; }
    inline EvaluateDataQualityMultiFrame& AddAdditionalDataSources(Aws::String&& key, const char* value) { m_additionalDataSourcesHasBeenSet = true; m_additionalDataSources.emplace(std::move(key), value); return *this; }
    inline EvaluateDataQualityMultiFrame& AddAdditionalDataSources(const char* key, const char* value) { m_additionalDataSourcesHasBeenSet = true; m_additionalDataSources.emplace(key, value); return *this; }
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
    inline EvaluateDataQualityMultiFrame& WithRuleset(const Aws::String& value) { SetRuleset(value); return *this;}
    inline EvaluateDataQualityMultiFrame& WithRuleset(Aws::String&& value) { SetRuleset(std::move(value)); return *this;}
    inline EvaluateDataQualityMultiFrame& WithRuleset(const char* value) { SetRuleset(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Options to configure how your results are published.</p>
     */
    inline const DQResultsPublishingOptions& GetPublishingOptions() const{ return m_publishingOptions; }
    inline bool PublishingOptionsHasBeenSet() const { return m_publishingOptionsHasBeenSet; }
    inline void SetPublishingOptions(const DQResultsPublishingOptions& value) { m_publishingOptionsHasBeenSet = true; m_publishingOptions = value; }
    inline void SetPublishingOptions(DQResultsPublishingOptions&& value) { m_publishingOptionsHasBeenSet = true; m_publishingOptions = std::move(value); }
    inline EvaluateDataQualityMultiFrame& WithPublishingOptions(const DQResultsPublishingOptions& value) { SetPublishingOptions(value); return *this;}
    inline EvaluateDataQualityMultiFrame& WithPublishingOptions(DQResultsPublishingOptions&& value) { SetPublishingOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Options to configure runtime behavior of the transform.</p>
     */
    inline const Aws::Map<AdditionalOptionKeys, Aws::String>& GetAdditionalOptions() const{ return m_additionalOptions; }
    inline bool AdditionalOptionsHasBeenSet() const { return m_additionalOptionsHasBeenSet; }
    inline void SetAdditionalOptions(const Aws::Map<AdditionalOptionKeys, Aws::String>& value) { m_additionalOptionsHasBeenSet = true; m_additionalOptions = value; }
    inline void SetAdditionalOptions(Aws::Map<AdditionalOptionKeys, Aws::String>&& value) { m_additionalOptionsHasBeenSet = true; m_additionalOptions = std::move(value); }
    inline EvaluateDataQualityMultiFrame& WithAdditionalOptions(const Aws::Map<AdditionalOptionKeys, Aws::String>& value) { SetAdditionalOptions(value); return *this;}
    inline EvaluateDataQualityMultiFrame& WithAdditionalOptions(Aws::Map<AdditionalOptionKeys, Aws::String>&& value) { SetAdditionalOptions(std::move(value)); return *this;}
    inline EvaluateDataQualityMultiFrame& AddAdditionalOptions(const AdditionalOptionKeys& key, const Aws::String& value) { m_additionalOptionsHasBeenSet = true; m_additionalOptions.emplace(key, value); return *this; }
    inline EvaluateDataQualityMultiFrame& AddAdditionalOptions(AdditionalOptionKeys&& key, const Aws::String& value) { m_additionalOptionsHasBeenSet = true; m_additionalOptions.emplace(std::move(key), value); return *this; }
    inline EvaluateDataQualityMultiFrame& AddAdditionalOptions(const AdditionalOptionKeys& key, Aws::String&& value) { m_additionalOptionsHasBeenSet = true; m_additionalOptions.emplace(key, std::move(value)); return *this; }
    inline EvaluateDataQualityMultiFrame& AddAdditionalOptions(AdditionalOptionKeys&& key, Aws::String&& value) { m_additionalOptionsHasBeenSet = true; m_additionalOptions.emplace(std::move(key), std::move(value)); return *this; }
    inline EvaluateDataQualityMultiFrame& AddAdditionalOptions(AdditionalOptionKeys&& key, const char* value) { m_additionalOptionsHasBeenSet = true; m_additionalOptions.emplace(std::move(key), value); return *this; }
    inline EvaluateDataQualityMultiFrame& AddAdditionalOptions(const AdditionalOptionKeys& key, const char* value) { m_additionalOptionsHasBeenSet = true; m_additionalOptions.emplace(key, value); return *this; }
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
    inline EvaluateDataQualityMultiFrame& WithStopJobOnFailureOptions(const DQStopJobOnFailureOptions& value) { SetStopJobOnFailureOptions(value); return *this;}
    inline EvaluateDataQualityMultiFrame& WithStopJobOnFailureOptions(DQStopJobOnFailureOptions&& value) { SetStopJobOnFailureOptions(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_inputs;
    bool m_inputsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_additionalDataSources;
    bool m_additionalDataSourcesHasBeenSet = false;

    Aws::String m_ruleset;
    bool m_rulesetHasBeenSet = false;

    DQResultsPublishingOptions m_publishingOptions;
    bool m_publishingOptionsHasBeenSet = false;

    Aws::Map<AdditionalOptionKeys, Aws::String> m_additionalOptions;
    bool m_additionalOptionsHasBeenSet = false;

    DQStopJobOnFailureOptions m_stopJobOnFailureOptions;
    bool m_stopJobOnFailureOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
