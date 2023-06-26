/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
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
namespace LexModelsV2
{
namespace Model
{

  /**
   * <p>Settings that specify the dialog code hook that is called by Amazon Lex
   * between eliciting slot values.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/ElicitationCodeHookInvocationSetting">AWS
   * API Reference</a></p>
   */
  class ElicitationCodeHookInvocationSetting
  {
  public:
    AWS_LEXMODELSV2_API ElicitationCodeHookInvocationSetting();
    AWS_LEXMODELSV2_API ElicitationCodeHookInvocationSetting(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API ElicitationCodeHookInvocationSetting& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Indicates whether a Lambda function should be invoked for the dialog.</p>
     */
    inline bool GetEnableCodeHookInvocation() const{ return m_enableCodeHookInvocation; }

    /**
     * <p>Indicates whether a Lambda function should be invoked for the dialog.</p>
     */
    inline bool EnableCodeHookInvocationHasBeenSet() const { return m_enableCodeHookInvocationHasBeenSet; }

    /**
     * <p>Indicates whether a Lambda function should be invoked for the dialog.</p>
     */
    inline void SetEnableCodeHookInvocation(bool value) { m_enableCodeHookInvocationHasBeenSet = true; m_enableCodeHookInvocation = value; }

    /**
     * <p>Indicates whether a Lambda function should be invoked for the dialog.</p>
     */
    inline ElicitationCodeHookInvocationSetting& WithEnableCodeHookInvocation(bool value) { SetEnableCodeHookInvocation(value); return *this;}


    /**
     * <p>A label that indicates the dialog step from which the dialog code hook is
     * happening.</p>
     */
    inline const Aws::String& GetInvocationLabel() const{ return m_invocationLabel; }

    /**
     * <p>A label that indicates the dialog step from which the dialog code hook is
     * happening.</p>
     */
    inline bool InvocationLabelHasBeenSet() const { return m_invocationLabelHasBeenSet; }

    /**
     * <p>A label that indicates the dialog step from which the dialog code hook is
     * happening.</p>
     */
    inline void SetInvocationLabel(const Aws::String& value) { m_invocationLabelHasBeenSet = true; m_invocationLabel = value; }

    /**
     * <p>A label that indicates the dialog step from which the dialog code hook is
     * happening.</p>
     */
    inline void SetInvocationLabel(Aws::String&& value) { m_invocationLabelHasBeenSet = true; m_invocationLabel = std::move(value); }

    /**
     * <p>A label that indicates the dialog step from which the dialog code hook is
     * happening.</p>
     */
    inline void SetInvocationLabel(const char* value) { m_invocationLabelHasBeenSet = true; m_invocationLabel.assign(value); }

    /**
     * <p>A label that indicates the dialog step from which the dialog code hook is
     * happening.</p>
     */
    inline ElicitationCodeHookInvocationSetting& WithInvocationLabel(const Aws::String& value) { SetInvocationLabel(value); return *this;}

    /**
     * <p>A label that indicates the dialog step from which the dialog code hook is
     * happening.</p>
     */
    inline ElicitationCodeHookInvocationSetting& WithInvocationLabel(Aws::String&& value) { SetInvocationLabel(std::move(value)); return *this;}

    /**
     * <p>A label that indicates the dialog step from which the dialog code hook is
     * happening.</p>
     */
    inline ElicitationCodeHookInvocationSetting& WithInvocationLabel(const char* value) { SetInvocationLabel(value); return *this;}

  private:

    bool m_enableCodeHookInvocation;
    bool m_enableCodeHookInvocationHasBeenSet = false;

    Aws::String m_invocationLabel;
    bool m_invocationLabelHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
