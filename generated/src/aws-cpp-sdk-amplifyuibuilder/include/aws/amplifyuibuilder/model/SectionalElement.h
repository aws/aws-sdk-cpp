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
   * <p>Stores the configuration information for a visual helper element for a form.
   * A sectional element can be a header, a text block, or a divider. These elements
   * are static and not associated with any data.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplifyuibuilder-2021-08-11/SectionalElement">AWS
   * API Reference</a></p>
   */
  class SectionalElement
  {
  public:
    AWS_AMPLIFYUIBUILDER_API SectionalElement();
    AWS_AMPLIFYUIBUILDER_API SectionalElement(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API SectionalElement& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of sectional element. Valid values are <code>Heading</code>,
     * <code>Text</code>, and <code>Divider</code>.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }
    inline SectionalElement& WithType(const Aws::String& value) { SetType(value); return *this;}
    inline SectionalElement& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}
    inline SectionalElement& WithType(const char* value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the position of the text in a field for a <code>Text</code>
     * sectional element.</p>
     */
    inline const FieldPosition& GetPosition() const{ return m_position; }
    inline bool PositionHasBeenSet() const { return m_positionHasBeenSet; }
    inline void SetPosition(const FieldPosition& value) { m_positionHasBeenSet = true; m_position = value; }
    inline void SetPosition(FieldPosition&& value) { m_positionHasBeenSet = true; m_position = std::move(value); }
    inline SectionalElement& WithPosition(const FieldPosition& value) { SetPosition(value); return *this;}
    inline SectionalElement& WithPosition(FieldPosition&& value) { SetPosition(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The text for a <code>Text</code> sectional element.</p>
     */
    inline const Aws::String& GetText() const{ return m_text; }
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }
    inline void SetText(const Aws::String& value) { m_textHasBeenSet = true; m_text = value; }
    inline void SetText(Aws::String&& value) { m_textHasBeenSet = true; m_text = std::move(value); }
    inline void SetText(const char* value) { m_textHasBeenSet = true; m_text.assign(value); }
    inline SectionalElement& WithText(const Aws::String& value) { SetText(value); return *this;}
    inline SectionalElement& WithText(Aws::String&& value) { SetText(std::move(value)); return *this;}
    inline SectionalElement& WithText(const char* value) { SetText(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the size of the font for a <code>Heading</code> sectional element.
     * Valid values are <code>1 | 2 | 3 | 4 | 5 | 6</code>.</p>
     */
    inline int GetLevel() const{ return m_level; }
    inline bool LevelHasBeenSet() const { return m_levelHasBeenSet; }
    inline void SetLevel(int value) { m_levelHasBeenSet = true; m_level = value; }
    inline SectionalElement& WithLevel(int value) { SetLevel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the orientation for a <code>Divider</code> sectional element. Valid
     * values are <code>horizontal</code> or <code>vertical</code>.</p>
     */
    inline const Aws::String& GetOrientation() const{ return m_orientation; }
    inline bool OrientationHasBeenSet() const { return m_orientationHasBeenSet; }
    inline void SetOrientation(const Aws::String& value) { m_orientationHasBeenSet = true; m_orientation = value; }
    inline void SetOrientation(Aws::String&& value) { m_orientationHasBeenSet = true; m_orientation = std::move(value); }
    inline void SetOrientation(const char* value) { m_orientationHasBeenSet = true; m_orientation.assign(value); }
    inline SectionalElement& WithOrientation(const Aws::String& value) { SetOrientation(value); return *this;}
    inline SectionalElement& WithOrientation(Aws::String&& value) { SetOrientation(std::move(value)); return *this;}
    inline SectionalElement& WithOrientation(const char* value) { SetOrientation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Excludes a sectional element that was generated by default for a specified
     * data model.</p>
     */
    inline bool GetExcluded() const{ return m_excluded; }
    inline bool ExcludedHasBeenSet() const { return m_excludedHasBeenSet; }
    inline void SetExcluded(bool value) { m_excludedHasBeenSet = true; m_excluded = value; }
    inline SectionalElement& WithExcluded(bool value) { SetExcluded(value); return *this;}
    ///@}
  private:

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    FieldPosition m_position;
    bool m_positionHasBeenSet = false;

    Aws::String m_text;
    bool m_textHasBeenSet = false;

    int m_level;
    bool m_levelHasBeenSet = false;

    Aws::String m_orientation;
    bool m_orientationHasBeenSet = false;

    bool m_excluded;
    bool m_excludedHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
