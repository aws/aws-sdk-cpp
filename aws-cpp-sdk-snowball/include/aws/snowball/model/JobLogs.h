/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/snowball/Snowball_EXPORTS.h>
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
namespace Snowball
{
namespace Model
{

  /**
   * <p>Contains job logs. Whenever a Snow device is used to import data into or
   * export data out of Amazon S3, you'll have the option of downloading a PDF job
   * report. Job logs are returned as a part of the response syntax of the
   * <code>DescribeJob</code> action in the <code>JobMetadata</code> data type. The
   * job logs can be accessed for up to 60 minutes after this request has been made.
   * To access any of the job logs after 60 minutes have passed, you'll have to make
   * another call to the <code>DescribeJob</code> action.</p> <p>For import jobs, the
   * PDF job report becomes available at the end of the import process. For export
   * jobs, your job report typically becomes available while the Snow device for your
   * job part is being delivered to you.</p> <p>The job report provides you insight
   * into the state of your Amazon S3 data transfer. The report includes details
   * about your job or job part for your records.</p> <p>For deeper visibility into
   * the status of your transferred objects, you can look at the two associated logs:
   * a success log and a failure log. The logs are saved in comma-separated value
   * (CSV) format, and the name of each log includes the ID of the job or job part
   * that the log describes.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/snowball-2016-06-30/JobLogs">AWS
   * API Reference</a></p>
   */
  class JobLogs
  {
  public:
    AWS_SNOWBALL_API JobLogs();
    AWS_SNOWBALL_API JobLogs(Aws::Utils::Json::JsonView jsonValue);
    AWS_SNOWBALL_API JobLogs& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SNOWBALL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A link to an Amazon S3 presigned URL where the job completion report is
     * located.</p>
     */
    inline const Aws::String& GetJobCompletionReportURI() const{ return m_jobCompletionReportURI; }

    /**
     * <p>A link to an Amazon S3 presigned URL where the job completion report is
     * located.</p>
     */
    inline bool JobCompletionReportURIHasBeenSet() const { return m_jobCompletionReportURIHasBeenSet; }

    /**
     * <p>A link to an Amazon S3 presigned URL where the job completion report is
     * located.</p>
     */
    inline void SetJobCompletionReportURI(const Aws::String& value) { m_jobCompletionReportURIHasBeenSet = true; m_jobCompletionReportURI = value; }

    /**
     * <p>A link to an Amazon S3 presigned URL where the job completion report is
     * located.</p>
     */
    inline void SetJobCompletionReportURI(Aws::String&& value) { m_jobCompletionReportURIHasBeenSet = true; m_jobCompletionReportURI = std::move(value); }

    /**
     * <p>A link to an Amazon S3 presigned URL where the job completion report is
     * located.</p>
     */
    inline void SetJobCompletionReportURI(const char* value) { m_jobCompletionReportURIHasBeenSet = true; m_jobCompletionReportURI.assign(value); }

    /**
     * <p>A link to an Amazon S3 presigned URL where the job completion report is
     * located.</p>
     */
    inline JobLogs& WithJobCompletionReportURI(const Aws::String& value) { SetJobCompletionReportURI(value); return *this;}

    /**
     * <p>A link to an Amazon S3 presigned URL where the job completion report is
     * located.</p>
     */
    inline JobLogs& WithJobCompletionReportURI(Aws::String&& value) { SetJobCompletionReportURI(std::move(value)); return *this;}

    /**
     * <p>A link to an Amazon S3 presigned URL where the job completion report is
     * located.</p>
     */
    inline JobLogs& WithJobCompletionReportURI(const char* value) { SetJobCompletionReportURI(value); return *this;}


    /**
     * <p>A link to an Amazon S3 presigned URL where the job success log is
     * located.</p>
     */
    inline const Aws::String& GetJobSuccessLogURI() const{ return m_jobSuccessLogURI; }

    /**
     * <p>A link to an Amazon S3 presigned URL where the job success log is
     * located.</p>
     */
    inline bool JobSuccessLogURIHasBeenSet() const { return m_jobSuccessLogURIHasBeenSet; }

    /**
     * <p>A link to an Amazon S3 presigned URL where the job success log is
     * located.</p>
     */
    inline void SetJobSuccessLogURI(const Aws::String& value) { m_jobSuccessLogURIHasBeenSet = true; m_jobSuccessLogURI = value; }

    /**
     * <p>A link to an Amazon S3 presigned URL where the job success log is
     * located.</p>
     */
    inline void SetJobSuccessLogURI(Aws::String&& value) { m_jobSuccessLogURIHasBeenSet = true; m_jobSuccessLogURI = std::move(value); }

    /**
     * <p>A link to an Amazon S3 presigned URL where the job success log is
     * located.</p>
     */
    inline void SetJobSuccessLogURI(const char* value) { m_jobSuccessLogURIHasBeenSet = true; m_jobSuccessLogURI.assign(value); }

    /**
     * <p>A link to an Amazon S3 presigned URL where the job success log is
     * located.</p>
     */
    inline JobLogs& WithJobSuccessLogURI(const Aws::String& value) { SetJobSuccessLogURI(value); return *this;}

    /**
     * <p>A link to an Amazon S3 presigned URL where the job success log is
     * located.</p>
     */
    inline JobLogs& WithJobSuccessLogURI(Aws::String&& value) { SetJobSuccessLogURI(std::move(value)); return *this;}

    /**
     * <p>A link to an Amazon S3 presigned URL where the job success log is
     * located.</p>
     */
    inline JobLogs& WithJobSuccessLogURI(const char* value) { SetJobSuccessLogURI(value); return *this;}


    /**
     * <p>A link to an Amazon S3 presigned URL where the job failure log is
     * located.</p>
     */
    inline const Aws::String& GetJobFailureLogURI() const{ return m_jobFailureLogURI; }

    /**
     * <p>A link to an Amazon S3 presigned URL where the job failure log is
     * located.</p>
     */
    inline bool JobFailureLogURIHasBeenSet() const { return m_jobFailureLogURIHasBeenSet; }

    /**
     * <p>A link to an Amazon S3 presigned URL where the job failure log is
     * located.</p>
     */
    inline void SetJobFailureLogURI(const Aws::String& value) { m_jobFailureLogURIHasBeenSet = true; m_jobFailureLogURI = value; }

    /**
     * <p>A link to an Amazon S3 presigned URL where the job failure log is
     * located.</p>
     */
    inline void SetJobFailureLogURI(Aws::String&& value) { m_jobFailureLogURIHasBeenSet = true; m_jobFailureLogURI = std::move(value); }

    /**
     * <p>A link to an Amazon S3 presigned URL where the job failure log is
     * located.</p>
     */
    inline void SetJobFailureLogURI(const char* value) { m_jobFailureLogURIHasBeenSet = true; m_jobFailureLogURI.assign(value); }

    /**
     * <p>A link to an Amazon S3 presigned URL where the job failure log is
     * located.</p>
     */
    inline JobLogs& WithJobFailureLogURI(const Aws::String& value) { SetJobFailureLogURI(value); return *this;}

    /**
     * <p>A link to an Amazon S3 presigned URL where the job failure log is
     * located.</p>
     */
    inline JobLogs& WithJobFailureLogURI(Aws::String&& value) { SetJobFailureLogURI(std::move(value)); return *this;}

    /**
     * <p>A link to an Amazon S3 presigned URL where the job failure log is
     * located.</p>
     */
    inline JobLogs& WithJobFailureLogURI(const char* value) { SetJobFailureLogURI(value); return *this;}

  private:

    Aws::String m_jobCompletionReportURI;
    bool m_jobCompletionReportURIHasBeenSet = false;

    Aws::String m_jobSuccessLogURI;
    bool m_jobSuccessLogURIHasBeenSet = false;

    Aws::String m_jobFailureLogURI;
    bool m_jobFailureLogURIHasBeenSet = false;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws
