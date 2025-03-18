/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class MappingEntry
  {
  public:
    AWS_GLUE_API MappingEntry() = default;
    AWS_GLUE_API MappingEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API MappingEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the source table.</p>
     */
    inline const Aws::String& GetSourceTable() const { return m_sourceTable; }
    inline bool SourceTableHasBeenSet() const { return m_sourceTableHasBeenSet; }
    template<typename SourceTableT = Aws::String>
    void SetSourceTable(SourceTableT&& value) { m_sourceTableHasBeenSet = true; m_sourceTable = std::forward<SourceTableT>(value); }
    template<typename SourceTableT = Aws::String>
    MappingEntry& WithSourceTable(SourceTableT&& value) { SetSourceTable(std::forward<SourceTableT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source path.</p>
     */
    inline const Aws::String& GetSourcePath() const { return m_sourcePath; }
    inline bool SourcePathHasBeenSet() const { return m_sourcePathHasBeenSet; }
    template<typename SourcePathT = Aws::String>
    void SetSourcePath(SourcePathT&& value) { m_sourcePathHasBeenSet = true; m_sourcePath = std::forward<SourcePathT>(value); }
    template<typename SourcePathT = Aws::String>
    MappingEntry& WithSourcePath(SourcePathT&& value) { SetSourcePath(std::forward<SourcePathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source type.</p>
     */
    inline const Aws::String& GetSourceType() const { return m_sourceType; }
    inline bool SourceTypeHasBeenSet() const { return m_sourceTypeHasBeenSet; }
    template<typename SourceTypeT = Aws::String>
    void SetSourceType(SourceTypeT&& value) { m_sourceTypeHasBeenSet = true; m_sourceType = std::forward<SourceTypeT>(value); }
    template<typename SourceTypeT = Aws::String>
    MappingEntry& WithSourceType(SourceTypeT&& value) { SetSourceType(std::forward<SourceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target table.</p>
     */
    inline const Aws::String& GetTargetTable() const { return m_targetTable; }
    inline bool TargetTableHasBeenSet() const { return m_targetTableHasBeenSet; }
    template<typename TargetTableT = Aws::String>
    void SetTargetTable(TargetTableT&& value) { m_targetTableHasBeenSet = true; m_targetTable = std::forward<TargetTableT>(value); }
    template<typename TargetTableT = Aws::String>
    MappingEntry& WithTargetTable(TargetTableT&& value) { SetTargetTable(std::forward<TargetTableT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target path.</p>
     */
    inline const Aws::String& GetTargetPath() const { return m_targetPath; }
    inline bool TargetPathHasBeenSet() const { return m_targetPathHasBeenSet; }
    template<typename TargetPathT = Aws::String>
    void SetTargetPath(TargetPathT&& value) { m_targetPathHasBeenSet = true; m_targetPath = std::forward<TargetPathT>(value); }
    template<typename TargetPathT = Aws::String>
    MappingEntry& WithTargetPath(TargetPathT&& value) { SetTargetPath(std::forward<TargetPathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target type.</p>
     */
    inline const Aws::String& GetTargetType() const { return m_targetType; }
    inline bool TargetTypeHasBeenSet() const { return m_targetTypeHasBeenSet; }
    template<typename TargetTypeT = Aws::String>
    void SetTargetType(TargetTypeT&& value) { m_targetTypeHasBeenSet = true; m_targetType = std::forward<TargetTypeT>(value); }
    template<typename TargetTypeT = Aws::String>
    MappingEntry& WithTargetType(TargetTypeT&& value) { SetTargetType(std::forward<TargetTypeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_sourceTable;
    bool m_sourceTableHasBeenSet = false;

    Aws::String m_sourcePath;
    bool m_sourcePathHasBeenSet = false;

    Aws::String m_sourceType;
    bool m_sourceTypeHasBeenSet = false;

    Aws::String m_targetTable;
    bool m_targetTableHasBeenSet = false;

    Aws::String m_targetPath;
    bool m_targetPathHasBeenSet = false;

    Aws::String m_targetType;
    bool m_targetTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
