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
   * <p>Contains information from your report job about your report
   * destination.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/backup-2018-11-15/ReportDestination">AWS
   * API Reference</a></p>
   */
  class ReportDestination
  {
  public:
    AWS_BACKUP_API ReportDestination();
    AWS_BACKUP_API ReportDestination(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API ReportDestination& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUP_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique name of the Amazon S3 bucket that receives your reports.</p>
     */
    inline const Aws::String& GetS3BucketName() const{ return m_s3BucketName; }

    /**
     * <p>The unique name of the Amazon S3 bucket that receives your reports.</p>
     */
    inline bool S3BucketNameHasBeenSet() const { return m_s3BucketNameHasBeenSet; }

    /**
     * <p>The unique name of the Amazon S3 bucket that receives your reports.</p>
     */
    inline void SetS3BucketName(const Aws::String& value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName = value; }

    /**
     * <p>The unique name of the Amazon S3 bucket that receives your reports.</p>
     */
    inline void SetS3BucketName(Aws::String&& value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName = std::move(value); }

    /**
     * <p>The unique name of the Amazon S3 bucket that receives your reports.</p>
     */
    inline void SetS3BucketName(const char* value) { m_s3BucketNameHasBeenSet = true; m_s3BucketName.assign(value); }

    /**
     * <p>The unique name of the Amazon S3 bucket that receives your reports.</p>
     */
    inline ReportDestination& WithS3BucketName(const Aws::String& value) { SetS3BucketName(value); return *this;}

    /**
     * <p>The unique name of the Amazon S3 bucket that receives your reports.</p>
     */
    inline ReportDestination& WithS3BucketName(Aws::String&& value) { SetS3BucketName(std::move(value)); return *this;}

    /**
     * <p>The unique name of the Amazon S3 bucket that receives your reports.</p>
     */
    inline ReportDestination& WithS3BucketName(const char* value) { SetS3BucketName(value); return *this;}


    /**
     * <p>The object key that uniquely identifies your reports in your S3 bucket.</p>
     */
    inline const Aws::Vector<Aws::String>& GetS3Keys() const{ return m_s3Keys; }

    /**
     * <p>The object key that uniquely identifies your reports in your S3 bucket.</p>
     */
    inline bool S3KeysHasBeenSet() const { return m_s3KeysHasBeenSet; }

    /**
     * <p>The object key that uniquely identifies your reports in your S3 bucket.</p>
     */
    inline void SetS3Keys(const Aws::Vector<Aws::String>& value) { m_s3KeysHasBeenSet = true; m_s3Keys = value; }

    /**
     * <p>The object key that uniquely identifies your reports in your S3 bucket.</p>
     */
    inline void SetS3Keys(Aws::Vector<Aws::String>&& value) { m_s3KeysHasBeenSet = true; m_s3Keys = std::move(value); }

    /**
     * <p>The object key that uniquely identifies your reports in your S3 bucket.</p>
     */
    inline ReportDestination& WithS3Keys(const Aws::Vector<Aws::String>& value) { SetS3Keys(value); return *this;}

    /**
     * <p>The object key that uniquely identifies your reports in your S3 bucket.</p>
     */
    inline ReportDestination& WithS3Keys(Aws::Vector<Aws::String>&& value) { SetS3Keys(std::move(value)); return *this;}

    /**
     * <p>The object key that uniquely identifies your reports in your S3 bucket.</p>
     */
    inline ReportDestination& AddS3Keys(const Aws::String& value) { m_s3KeysHasBeenSet = true; m_s3Keys.push_back(value); return *this; }

    /**
     * <p>The object key that uniquely identifies your reports in your S3 bucket.</p>
     */
    inline ReportDestination& AddS3Keys(Aws::String&& value) { m_s3KeysHasBeenSet = true; m_s3Keys.push_back(std::move(value)); return *this; }

    /**
     * <p>The object key that uniquely identifies your reports in your S3 bucket.</p>
     */
    inline ReportDestination& AddS3Keys(const char* value) { m_s3KeysHasBeenSet = true; m_s3Keys.push_back(value); return *this; }

  private:

    Aws::String m_s3BucketName;
    bool m_s3BucketNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_s3Keys;
    bool m_s3KeysHasBeenSet = false;
  };

} // namespace Model
} // namespace Backup
} // namespace Aws
