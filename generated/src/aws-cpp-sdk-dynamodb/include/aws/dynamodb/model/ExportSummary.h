/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dynamodb/model/ExportStatus.h>
#include <aws/dynamodb/model/ExportType.h>
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
   * <p>Summary information about an export task.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/ExportSummary">AWS
   * API Reference</a></p>
   */
  class ExportSummary
  {
  public:
    AWS_DYNAMODB_API ExportSummary() = default;
    AWS_DYNAMODB_API ExportSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API ExportSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the export.</p>
     */
    inline const Aws::String& GetExportArn() const { return m_exportArn; }
    inline bool ExportArnHasBeenSet() const { return m_exportArnHasBeenSet; }
    template<typename ExportArnT = Aws::String>
    void SetExportArn(ExportArnT&& value) { m_exportArnHasBeenSet = true; m_exportArn = std::forward<ExportArnT>(value); }
    template<typename ExportArnT = Aws::String>
    ExportSummary& WithExportArn(ExportArnT&& value) { SetExportArn(std::forward<ExportArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Export can be in one of the following states: IN_PROGRESS, COMPLETED, or
     * FAILED.</p>
     */
    inline ExportStatus GetExportStatus() const { return m_exportStatus; }
    inline bool ExportStatusHasBeenSet() const { return m_exportStatusHasBeenSet; }
    inline void SetExportStatus(ExportStatus value) { m_exportStatusHasBeenSet = true; m_exportStatus = value; }
    inline ExportSummary& WithExportStatus(ExportStatus value) { SetExportStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of export that was performed. Valid values are
     * <code>FULL_EXPORT</code> or <code>INCREMENTAL_EXPORT</code>.</p>
     */
    inline ExportType GetExportType() const { return m_exportType; }
    inline bool ExportTypeHasBeenSet() const { return m_exportTypeHasBeenSet; }
    inline void SetExportType(ExportType value) { m_exportTypeHasBeenSet = true; m_exportType = value; }
    inline ExportSummary& WithExportType(ExportType value) { SetExportType(value); return *this;}
    ///@}
  private:

    Aws::String m_exportArn;
    bool m_exportArnHasBeenSet = false;

    ExportStatus m_exportStatus{ExportStatus::NOT_SET};
    bool m_exportStatusHasBeenSet = false;

    ExportType m_exportType{ExportType::NOT_SET};
    bool m_exportTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
