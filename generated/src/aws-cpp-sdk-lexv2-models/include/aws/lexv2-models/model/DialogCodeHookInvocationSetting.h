﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lexv2-models/model/PostDialogCodeHookInvocationSpecification.h>
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
namespace LexModelsV2
{
namespace Model
{

  /**
   * <p>Settings that specify the dialog code hook that is called by Amazon Lex at a
   * step of the conversation. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/DialogCodeHookInvocationSetting">AWS
   * API Reference</a></p>
   */
  class DialogCodeHookInvocationSetting
  {
  public:
    AWS_LEXMODELSV2_API DialogCodeHookInvocationSetting();
    AWS_LEXMODELSV2_API DialogCodeHookInvocationSetting(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API DialogCodeHookInvocationSetting& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates whether a Lambda function should be invoked for the dialog.</p>
     */
    inline bool GetEnableCodeHookInvocation() const{ return m_enableCodeHookInvocation; }
    inline bool EnableCodeHookInvocationHasBeenSet() const { return m_enableCodeHookInvocationHasBeenSet; }
    inline void SetEnableCodeHookInvocation(bool value) { m_enableCodeHookInvocationHasBeenSet = true; m_enableCodeHookInvocation = value; }
    inline DialogCodeHookInvocationSetting& WithEnableCodeHookInvocation(bool value) { SetEnableCodeHookInvocation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines whether a dialog code hook is used when the intent is
     * activated.</p>
     */
    inline bool GetActive() const{ return m_active; }
    inline bool ActiveHasBeenSet() const { return m_activeHasBeenSet; }
    inline void SetActive(bool value) { m_activeHasBeenSet = true; m_active = value; }
    inline DialogCodeHookInvocationSetting& WithActive(bool value) { SetActive(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A label that indicates the dialog step from which the dialog code hook is
     * happening.</p>
     */
    inline const Aws::String& GetInvocationLabel() const{ return m_invocationLabel; }
    inline bool InvocationLabelHasBeenSet() const { return m_invocationLabelHasBeenSet; }
    inline void SetInvocationLabel(const Aws::String& value) { m_invocationLabelHasBeenSet = true; m_invocationLabel = value; }
    inline void SetInvocationLabel(Aws::String&& value) { m_invocationLabelHasBeenSet = true; m_invocationLabel = std::move(value); }
    inline void SetInvocationLabel(const char* value) { m_invocationLabelHasBeenSet = true; m_invocationLabel.assign(value); }
    inline DialogCodeHookInvocationSetting& WithInvocationLabel(const Aws::String& value) { SetInvocationLabel(value); return *this;}
    inline DialogCodeHookInvocationSetting& WithInvocationLabel(Aws::String&& value) { SetInvocationLabel(std::move(value)); return *this;}
    inline DialogCodeHookInvocationSetting& WithInvocationLabel(const char* value) { SetInvocationLabel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains the responses and actions that Amazon Lex takes after the Lambda
     * function is complete.</p>
     */
    inline const PostDialogCodeHookInvocationSpecification& GetPostCodeHookSpecification() const{ return m_postCodeHookSpecification; }
    inline bool PostCodeHookSpecificationHasBeenSet() const { return m_postCodeHookSpecificationHasBeenSet; }
    inline void SetPostCodeHookSpecification(const PostDialogCodeHookInvocationSpecification& value) { m_postCodeHookSpecificationHasBeenSet = true; m_postCodeHookSpecification = value; }
    inline void SetPostCodeHookSpecification(PostDialogCodeHookInvocationSpecification&& value) { m_postCodeHookSpecificationHasBeenSet = true; m_postCodeHookSpecification = std::move(value); }
    inline DialogCodeHookInvocationSetting& WithPostCodeHookSpecification(const PostDialogCodeHookInvocationSpecification& value) { SetPostCodeHookSpecification(value); return *this;}
    inline DialogCodeHookInvocationSetting& WithPostCodeHookSpecification(PostDialogCodeHookInvocationSpecification&& value) { SetPostCodeHookSpecification(std::move(value)); return *this;}
    ///@}
  private:

    bool m_enableCodeHookInvocation;
    bool m_enableCodeHookInvocationHasBeenSet = false;

    bool m_active;
    bool m_activeHasBeenSet = false;

    Aws::String m_invocationLabel;
    bool m_invocationLabelHasBeenSet = false;

    PostDialogCodeHookInvocationSpecification m_postCodeHookSpecification;
    bool m_postCodeHookSpecificationHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
