/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/mediatailor/model/RelativePosition.h>
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
namespace MediaTailor
{
namespace Model
{

  /**
   * <p>Program transition configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/Transition">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIATAILOR_API Transition
  {
  public:
    Transition();
    Transition(Aws::Utils::Json::JsonView jsonValue);
    Transition& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The position where this program will be inserted relative to the
     * RelativeProgram. Possible values are: AFTER_PROGRAM, and BEFORE_PROGRAM.</p>
     */
    inline const RelativePosition& GetRelativePosition() const{ return m_relativePosition; }

    /**
     * <p>The position where this program will be inserted relative to the
     * RelativeProgram. Possible values are: AFTER_PROGRAM, and BEFORE_PROGRAM.</p>
     */
    inline bool RelativePositionHasBeenSet() const { return m_relativePositionHasBeenSet; }

    /**
     * <p>The position where this program will be inserted relative to the
     * RelativeProgram. Possible values are: AFTER_PROGRAM, and BEFORE_PROGRAM.</p>
     */
    inline void SetRelativePosition(const RelativePosition& value) { m_relativePositionHasBeenSet = true; m_relativePosition = value; }

    /**
     * <p>The position where this program will be inserted relative to the
     * RelativeProgram. Possible values are: AFTER_PROGRAM, and BEFORE_PROGRAM.</p>
     */
    inline void SetRelativePosition(RelativePosition&& value) { m_relativePositionHasBeenSet = true; m_relativePosition = std::move(value); }

    /**
     * <p>The position where this program will be inserted relative to the
     * RelativeProgram. Possible values are: AFTER_PROGRAM, and BEFORE_PROGRAM.</p>
     */
    inline Transition& WithRelativePosition(const RelativePosition& value) { SetRelativePosition(value); return *this;}

    /**
     * <p>The position where this program will be inserted relative to the
     * RelativeProgram. Possible values are: AFTER_PROGRAM, and BEFORE_PROGRAM.</p>
     */
    inline Transition& WithRelativePosition(RelativePosition&& value) { SetRelativePosition(std::move(value)); return *this;}


    /**
     * <p>The name of the program that this program will be inserted next to, as
     * defined by RelativePosition.</p>
     */
    inline const Aws::String& GetRelativeProgram() const{ return m_relativeProgram; }

    /**
     * <p>The name of the program that this program will be inserted next to, as
     * defined by RelativePosition.</p>
     */
    inline bool RelativeProgramHasBeenSet() const { return m_relativeProgramHasBeenSet; }

    /**
     * <p>The name of the program that this program will be inserted next to, as
     * defined by RelativePosition.</p>
     */
    inline void SetRelativeProgram(const Aws::String& value) { m_relativeProgramHasBeenSet = true; m_relativeProgram = value; }

    /**
     * <p>The name of the program that this program will be inserted next to, as
     * defined by RelativePosition.</p>
     */
    inline void SetRelativeProgram(Aws::String&& value) { m_relativeProgramHasBeenSet = true; m_relativeProgram = std::move(value); }

    /**
     * <p>The name of the program that this program will be inserted next to, as
     * defined by RelativePosition.</p>
     */
    inline void SetRelativeProgram(const char* value) { m_relativeProgramHasBeenSet = true; m_relativeProgram.assign(value); }

    /**
     * <p>The name of the program that this program will be inserted next to, as
     * defined by RelativePosition.</p>
     */
    inline Transition& WithRelativeProgram(const Aws::String& value) { SetRelativeProgram(value); return *this;}

    /**
     * <p>The name of the program that this program will be inserted next to, as
     * defined by RelativePosition.</p>
     */
    inline Transition& WithRelativeProgram(Aws::String&& value) { SetRelativeProgram(std::move(value)); return *this;}

    /**
     * <p>The name of the program that this program will be inserted next to, as
     * defined by RelativePosition.</p>
     */
    inline Transition& WithRelativeProgram(const char* value) { SetRelativeProgram(value); return *this;}


    /**
     * <p>When the program should be played. RELATIVE means that programs will be
     * played back-to-back.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>When the program should be played. RELATIVE means that programs will be
     * played back-to-back.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>When the program should be played. RELATIVE means that programs will be
     * played back-to-back.</p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>When the program should be played. RELATIVE means that programs will be
     * played back-to-back.</p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>When the program should be played. RELATIVE means that programs will be
     * played back-to-back.</p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>When the program should be played. RELATIVE means that programs will be
     * played back-to-back.</p>
     */
    inline Transition& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>When the program should be played. RELATIVE means that programs will be
     * played back-to-back.</p>
     */
    inline Transition& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>When the program should be played. RELATIVE means that programs will be
     * played back-to-back.</p>
     */
    inline Transition& WithType(const char* value) { SetType(value); return *this;}

  private:

    RelativePosition m_relativePosition;
    bool m_relativePositionHasBeenSet;

    Aws::String m_relativeProgram;
    bool m_relativeProgramHasBeenSet;

    Aws::String m_type;
    bool m_typeHasBeenSet;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
