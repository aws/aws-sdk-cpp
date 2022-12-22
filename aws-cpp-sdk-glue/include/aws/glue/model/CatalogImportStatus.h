/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>A structure containing migration status information.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CatalogImportStatus">AWS
   * API Reference</a></p>
   */
  class CatalogImportStatus
  {
  public:
    AWS_GLUE_API CatalogImportStatus();
    AWS_GLUE_API CatalogImportStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API CatalogImportStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> <code>True</code> if the migration has completed, or <code>False</code>
     * otherwise.</p>
     */
    inline bool GetImportCompleted() const{ return m_importCompleted; }

    /**
     * <p> <code>True</code> if the migration has completed, or <code>False</code>
     * otherwise.</p>
     */
    inline bool ImportCompletedHasBeenSet() const { return m_importCompletedHasBeenSet; }

    /**
     * <p> <code>True</code> if the migration has completed, or <code>False</code>
     * otherwise.</p>
     */
    inline void SetImportCompleted(bool value) { m_importCompletedHasBeenSet = true; m_importCompleted = value; }

    /**
     * <p> <code>True</code> if the migration has completed, or <code>False</code>
     * otherwise.</p>
     */
    inline CatalogImportStatus& WithImportCompleted(bool value) { SetImportCompleted(value); return *this;}


    /**
     * <p>The time that the migration was started.</p>
     */
    inline const Aws::Utils::DateTime& GetImportTime() const{ return m_importTime; }

    /**
     * <p>The time that the migration was started.</p>
     */
    inline bool ImportTimeHasBeenSet() const { return m_importTimeHasBeenSet; }

    /**
     * <p>The time that the migration was started.</p>
     */
    inline void SetImportTime(const Aws::Utils::DateTime& value) { m_importTimeHasBeenSet = true; m_importTime = value; }

    /**
     * <p>The time that the migration was started.</p>
     */
    inline void SetImportTime(Aws::Utils::DateTime&& value) { m_importTimeHasBeenSet = true; m_importTime = std::move(value); }

    /**
     * <p>The time that the migration was started.</p>
     */
    inline CatalogImportStatus& WithImportTime(const Aws::Utils::DateTime& value) { SetImportTime(value); return *this;}

    /**
     * <p>The time that the migration was started.</p>
     */
    inline CatalogImportStatus& WithImportTime(Aws::Utils::DateTime&& value) { SetImportTime(std::move(value)); return *this;}


    /**
     * <p>The name of the person who initiated the migration.</p>
     */
    inline const Aws::String& GetImportedBy() const{ return m_importedBy; }

    /**
     * <p>The name of the person who initiated the migration.</p>
     */
    inline bool ImportedByHasBeenSet() const { return m_importedByHasBeenSet; }

    /**
     * <p>The name of the person who initiated the migration.</p>
     */
    inline void SetImportedBy(const Aws::String& value) { m_importedByHasBeenSet = true; m_importedBy = value; }

    /**
     * <p>The name of the person who initiated the migration.</p>
     */
    inline void SetImportedBy(Aws::String&& value) { m_importedByHasBeenSet = true; m_importedBy = std::move(value); }

    /**
     * <p>The name of the person who initiated the migration.</p>
     */
    inline void SetImportedBy(const char* value) { m_importedByHasBeenSet = true; m_importedBy.assign(value); }

    /**
     * <p>The name of the person who initiated the migration.</p>
     */
    inline CatalogImportStatus& WithImportedBy(const Aws::String& value) { SetImportedBy(value); return *this;}

    /**
     * <p>The name of the person who initiated the migration.</p>
     */
    inline CatalogImportStatus& WithImportedBy(Aws::String&& value) { SetImportedBy(std::move(value)); return *this;}

    /**
     * <p>The name of the person who initiated the migration.</p>
     */
    inline CatalogImportStatus& WithImportedBy(const char* value) { SetImportedBy(value); return *this;}

  private:

    bool m_importCompleted;
    bool m_importCompletedHasBeenSet = false;

    Aws::Utils::DateTime m_importTime;
    bool m_importTimeHasBeenSet = false;

    Aws::String m_importedBy;
    bool m_importedByHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
