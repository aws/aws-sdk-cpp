/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dynamodb/model/ImportStatus.h>
#include <aws/dynamodb/model/S3BucketSource.h>
#include <aws/dynamodb/model/InputFormat.h>
#include <aws/core/utils/DateTime.h>
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
   * <p> Summary information about the source file for the import. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/ImportSummary">AWS
   * API Reference</a></p>
   */
  class ImportSummary
  {
  public:
    AWS_DYNAMODB_API ImportSummary();
    AWS_DYNAMODB_API ImportSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API ImportSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The Amazon Resource Number (ARN) corresponding to the import request. </p>
     */
    inline const Aws::String& GetImportArn() const{ return m_importArn; }

    /**
     * <p> The Amazon Resource Number (ARN) corresponding to the import request. </p>
     */
    inline bool ImportArnHasBeenSet() const { return m_importArnHasBeenSet; }

    /**
     * <p> The Amazon Resource Number (ARN) corresponding to the import request. </p>
     */
    inline void SetImportArn(const Aws::String& value) { m_importArnHasBeenSet = true; m_importArn = value; }

    /**
     * <p> The Amazon Resource Number (ARN) corresponding to the import request. </p>
     */
    inline void SetImportArn(Aws::String&& value) { m_importArnHasBeenSet = true; m_importArn = std::move(value); }

    /**
     * <p> The Amazon Resource Number (ARN) corresponding to the import request. </p>
     */
    inline void SetImportArn(const char* value) { m_importArnHasBeenSet = true; m_importArn.assign(value); }

    /**
     * <p> The Amazon Resource Number (ARN) corresponding to the import request. </p>
     */
    inline ImportSummary& WithImportArn(const Aws::String& value) { SetImportArn(value); return *this;}

    /**
     * <p> The Amazon Resource Number (ARN) corresponding to the import request. </p>
     */
    inline ImportSummary& WithImportArn(Aws::String&& value) { SetImportArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Number (ARN) corresponding to the import request. </p>
     */
    inline ImportSummary& WithImportArn(const char* value) { SetImportArn(value); return *this;}


    /**
     * <p> The status of the import operation. </p>
     */
    inline const ImportStatus& GetImportStatus() const{ return m_importStatus; }

    /**
     * <p> The status of the import operation. </p>
     */
    inline bool ImportStatusHasBeenSet() const { return m_importStatusHasBeenSet; }

    /**
     * <p> The status of the import operation. </p>
     */
    inline void SetImportStatus(const ImportStatus& value) { m_importStatusHasBeenSet = true; m_importStatus = value; }

    /**
     * <p> The status of the import operation. </p>
     */
    inline void SetImportStatus(ImportStatus&& value) { m_importStatusHasBeenSet = true; m_importStatus = std::move(value); }

    /**
     * <p> The status of the import operation. </p>
     */
    inline ImportSummary& WithImportStatus(const ImportStatus& value) { SetImportStatus(value); return *this;}

    /**
     * <p> The status of the import operation. </p>
     */
    inline ImportSummary& WithImportStatus(ImportStatus&& value) { SetImportStatus(std::move(value)); return *this;}


    /**
     * <p> The Amazon Resource Number (ARN) of the table being imported into. </p>
     */
    inline const Aws::String& GetTableArn() const{ return m_tableArn; }

    /**
     * <p> The Amazon Resource Number (ARN) of the table being imported into. </p>
     */
    inline bool TableArnHasBeenSet() const { return m_tableArnHasBeenSet; }

    /**
     * <p> The Amazon Resource Number (ARN) of the table being imported into. </p>
     */
    inline void SetTableArn(const Aws::String& value) { m_tableArnHasBeenSet = true; m_tableArn = value; }

    /**
     * <p> The Amazon Resource Number (ARN) of the table being imported into. </p>
     */
    inline void SetTableArn(Aws::String&& value) { m_tableArnHasBeenSet = true; m_tableArn = std::move(value); }

    /**
     * <p> The Amazon Resource Number (ARN) of the table being imported into. </p>
     */
    inline void SetTableArn(const char* value) { m_tableArnHasBeenSet = true; m_tableArn.assign(value); }

    /**
     * <p> The Amazon Resource Number (ARN) of the table being imported into. </p>
     */
    inline ImportSummary& WithTableArn(const Aws::String& value) { SetTableArn(value); return *this;}

    /**
     * <p> The Amazon Resource Number (ARN) of the table being imported into. </p>
     */
    inline ImportSummary& WithTableArn(Aws::String&& value) { SetTableArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Number (ARN) of the table being imported into. </p>
     */
    inline ImportSummary& WithTableArn(const char* value) { SetTableArn(value); return *this;}


    /**
     * <p> The path and S3 bucket of the source file that is being imported. This
     * includes the S3Bucket (required), S3KeyPrefix (optional) and S3BucketOwner
     * (optional if the bucket is owned by the requester). </p>
     */
    inline const S3BucketSource& GetS3BucketSource() const{ return m_s3BucketSource; }

    /**
     * <p> The path and S3 bucket of the source file that is being imported. This
     * includes the S3Bucket (required), S3KeyPrefix (optional) and S3BucketOwner
     * (optional if the bucket is owned by the requester). </p>
     */
    inline bool S3BucketSourceHasBeenSet() const { return m_s3BucketSourceHasBeenSet; }

    /**
     * <p> The path and S3 bucket of the source file that is being imported. This
     * includes the S3Bucket (required), S3KeyPrefix (optional) and S3BucketOwner
     * (optional if the bucket is owned by the requester). </p>
     */
    inline void SetS3BucketSource(const S3BucketSource& value) { m_s3BucketSourceHasBeenSet = true; m_s3BucketSource = value; }

    /**
     * <p> The path and S3 bucket of the source file that is being imported. This
     * includes the S3Bucket (required), S3KeyPrefix (optional) and S3BucketOwner
     * (optional if the bucket is owned by the requester). </p>
     */
    inline void SetS3BucketSource(S3BucketSource&& value) { m_s3BucketSourceHasBeenSet = true; m_s3BucketSource = std::move(value); }

    /**
     * <p> The path and S3 bucket of the source file that is being imported. This
     * includes the S3Bucket (required), S3KeyPrefix (optional) and S3BucketOwner
     * (optional if the bucket is owned by the requester). </p>
     */
    inline ImportSummary& WithS3BucketSource(const S3BucketSource& value) { SetS3BucketSource(value); return *this;}

    /**
     * <p> The path and S3 bucket of the source file that is being imported. This
     * includes the S3Bucket (required), S3KeyPrefix (optional) and S3BucketOwner
     * (optional if the bucket is owned by the requester). </p>
     */
    inline ImportSummary& WithS3BucketSource(S3BucketSource&& value) { SetS3BucketSource(std::move(value)); return *this;}


    /**
     * <p> The Amazon Resource Number (ARN) of the Cloudwatch Log Group associated with
     * this import task. </p>
     */
    inline const Aws::String& GetCloudWatchLogGroupArn() const{ return m_cloudWatchLogGroupArn; }

    /**
     * <p> The Amazon Resource Number (ARN) of the Cloudwatch Log Group associated with
     * this import task. </p>
     */
    inline bool CloudWatchLogGroupArnHasBeenSet() const { return m_cloudWatchLogGroupArnHasBeenSet; }

    /**
     * <p> The Amazon Resource Number (ARN) of the Cloudwatch Log Group associated with
     * this import task. </p>
     */
    inline void SetCloudWatchLogGroupArn(const Aws::String& value) { m_cloudWatchLogGroupArnHasBeenSet = true; m_cloudWatchLogGroupArn = value; }

    /**
     * <p> The Amazon Resource Number (ARN) of the Cloudwatch Log Group associated with
     * this import task. </p>
     */
    inline void SetCloudWatchLogGroupArn(Aws::String&& value) { m_cloudWatchLogGroupArnHasBeenSet = true; m_cloudWatchLogGroupArn = std::move(value); }

    /**
     * <p> The Amazon Resource Number (ARN) of the Cloudwatch Log Group associated with
     * this import task. </p>
     */
    inline void SetCloudWatchLogGroupArn(const char* value) { m_cloudWatchLogGroupArnHasBeenSet = true; m_cloudWatchLogGroupArn.assign(value); }

    /**
     * <p> The Amazon Resource Number (ARN) of the Cloudwatch Log Group associated with
     * this import task. </p>
     */
    inline ImportSummary& WithCloudWatchLogGroupArn(const Aws::String& value) { SetCloudWatchLogGroupArn(value); return *this;}

    /**
     * <p> The Amazon Resource Number (ARN) of the Cloudwatch Log Group associated with
     * this import task. </p>
     */
    inline ImportSummary& WithCloudWatchLogGroupArn(Aws::String&& value) { SetCloudWatchLogGroupArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Number (ARN) of the Cloudwatch Log Group associated with
     * this import task. </p>
     */
    inline ImportSummary& WithCloudWatchLogGroupArn(const char* value) { SetCloudWatchLogGroupArn(value); return *this;}


    /**
     * <p> The format of the source data. Valid values are <code>CSV</code>,
     * <code>DYNAMODB_JSON</code> or <code>ION</code>.</p>
     */
    inline const InputFormat& GetInputFormat() const{ return m_inputFormat; }

    /**
     * <p> The format of the source data. Valid values are <code>CSV</code>,
     * <code>DYNAMODB_JSON</code> or <code>ION</code>.</p>
     */
    inline bool InputFormatHasBeenSet() const { return m_inputFormatHasBeenSet; }

    /**
     * <p> The format of the source data. Valid values are <code>CSV</code>,
     * <code>DYNAMODB_JSON</code> or <code>ION</code>.</p>
     */
    inline void SetInputFormat(const InputFormat& value) { m_inputFormatHasBeenSet = true; m_inputFormat = value; }

    /**
     * <p> The format of the source data. Valid values are <code>CSV</code>,
     * <code>DYNAMODB_JSON</code> or <code>ION</code>.</p>
     */
    inline void SetInputFormat(InputFormat&& value) { m_inputFormatHasBeenSet = true; m_inputFormat = std::move(value); }

    /**
     * <p> The format of the source data. Valid values are <code>CSV</code>,
     * <code>DYNAMODB_JSON</code> or <code>ION</code>.</p>
     */
    inline ImportSummary& WithInputFormat(const InputFormat& value) { SetInputFormat(value); return *this;}

    /**
     * <p> The format of the source data. Valid values are <code>CSV</code>,
     * <code>DYNAMODB_JSON</code> or <code>ION</code>.</p>
     */
    inline ImportSummary& WithInputFormat(InputFormat&& value) { SetInputFormat(std::move(value)); return *this;}


    /**
     * <p> The time at which this import task began. </p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p> The time at which this import task began. </p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p> The time at which this import task began. </p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p> The time at which this import task began. </p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p> The time at which this import task began. </p>
     */
    inline ImportSummary& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p> The time at which this import task began. </p>
     */
    inline ImportSummary& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p> The time at which this import task ended. (Does this include the successful
     * complete creation of the table it was imported to?) </p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p> The time at which this import task ended. (Does this include the successful
     * complete creation of the table it was imported to?) </p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p> The time at which this import task ended. (Does this include the successful
     * complete creation of the table it was imported to?) </p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p> The time at which this import task ended. (Does this include the successful
     * complete creation of the table it was imported to?) </p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p> The time at which this import task ended. (Does this include the successful
     * complete creation of the table it was imported to?) </p>
     */
    inline ImportSummary& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p> The time at which this import task ended. (Does this include the successful
     * complete creation of the table it was imported to?) </p>
     */
    inline ImportSummary& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}

  private:

    Aws::String m_importArn;
    bool m_importArnHasBeenSet = false;

    ImportStatus m_importStatus;
    bool m_importStatusHasBeenSet = false;

    Aws::String m_tableArn;
    bool m_tableArnHasBeenSet = false;

    S3BucketSource m_s3BucketSource;
    bool m_s3BucketSourceHasBeenSet = false;

    Aws::String m_cloudWatchLogGroupArn;
    bool m_cloudWatchLogGroupArnHasBeenSet = false;

    InputFormat m_inputFormat;
    bool m_inputFormatHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
