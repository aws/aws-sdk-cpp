/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
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
namespace CleanRooms
{
namespace Model
{

  /**
   * <p>The structure that defines the body of the analysis template.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/AnalysisSource">AWS
   * API Reference</a></p>
   */
  class AnalysisSource
  {
  public:
    AWS_CLEANROOMS_API AnalysisSource();
    AWS_CLEANROOMS_API AnalysisSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API AnalysisSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The query text.</p>
     */
    inline const Aws::String& GetText() const{ return m_text; }

    /**
     * <p>The query text.</p>
     */
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }

    /**
     * <p>The query text.</p>
     */
    inline void SetText(const Aws::String& value) { m_textHasBeenSet = true; m_text = value; }

    /**
     * <p>The query text.</p>
     */
    inline void SetText(Aws::String&& value) { m_textHasBeenSet = true; m_text = std::move(value); }

    /**
     * <p>The query text.</p>
     */
    inline void SetText(const char* value) { m_textHasBeenSet = true; m_text.assign(value); }

    /**
     * <p>The query text.</p>
     */
    inline AnalysisSource& WithText(const Aws::String& value) { SetText(value); return *this;}

    /**
     * <p>The query text.</p>
     */
    inline AnalysisSource& WithText(Aws::String&& value) { SetText(std::move(value)); return *this;}

    /**
     * <p>The query text.</p>
     */
    inline AnalysisSource& WithText(const char* value) { SetText(value); return *this;}

  private:

    Aws::String m_text;
    bool m_textHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
