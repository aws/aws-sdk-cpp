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
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/personalize/model/HPOConfig.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/personalize/model/AutoMLConfig.h>
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
namespace Personalize
{
namespace Model
{

  /**
   * <p>Describes the configuration properties for the solution.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/SolutionConfig">AWS
   * API Reference</a></p>
   */
  class AWS_PERSONALIZE_API SolutionConfig
  {
  public:
    SolutionConfig();
    SolutionConfig(Aws::Utils::Json::JsonView jsonValue);
    SolutionConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Only events with a value greater than or equal to this threshold are used for
     * training a model.</p>
     */
    inline const Aws::String& GetEventValueThreshold() const{ return m_eventValueThreshold; }

    /**
     * <p>Only events with a value greater than or equal to this threshold are used for
     * training a model.</p>
     */
    inline bool EventValueThresholdHasBeenSet() const { return m_eventValueThresholdHasBeenSet; }

    /**
     * <p>Only events with a value greater than or equal to this threshold are used for
     * training a model.</p>
     */
    inline void SetEventValueThreshold(const Aws::String& value) { m_eventValueThresholdHasBeenSet = true; m_eventValueThreshold = value; }

    /**
     * <p>Only events with a value greater than or equal to this threshold are used for
     * training a model.</p>
     */
    inline void SetEventValueThreshold(Aws::String&& value) { m_eventValueThresholdHasBeenSet = true; m_eventValueThreshold = std::move(value); }

    /**
     * <p>Only events with a value greater than or equal to this threshold are used for
     * training a model.</p>
     */
    inline void SetEventValueThreshold(const char* value) { m_eventValueThresholdHasBeenSet = true; m_eventValueThreshold.assign(value); }

    /**
     * <p>Only events with a value greater than or equal to this threshold are used for
     * training a model.</p>
     */
    inline SolutionConfig& WithEventValueThreshold(const Aws::String& value) { SetEventValueThreshold(value); return *this;}

    /**
     * <p>Only events with a value greater than or equal to this threshold are used for
     * training a model.</p>
     */
    inline SolutionConfig& WithEventValueThreshold(Aws::String&& value) { SetEventValueThreshold(std::move(value)); return *this;}

    /**
     * <p>Only events with a value greater than or equal to this threshold are used for
     * training a model.</p>
     */
    inline SolutionConfig& WithEventValueThreshold(const char* value) { SetEventValueThreshold(value); return *this;}


    /**
     * <p>Describes the properties for hyperparameter optimization (HPO). For use with
     * the bring-your-own-recipe feature. Not used with Amazon Personalize predefined
     * recipes.</p>
     */
    inline const HPOConfig& GetHpoConfig() const{ return m_hpoConfig; }

    /**
     * <p>Describes the properties for hyperparameter optimization (HPO). For use with
     * the bring-your-own-recipe feature. Not used with Amazon Personalize predefined
     * recipes.</p>
     */
    inline bool HpoConfigHasBeenSet() const { return m_hpoConfigHasBeenSet; }

    /**
     * <p>Describes the properties for hyperparameter optimization (HPO). For use with
     * the bring-your-own-recipe feature. Not used with Amazon Personalize predefined
     * recipes.</p>
     */
    inline void SetHpoConfig(const HPOConfig& value) { m_hpoConfigHasBeenSet = true; m_hpoConfig = value; }

    /**
     * <p>Describes the properties for hyperparameter optimization (HPO). For use with
     * the bring-your-own-recipe feature. Not used with Amazon Personalize predefined
     * recipes.</p>
     */
    inline void SetHpoConfig(HPOConfig&& value) { m_hpoConfigHasBeenSet = true; m_hpoConfig = std::move(value); }

    /**
     * <p>Describes the properties for hyperparameter optimization (HPO). For use with
     * the bring-your-own-recipe feature. Not used with Amazon Personalize predefined
     * recipes.</p>
     */
    inline SolutionConfig& WithHpoConfig(const HPOConfig& value) { SetHpoConfig(value); return *this;}

    /**
     * <p>Describes the properties for hyperparameter optimization (HPO). For use with
     * the bring-your-own-recipe feature. Not used with Amazon Personalize predefined
     * recipes.</p>
     */
    inline SolutionConfig& WithHpoConfig(HPOConfig&& value) { SetHpoConfig(std::move(value)); return *this;}


    /**
     * <p>Lists the hyperparameter names and ranges.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAlgorithmHyperParameters() const{ return m_algorithmHyperParameters; }

    /**
     * <p>Lists the hyperparameter names and ranges.</p>
     */
    inline bool AlgorithmHyperParametersHasBeenSet() const { return m_algorithmHyperParametersHasBeenSet; }

    /**
     * <p>Lists the hyperparameter names and ranges.</p>
     */
    inline void SetAlgorithmHyperParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_algorithmHyperParametersHasBeenSet = true; m_algorithmHyperParameters = value; }

    /**
     * <p>Lists the hyperparameter names and ranges.</p>
     */
    inline void SetAlgorithmHyperParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_algorithmHyperParametersHasBeenSet = true; m_algorithmHyperParameters = std::move(value); }

    /**
     * <p>Lists the hyperparameter names and ranges.</p>
     */
    inline SolutionConfig& WithAlgorithmHyperParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetAlgorithmHyperParameters(value); return *this;}

    /**
     * <p>Lists the hyperparameter names and ranges.</p>
     */
    inline SolutionConfig& WithAlgorithmHyperParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetAlgorithmHyperParameters(std::move(value)); return *this;}

    /**
     * <p>Lists the hyperparameter names and ranges.</p>
     */
    inline SolutionConfig& AddAlgorithmHyperParameters(const Aws::String& key, const Aws::String& value) { m_algorithmHyperParametersHasBeenSet = true; m_algorithmHyperParameters.emplace(key, value); return *this; }

    /**
     * <p>Lists the hyperparameter names and ranges.</p>
     */
    inline SolutionConfig& AddAlgorithmHyperParameters(Aws::String&& key, const Aws::String& value) { m_algorithmHyperParametersHasBeenSet = true; m_algorithmHyperParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>Lists the hyperparameter names and ranges.</p>
     */
    inline SolutionConfig& AddAlgorithmHyperParameters(const Aws::String& key, Aws::String&& value) { m_algorithmHyperParametersHasBeenSet = true; m_algorithmHyperParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Lists the hyperparameter names and ranges.</p>
     */
    inline SolutionConfig& AddAlgorithmHyperParameters(Aws::String&& key, Aws::String&& value) { m_algorithmHyperParametersHasBeenSet = true; m_algorithmHyperParameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Lists the hyperparameter names and ranges.</p>
     */
    inline SolutionConfig& AddAlgorithmHyperParameters(const char* key, Aws::String&& value) { m_algorithmHyperParametersHasBeenSet = true; m_algorithmHyperParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Lists the hyperparameter names and ranges.</p>
     */
    inline SolutionConfig& AddAlgorithmHyperParameters(Aws::String&& key, const char* value) { m_algorithmHyperParametersHasBeenSet = true; m_algorithmHyperParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>Lists the hyperparameter names and ranges.</p>
     */
    inline SolutionConfig& AddAlgorithmHyperParameters(const char* key, const char* value) { m_algorithmHyperParametersHasBeenSet = true; m_algorithmHyperParameters.emplace(key, value); return *this; }


    /**
     * <p>Lists the feature transformation parameters.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetFeatureTransformationParameters() const{ return m_featureTransformationParameters; }

    /**
     * <p>Lists the feature transformation parameters.</p>
     */
    inline bool FeatureTransformationParametersHasBeenSet() const { return m_featureTransformationParametersHasBeenSet; }

    /**
     * <p>Lists the feature transformation parameters.</p>
     */
    inline void SetFeatureTransformationParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_featureTransformationParametersHasBeenSet = true; m_featureTransformationParameters = value; }

    /**
     * <p>Lists the feature transformation parameters.</p>
     */
    inline void SetFeatureTransformationParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_featureTransformationParametersHasBeenSet = true; m_featureTransformationParameters = std::move(value); }

    /**
     * <p>Lists the feature transformation parameters.</p>
     */
    inline SolutionConfig& WithFeatureTransformationParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetFeatureTransformationParameters(value); return *this;}

    /**
     * <p>Lists the feature transformation parameters.</p>
     */
    inline SolutionConfig& WithFeatureTransformationParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetFeatureTransformationParameters(std::move(value)); return *this;}

    /**
     * <p>Lists the feature transformation parameters.</p>
     */
    inline SolutionConfig& AddFeatureTransformationParameters(const Aws::String& key, const Aws::String& value) { m_featureTransformationParametersHasBeenSet = true; m_featureTransformationParameters.emplace(key, value); return *this; }

    /**
     * <p>Lists the feature transformation parameters.</p>
     */
    inline SolutionConfig& AddFeatureTransformationParameters(Aws::String&& key, const Aws::String& value) { m_featureTransformationParametersHasBeenSet = true; m_featureTransformationParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>Lists the feature transformation parameters.</p>
     */
    inline SolutionConfig& AddFeatureTransformationParameters(const Aws::String& key, Aws::String&& value) { m_featureTransformationParametersHasBeenSet = true; m_featureTransformationParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Lists the feature transformation parameters.</p>
     */
    inline SolutionConfig& AddFeatureTransformationParameters(Aws::String&& key, Aws::String&& value) { m_featureTransformationParametersHasBeenSet = true; m_featureTransformationParameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Lists the feature transformation parameters.</p>
     */
    inline SolutionConfig& AddFeatureTransformationParameters(const char* key, Aws::String&& value) { m_featureTransformationParametersHasBeenSet = true; m_featureTransformationParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Lists the feature transformation parameters.</p>
     */
    inline SolutionConfig& AddFeatureTransformationParameters(Aws::String&& key, const char* value) { m_featureTransformationParametersHasBeenSet = true; m_featureTransformationParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>Lists the feature transformation parameters.</p>
     */
    inline SolutionConfig& AddFeatureTransformationParameters(const char* key, const char* value) { m_featureTransformationParametersHasBeenSet = true; m_featureTransformationParameters.emplace(key, value); return *this; }


    /**
     * <p>The <a>AutoMLConfig</a> object containing a list of recipes to search when
     * AutoML is performed.</p>
     */
    inline const AutoMLConfig& GetAutoMLConfig() const{ return m_autoMLConfig; }

    /**
     * <p>The <a>AutoMLConfig</a> object containing a list of recipes to search when
     * AutoML is performed.</p>
     */
    inline bool AutoMLConfigHasBeenSet() const { return m_autoMLConfigHasBeenSet; }

    /**
     * <p>The <a>AutoMLConfig</a> object containing a list of recipes to search when
     * AutoML is performed.</p>
     */
    inline void SetAutoMLConfig(const AutoMLConfig& value) { m_autoMLConfigHasBeenSet = true; m_autoMLConfig = value; }

    /**
     * <p>The <a>AutoMLConfig</a> object containing a list of recipes to search when
     * AutoML is performed.</p>
     */
    inline void SetAutoMLConfig(AutoMLConfig&& value) { m_autoMLConfigHasBeenSet = true; m_autoMLConfig = std::move(value); }

    /**
     * <p>The <a>AutoMLConfig</a> object containing a list of recipes to search when
     * AutoML is performed.</p>
     */
    inline SolutionConfig& WithAutoMLConfig(const AutoMLConfig& value) { SetAutoMLConfig(value); return *this;}

    /**
     * <p>The <a>AutoMLConfig</a> object containing a list of recipes to search when
     * AutoML is performed.</p>
     */
    inline SolutionConfig& WithAutoMLConfig(AutoMLConfig&& value) { SetAutoMLConfig(std::move(value)); return *this;}

  private:

    Aws::String m_eventValueThreshold;
    bool m_eventValueThresholdHasBeenSet;

    HPOConfig m_hpoConfig;
    bool m_hpoConfigHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_algorithmHyperParameters;
    bool m_algorithmHyperParametersHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_featureTransformationParameters;
    bool m_featureTransformationParametersHasBeenSet;

    AutoMLConfig m_autoMLConfig;
    bool m_autoMLConfigHasBeenSet;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
