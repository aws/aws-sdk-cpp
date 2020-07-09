/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/personalize/PersonalizeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/personalize/model/TrainingMode.h>
#include <utility>

namespace Aws
{
namespace Personalize
{
namespace Model
{

  /**
   */
  class AWS_PERSONALIZE_API CreateSolutionVersionRequest : public PersonalizeRequest
  {
  public:
    CreateSolutionVersionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateSolutionVersion"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the solution containing the training
     * configuration information.</p>
     */
    inline const Aws::String& GetSolutionArn() const{ return m_solutionArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the solution containing the training
     * configuration information.</p>
     */
    inline bool SolutionArnHasBeenSet() const { return m_solutionArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the solution containing the training
     * configuration information.</p>
     */
    inline void SetSolutionArn(const Aws::String& value) { m_solutionArnHasBeenSet = true; m_solutionArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the solution containing the training
     * configuration information.</p>
     */
    inline void SetSolutionArn(Aws::String&& value) { m_solutionArnHasBeenSet = true; m_solutionArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the solution containing the training
     * configuration information.</p>
     */
    inline void SetSolutionArn(const char* value) { m_solutionArnHasBeenSet = true; m_solutionArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the solution containing the training
     * configuration information.</p>
     */
    inline CreateSolutionVersionRequest& WithSolutionArn(const Aws::String& value) { SetSolutionArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the solution containing the training
     * configuration information.</p>
     */
    inline CreateSolutionVersionRequest& WithSolutionArn(Aws::String&& value) { SetSolutionArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the solution containing the training
     * configuration information.</p>
     */
    inline CreateSolutionVersionRequest& WithSolutionArn(const char* value) { SetSolutionArn(value); return *this;}


    /**
     * <p>The scope of training to be performed when creating the solution version. The
     * <code>FULL</code> option trains the solution version based on the entirety of
     * the input solution's training data, while the <code>UPDATE</code> option
     * processes only the data that has changed in comparison to the input solution.
     * Choose <code>UPDATE</code> when you want to incrementally update your solution
     * version instead of creating an entirely new one.</p>  <p>The
     * <code>UPDATE</code> option can only be used when you already have an active
     * solution version created from the input solution using the <code>FULL</code>
     * option and the input solution was trained with the
     * <a>native-recipe-hrnn-coldstart</a> recipe.</p> 
     */
    inline const TrainingMode& GetTrainingMode() const{ return m_trainingMode; }

    /**
     * <p>The scope of training to be performed when creating the solution version. The
     * <code>FULL</code> option trains the solution version based on the entirety of
     * the input solution's training data, while the <code>UPDATE</code> option
     * processes only the data that has changed in comparison to the input solution.
     * Choose <code>UPDATE</code> when you want to incrementally update your solution
     * version instead of creating an entirely new one.</p>  <p>The
     * <code>UPDATE</code> option can only be used when you already have an active
     * solution version created from the input solution using the <code>FULL</code>
     * option and the input solution was trained with the
     * <a>native-recipe-hrnn-coldstart</a> recipe.</p> 
     */
    inline bool TrainingModeHasBeenSet() const { return m_trainingModeHasBeenSet; }

    /**
     * <p>The scope of training to be performed when creating the solution version. The
     * <code>FULL</code> option trains the solution version based on the entirety of
     * the input solution's training data, while the <code>UPDATE</code> option
     * processes only the data that has changed in comparison to the input solution.
     * Choose <code>UPDATE</code> when you want to incrementally update your solution
     * version instead of creating an entirely new one.</p>  <p>The
     * <code>UPDATE</code> option can only be used when you already have an active
     * solution version created from the input solution using the <code>FULL</code>
     * option and the input solution was trained with the
     * <a>native-recipe-hrnn-coldstart</a> recipe.</p> 
     */
    inline void SetTrainingMode(const TrainingMode& value) { m_trainingModeHasBeenSet = true; m_trainingMode = value; }

    /**
     * <p>The scope of training to be performed when creating the solution version. The
     * <code>FULL</code> option trains the solution version based on the entirety of
     * the input solution's training data, while the <code>UPDATE</code> option
     * processes only the data that has changed in comparison to the input solution.
     * Choose <code>UPDATE</code> when you want to incrementally update your solution
     * version instead of creating an entirely new one.</p>  <p>The
     * <code>UPDATE</code> option can only be used when you already have an active
     * solution version created from the input solution using the <code>FULL</code>
     * option and the input solution was trained with the
     * <a>native-recipe-hrnn-coldstart</a> recipe.</p> 
     */
    inline void SetTrainingMode(TrainingMode&& value) { m_trainingModeHasBeenSet = true; m_trainingMode = std::move(value); }

    /**
     * <p>The scope of training to be performed when creating the solution version. The
     * <code>FULL</code> option trains the solution version based on the entirety of
     * the input solution's training data, while the <code>UPDATE</code> option
     * processes only the data that has changed in comparison to the input solution.
     * Choose <code>UPDATE</code> when you want to incrementally update your solution
     * version instead of creating an entirely new one.</p>  <p>The
     * <code>UPDATE</code> option can only be used when you already have an active
     * solution version created from the input solution using the <code>FULL</code>
     * option and the input solution was trained with the
     * <a>native-recipe-hrnn-coldstart</a> recipe.</p> 
     */
    inline CreateSolutionVersionRequest& WithTrainingMode(const TrainingMode& value) { SetTrainingMode(value); return *this;}

    /**
     * <p>The scope of training to be performed when creating the solution version. The
     * <code>FULL</code> option trains the solution version based on the entirety of
     * the input solution's training data, while the <code>UPDATE</code> option
     * processes only the data that has changed in comparison to the input solution.
     * Choose <code>UPDATE</code> when you want to incrementally update your solution
     * version instead of creating an entirely new one.</p>  <p>The
     * <code>UPDATE</code> option can only be used when you already have an active
     * solution version created from the input solution using the <code>FULL</code>
     * option and the input solution was trained with the
     * <a>native-recipe-hrnn-coldstart</a> recipe.</p> 
     */
    inline CreateSolutionVersionRequest& WithTrainingMode(TrainingMode&& value) { SetTrainingMode(std::move(value)); return *this;}

  private:

    Aws::String m_solutionArn;
    bool m_solutionArnHasBeenSet;

    TrainingMode m_trainingMode;
    bool m_trainingModeHasBeenSet;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
