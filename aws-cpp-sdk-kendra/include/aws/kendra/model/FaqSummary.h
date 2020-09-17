/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kendra/model/FaqStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/kendra/model/FaqFileFormat.h>
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
namespace kendra
{
namespace Model
{

  /**
   * <p>Provides information about a frequently asked questions and answer contained
   * in an index.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kendra-2019-02-03/FaqSummary">AWS
   * API Reference</a></p>
   */
  class AWS_KENDRA_API FaqSummary
  {
  public:
    FaqSummary();
    FaqSummary(Aws::Utils::Json::JsonView jsonValue);
    FaqSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier of the FAQ.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The unique identifier of the FAQ.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The unique identifier of the FAQ.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The unique identifier of the FAQ.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The unique identifier of the FAQ.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The unique identifier of the FAQ.</p>
     */
    inline FaqSummary& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The unique identifier of the FAQ.</p>
     */
    inline FaqSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the FAQ.</p>
     */
    inline FaqSummary& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The name that you assigned the FAQ when you created or updated the FAQ.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name that you assigned the FAQ when you created or updated the FAQ.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name that you assigned the FAQ when you created or updated the FAQ.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name that you assigned the FAQ when you created or updated the FAQ.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name that you assigned the FAQ when you created or updated the FAQ.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name that you assigned the FAQ when you created or updated the FAQ.</p>
     */
    inline FaqSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name that you assigned the FAQ when you created or updated the FAQ.</p>
     */
    inline FaqSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name that you assigned the FAQ when you created or updated the FAQ.</p>
     */
    inline FaqSummary& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The current status of the FAQ. When the status is <code>ACTIVE</code> the FAQ
     * is ready for use.</p>
     */
    inline const FaqStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current status of the FAQ. When the status is <code>ACTIVE</code> the FAQ
     * is ready for use.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The current status of the FAQ. When the status is <code>ACTIVE</code> the FAQ
     * is ready for use.</p>
     */
    inline void SetStatus(const FaqStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current status of the FAQ. When the status is <code>ACTIVE</code> the FAQ
     * is ready for use.</p>
     */
    inline void SetStatus(FaqStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The current status of the FAQ. When the status is <code>ACTIVE</code> the FAQ
     * is ready for use.</p>
     */
    inline FaqSummary& WithStatus(const FaqStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status of the FAQ. When the status is <code>ACTIVE</code> the FAQ
     * is ready for use.</p>
     */
    inline FaqSummary& WithStatus(FaqStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The UNIX datetime that the FAQ was added to the index.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The UNIX datetime that the FAQ was added to the index.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The UNIX datetime that the FAQ was added to the index.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The UNIX datetime that the FAQ was added to the index.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The UNIX datetime that the FAQ was added to the index.</p>
     */
    inline FaqSummary& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The UNIX datetime that the FAQ was added to the index.</p>
     */
    inline FaqSummary& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The UNIX datetime that the FAQ was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>The UNIX datetime that the FAQ was last updated.</p>
     */
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }

    /**
     * <p>The UNIX datetime that the FAQ was last updated.</p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }

    /**
     * <p>The UNIX datetime that the FAQ was last updated.</p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }

    /**
     * <p>The UNIX datetime that the FAQ was last updated.</p>
     */
    inline FaqSummary& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The UNIX datetime that the FAQ was last updated.</p>
     */
    inline FaqSummary& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}


    /**
     * <p>The file type used to create the FAQ. </p>
     */
    inline const FaqFileFormat& GetFileFormat() const{ return m_fileFormat; }

    /**
     * <p>The file type used to create the FAQ. </p>
     */
    inline bool FileFormatHasBeenSet() const { return m_fileFormatHasBeenSet; }

    /**
     * <p>The file type used to create the FAQ. </p>
     */
    inline void SetFileFormat(const FaqFileFormat& value) { m_fileFormatHasBeenSet = true; m_fileFormat = value; }

    /**
     * <p>The file type used to create the FAQ. </p>
     */
    inline void SetFileFormat(FaqFileFormat&& value) { m_fileFormatHasBeenSet = true; m_fileFormat = std::move(value); }

    /**
     * <p>The file type used to create the FAQ. </p>
     */
    inline FaqSummary& WithFileFormat(const FaqFileFormat& value) { SetFileFormat(value); return *this;}

    /**
     * <p>The file type used to create the FAQ. </p>
     */
    inline FaqSummary& WithFileFormat(FaqFileFormat&& value) { SetFileFormat(std::move(value)); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    FaqStatus m_status;
    bool m_statusHasBeenSet;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet;

    FaqFileFormat m_fileFormat;
    bool m_fileFormatHasBeenSet;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
