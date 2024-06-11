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
    AWS_AMPLIFYUIBUILDER_API FormButton();
    AWS_AMPLIFYUIBUILDER_API FormButton(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API FormButton& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies whether the button is visible on the form.</p>
     */
    inline bool GetExcluded() const{ return m_excluded; }
    inline bool ExcludedHasBeenSet() const { return m_excludedHasBeenSet; }
    inline void SetExcluded(bool value) { m_excludedHasBeenSet = true; m_excluded = value; }
    inline FormButton& WithExcluded(bool value) { SetExcluded(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the button's properties.</p>
     */
    inline const Aws::String& GetChildren() const{ return m_children; }
    inline bool ChildrenHasBeenSet() const { return m_childrenHasBeenSet; }
    inline void SetChildren(const Aws::String& value) { m_childrenHasBeenSet = true; m_children = value; }
    inline void SetChildren(Aws::String&& value) { m_childrenHasBeenSet = true; m_children = std::move(value); }
    inline void SetChildren(const char* value) { m_childrenHasBeenSet = true; m_children.assign(value); }
    inline FormButton& WithChildren(const Aws::String& value) { SetChildren(value); return *this;}
    inline FormButton& WithChildren(Aws::String&& value) { SetChildren(std::move(value)); return *this;}
    inline FormButton& WithChildren(const char* value) { SetChildren(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The position of the button.</p>
     */
    inline const FieldPosition& GetPosition() const{ return m_position; }
    inline bool PositionHasBeenSet() const { return m_positionHasBeenSet; }
    inline void SetPosition(const FieldPosition& value) { m_positionHasBeenSet = true; m_position = value; }
    inline void SetPosition(FieldPosition&& value) { m_positionHasBeenSet = true; m_position = std::move(value); }
    inline FormButton& WithPosition(const FieldPosition& value) { SetPosition(value); return *this;}
    inline FormButton& WithPosition(FieldPosition&& value) { SetPosition(std::move(value)); return *this;}
    ///@}
  private:

    bool m_excluded;
    bool m_excludedHasBeenSet = false;

    Aws::String m_children;
    bool m_childrenHasBeenSet = false;

    FieldPosition m_position;
    bool m_positionHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
