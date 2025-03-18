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
    AWS_GLUEDATABREW_API SendProjectSessionActionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SendProjectSessionAction"; }

    AWS_GLUEDATABREW_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>If true, the result of the recipe step will be returned, but not applied.</p>
     */
    inline bool GetPreview() const { return m_preview; }
    inline bool PreviewHasBeenSet() const { return m_previewHasBeenSet; }
    inline void SetPreview(bool value) { m_previewHasBeenSet = true; m_preview = value; }
    inline SendProjectSessionActionRequest& WithPreview(bool value) { SetPreview(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the project to apply the action to.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    SendProjectSessionActionRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const RecipeStep& GetRecipeStep() const { return m_recipeStep; }
    inline bool RecipeStepHasBeenSet() const { return m_recipeStepHasBeenSet; }
    template<typename RecipeStepT = RecipeStep>
    void SetRecipeStep(RecipeStepT&& value) { m_recipeStepHasBeenSet = true; m_recipeStep = std::forward<RecipeStepT>(value); }
    template<typename RecipeStepT = RecipeStep>
    SendProjectSessionActionRequest& WithRecipeStep(RecipeStepT&& value) { SetRecipeStep(std::forward<RecipeStepT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The index from which to preview a step. This index is used to preview the
     * result of steps that have already been applied, so that the resulting view frame
     * is from earlier in the view frame stack.</p>
     */
    inline int GetStepIndex() const { return m_stepIndex; }
    inline bool StepIndexHasBeenSet() const { return m_stepIndexHasBeenSet; }
    inline void SetStepIndex(int value) { m_stepIndexHasBeenSet = true; m_stepIndex = value; }
    inline SendProjectSessionActionRequest& WithStepIndex(int value) { SetStepIndex(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for an interactive session that's currently open and
     * ready for work. The action will be performed on this session.</p>
     */
    inline const Aws::String& GetClientSessionId() const { return m_clientSessionId; }
    inline bool ClientSessionIdHasBeenSet() const { return m_clientSessionIdHasBeenSet; }
    template<typename ClientSessionIdT = Aws::String>
    void SetClientSessionId(ClientSessionIdT&& value) { m_clientSessionIdHasBeenSet = true; m_clientSessionId = std::forward<ClientSessionIdT>(value); }
    template<typename ClientSessionIdT = Aws::String>
    SendProjectSessionActionRequest& WithClientSessionId(ClientSessionIdT&& value) { SetClientSessionId(std::forward<ClientSessionIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ViewFrame& GetViewFrame() const { return m_viewFrame; }
    inline bool ViewFrameHasBeenSet() const { return m_viewFrameHasBeenSet; }
    template<typename ViewFrameT = ViewFrame>
    void SetViewFrame(ViewFrameT&& value) { m_viewFrameHasBeenSet = true; m_viewFrame = std::forward<ViewFrameT>(value); }
    template<typename ViewFrameT = ViewFrame>
    SendProjectSessionActionRequest& WithViewFrame(ViewFrameT&& value) { SetViewFrame(std::forward<ViewFrameT>(value)); return *this;}
    ///@}
  private:

    bool m_preview{false};
    bool m_previewHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    RecipeStep m_recipeStep;
    bool m_recipeStepHasBeenSet = false;

    int m_stepIndex{0};
    bool m_stepIndexHasBeenSet = false;

    Aws::String m_clientSessionId;
    bool m_clientSessionIdHasBeenSet = false;

    ViewFrame m_viewFrame;
    bool m_viewFrameHasBeenSet = false;
  };

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
