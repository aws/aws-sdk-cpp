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
    AWS_DYNAMODB_API ImportSummary() = default;
    AWS_DYNAMODB_API ImportSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API ImportSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The Amazon Resource Number (ARN) corresponding to the import request. </p>
     */
    inline const Aws::String& GetImportArn() const { return m_importArn; }
    inline bool ImportArnHasBeenSet() const { return m_importArnHasBeenSet; }
    template<typename ImportArnT = Aws::String>
    void SetImportArn(ImportArnT&& value) { m_importArnHasBeenSet = true; m_importArn = std::forward<ImportArnT>(value); }
    template<typename ImportArnT = Aws::String>
    ImportSummary& WithImportArn(ImportArnT&& value) { SetImportArn(std::forward<ImportArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The status of the import operation. </p>
     */
    inline ImportStatus GetImportStatus() const { return m_importStatus; }
    inline bool ImportStatusHasBeenSet() const { return m_importStatusHasBeenSet; }
    inline void SetImportStatus(ImportStatus value) { m_importStatusHasBeenSet = true; m_importStatus = value; }
    inline ImportSummary& WithImportStatus(ImportStatus value) { SetImportStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Number (ARN) of the table being imported into. </p>
     */
    inline const Aws::String& GetTableArn() const { return m_tableArn; }
    inline bool TableArnHasBeenSet() const { return m_tableArnHasBeenSet; }
    template<typename TableArnT = Aws::String>
    void SetTableArn(TableArnT&& value) { m_tableArnHasBeenSet = true; m_tableArn = std::forward<TableArnT>(value); }
    template<typename TableArnT = Aws::String>
    ImportSummary& WithTableArn(TableArnT&& value) { SetTableArn(std::forward<TableArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The path and S3 bucket of the source file that is being imported. This
     * includes the S3Bucket (required), S3KeyPrefix (optional) and S3BucketOwner
     * (optional if the bucket is owned by the requester). </p>
     */
    inline const S3BucketSource& GetS3BucketSource() const { return m_s3BucketSource; }
    inline bool S3BucketSourceHasBeenSet() const { return m_s3BucketSourceHasBeenSet; }
    template<typename S3BucketSourceT = S3BucketSource>
    void SetS3BucketSource(S3BucketSourceT&& value) { m_s3BucketSourceHasBeenSet = true; m_s3BucketSource = std::forward<S3BucketSourceT>(value); }
    template<typename S3BucketSourceT = S3BucketSource>
    ImportSummary& WithS3BucketSource(S3BucketSourceT&& value) { SetS3BucketSource(std::forward<S3BucketSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Number (ARN) of the Cloudwatch Log Group associated with
     * this import task. </p>
     */
    inline const Aws::String& GetCloudWatchLogGroupArn() const { return m_cloudWatchLogGroupArn; }
    inline bool CloudWatchLogGroupArnHasBeenSet() const { return m_cloudWatchLogGroupArnHasBeenSet; }
    template<typename CloudWatchLogGroupArnT = Aws::String>
    void SetCloudWatchLogGroupArn(CloudWatchLogGroupArnT&& value) { m_cloudWatchLogGroupArnHasBeenSet = true; m_cloudWatchLogGroupArn = std::forward<CloudWatchLogGroupArnT>(value); }
    template<typename CloudWatchLogGroupArnT = Aws::String>
    ImportSummary& WithCloudWatchLogGroupArn(CloudWatchLogGroupArnT&& value) { SetCloudWatchLogGroupArn(std::forward<CloudWatchLogGroupArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The format of the source data. Valid values are <code>CSV</code>,
     * <code>DYNAMODB_JSON</code> or <code>ION</code>.</p>
     */
    inline InputFormat GetInputFormat() const { return m_inputFormat; }
    inline bool InputFormatHasBeenSet() const { return m_inputFormatHasBeenSet; }
    inline void SetInputFormat(InputFormat value) { m_inputFormatHasBeenSet = true; m_inputFormat = value; }
    inline ImportSummary& WithInputFormat(InputFormat value) { SetInputFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The time at which this import task began. </p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    ImportSummary& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The time at which this import task ended. (Does this include the successful
     * complete creation of the table it was imported to?) </p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    ImportSummary& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_importArn;
    bool m_importArnHasBeenSet = false;

    ImportStatus m_importStatus{ImportStatus::NOT_SET};
    bool m_importStatusHasBeenSet = false;

    Aws::String m_tableArn;
    bool m_tableArnHasBeenSet = false;

    S3BucketSource m_s3BucketSource;
    bool m_s3BucketSourceHasBeenSet = false;

    Aws::String m_cloudWatchLogGroupArn;
    bool m_cloudWatchLogGroupArnHasBeenSet = false;

    InputFormat m_inputFormat{InputFormat::NOT_SET};
    bool m_inputFormatHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
