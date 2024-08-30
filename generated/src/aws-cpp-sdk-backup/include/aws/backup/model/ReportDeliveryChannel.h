/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup/Backup_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace Backup
{
namespace Model
{

  /**
   * <p>Contains information from your report plan about where to deliver your
   * reports, specifically your Amazon S3 bucket name, S3 key prefix, and the formats
   * of your reports.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/ReportDeliveryChannel">AWS
   * API Reference</a></p>
   */
  class ReportDeliveryChannel
  {
  public:
    AWS_BACKUP_API ReportDeliveryChannel();
    AWS_BACKUP_API ReportDeliveryChannel(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API ReportDeliveryChannel& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique name of the S3 bucket that receives your reports.</p>
     */
    inline const Aws::String& GetS3BucketName() const{ return m_s3BucketName; }
    inline bool S3BucketNameHasBeenSet() const { return m_s3BucketNameHasBeenSet; }
    inline void SetS3BucketName(const Aws::String& value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName = value; }
    inline void SetS3BucketName(Aws::String&& value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName = std::move(value); }
    inline void SetS3BucketName(const char* value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName.assign(value); }
    inline ReportDeliveryChannel& WithS3BucketName(const Aws::String& value) { SetS3BucketName(value); return *this;}
    inline ReportDeliveryChannel& WithS3BucketName(Aws::String&& value) { SetS3BucketName(std::move(value)); return *this;}
    inline ReportDeliveryChannel& WithS3BucketName(const char* value) { SetS3BucketName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The prefix for where Backup Audit Manager delivers your reports to Amazon S3.
     * The prefix is this part of the following path:
     * s3://your-bucket-name/<code>prefix</code>/Backup/us-west-2/year/month/day/report-name.
     * If not specified, there is no prefix.</p>
     */
    inline const Aws::String& GetS3KeyPrefix() const{ return m_s3KeyPrefix; }
    inline bool S3KeyPrefixHasBeenSet() const { return m_s3KeyPrefixHasBeenSet; }
    inline void SetS3KeyPrefix(const Aws::String& value) { m_s3KeyPrefixHasBeenSet = true; m_s3KeyPrefix = value; }
    inline void SetS3KeyPrefix(Aws::String&& value) { m_s3KeyPrefixHasBeenSet = true; m_s3KeyPrefix = std::move(value); }
    inline void SetS3KeyPrefix(const char* value) { m_s3KeyPrefixHasBeenSet = true; m_s3KeyPrefix.assign(value); }
    inline ReportDeliveryChannel& WithS3KeyPrefix(const Aws::String& value) { SetS3KeyPrefix(value); return *this;}
    inline ReportDeliveryChannel& WithS3KeyPrefix(Aws::String&& value) { SetS3KeyPrefix(std::move(value)); return *this;}
    inline ReportDeliveryChannel& WithS3KeyPrefix(const char* value) { SetS3KeyPrefix(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The format of your reports: <code>CSV</code>, <code>JSON</code>, or both. If
     * not specified, the default format is <code>CSV</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFormats() const{ return m_formats; }
    inline bool FormatsHasBeenSet() const { return m_formatsHasBeenSet; }
    inline void SetFormats(const Aws::Vector<Aws::String>& value) { m_formatsHasBeenSet = true; m_formats = value; }
    inline void SetFormats(Aws::Vector<Aws::String>&& value) { m_formatsHasBeenSet = true; m_formats = std::move(value); }
    inline ReportDeliveryChannel& WithFormats(const Aws::Vector<Aws::String>& value) { SetFormats(value); return *this;}
    inline ReportDeliveryChannel& WithFormats(Aws::Vector<Aws::String>&& value) { SetFormats(std::move(value)); return *this;}
    inline ReportDeliveryChannel& AddFormats(const Aws::String& value) { m_formatsHasBeenSet = true; m_formats.push_back(value); return *this; }
    inline ReportDeliveryChannel& AddFormats(Aws::String&& value) { m_formatsHasBeenSet = true; m_formats.push_back(std::move(value)); return *this; }
    inline ReportDeliveryChannel& AddFormats(const char* value) { m_formatsHasBeenSet = true; m_formats.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_s3BucketName;
    bool m_s3BucketNameHasBeenSet = false;

    Aws::String m_s3KeyPrefix;
    bool m_s3KeyPrefixHasBeenSet = false;

    Aws::Vector<Aws::String> m_formats;
    bool m_formatsHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
