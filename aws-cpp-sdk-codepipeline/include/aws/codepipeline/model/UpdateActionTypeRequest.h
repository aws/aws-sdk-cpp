/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/codepipeline/CodePipelineRequest.h>
#include <aws/codepipeline/model/ActionTypeDeclaration.h>
#include <utility>

namespace Aws
{
namespace CodePipeline
{
namespace Model
{

  /**
   */
  class UpdateActionTypeRequest : public CodePipelineRequest
  {
  public:
    AWS_CODEPIPELINE_API UpdateActionTypeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateActionType"; }

    AWS_CODEPIPELINE_API Aws::String SerializePayload() const override;

    AWS_CODEPIPELINE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The action type definition for the action type to be updated.</p>
     */
    inline const ActionTypeDeclaration& GetActionType() const{ return m_actionType; }

    /**
     * <p>The action type definition for the action type to be updated.</p>
     */
    inline bool ActionTypeHasBeenSet() const { return m_actionTypeHasBeenSet; }

    /**
     * <p>The action type definition for the action type to be updated.</p>
     */
    inline void SetActionType(const ActionTypeDeclaration& value) { m_actionTypeHasBeenSet = true; m_actionType = value; }

    /**
     * <p>The action type definition for the action type to be updated.</p>
     */
    inline void SetActionType(ActionTypeDeclaration&& value) { m_actionTypeHasBeenSet = true; m_actionType = std::move(value); }

    /**
     * <p>The action type definition for the action type to be updated.</p>
     */
    inline UpdateActionTypeRequest& WithActionType(const ActionTypeDeclaration& value) { SetActionType(value); return *this;}

    /**
     * <p>The action type definition for the action type to be updated.</p>
     */
    inline UpdateActionTypeRequest& WithActionType(ActionTypeDeclaration&& value) { SetActionType(std::move(value)); return *this;}

  private:

    ActionTypeDeclaration m_actionType;
    bool m_actionTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
