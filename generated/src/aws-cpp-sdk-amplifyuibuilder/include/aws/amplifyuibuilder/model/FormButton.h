/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifyuibuilder/AmplifyUIBuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/amplifyuibuilder/model/FieldPosition.h>
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
   * <p>Describes the configuration for a button UI element that is a part of a
   * form.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplifyuibuilder-2021-08-11/FormButton">AWS
   * API Reference</a></p>
   */
  class FormButton
  {
  public:
    AWS_AMPLIFYUIBUILDER_API FormButton() = default;
    AWS_AMPLIFYUIBUILDER_API FormButton(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API FormButton& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies whether the button is visible on the form.</p>
     */
    inline bool GetExcluded() const { return m_excluded; }
    inline bool ExcludedHasBeenSet() const { return m_excludedHasBeenSet; }
    inline void SetExcluded(bool value) { m_excludedHasBeenSet = true; m_excluded = value; }
    inline FormButton& WithExcluded(bool value) { SetExcluded(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the button's properties.</p>
     */
    inline const Aws::String& GetChildren() const { return m_children; }
    inline bool ChildrenHasBeenSet() const { return m_childrenHasBeenSet; }
    template<typename ChildrenT = Aws::String>
    void SetChildren(ChildrenT&& value) { m_childrenHasBeenSet = true; m_children = std::forward<ChildrenT>(value); }
    template<typename ChildrenT = Aws::String>
    FormButton& WithChildren(ChildrenT&& value) { SetChildren(std::forward<ChildrenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The position of the button.</p>
     */
    inline const FieldPosition& GetPosition() const { return m_position; }
    inline bool PositionHasBeenSet() const { return m_positionHasBeenSet; }
    template<typename PositionT = FieldPosition>
    void SetPosition(PositionT&& value) { m_positionHasBeenSet = true; m_position = std::forward<PositionT>(value); }
    template<typename PositionT = FieldPosition>
    FormButton& WithPosition(PositionT&& value) { SetPosition(std::forward<PositionT>(value)); return *this;}
    ///@}
  private:

    bool m_excluded{false};
    bool m_excludedHasBeenSet = false;

    Aws::String m_children;
    bool m_childrenHasBeenSet = false;

    FieldPosition m_position;
    bool m_positionHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
