/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/dynamodb/model/ExportViewType.h>
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
namespace DynamoDB
{
namespace Model
{

  /**
   * <p>Optional object containing the parameters specific to an incremental
   * export.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/IncrementalExportSpecification">AWS
   * API Reference</a></p>
   */
  class IncrementalExportSpecification
  {
  public:
    AWS_DYNAMODB_API IncrementalExportSpecification();
    AWS_DYNAMODB_API IncrementalExportSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API IncrementalExportSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Time in the past which provides the inclusive start range for the export
     * table's data, counted in seconds from the start of the Unix epoch. The
     * incremental export will reflect the table's state including and after this point
     * in time.</p>
     */
    inline const Aws::Utils::DateTime& GetExportFromTime() const{ return m_exportFromTime; }

    /**
     * <p>Time in the past which provides the inclusive start range for the export
     * table's data, counted in seconds from the start of the Unix epoch. The
     * incremental export will reflect the table's state including and after this point
     * in time.</p>
     */
    inline bool ExportFromTimeHasBeenSet() const { return m_exportFromTimeHasBeenSet; }

    /**
     * <p>Time in the past which provides the inclusive start range for the export
     * table's data, counted in seconds from the start of the Unix epoch. The
     * incremental export will reflect the table's state including and after this point
     * in time.</p>
     */
    inline void SetExportFromTime(const Aws::Utils::DateTime& value) { m_exportFromTimeHasBeenSet = true; m_exportFromTime = value; }

    /**
     * <p>Time in the past which provides the inclusive start range for the export
     * table's data, counted in seconds from the start of the Unix epoch. The
     * incremental export will reflect the table's state including and after this point
     * in time.</p>
     */
    inline void SetExportFromTime(Aws::Utils::DateTime&& value) { m_exportFromTimeHasBeenSet = true; m_exportFromTime = std::move(value); }

    /**
     * <p>Time in the past which provides the inclusive start range for the export
     * table's data, counted in seconds from the start of the Unix epoch. The
     * incremental export will reflect the table's state including and after this point
     * in time.</p>
     */
    inline IncrementalExportSpecification& WithExportFromTime(const Aws::Utils::DateTime& value) { SetExportFromTime(value); return *this;}

    /**
     * <p>Time in the past which provides the inclusive start range for the export
     * table's data, counted in seconds from the start of the Unix epoch. The
     * incremental export will reflect the table's state including and after this point
     * in time.</p>
     */
    inline IncrementalExportSpecification& WithExportFromTime(Aws::Utils::DateTime&& value) { SetExportFromTime(std::move(value)); return *this;}


    /**
     * <p>Time in the past which provides the exclusive end range for the export
     * table's data, counted in seconds from the start of the Unix epoch. The
     * incremental export will reflect the table's state just prior to this point in
     * time. If this is not provided, the latest time with data available will be
     * used.</p>
     */
    inline const Aws::Utils::DateTime& GetExportToTime() const{ return m_exportToTime; }

    /**
     * <p>Time in the past which provides the exclusive end range for the export
     * table's data, counted in seconds from the start of the Unix epoch. The
     * incremental export will reflect the table's state just prior to this point in
     * time. If this is not provided, the latest time with data available will be
     * used.</p>
     */
    inline bool ExportToTimeHasBeenSet() const { return m_exportToTimeHasBeenSet; }

    /**
     * <p>Time in the past which provides the exclusive end range for the export
     * table's data, counted in seconds from the start of the Unix epoch. The
     * incremental export will reflect the table's state just prior to this point in
     * time. If this is not provided, the latest time with data available will be
     * used.</p>
     */
    inline void SetExportToTime(const Aws::Utils::DateTime& value) { m_exportToTimeHasBeenSet = true; m_exportToTime = value; }

    /**
     * <p>Time in the past which provides the exclusive end range for the export
     * table's data, counted in seconds from the start of the Unix epoch. The
     * incremental export will reflect the table's state just prior to this point in
     * time. If this is not provided, the latest time with data available will be
     * used.</p>
     */
    inline void SetExportToTime(Aws::Utils::DateTime&& value) { m_exportToTimeHasBeenSet = true; m_exportToTime = std::move(value); }

    /**
     * <p>Time in the past which provides the exclusive end range for the export
     * table's data, counted in seconds from the start of the Unix epoch. The
     * incremental export will reflect the table's state just prior to this point in
     * time. If this is not provided, the latest time with data available will be
     * used.</p>
     */
    inline IncrementalExportSpecification& WithExportToTime(const Aws::Utils::DateTime& value) { SetExportToTime(value); return *this;}

    /**
     * <p>Time in the past which provides the exclusive end range for the export
     * table's data, counted in seconds from the start of the Unix epoch. The
     * incremental export will reflect the table's state just prior to this point in
     * time. If this is not provided, the latest time with data available will be
     * used.</p>
     */
    inline IncrementalExportSpecification& WithExportToTime(Aws::Utils::DateTime&& value) { SetExportToTime(std::move(value)); return *this;}


    /**
     * <p>The view type that was chosen for the export. Valid values are
     * <code>NEW_AND_OLD_IMAGES</code> and <code>NEW_IMAGES</code>. The default value
     * is <code>NEW_AND_OLD_IMAGES</code>.</p>
     */
    inline const ExportViewType& GetExportViewType() const{ return m_exportViewType; }

    /**
     * <p>The view type that was chosen for the export. Valid values are
     * <code>NEW_AND_OLD_IMAGES</code> and <code>NEW_IMAGES</code>. The default value
     * is <code>NEW_AND_OLD_IMAGES</code>.</p>
     */
    inline bool ExportViewTypeHasBeenSet() const { return m_exportViewTypeHasBeenSet; }

    /**
     * <p>The view type that was chosen for the export. Valid values are
     * <code>NEW_AND_OLD_IMAGES</code> and <code>NEW_IMAGES</code>. The default value
     * is <code>NEW_AND_OLD_IMAGES</code>.</p>
     */
    inline void SetExportViewType(const ExportViewType& value) { m_exportViewTypeHasBeenSet = true; m_exportViewType = value; }

    /**
     * <p>The view type that was chosen for the export. Valid values are
     * <code>NEW_AND_OLD_IMAGES</code> and <code>NEW_IMAGES</code>. The default value
     * is <code>NEW_AND_OLD_IMAGES</code>.</p>
     */
    inline void SetExportViewType(ExportViewType&& value) { m_exportViewTypeHasBeenSet = true; m_exportViewType = std::move(value); }

    /**
     * <p>The view type that was chosen for the export. Valid values are
     * <code>NEW_AND_OLD_IMAGES</code> and <code>NEW_IMAGES</code>. The default value
     * is <code>NEW_AND_OLD_IMAGES</code>.</p>
     */
    inline IncrementalExportSpecification& WithExportViewType(const ExportViewType& value) { SetExportViewType(value); return *this;}

    /**
     * <p>The view type that was chosen for the export. Valid values are
     * <code>NEW_AND_OLD_IMAGES</code> and <code>NEW_IMAGES</code>. The default value
     * is <code>NEW_AND_OLD_IMAGES</code>.</p>
     */
    inline IncrementalExportSpecification& WithExportViewType(ExportViewType&& value) { SetExportViewType(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_exportFromTime;
    bool m_exportFromTimeHasBeenSet = false;

    Aws::Utils::DateTime m_exportToTime;
    bool m_exportToTimeHasBeenSet = false;

    ExportViewType m_exportViewType;
    bool m_exportViewTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
