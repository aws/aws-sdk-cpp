/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/honeycode/Honeycode_EXPORTS.h>
#include <aws/honeycode/model/ImportJobSubmitter.h>
#include <aws/core/utils/DateTime.h>
#include <aws/honeycode/model/ImportOptions.h>
#include <aws/honeycode/model/ImportDataSource.h>
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
namespace Honeycode
{
namespace Model
{

  /**
   * <p>The metadata associated with the table data import job that was
   * submitted.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/honeycode-2020-03-01/TableDataImportJobMetadata">AWS
   * API Reference</a></p>
   */
  class TableDataImportJobMetadata
  {
  public:
    AWS_HONEYCODE_API TableDataImportJobMetadata();
    AWS_HONEYCODE_API TableDataImportJobMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_HONEYCODE_API TableDataImportJobMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_HONEYCODE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Details about the submitter of the import request.</p>
     */
    inline const ImportJobSubmitter& GetSubmitter() const{ return m_submitter; }

    /**
     * <p>Details about the submitter of the import request.</p>
     */
    inline bool SubmitterHasBeenSet() const { return m_submitterHasBeenSet; }

    /**
     * <p>Details about the submitter of the import request.</p>
     */
    inline void SetSubmitter(const ImportJobSubmitter& value) { m_submitterHasBeenSet = true; m_submitter = value; }

    /**
     * <p>Details about the submitter of the import request.</p>
     */
    inline void SetSubmitter(ImportJobSubmitter&& value) { m_submitterHasBeenSet = true; m_submitter = std::move(value); }

    /**
     * <p>Details about the submitter of the import request.</p>
     */
    inline TableDataImportJobMetadata& WithSubmitter(const ImportJobSubmitter& value) { SetSubmitter(value); return *this;}

    /**
     * <p>Details about the submitter of the import request.</p>
     */
    inline TableDataImportJobMetadata& WithSubmitter(ImportJobSubmitter&& value) { SetSubmitter(std::move(value)); return *this;}


    /**
     * <p>The timestamp when the job was submitted for import.</p>
     */
    inline const Aws::Utils::DateTime& GetSubmitTime() const{ return m_submitTime; }

    /**
     * <p>The timestamp when the job was submitted for import.</p>
     */
    inline bool SubmitTimeHasBeenSet() const { return m_submitTimeHasBeenSet; }

    /**
     * <p>The timestamp when the job was submitted for import.</p>
     */
    inline void SetSubmitTime(const Aws::Utils::DateTime& value) { m_submitTimeHasBeenSet = true; m_submitTime = value; }

    /**
     * <p>The timestamp when the job was submitted for import.</p>
     */
    inline void SetSubmitTime(Aws::Utils::DateTime&& value) { m_submitTimeHasBeenSet = true; m_submitTime = std::move(value); }

    /**
     * <p>The timestamp when the job was submitted for import.</p>
     */
    inline TableDataImportJobMetadata& WithSubmitTime(const Aws::Utils::DateTime& value) { SetSubmitTime(value); return *this;}

    /**
     * <p>The timestamp when the job was submitted for import.</p>
     */
    inline TableDataImportJobMetadata& WithSubmitTime(Aws::Utils::DateTime&& value) { SetSubmitTime(std::move(value)); return *this;}


    /**
     * <p>The options that was specified at the time of submitting the import
     * request.</p>
     */
    inline const ImportOptions& GetImportOptions() const{ return m_importOptions; }

    /**
     * <p>The options that was specified at the time of submitting the import
     * request.</p>
     */
    inline bool ImportOptionsHasBeenSet() const { return m_importOptionsHasBeenSet; }

    /**
     * <p>The options that was specified at the time of submitting the import
     * request.</p>
     */
    inline void SetImportOptions(const ImportOptions& value) { m_importOptionsHasBeenSet = true; m_importOptions = value; }

    /**
     * <p>The options that was specified at the time of submitting the import
     * request.</p>
     */
    inline void SetImportOptions(ImportOptions&& value) { m_importOptionsHasBeenSet = true; m_importOptions = std::move(value); }

    /**
     * <p>The options that was specified at the time of submitting the import
     * request.</p>
     */
    inline TableDataImportJobMetadata& WithImportOptions(const ImportOptions& value) { SetImportOptions(value); return *this;}

    /**
     * <p>The options that was specified at the time of submitting the import
     * request.</p>
     */
    inline TableDataImportJobMetadata& WithImportOptions(ImportOptions&& value) { SetImportOptions(std::move(value)); return *this;}


    /**
     * <p>The source of the data that was submitted for import.</p>
     */
    inline const ImportDataSource& GetDataSource() const{ return m_dataSource; }

    /**
     * <p>The source of the data that was submitted for import.</p>
     */
    inline bool DataSourceHasBeenSet() const { return m_dataSourceHasBeenSet; }

    /**
     * <p>The source of the data that was submitted for import.</p>
     */
    inline void SetDataSource(const ImportDataSource& value) { m_dataSourceHasBeenSet = true; m_dataSource = value; }

    /**
     * <p>The source of the data that was submitted for import.</p>
     */
    inline void SetDataSource(ImportDataSource&& value) { m_dataSourceHasBeenSet = true; m_dataSource = std::move(value); }

    /**
     * <p>The source of the data that was submitted for import.</p>
     */
    inline TableDataImportJobMetadata& WithDataSource(const ImportDataSource& value) { SetDataSource(value); return *this;}

    /**
     * <p>The source of the data that was submitted for import.</p>
     */
    inline TableDataImportJobMetadata& WithDataSource(ImportDataSource&& value) { SetDataSource(std::move(value)); return *this;}

  private:

    ImportJobSubmitter m_submitter;
    bool m_submitterHasBeenSet = false;

    Aws::Utils::DateTime m_submitTime;
    bool m_submitTimeHasBeenSet = false;

    ImportOptions m_importOptions;
    bool m_importOptionsHasBeenSet = false;

    ImportDataSource m_dataSource;
    bool m_dataSourceHasBeenSet = false;
  };

} // namespace Model
} // namespace Honeycode
} // namespace Aws
