/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/omics/model/JobStatus.h>
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
namespace Omics
{
namespace Model
{

  /**
   * <p>Details about an imported variant item.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/omics-2022-11-28/VariantImportItemDetail">AWS
   * API Reference</a></p>
   */
  class VariantImportItemDetail
  {
  public:
    AWS_OMICS_API VariantImportItemDetail();
    AWS_OMICS_API VariantImportItemDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API VariantImportItemDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OMICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The item's job status.</p>
     */
    inline const JobStatus& GetJobStatus() const{ return m_jobStatus; }

    /**
     * <p>The item's job status.</p>
     */
    inline bool JobStatusHasBeenSet() const { return m_jobStatusHasBeenSet; }

    /**
     * <p>The item's job status.</p>
     */
    inline void SetJobStatus(const JobStatus& value) { m_jobStatusHasBeenSet = true; m_jobStatus = value; }

    /**
     * <p>The item's job status.</p>
     */
    inline void SetJobStatus(JobStatus&& value) { m_jobStatusHasBeenSet = true; m_jobStatus = std::move(value); }

    /**
     * <p>The item's job status.</p>
     */
    inline VariantImportItemDetail& WithJobStatus(const JobStatus& value) { SetJobStatus(value); return *this;}

    /**
     * <p>The item's job status.</p>
     */
    inline VariantImportItemDetail& WithJobStatus(JobStatus&& value) { SetJobStatus(std::move(value)); return *this;}


    /**
     * <p>The source file's location in Amazon S3.</p>
     */
    inline const Aws::String& GetSource() const{ return m_source; }

    /**
     * <p>The source file's location in Amazon S3.</p>
     */
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }

    /**
     * <p>The source file's location in Amazon S3.</p>
     */
    inline void SetSource(const Aws::String& value) { m_sourceHasBeenSet = true; m_source = value; }

    /**
     * <p>The source file's location in Amazon S3.</p>
     */
    inline void SetSource(Aws::String&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }

    /**
     * <p>The source file's location in Amazon S3.</p>
     */
    inline void SetSource(const char* value) { m_sourceHasBeenSet = true; m_source.assign(value); }

    /**
     * <p>The source file's location in Amazon S3.</p>
     */
    inline VariantImportItemDetail& WithSource(const Aws::String& value) { SetSource(value); return *this;}

    /**
     * <p>The source file's location in Amazon S3.</p>
     */
    inline VariantImportItemDetail& WithSource(Aws::String&& value) { SetSource(std::move(value)); return *this;}

    /**
     * <p>The source file's location in Amazon S3.</p>
     */
    inline VariantImportItemDetail& WithSource(const char* value) { SetSource(value); return *this;}

  private:

    JobStatus m_jobStatus;
    bool m_jobStatusHasBeenSet = false;

    Aws::String m_source;
    bool m_sourceHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
