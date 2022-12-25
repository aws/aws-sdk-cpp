/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/databrew/GlueDataBrew_EXPORTS.h>
#include <aws/databrew/GlueDataBrewRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/databrew/model/RecipeStep.h>
#include <aws/databrew/model/ViewFrame.h>
#include <utility>

namespace Aws
{
namespace GlueDataBrew
{
namespace Model
{

  /**
   */
  class SendProjectSessionActionRequest : public GlueDataBrewRequest
  {
  public:
    AWS_GLUEDATABREW_API SendProjectSessionActionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SendProjectSessionAction"; }

    AWS_GLUEDATABREW_API Aws::String SerializePayload() const override;


    /**
     * <p>If true, the result of the recipe step will be returned, but not applied.</p>
     */
    inline bool GetPreview() const{ return m_preview; }

    /**
     * <p>If true, the result of the recipe step will be returned, but not applied.</p>
     */
    inline bool PreviewHasBeenSet() const { return m_previewHasBeenSet; }

    /**
     * <p>If true, the result of the recipe step will be returned, but not applied.</p>
     */
    inline void SetPreview(bool value) { m_previewHasBeenSet = true; m_preview = value; }

    /**
     * <p>If true, the result of the recipe step will be returned, but not applied.</p>
     */
    inline SendProjectSessionActionRequest& WithPreview(bool value) { SetPreview(value); return *this;}


    /**
     * <p>The name of the project to apply the action to.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the project to apply the action to.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the project to apply the action to.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the project to apply the action to.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the project to apply the action to.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the project to apply the action to.</p>
     */
    inline SendProjectSessionActionRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the project to apply the action to.</p>
     */
    inline SendProjectSessionActionRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the project to apply the action to.</p>
     */
    inline SendProjectSessionActionRequest& WithName(const char* value) { SetName(value); return *this;}


    
    inline const RecipeStep& GetRecipeStep() const{ return m_recipeStep; }

    
    inline bool RecipeStepHasBeenSet() const { return m_recipeStepHasBeenSet; }

    
    inline void SetRecipeStep(const RecipeStep& value) { m_recipeStepHasBeenSet = true; m_recipeStep = value; }

    
    inline void SetRecipeStep(RecipeStep&& value) { m_recipeStepHasBeenSet = true; m_recipeStep = std::move(value); }

    
    inline SendProjectSessionActionRequest& WithRecipeStep(const RecipeStep& value) { SetRecipeStep(value); return *this;}

    
    inline SendProjectSessionActionRequest& WithRecipeStep(RecipeStep&& value) { SetRecipeStep(std::move(value)); return *this;}


    /**
     * <p>The index from which to preview a step. This index is used to preview the
     * result of steps that have already been applied, so that the resulting view frame
     * is from earlier in the view frame stack.</p>
     */
    inline int GetStepIndex() const{ return m_stepIndex; }

    /**
     * <p>The index from which to preview a step. This index is used to preview the
     * result of steps that have already been applied, so that the resulting view frame
     * is from earlier in the view frame stack.</p>
     */
    inline bool StepIndexHasBeenSet() const { return m_stepIndexHasBeenSet; }

    /**
     * <p>The index from which to preview a step. This index is used to preview the
     * result of steps that have already been applied, so that the resulting view frame
     * is from earlier in the view frame stack.</p>
     */
    inline void SetStepIndex(int value) { m_stepIndexHasBeenSet = true; m_stepIndex = value; }

    /**
     * <p>The index from which to preview a step. This index is used to preview the
     * result of steps that have already been applied, so that the resulting view frame
     * is from earlier in the view frame stack.</p>
     */
    inline SendProjectSessionActionRequest& WithStepIndex(int value) { SetStepIndex(value); return *this;}


    /**
     * <p>A unique identifier for an interactive session that's currently open and
     * ready for work. The action will be performed on this session.</p>
     */
    inline const Aws::String& GetClientSessionId() const{ return m_clientSessionId; }

    /**
     * <p>A unique identifier for an interactive session that's currently open and
     * ready for work. The action will be performed on this session.</p>
     */
    inline bool ClientSessionIdHasBeenSet() const { return m_clientSessionIdHasBeenSet; }

    /**
     * <p>A unique identifier for an interactive session that's currently open and
     * ready for work. The action will be performed on this session.</p>
     */
    inline void SetClientSessionId(const Aws::String& value) { m_clientSessionIdHasBeenSet = true; m_clientSessionId = value; }

    /**
     * <p>A unique identifier for an interactive session that's currently open and
     * ready for work. The action will be performed on this session.</p>
     */
    inline void SetClientSessionId(Aws::String&& value) { m_clientSessionIdHasBeenSet = true; m_clientSessionId = std::move(value); }

    /**
     * <p>A unique identifier for an interactive session that's currently open and
     * ready for work. The action will be performed on this session.</p>
     */
    inline void SetClientSessionId(const char* value) { m_clientSessionIdHasBeenSet = true; m_clientSessionId.assign(value); }

    /**
     * <p>A unique identifier for an interactive session that's currently open and
     * ready for work. The action will be performed on this session.</p>
     */
    inline SendProjectSessionActionRequest& WithClientSessionId(const Aws::String& value) { SetClientSessionId(value); return *this;}

    /**
     * <p>A unique identifier for an interactive session that's currently open and
     * ready for work. The action will be performed on this session.</p>
     */
    inline SendProjectSessionActionRequest& WithClientSessionId(Aws::String&& value) { SetClientSessionId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for an interactive session that's currently open and
     * ready for work. The action will be performed on this session.</p>
     */
    inline SendProjectSessionActionRequest& WithClientSessionId(const char* value) { SetClientSessionId(value); return *this;}


    
    inline const ViewFrame& GetViewFrame() const{ return m_viewFrame; }

    
    inline bool ViewFrameHasBeenSet() const { return m_viewFrameHasBeenSet; }

    
    inline void SetViewFrame(const ViewFrame& value) { m_viewFrameHasBeenSet = true; m_viewFrame = value; }

    
    inline void SetViewFrame(ViewFrame&& value) { m_viewFrameHasBeenSet = true; m_viewFrame = std::move(value); }

    
    inline SendProjectSessionActionRequest& WithViewFrame(const ViewFrame& value) { SetViewFrame(value); return *this;}

    
    inline SendProjectSessionActionRequest& WithViewFrame(ViewFrame&& value) { SetViewFrame(std::move(value)); return *this;}

  private:

    bool m_preview;
    bool m_previewHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    RecipeStep m_recipeStep;
    bool m_recipeStepHasBeenSet = false;

    int m_stepIndex;
    bool m_stepIndexHasBeenSet = false;

    Aws::String m_clientSessionId;
    bool m_clientSessionIdHasBeenSet = false;

    ViewFrame m_viewFrame;
    bool m_viewFrameHasBeenSet = false;
  };

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
