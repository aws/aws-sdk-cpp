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
   * <p>Defines a mapping.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/MappingEntry">AWS
   * API Reference</a></p>
   */
  class AWS_GLUE_API MappingEntry
  {
  public:
    MappingEntry();
    MappingEntry(Aws::Utils::Json::JsonView jsonValue);
    MappingEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the source table.</p>
     */
    inline const Aws::String& GetSourceTable() const{ return m_sourceTable; }

    /**
     * <p>The name of the source table.</p>
     */
    inline bool SourceTableHasBeenSet() const { return m_sourceTableHasBeenSet; }

    /**
     * <p>The name of the source table.</p>
     */
    inline void SetSourceTable(const Aws::String& value) { m_sourceTableHasBeenSet = true; m_sourceTable = value; }

    /**
     * <p>The name of the source table.</p>
     */
    inline void SetSourceTable(Aws::String&& value) { m_sourceTableHasBeenSet = true; m_sourceTable = std::move(value); }

    /**
     * <p>The name of the source table.</p>
     */
    inline void SetSourceTable(const char* value) { m_sourceTableHasBeenSet = true; m_sourceTable.assign(value); }

    /**
     * <p>The name of the source table.</p>
     */
    inline MappingEntry& WithSourceTable(const Aws::String& value) { SetSourceTable(value); return *this;}

    /**
     * <p>The name of the source table.</p>
     */
    inline MappingEntry& WithSourceTable(Aws::String&& value) { SetSourceTable(std::move(value)); return *this;}

    /**
     * <p>The name of the source table.</p>
     */
    inline MappingEntry& WithSourceTable(const char* value) { SetSourceTable(value); return *this;}


    /**
     * <p>The source path.</p>
     */
    inline const Aws::String& GetSourcePath() const{ return m_sourcePath; }

    /**
     * <p>The source path.</p>
     */
    inline bool SourcePathHasBeenSet() const { return m_sourcePathHasBeenSet; }

    /**
     * <p>The source path.</p>
     */
    inline void SetSourcePath(const Aws::String& value) { m_sourcePathHasBeenSet = true; m_sourcePath = value; }

    /**
     * <p>The source path.</p>
     */
    inline void SetSourcePath(Aws::String&& value) { m_sourcePathHasBeenSet = true; m_sourcePath = std::move(value); }

    /**
     * <p>The source path.</p>
     */
    inline void SetSourcePath(const char* value) { m_sourcePathHasBeenSet = true; m_sourcePath.assign(value); }

    /**
     * <p>The source path.</p>
     */
    inline MappingEntry& WithSourcePath(const Aws::String& value) { SetSourcePath(value); return *this;}

    /**
     * <p>The source path.</p>
     */
    inline MappingEntry& WithSourcePath(Aws::String&& value) { SetSourcePath(std::move(value)); return *this;}

    /**
     * <p>The source path.</p>
     */
    inline MappingEntry& WithSourcePath(const char* value) { SetSourcePath(value); return *this;}


    /**
     * <p>The source type.</p>
     */
    inline const Aws::String& GetSourceType() const{ return m_sourceType; }

    /**
     * <p>The source type.</p>
     */
    inline bool SourceTypeHasBeenSet() const { return m_sourceTypeHasBeenSet; }

    /**
     * <p>The source type.</p>
     */
    inline void SetSourceType(const Aws::String& value) { m_sourceTypeHasBeenSet = true; m_sourceType = value; }

    /**
     * <p>The source type.</p>
     */
    inline void SetSourceType(Aws::String&& value) { m_sourceTypeHasBeenSet = true; m_sourceType = std::move(value); }

    /**
     * <p>The source type.</p>
     */
    inline void SetSourceType(const char* value) { m_sourceTypeHasBeenSet = true; m_sourceType.assign(value); }

    /**
     * <p>The source type.</p>
     */
    inline MappingEntry& WithSourceType(const Aws::String& value) { SetSourceType(value); return *this;}

    /**
     * <p>The source type.</p>
     */
    inline MappingEntry& WithSourceType(Aws::String&& value) { SetSourceType(std::move(value)); return *this;}

    /**
     * <p>The source type.</p>
     */
    inline MappingEntry& WithSourceType(const char* value) { SetSourceType(value); return *this;}


    /**
     * <p>The target table.</p>
     */
    inline const Aws::String& GetTargetTable() const{ return m_targetTable; }

    /**
     * <p>The target table.</p>
     */
    inline bool TargetTableHasBeenSet() const { return m_targetTableHasBeenSet; }

    /**
     * <p>The target table.</p>
     */
    inline void SetTargetTable(const Aws::String& value) { m_targetTableHasBeenSet = true; m_targetTable = value; }

    /**
     * <p>The target table.</p>
     */
    inline void SetTargetTable(Aws::String&& value) { m_targetTableHasBeenSet = true; m_targetTable = std::move(value); }

    /**
     * <p>The target table.</p>
     */
    inline void SetTargetTable(const char* value) { m_targetTableHasBeenSet = true; m_targetTable.assign(value); }

    /**
     * <p>The target table.</p>
     */
    inline MappingEntry& WithTargetTable(const Aws::String& value) { SetTargetTable(value); return *this;}

    /**
     * <p>The target table.</p>
     */
    inline MappingEntry& WithTargetTable(Aws::String&& value) { SetTargetTable(std::move(value)); return *this;}

    /**
     * <p>The target table.</p>
     */
    inline MappingEntry& WithTargetTable(const char* value) { SetTargetTable(value); return *this;}


    /**
     * <p>The target path.</p>
     */
    inline const Aws::String& GetTargetPath() const{ return m_targetPath; }

    /**
     * <p>The target path.</p>
     */
    inline bool TargetPathHasBeenSet() const { return m_targetPathHasBeenSet; }

    /**
     * <p>The target path.</p>
     */
    inline void SetTargetPath(const Aws::String& value) { m_targetPathHasBeenSet = true; m_targetPath = value; }

    /**
     * <p>The target path.</p>
     */
    inline void SetTargetPath(Aws::String&& value) { m_targetPathHasBeenSet = true; m_targetPath = std::move(value); }

    /**
     * <p>The target path.</p>
     */
    inline void SetTargetPath(const char* value) { m_targetPathHasBeenSet = true; m_targetPath.assign(value); }

    /**
     * <p>The target path.</p>
     */
    inline MappingEntry& WithTargetPath(const Aws::String& value) { SetTargetPath(value); return *this;}

    /**
     * <p>The target path.</p>
     */
    inline MappingEntry& WithTargetPath(Aws::String&& value) { SetTargetPath(std::move(value)); return *this;}

    /**
     * <p>The target path.</p>
     */
    inline MappingEntry& WithTargetPath(const char* value) { SetTargetPath(value); return *this;}


    /**
     * <p>The target type.</p>
     */
    inline const Aws::String& GetTargetType() const{ return m_targetType; }

    /**
     * <p>The target type.</p>
     */
    inline bool TargetTypeHasBeenSet() const { return m_targetTypeHasBeenSet; }

    /**
     * <p>The target type.</p>
     */
    inline void SetTargetType(const Aws::String& value) { m_targetTypeHasBeenSet = true; m_targetType = value; }

    /**
     * <p>The target type.</p>
     */
    inline void SetTargetType(Aws::String&& value) { m_targetTypeHasBeenSet = true; m_targetType = std::move(value); }

    /**
     * <p>The target type.</p>
     */
    inline void SetTargetType(const char* value) { m_targetTypeHasBeenSet = true; m_targetType.assign(value); }

    /**
     * <p>The target type.</p>
     */
    inline MappingEntry& WithTargetType(const Aws::String& value) { SetTargetType(value); return *this;}

    /**
     * <p>The target type.</p>
     */
    inline MappingEntry& WithTargetType(Aws::String&& value) { SetTargetType(std::move(value)); return *this;}

    /**
     * <p>The target type.</p>
     */
    inline MappingEntry& WithTargetType(const char* value) { SetTargetType(value); return *this;}

  private:

    Aws::String m_sourceTable;
    bool m_sourceTableHasBeenSet;

    Aws::String m_sourcePath;
    bool m_sourcePathHasBeenSet;

    Aws::String m_sourceType;
    bool m_sourceTypeHasBeenSet;

    Aws::String m_targetTable;
    bool m_targetTableHasBeenSet;

    Aws::String m_targetPath;
    bool m_targetPathHasBeenSet;

    Aws::String m_targetType;
    bool m_targetTypeHasBeenSet;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
