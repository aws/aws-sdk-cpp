/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Associates a SageMaker job as a trial component with an experiment and trial.
   * Specified when you call the following APIs:</p> <ul> <li> <p>
   * <a>CreateProcessingJob</a> </p> </li> <li> <p> <a>CreateTrainingJob</a> </p>
   * </li> <li> <p> <a>CreateTransformJob</a> </p> </li> </ul><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ExperimentConfig">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API ExperimentConfig
  {
  public:
    ExperimentConfig();
    ExperimentConfig(Aws::Utils::Json::JsonView jsonValue);
    ExperimentConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of an existing experiment to associate the trial component with.</p>
     */
    inline const Aws::String& GetExperimentName() const{ return m_experimentName; }

    /**
     * <p>The name of an existing experiment to associate the trial component with.</p>
     */
    inline bool ExperimentNameHasBeenSet() const { return m_experimentNameHasBeenSet; }

    /**
     * <p>The name of an existing experiment to associate the trial component with.</p>
     */
    inline void SetExperimentName(const Aws::String& value) { m_experimentNameHasBeenSet = true; m_experimentName = value; }

    /**
     * <p>The name of an existing experiment to associate the trial component with.</p>
     */
    inline void SetExperimentName(Aws::String&& value) { m_experimentNameHasBeenSet = true; m_experimentName = std::move(value); }

    /**
     * <p>The name of an existing experiment to associate the trial component with.</p>
     */
    inline void SetExperimentName(const char* value) { m_experimentNameHasBeenSet = true; m_experimentName.assign(value); }

    /**
     * <p>The name of an existing experiment to associate the trial component with.</p>
     */
    inline ExperimentConfig& WithExperimentName(const Aws::String& value) { SetExperimentName(value); return *this;}

    /**
     * <p>The name of an existing experiment to associate the trial component with.</p>
     */
    inline ExperimentConfig& WithExperimentName(Aws::String&& value) { SetExperimentName(std::move(value)); return *this;}

    /**
     * <p>The name of an existing experiment to associate the trial component with.</p>
     */
    inline ExperimentConfig& WithExperimentName(const char* value) { SetExperimentName(value); return *this;}


    /**
     * <p>The name of an existing trial to associate the trial component with. If not
     * specified, a new trial is created.</p>
     */
    inline const Aws::String& GetTrialName() const{ return m_trialName; }

    /**
     * <p>The name of an existing trial to associate the trial component with. If not
     * specified, a new trial is created.</p>
     */
    inline bool TrialNameHasBeenSet() const { return m_trialNameHasBeenSet; }

    /**
     * <p>The name of an existing trial to associate the trial component with. If not
     * specified, a new trial is created.</p>
     */
    inline void SetTrialName(const Aws::String& value) { m_trialNameHasBeenSet = true; m_trialName = value; }

    /**
     * <p>The name of an existing trial to associate the trial component with. If not
     * specified, a new trial is created.</p>
     */
    inline void SetTrialName(Aws::String&& value) { m_trialNameHasBeenSet = true; m_trialName = std::move(value); }

    /**
     * <p>The name of an existing trial to associate the trial component with. If not
     * specified, a new trial is created.</p>
     */
    inline void SetTrialName(const char* value) { m_trialNameHasBeenSet = true; m_trialName.assign(value); }

    /**
     * <p>The name of an existing trial to associate the trial component with. If not
     * specified, a new trial is created.</p>
     */
    inline ExperimentConfig& WithTrialName(const Aws::String& value) { SetTrialName(value); return *this;}

    /**
     * <p>The name of an existing trial to associate the trial component with. If not
     * specified, a new trial is created.</p>
     */
    inline ExperimentConfig& WithTrialName(Aws::String&& value) { SetTrialName(std::move(value)); return *this;}

    /**
     * <p>The name of an existing trial to associate the trial component with. If not
     * specified, a new trial is created.</p>
     */
    inline ExperimentConfig& WithTrialName(const char* value) { SetTrialName(value); return *this;}


    /**
     * <p>The display name for the trial component. If this key isn't specified, the
     * display name is the trial component name.</p>
     */
    inline const Aws::String& GetTrialComponentDisplayName() const{ return m_trialComponentDisplayName; }

    /**
     * <p>The display name for the trial component. If this key isn't specified, the
     * display name is the trial component name.</p>
     */
    inline bool TrialComponentDisplayNameHasBeenSet() const { return m_trialComponentDisplayNameHasBeenSet; }

    /**
     * <p>The display name for the trial component. If this key isn't specified, the
     * display name is the trial component name.</p>
     */
    inline void SetTrialComponentDisplayName(const Aws::String& value) { m_trialComponentDisplayNameHasBeenSet = true; m_trialComponentDisplayName = value; }

    /**
     * <p>The display name for the trial component. If this key isn't specified, the
     * display name is the trial component name.</p>
     */
    inline void SetTrialComponentDisplayName(Aws::String&& value) { m_trialComponentDisplayNameHasBeenSet = true; m_trialComponentDisplayName = std::move(value); }

    /**
     * <p>The display name for the trial component. If this key isn't specified, the
     * display name is the trial component name.</p>
     */
    inline void SetTrialComponentDisplayName(const char* value) { m_trialComponentDisplayNameHasBeenSet = true; m_trialComponentDisplayName.assign(value); }

    /**
     * <p>The display name for the trial component. If this key isn't specified, the
     * display name is the trial component name.</p>
     */
    inline ExperimentConfig& WithTrialComponentDisplayName(const Aws::String& value) { SetTrialComponentDisplayName(value); return *this;}

    /**
     * <p>The display name for the trial component. If this key isn't specified, the
     * display name is the trial component name.</p>
     */
    inline ExperimentConfig& WithTrialComponentDisplayName(Aws::String&& value) { SetTrialComponentDisplayName(std::move(value)); return *this;}

    /**
     * <p>The display name for the trial component. If this key isn't specified, the
     * display name is the trial component name.</p>
     */
    inline ExperimentConfig& WithTrialComponentDisplayName(const char* value) { SetTrialComponentDisplayName(value); return *this;}

  private:

    Aws::String m_experimentName;
    bool m_experimentNameHasBeenSet;

    Aws::String m_trialName;
    bool m_trialNameHasBeenSet;

    Aws::String m_trialComponentDisplayName;
    bool m_trialComponentDisplayNameHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
