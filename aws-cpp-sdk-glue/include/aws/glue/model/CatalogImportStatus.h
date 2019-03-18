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
  class AWS_GLUE_API CatalogImportStatus
  {
  public:
    CatalogImportStatus();
    CatalogImportStatus(Aws::Utils::Json::JsonView jsonValue);
    CatalogImportStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>True if the migration has completed, or False otherwise.</p>
     */
    inline bool GetImportCompleted() const{ return m_importCompleted; }

    /**
     * <p>True if the migration has completed, or False otherwise.</p>
     */
    inline bool ImportCompletedHasBeenSet() const { return m_importCompletedHasBeenSet; }

    /**
     * <p>True if the migration has completed, or False otherwise.</p>
     */
    inline void SetImportCompleted(bool value) { m_importCompletedHasBeenSet = true; m_importCompleted = value; }

    /**
     * <p>True if the migration has completed, or False otherwise.</p>
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
    bool m_importCompletedHasBeenSet;

    Aws::Utils::DateTime m_importTime;
    bool m_importTimeHasBeenSet;

    Aws::String m_importedBy;
    bool m_importedByHasBeenSet;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
