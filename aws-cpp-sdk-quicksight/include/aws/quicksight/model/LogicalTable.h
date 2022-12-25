/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/LogicalTableSource.h>
#include <aws/quicksight/model/TransformOperation.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>A <i>logical table</i> is a unit that joins and that data transformations
   * operate on. A logical table has a source, which can be either a physical table
   * or result of a join. When a logical table points to a physical table, the
   * logical table acts as a mutable copy of that physical table through transform
   * operations.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/LogicalTable">AWS
   * API Reference</a></p>
   */
  class LogicalTable
  {
  public:
    AWS_QUICKSIGHT_API LogicalTable();
    AWS_QUICKSIGHT_API LogicalTable(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API LogicalTable& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A display name for the logical table.</p>
     */
    inline const Aws::String& GetAlias() const{ return m_alias; }

    /**
     * <p>A display name for the logical table.</p>
     */
    inline bool AliasHasBeenSet() const { return m_aliasHasBeenSet; }

    /**
     * <p>A display name for the logical table.</p>
     */
    inline void SetAlias(const Aws::String& value) { m_aliasHasBeenSet = true; m_alias = value; }

    /**
     * <p>A display name for the logical table.</p>
     */
    inline void SetAlias(Aws::String&& value) { m_aliasHasBeenSet = true; m_alias = std::move(value); }

    /**
     * <p>A display name for the logical table.</p>
     */
    inline void SetAlias(const char* value) { m_aliasHasBeenSet = true; m_alias.assign(value); }

    /**
     * <p>A display name for the logical table.</p>
     */
    inline LogicalTable& WithAlias(const Aws::String& value) { SetAlias(value); return *this;}

    /**
     * <p>A display name for the logical table.</p>
     */
    inline LogicalTable& WithAlias(Aws::String&& value) { SetAlias(std::move(value)); return *this;}

    /**
     * <p>A display name for the logical table.</p>
     */
    inline LogicalTable& WithAlias(const char* value) { SetAlias(value); return *this;}


    /**
     * <p>Transform operations that act on this logical table.</p>
     */
    inline const Aws::Vector<TransformOperation>& GetDataTransforms() const{ return m_dataTransforms; }

    /**
     * <p>Transform operations that act on this logical table.</p>
     */
    inline bool DataTransformsHasBeenSet() const { return m_dataTransformsHasBeenSet; }

    /**
     * <p>Transform operations that act on this logical table.</p>
     */
    inline void SetDataTransforms(const Aws::Vector<TransformOperation>& value) { m_dataTransformsHasBeenSet = true; m_dataTransforms = value; }

    /**
     * <p>Transform operations that act on this logical table.</p>
     */
    inline void SetDataTransforms(Aws::Vector<TransformOperation>&& value) { m_dataTransformsHasBeenSet = true; m_dataTransforms = std::move(value); }

    /**
     * <p>Transform operations that act on this logical table.</p>
     */
    inline LogicalTable& WithDataTransforms(const Aws::Vector<TransformOperation>& value) { SetDataTransforms(value); return *this;}

    /**
     * <p>Transform operations that act on this logical table.</p>
     */
    inline LogicalTable& WithDataTransforms(Aws::Vector<TransformOperation>&& value) { SetDataTransforms(std::move(value)); return *this;}

    /**
     * <p>Transform operations that act on this logical table.</p>
     */
    inline LogicalTable& AddDataTransforms(const TransformOperation& value) { m_dataTransformsHasBeenSet = true; m_dataTransforms.push_back(value); return *this; }

    /**
     * <p>Transform operations that act on this logical table.</p>
     */
    inline LogicalTable& AddDataTransforms(TransformOperation&& value) { m_dataTransformsHasBeenSet = true; m_dataTransforms.push_back(std::move(value)); return *this; }


    /**
     * <p>Source of this logical table.</p>
     */
    inline const LogicalTableSource& GetSource() const{ return m_source; }

    /**
     * <p>Source of this logical table.</p>
     */
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }

    /**
     * <p>Source of this logical table.</p>
     */
    inline void SetSource(const LogicalTableSource& value) { m_sourceHasBeenSet = true; m_source = value; }

    /**
     * <p>Source of this logical table.</p>
     */
    inline void SetSource(LogicalTableSource&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }

    /**
     * <p>Source of this logical table.</p>
     */
    inline LogicalTable& WithSource(const LogicalTableSource& value) { SetSource(value); return *this;}

    /**
     * <p>Source of this logical table.</p>
     */
    inline LogicalTable& WithSource(LogicalTableSource&& value) { SetSource(std::move(value)); return *this;}

  private:

    Aws::String m_alias;
    bool m_aliasHasBeenSet = false;

    Aws::Vector<TransformOperation> m_dataTransforms;
    bool m_dataTransformsHasBeenSet = false;

    LogicalTableSource m_source;
    bool m_sourceHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
