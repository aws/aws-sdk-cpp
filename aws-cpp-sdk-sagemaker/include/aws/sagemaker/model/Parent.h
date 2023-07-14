﻿/**
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
   * <p>The trial that a trial component is associated with and the experiment the
   * trial is part of. A component might not be associated with a trial. A component
   * can be associated with multiple trials.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/Parent">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API Parent
  {
  public:
    Parent();
    Parent(Aws::Utils::Json::JsonView jsonValue);
    Parent& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the trial.</p>
     */
    inline const Aws::String& GetTrialName() const{ return m_trialName; }

    /**
     * <p>The name of the trial.</p>
     */
    inline bool TrialNameHasBeenSet() const { return m_trialNameHasBeenSet; }

    /**
     * <p>The name of the trial.</p>
     */
    inline void SetTrialName(const Aws::String& value) { m_trialNameHasBeenSet = true; m_trialName = value; }

    /**
     * <p>The name of the trial.</p>
     */
    inline void SetTrialName(Aws::String&& value) { m_trialNameHasBeenSet = true; m_trialName = std::move(value); }

    /**
     * <p>The name of the trial.</p>
     */
    inline void SetTrialName(const char* value) { m_trialNameHasBeenSet = true; m_trialName.assign(value); }

    /**
     * <p>The name of the trial.</p>
     */
    inline Parent& WithTrialName(const Aws::String& value) { SetTrialName(value); return *this;}

    /**
     * <p>The name of the trial.</p>
     */
    inline Parent& WithTrialName(Aws::String&& value) { SetTrialName(std::move(value)); return *this;}

    /**
     * <p>The name of the trial.</p>
     */
    inline Parent& WithTrialName(const char* value) { SetTrialName(value); return *this;}


    /**
     * <p>The name of the experiment.</p>
     */
    inline const Aws::String& GetExperimentName() const{ return m_experimentName; }

    /**
     * <p>The name of the experiment.</p>
     */
    inline bool ExperimentNameHasBeenSet() const { return m_experimentNameHasBeenSet; }

    /**
     * <p>The name of the experiment.</p>
     */
    inline void SetExperimentName(const Aws::String& value) { m_experimentNameHasBeenSet = true; m_experimentName = value; }

    /**
     * <p>The name of the experiment.</p>
     */
    inline void SetExperimentName(Aws::String&& value) { m_experimentNameHasBeenSet = true; m_experimentName = std::move(value); }

    /**
     * <p>The name of the experiment.</p>
     */
    inline void SetExperimentName(const char* value) { m_experimentNameHasBeenSet = true; m_experimentName.assign(value); }

    /**
     * <p>The name of the experiment.</p>
     */
    inline Parent& WithExperimentName(const Aws::String& value) { SetExperimentName(value); return *this;}

    /**
     * <p>The name of the experiment.</p>
     */
    inline Parent& WithExperimentName(Aws::String&& value) { SetExperimentName(std::move(value)); return *this;}

    /**
     * <p>The name of the experiment.</p>
     */
    inline Parent& WithExperimentName(const char* value) { SetExperimentName(value); return *this;}

  private:

    Aws::String m_trialName;
    bool m_trialNameHasBeenSet;

    Aws::String m_experimentName;
    bool m_experimentNameHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
