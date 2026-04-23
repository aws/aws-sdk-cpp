/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>A user-defined note added to a finding.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/Note">AWS
   * API Reference</a></p>
   */
  class AWS_SECURITYHUB_API Note
  {
  public:
    Note();
    Note(Aws::Utils::Json::JsonView jsonValue);
    Note& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The text of a note.</p>
     */
    inline const Aws::String& GetText() const{ return m_text; }

    /**
     * <p>The text of a note.</p>
     */
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }

    /**
     * <p>The text of a note.</p>
     */
    inline void SetText(const Aws::String& value) { m_textHasBeenSet = true; m_text = value; }

    /**
     * <p>The text of a note.</p>
     */
    inline void SetText(Aws::String&& value) { m_textHasBeenSet = true; m_text = std::move(value); }

    /**
     * <p>The text of a note.</p>
     */
    inline void SetText(const char* value) { m_textHasBeenSet = true; m_text.assign(value); }

    /**
     * <p>The text of a note.</p>
     */
    inline Note& WithText(const Aws::String& value) { SetText(value); return *this;}

    /**
     * <p>The text of a note.</p>
     */
    inline Note& WithText(Aws::String&& value) { SetText(std::move(value)); return *this;}

    /**
     * <p>The text of a note.</p>
     */
    inline Note& WithText(const char* value) { SetText(value); return *this;}


    /**
     * <p>The principal that created a note.</p>
     */
    inline const Aws::String& GetUpdatedBy() const{ return m_updatedBy; }

    /**
     * <p>The principal that created a note.</p>
     */
    inline bool UpdatedByHasBeenSet() const { return m_updatedByHasBeenSet; }

    /**
     * <p>The principal that created a note.</p>
     */
    inline void SetUpdatedBy(const Aws::String& value) { m_updatedByHasBeenSet = true; m_updatedBy = value; }

    /**
     * <p>The principal that created a note.</p>
     */
    inline void SetUpdatedBy(Aws::String&& value) { m_updatedByHasBeenSet = true; m_updatedBy = std::move(value); }

    /**
     * <p>The principal that created a note.</p>
     */
    inline void SetUpdatedBy(const char* value) { m_updatedByHasBeenSet = true; m_updatedBy.assign(value); }

    /**
     * <p>The principal that created a note.</p>
     */
    inline Note& WithUpdatedBy(const Aws::String& value) { SetUpdatedBy(value); return *this;}

    /**
     * <p>The principal that created a note.</p>
     */
    inline Note& WithUpdatedBy(Aws::String&& value) { SetUpdatedBy(std::move(value)); return *this;}

    /**
     * <p>The principal that created a note.</p>
     */
    inline Note& WithUpdatedBy(const char* value) { SetUpdatedBy(value); return *this;}


    /**
     * <p>The timestamp of when the note was updated.</p>
     */
    inline const Aws::String& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>The timestamp of when the note was updated.</p>
     */
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }

    /**
     * <p>The timestamp of when the note was updated.</p>
     */
    inline void SetUpdatedAt(const Aws::String& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }

    /**
     * <p>The timestamp of when the note was updated.</p>
     */
    inline void SetUpdatedAt(Aws::String&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }

    /**
     * <p>The timestamp of when the note was updated.</p>
     */
    inline void SetUpdatedAt(const char* value) { m_updatedAtHasBeenSet = true; m_updatedAt.assign(value); }

    /**
     * <p>The timestamp of when the note was updated.</p>
     */
    inline Note& WithUpdatedAt(const Aws::String& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The timestamp of when the note was updated.</p>
     */
    inline Note& WithUpdatedAt(Aws::String&& value) { SetUpdatedAt(std::move(value)); return *this;}

    /**
     * <p>The timestamp of when the note was updated.</p>
     */
    inline Note& WithUpdatedAt(const char* value) { SetUpdatedAt(value); return *this;}

  private:

    Aws::String m_text;
    bool m_textHasBeenSet;

    Aws::String m_updatedBy;
    bool m_updatedByHasBeenSet;

    Aws::String m_updatedAt;
    bool m_updatedAtHasBeenSet;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
