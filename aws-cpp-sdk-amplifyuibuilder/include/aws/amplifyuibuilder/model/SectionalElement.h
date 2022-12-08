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


    /**
     * <p>Specifies the size of the font for a <code>Heading</code> sectional element.
     * Valid values are <code>1 | 2 | 3 | 4 | 5 | 6</code>.</p>
     */
    inline int GetLevel() const{ return m_level; }

    /**
     * <p>Specifies the size of the font for a <code>Heading</code> sectional element.
     * Valid values are <code>1 | 2 | 3 | 4 | 5 | 6</code>.</p>
     */
    inline bool LevelHasBeenSet() const { return m_levelHasBeenSet; }

    /**
     * <p>Specifies the size of the font for a <code>Heading</code> sectional element.
     * Valid values are <code>1 | 2 | 3 | 4 | 5 | 6</code>.</p>
     */
    inline void SetLevel(int value) { m_levelHasBeenSet = true; m_level = value; }

    /**
     * <p>Specifies the size of the font for a <code>Heading</code> sectional element.
     * Valid values are <code>1 | 2 | 3 | 4 | 5 | 6</code>.</p>
     */
    inline SectionalElement& WithLevel(int value) { SetLevel(value); return *this;}


    /**
     * <p>Specifies the orientation for a <code>Divider</code> sectional element. Valid
     * values are <code>horizontal</code> or <code>vertical</code>.</p>
     */
    inline const Aws::String& GetOrientation() const{ return m_orientation; }

    /**
     * <p>Specifies the orientation for a <code>Divider</code> sectional element. Valid
     * values are <code>horizontal</code> or <code>vertical</code>.</p>
     */
    inline bool OrientationHasBeenSet() const { return m_orientationHasBeenSet; }

    /**
     * <p>Specifies the orientation for a <code>Divider</code> sectional element. Valid
     * values are <code>horizontal</code> or <code>vertical</code>.</p>
     */
    inline void SetOrientation(const Aws::String& value) { m_orientationHasBeenSet = true; m_orientation = value; }

    /**
     * <p>Specifies the orientation for a <code>Divider</code> sectional element. Valid
     * values are <code>horizontal</code> or <code>vertical</code>.</p>
     */
    inline void SetOrientation(Aws::String&& value) { m_orientationHasBeenSet = true; m_orientation = std::move(value); }

    /**
     * <p>Specifies the orientation for a <code>Divider</code> sectional element. Valid
     * values are <code>horizontal</code> or <code>vertical</code>.</p>
     */
    inline void SetOrientation(const char* value) { m_orientationHasBeenSet = true; m_orientation.assign(value); }

    /**
     * <p>Specifies the orientation for a <code>Divider</code> sectional element. Valid
     * values are <code>horizontal</code> or <code>vertical</code>.</p>
     */
    inline SectionalElement& WithOrientation(const Aws::String& value) { SetOrientation(value); return *this;}

    /**
     * <p>Specifies the orientation for a <code>Divider</code> sectional element. Valid
     * values are <code>horizontal</code> or <code>vertical</code>.</p>
     */
    inline SectionalElement& WithOrientation(Aws::String&& value) { SetOrientation(std::move(value)); return *this;}

    /**
     * <p>Specifies the orientation for a <code>Divider</code> sectional element. Valid
     * values are <code>horizontal</code> or <code>vertical</code>.</p>
     */
    inline SectionalElement& WithOrientation(const char* value) { SetOrientation(value); return *this;}


    /**
     * <p>Specifies the position of the text in a field for a <code>Text</code>
     * sectional element.</p>
     */
    inline const FieldPosition& GetPosition() const{ return m_position; }

    /**
     * <p>Specifies the position of the text in a field for a <code>Text</code>
     * sectional element.</p>
     */
    inline bool PositionHasBeenSet() const { return m_positionHasBeenSet; }

    /**
     * <p>Specifies the position of the text in a field for a <code>Text</code>
     * sectional element.</p>
     */
    inline void SetPosition(const FieldPosition& value) { m_positionHasBeenSet = true; m_position = value; }

    /**
     * <p>Specifies the position of the text in a field for a <code>Text</code>
     * sectional element.</p>
     */
    inline void SetPosition(FieldPosition&& value) { m_positionHasBeenSet = true; m_position = std::move(value); }

    /**
     * <p>Specifies the position of the text in a field for a <code>Text</code>
     * sectional element.</p>
     */
    inline SectionalElement& WithPosition(const FieldPosition& value) { SetPosition(value); return *this;}

    /**
     * <p>Specifies the position of the text in a field for a <code>Text</code>
     * sectional element.</p>
     */
    inline SectionalElement& WithPosition(FieldPosition&& value) { SetPosition(std::move(value)); return *this;}


    /**
     * <p>The text for a <code>Text</code> sectional element.</p>
     */
    inline const Aws::String& GetText() const{ return m_text; }

    /**
     * <p>The text for a <code>Text</code> sectional element.</p>
     */
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }

    /**
     * <p>The text for a <code>Text</code> sectional element.</p>
     */
    inline void SetText(const Aws::String& value) { m_textHasBeenSet = true; m_text = value; }

    /**
     * <p>The text for a <code>Text</code> sectional element.</p>
     */
    inline void SetText(Aws::String&& value) { m_textHasBeenSet = true; m_text = std::move(value); }

    /**
     * <p>The text for a <code>Text</code> sectional element.</p>
     */
    inline void SetText(const char* value) { m_textHasBeenSet = true; m_text.assign(value); }

    /**
     * <p>The text for a <code>Text</code> sectional element.</p>
     */
    inline SectionalElement& WithText(const Aws::String& value) { SetText(value); return *this;}

    /**
     * <p>The text for a <code>Text</code> sectional element.</p>
     */
    inline SectionalElement& WithText(Aws::String&& value) { SetText(std::move(value)); return *this;}

    /**
     * <p>The text for a <code>Text</code> sectional element.</p>
     */
    inline SectionalElement& WithText(const char* value) { SetText(value); return *this;}


    /**
     * <p>The type of sectional element. Valid values are <code>Heading</code>,
     * <code>Text</code>, and <code>Divider</code>.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>The type of sectional element. Valid values are <code>Heading</code>,
     * <code>Text</code>, and <code>Divider</code>.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of sectional element. Valid values are <code>Heading</code>,
     * <code>Text</code>, and <code>Divider</code>.</p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of sectional element. Valid values are <code>Heading</code>,
     * <code>Text</code>, and <code>Divider</code>.</p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of sectional element. Valid values are <code>Heading</code>,
     * <code>Text</code>, and <code>Divider</code>.</p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>The type of sectional element. Valid values are <code>Heading</code>,
     * <code>Text</code>, and <code>Divider</code>.</p>
     */
    inline SectionalElement& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The type of sectional element. Valid values are <code>Heading</code>,
     * <code>Text</code>, and <code>Divider</code>.</p>
     */
    inline SectionalElement& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>The type of sectional element. Valid values are <code>Heading</code>,
     * <code>Text</code>, and <code>Divider</code>.</p>
     */
    inline SectionalElement& WithType(const char* value) { SetType(value); return *this;}

  private:

    int m_level;
    bool m_levelHasBeenSet = false;

    Aws::String m_orientation;
    bool m_orientationHasBeenSet = false;

    FieldPosition m_position;
    bool m_positionHasBeenSet = false;

    Aws::String m_text;
    bool m_textHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
