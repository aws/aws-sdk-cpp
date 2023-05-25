/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dynamodb/model/ExportStatus.h>
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
    AWS_DYNAMODB_API ExportSummary();
    AWS_DYNAMODB_API ExportSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API ExportSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the export.</p>
     */
    inline const Aws::String& GetExportArn() const{ return m_exportArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the export.</p>
     */
    inline bool ExportArnHasBeenSet() const { return m_exportArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the export.</p>
     */
    inline void SetExportArn(const Aws::String& value) { m_exportArnHasBeenSet = true; m_exportArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the export.</p>
     */
    inline void SetExportArn(Aws::String&& value) { m_exportArnHasBeenSet = true; m_exportArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the export.</p>
     */
    inline void SetExportArn(const char* value) { m_exportArnHasBeenSet = true; m_exportArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the export.</p>
     */
    inline ExportSummary& WithExportArn(const Aws::String& value) { SetExportArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the export.</p>
     */
    inline ExportSummary& WithExportArn(Aws::String&& value) { SetExportArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the export.</p>
     */
    inline ExportSummary& WithExportArn(const char* value) { SetExportArn(value); return *this;}


    /**
     * <p>Export can be in one of the following states: IN_PROGRESS, COMPLETED, or
     * FAILED.</p>
     */
    inline const ExportStatus& GetExportStatus() const{ return m_exportStatus; }

    /**
     * <p>Export can be in one of the following states: IN_PROGRESS, COMPLETED, or
     * FAILED.</p>
     */
    inline bool ExportStatusHasBeenSet() const { return m_exportStatusHasBeenSet; }

    /**
     * <p>Export can be in one of the following states: IN_PROGRESS, COMPLETED, or
     * FAILED.</p>
     */
    inline void SetExportStatus(const ExportStatus& value) { m_exportStatusHasBeenSet = true; m_exportStatus = value; }

    /**
     * <p>Export can be in one of the following states: IN_PROGRESS, COMPLETED, or
     * FAILED.</p>
     */
    inline void SetExportStatus(ExportStatus&& value) { m_exportStatusHasBeenSet = true; m_exportStatus = std::move(value); }

    /**
     * <p>Export can be in one of the following states: IN_PROGRESS, COMPLETED, or
     * FAILED.</p>
     */
    inline ExportSummary& WithExportStatus(const ExportStatus& value) { SetExportStatus(value); return *this;}

    /**
     * <p>Export can be in one of the following states: IN_PROGRESS, COMPLETED, or
     * FAILED.</p>
     */
    inline ExportSummary& WithExportStatus(ExportStatus&& value) { SetExportStatus(std::move(value)); return *this;}

  private:

    Aws::String m_exportArn;
    bool m_exportArnHasBeenSet = false;

    ExportStatus m_exportStatus;
    bool m_exportStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
