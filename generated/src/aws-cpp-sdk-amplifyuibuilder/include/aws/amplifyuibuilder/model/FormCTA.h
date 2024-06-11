/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifyuibuilder/AmplifyUIBuilder_EXPORTS.h>
#include <aws/amplifyuibuilder/model/FormButtonsPosition.h>
#include <aws/amplifyuibuilder/model/FormButton.h>
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
namespace AmplifyUIBuilder
{
namespace Model
{

  /**
   * <p>Describes the call to action button configuration for the form.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplifyuibuilder-2021-08-11/FormCTA">AWS
   * API Reference</a></p>
   */
  class FormCTA
  {
  public:
    AWS_AMPLIFYUIBUILDER_API FormCTA();
    AWS_AMPLIFYUIBUILDER_API FormCTA(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API FormCTA& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The position of the button.</p>
     */
    inline const FormButtonsPosition& GetPosition() const{ return m_position; }
    inline bool PositionHasBeenSet() const { return m_positionHasBeenSet; }
    inline void SetPosition(const FormButtonsPosition& value) { m_positionHasBeenSet = true; m_position = value; }
    inline void SetPosition(FormButtonsPosition&& value) { m_positionHasBeenSet = true; m_position = std::move(value); }
    inline FormCTA& WithPosition(const FormButtonsPosition& value) { SetPosition(value); return *this;}
    inline FormCTA& WithPosition(FormButtonsPosition&& value) { SetPosition(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Displays a clear button.</p>
     */
    inline const FormButton& GetClear() const{ return m_clear; }
    inline bool ClearHasBeenSet() const { return m_clearHasBeenSet; }
    inline void SetClear(const FormButton& value) { m_clearHasBeenSet = true; m_clear = value; }
    inline void SetClear(FormButton&& value) { m_clearHasBeenSet = true; m_clear = std::move(value); }
    inline FormCTA& WithClear(const FormButton& value) { SetClear(value); return *this;}
    inline FormCTA& WithClear(FormButton&& value) { SetClear(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Displays a cancel button.</p>
     */
    inline const FormButton& GetCancel() const{ return m_cancel; }
    inline bool CancelHasBeenSet() const { return m_cancelHasBeenSet; }
    inline void SetCancel(const FormButton& value) { m_cancelHasBeenSet = true; m_cancel = value; }
    inline void SetCancel(FormButton&& value) { m_cancelHasBeenSet = true; m_cancel = std::move(value); }
    inline FormCTA& WithCancel(const FormButton& value) { SetCancel(value); return *this;}
    inline FormCTA& WithCancel(FormButton&& value) { SetCancel(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Displays a submit button.</p>
     */
    inline const FormButton& GetSubmit() const{ return m_submit; }
    inline bool SubmitHasBeenSet() const { return m_submitHasBeenSet; }
    inline void SetSubmit(const FormButton& value) { m_submitHasBeenSet = true; m_submit = value; }
    inline void SetSubmit(FormButton&& value) { m_submitHasBeenSet = true; m_submit = std::move(value); }
    inline FormCTA& WithSubmit(const FormButton& value) { SetSubmit(value); return *this;}
    inline FormCTA& WithSubmit(FormButton&& value) { SetSubmit(std::move(value)); return *this;}
    ///@}
  private:

    FormButtonsPosition m_position;
    bool m_positionHasBeenSet = false;

    FormButton m_clear;
    bool m_clearHasBeenSet = false;

    FormButton m_cancel;
    bool m_cancelHasBeenSet = false;

    FormButton m_submit;
    bool m_submitHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
