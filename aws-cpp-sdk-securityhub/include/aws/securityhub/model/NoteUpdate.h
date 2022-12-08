/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>The updated note.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/NoteUpdate">AWS
   * API Reference</a></p>
   */
  class NoteUpdate
  {
  public:
    AWS_SECURITYHUB_API NoteUpdate();
    AWS_SECURITYHUB_API NoteUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API NoteUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The updated note text.</p>
     */
    inline const Aws::String& GetText() const{ return m_text; }

    /**
     * <p>The updated note text.</p>
     */
    inline bool TextHasBeenSet() const { return m_textHasBeenSet; }

    /**
     * <p>The updated note text.</p>
     */
    inline void SetText(const Aws::String& value) { m_textHasBeenSet = true; m_text = value; }

    /**
     * <p>The updated note text.</p>
     */
    inline void SetText(Aws::String&& value) { m_textHasBeenSet = true; m_text = std::move(value); }

    /**
     * <p>The updated note text.</p>
     */
    inline void SetText(const char* value) { m_textHasBeenSet = true; m_text.assign(value); }

    /**
     * <p>The updated note text.</p>
     */
    inline NoteUpdate& WithText(const Aws::String& value) { SetText(value); return *this;}

    /**
     * <p>The updated note text.</p>
     */
    inline NoteUpdate& WithText(Aws::String&& value) { SetText(std::move(value)); return *this;}

    /**
     * <p>The updated note text.</p>
     */
    inline NoteUpdate& WithText(const char* value) { SetText(value); return *this;}


    /**
     * <p>The principal that updated the note.</p>
     */
    inline const Aws::String& GetUpdatedBy() const{ return m_updatedBy; }

    /**
     * <p>The principal that updated the note.</p>
     */
    inline bool UpdatedByHasBeenSet() const { return m_updatedByHasBeenSet; }

    /**
     * <p>The principal that updated the note.</p>
     */
    inline void SetUpdatedBy(const Aws::String& value) { m_updatedByHasBeenSet = true; m_updatedBy = value; }

    /**
     * <p>The principal that updated the note.</p>
     */
    inline void SetUpdatedBy(Aws::String&& value) { m_updatedByHasBeenSet = true; m_updatedBy = std::move(value); }

    /**
     * <p>The principal that updated the note.</p>
     */
    inline void SetUpdatedBy(const char* value) { m_updatedByHasBeenSet = true; m_updatedBy.assign(value); }

    /**
     * <p>The principal that updated the note.</p>
     */
    inline NoteUpdate& WithUpdatedBy(const Aws::String& value) { SetUpdatedBy(value); return *this;}

    /**
     * <p>The principal that updated the note.</p>
     */
    inline NoteUpdate& WithUpdatedBy(Aws::String&& value) { SetUpdatedBy(std::move(value)); return *this;}

    /**
     * <p>The principal that updated the note.</p>
     */
    inline NoteUpdate& WithUpdatedBy(const char* value) { SetUpdatedBy(value); return *this;}

  private:

    Aws::String m_text;
    bool m_textHasBeenSet = false;

    Aws::String m_updatedBy;
    bool m_updatedByHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
