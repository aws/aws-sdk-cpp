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


    ///@{
    /**
     * <p> <code>True</code> if the migration has completed, or <code>False</code>
     * otherwise.</p>
     */
    inline bool GetImportCompleted() const{ return m_importCompleted; }
    inline bool ImportCompletedHasBeenSet() const { return m_importCompletedHasBeenSet; }
    inline void SetImportCompleted(bool value) { m_importCompletedHasBeenSet = true; m_importCompleted = value; }
    inline CatalogImportStatus& WithImportCompleted(bool value) { SetImportCompleted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the migration was started.</p>
     */
    inline const Aws::Utils::DateTime& GetImportTime() const{ return m_importTime; }
    inline bool ImportTimeHasBeenSet() const { return m_importTimeHasBeenSet; }
    inline void SetImportTime(const Aws::Utils::DateTime& value) { m_importTimeHasBeenSet = true; m_importTime = value; }
    inline void SetImportTime(Aws::Utils::DateTime&& value) { m_importTimeHasBeenSet = true; m_importTime = std::move(value); }
    inline CatalogImportStatus& WithImportTime(const Aws::Utils::DateTime& value) { SetImportTime(value); return *this;}
    inline CatalogImportStatus& WithImportTime(Aws::Utils::DateTime&& value) { SetImportTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the person who initiated the migration.</p>
     */
    inline const Aws::String& GetImportedBy() const{ return m_importedBy; }
    inline bool ImportedByHasBeenSet() const { return m_importedByHasBeenSet; }
    inline void SetImportedBy(const Aws::String& value) { m_importedByHasBeenSet = true; m_importedBy = value; }
    inline void SetImportedBy(Aws::String&& value) { m_importedByHasBeenSet = true; m_importedBy = std::move(value); }
    inline void SetImportedBy(const char* value) { m_importedByHasBeenSet = true; m_importedBy.assign(value); }
    inline CatalogImportStatus& WithImportedBy(const Aws::String& value) { SetImportedBy(value); return *this;}
    inline CatalogImportStatus& WithImportedBy(Aws::String&& value) { SetImportedBy(std::move(value)); return *this;}
    inline CatalogImportStatus& WithImportedBy(const char* value) { SetImportedBy(value); return *this;}
    ///@}
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
