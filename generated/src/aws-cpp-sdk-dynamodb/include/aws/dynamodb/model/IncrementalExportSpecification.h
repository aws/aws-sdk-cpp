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
    AWS_DYNAMODB_API IncrementalExportSpecification() = default;
    AWS_DYNAMODB_API IncrementalExportSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API IncrementalExportSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Time in the past which provides the inclusive start range for the export
     * table's data, counted in seconds from the start of the Unix epoch. The
     * incremental export will reflect the table's state including and after this point
     * in time.</p>
     */
    inline const Aws::Utils::DateTime& GetExportFromTime() const { return m_exportFromTime; }
    inline bool ExportFromTimeHasBeenSet() const { return m_exportFromTimeHasBeenSet; }
    template<typename ExportFromTimeT = Aws::Utils::DateTime>
    void SetExportFromTime(ExportFromTimeT&& value) { m_exportFromTimeHasBeenSet = true; m_exportFromTime = std::forward<ExportFromTimeT>(value); }
    template<typename ExportFromTimeT = Aws::Utils::DateTime>
    IncrementalExportSpecification& WithExportFromTime(ExportFromTimeT&& value) { SetExportFromTime(std::forward<ExportFromTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Time in the past which provides the exclusive end range for the export
     * table's data, counted in seconds from the start of the Unix epoch. The
     * incremental export will reflect the table's state just prior to this point in
     * time. If this is not provided, the latest time with data available will be
     * used.</p>
     */
    inline const Aws::Utils::DateTime& GetExportToTime() const { return m_exportToTime; }
    inline bool ExportToTimeHasBeenSet() const { return m_exportToTimeHasBeenSet; }
    template<typename ExportToTimeT = Aws::Utils::DateTime>
    void SetExportToTime(ExportToTimeT&& value) { m_exportToTimeHasBeenSet = true; m_exportToTime = std::forward<ExportToTimeT>(value); }
    template<typename ExportToTimeT = Aws::Utils::DateTime>
    IncrementalExportSpecification& WithExportToTime(ExportToTimeT&& value) { SetExportToTime(std::forward<ExportToTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The view type that was chosen for the export. Valid values are
     * <code>NEW_AND_OLD_IMAGES</code> and <code>NEW_IMAGES</code>. The default value
     * is <code>NEW_AND_OLD_IMAGES</code>.</p>
     */
    inline ExportViewType GetExportViewType() const { return m_exportViewType; }
    inline bool ExportViewTypeHasBeenSet() const { return m_exportViewTypeHasBeenSet; }
    inline void SetExportViewType(ExportViewType value) { m_exportViewTypeHasBeenSet = true; m_exportViewType = value; }
    inline IncrementalExportSpecification& WithExportViewType(ExportViewType value) { SetExportViewType(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_exportFromTime{};
    bool m_exportFromTimeHasBeenSet = false;

    Aws::Utils::DateTime m_exportToTime{};
    bool m_exportToTimeHasBeenSet = false;

    ExportViewType m_exportViewType{ExportViewType::NOT_SET};
    bool m_exportViewTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
