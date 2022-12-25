/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/honeycode/Honeycode_EXPORTS.h>
#include <aws/honeycode/HoneycodeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Honeycode
{
namespace Model
{

  /**
   */
  class DescribeTableDataImportJobRequest : public HoneycodeRequest
  {
  public:
    AWS_HONEYCODE_API DescribeTableDataImportJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeTableDataImportJob"; }

    AWS_HONEYCODE_API Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the workbook into which data was imported.</p> <p> If a workbook
     * with the specified id could not be found, this API throws
     * ResourceNotFoundException. </p>
     */
    inline const Aws::String& GetWorkbookId() const{ return m_workbookId; }

    /**
     * <p>The ID of the workbook into which data was imported.</p> <p> If a workbook
     * with the specified id could not be found, this API throws
     * ResourceNotFoundException. </p>
     */
    inline bool WorkbookIdHasBeenSet() const { return m_workbookIdHasBeenSet; }

    /**
     * <p>The ID of the workbook into which data was imported.</p> <p> If a workbook
     * with the specified id could not be found, this API throws
     * ResourceNotFoundException. </p>
     */
    inline void SetWorkbookId(const Aws::String& value) { m_workbookIdHasBeenSet = true; m_workbookId = value; }

    /**
     * <p>The ID of the workbook into which data was imported.</p> <p> If a workbook
     * with the specified id could not be found, this API throws
     * ResourceNotFoundException. </p>
     */
    inline void SetWorkbookId(Aws::String&& value) { m_workbookIdHasBeenSet = true; m_workbookId = std::move(value); }

    /**
     * <p>The ID of the workbook into which data was imported.</p> <p> If a workbook
     * with the specified id could not be found, this API throws
     * ResourceNotFoundException. </p>
     */
    inline void SetWorkbookId(const char* value) { m_workbookIdHasBeenSet = true; m_workbookId.assign(value); }

    /**
     * <p>The ID of the workbook into which data was imported.</p> <p> If a workbook
     * with the specified id could not be found, this API throws
     * ResourceNotFoundException. </p>
     */
    inline DescribeTableDataImportJobRequest& WithWorkbookId(const Aws::String& value) { SetWorkbookId(value); return *this;}

    /**
     * <p>The ID of the workbook into which data was imported.</p> <p> If a workbook
     * with the specified id could not be found, this API throws
     * ResourceNotFoundException. </p>
     */
    inline DescribeTableDataImportJobRequest& WithWorkbookId(Aws::String&& value) { SetWorkbookId(std::move(value)); return *this;}

    /**
     * <p>The ID of the workbook into which data was imported.</p> <p> If a workbook
     * with the specified id could not be found, this API throws
     * ResourceNotFoundException. </p>
     */
    inline DescribeTableDataImportJobRequest& WithWorkbookId(const char* value) { SetWorkbookId(value); return *this;}


    /**
     * <p>The ID of the table into which data was imported.</p> <p> If a table with the
     * specified id could not be found, this API throws ResourceNotFoundException. </p>
     */
    inline const Aws::String& GetTableId() const{ return m_tableId; }

    /**
     * <p>The ID of the table into which data was imported.</p> <p> If a table with the
     * specified id could not be found, this API throws ResourceNotFoundException. </p>
     */
    inline bool TableIdHasBeenSet() const { return m_tableIdHasBeenSet; }

    /**
     * <p>The ID of the table into which data was imported.</p> <p> If a table with the
     * specified id could not be found, this API throws ResourceNotFoundException. </p>
     */
    inline void SetTableId(const Aws::String& value) { m_tableIdHasBeenSet = true; m_tableId = value; }

    /**
     * <p>The ID of the table into which data was imported.</p> <p> If a table with the
     * specified id could not be found, this API throws ResourceNotFoundException. </p>
     */
    inline void SetTableId(Aws::String&& value) { m_tableIdHasBeenSet = true; m_tableId = std::move(value); }

    /**
     * <p>The ID of the table into which data was imported.</p> <p> If a table with the
     * specified id could not be found, this API throws ResourceNotFoundException. </p>
     */
    inline void SetTableId(const char* value) { m_tableIdHasBeenSet = true; m_tableId.assign(value); }

    /**
     * <p>The ID of the table into which data was imported.</p> <p> If a table with the
     * specified id could not be found, this API throws ResourceNotFoundException. </p>
     */
    inline DescribeTableDataImportJobRequest& WithTableId(const Aws::String& value) { SetTableId(value); return *this;}

    /**
     * <p>The ID of the table into which data was imported.</p> <p> If a table with the
     * specified id could not be found, this API throws ResourceNotFoundException. </p>
     */
    inline DescribeTableDataImportJobRequest& WithTableId(Aws::String&& value) { SetTableId(std::move(value)); return *this;}

    /**
     * <p>The ID of the table into which data was imported.</p> <p> If a table with the
     * specified id could not be found, this API throws ResourceNotFoundException. </p>
     */
    inline DescribeTableDataImportJobRequest& WithTableId(const char* value) { SetTableId(value); return *this;}


    /**
     * <p>The ID of the job that was returned by the StartTableDataImportJob
     * request.</p> <p> If a job with the specified id could not be found, this API
     * throws ResourceNotFoundException. </p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    /**
     * <p>The ID of the job that was returned by the StartTableDataImportJob
     * request.</p> <p> If a job with the specified id could not be found, this API
     * throws ResourceNotFoundException. </p>
     */
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }

    /**
     * <p>The ID of the job that was returned by the StartTableDataImportJob
     * request.</p> <p> If a job with the specified id could not be found, this API
     * throws ResourceNotFoundException. </p>
     */
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }

    /**
     * <p>The ID of the job that was returned by the StartTableDataImportJob
     * request.</p> <p> If a job with the specified id could not be found, this API
     * throws ResourceNotFoundException. </p>
     */
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = std::move(value); }

    /**
     * <p>The ID of the job that was returned by the StartTableDataImportJob
     * request.</p> <p> If a job with the specified id could not be found, this API
     * throws ResourceNotFoundException. </p>
     */
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }

    /**
     * <p>The ID of the job that was returned by the StartTableDataImportJob
     * request.</p> <p> If a job with the specified id could not be found, this API
     * throws ResourceNotFoundException. </p>
     */
    inline DescribeTableDataImportJobRequest& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    /**
     * <p>The ID of the job that was returned by the StartTableDataImportJob
     * request.</p> <p> If a job with the specified id could not be found, this API
     * throws ResourceNotFoundException. </p>
     */
    inline DescribeTableDataImportJobRequest& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}

    /**
     * <p>The ID of the job that was returned by the StartTableDataImportJob
     * request.</p> <p> If a job with the specified id could not be found, this API
     * throws ResourceNotFoundException. </p>
     */
    inline DescribeTableDataImportJobRequest& WithJobId(const char* value) { SetJobId(value); return *this;}

  private:

    Aws::String m_workbookId;
    bool m_workbookIdHasBeenSet = false;

    Aws::String m_tableId;
    bool m_tableIdHasBeenSet = false;

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Honeycode
} // namespace Aws
