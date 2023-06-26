/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehend/Comprehend_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/comprehend/model/DatasetType.h>
#include <aws/comprehend/model/DatasetStatus.h>
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
namespace Comprehend
{
namespace Model
{

  /**
   * <p>Properties associated with the dataset.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/comprehend-2017-11-27/DatasetProperties">AWS
   * API Reference</a></p>
   */
  class DatasetProperties
  {
  public:
    AWS_COMPREHEND_API DatasetProperties();
    AWS_COMPREHEND_API DatasetProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API DatasetProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPREHEND_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the dataset.</p>
     */
    inline const Aws::String& GetDatasetArn() const{ return m_datasetArn; }

    /**
     * <p>The ARN of the dataset.</p>
     */
    inline bool DatasetArnHasBeenSet() const { return m_datasetArnHasBeenSet; }

    /**
     * <p>The ARN of the dataset.</p>
     */
    inline void SetDatasetArn(const Aws::String& value) { m_datasetArnHasBeenSet = true; m_datasetArn = value; }

    /**
     * <p>The ARN of the dataset.</p>
     */
    inline void SetDatasetArn(Aws::String&& value) { m_datasetArnHasBeenSet = true; m_datasetArn = std::move(value); }

    /**
     * <p>The ARN of the dataset.</p>
     */
    inline void SetDatasetArn(const char* value) { m_datasetArnHasBeenSet = true; m_datasetArn.assign(value); }

    /**
     * <p>The ARN of the dataset.</p>
     */
    inline DatasetProperties& WithDatasetArn(const Aws::String& value) { SetDatasetArn(value); return *this;}

    /**
     * <p>The ARN of the dataset.</p>
     */
    inline DatasetProperties& WithDatasetArn(Aws::String&& value) { SetDatasetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the dataset.</p>
     */
    inline DatasetProperties& WithDatasetArn(const char* value) { SetDatasetArn(value); return *this;}


    /**
     * <p>The name of the dataset.</p>
     */
    inline const Aws::String& GetDatasetName() const{ return m_datasetName; }

    /**
     * <p>The name of the dataset.</p>
     */
    inline bool DatasetNameHasBeenSet() const { return m_datasetNameHasBeenSet; }

    /**
     * <p>The name of the dataset.</p>
     */
    inline void SetDatasetName(const Aws::String& value) { m_datasetNameHasBeenSet = true; m_datasetName = value; }

    /**
     * <p>The name of the dataset.</p>
     */
    inline void SetDatasetName(Aws::String&& value) { m_datasetNameHasBeenSet = true; m_datasetName = std::move(value); }

    /**
     * <p>The name of the dataset.</p>
     */
    inline void SetDatasetName(const char* value) { m_datasetNameHasBeenSet = true; m_datasetName.assign(value); }

    /**
     * <p>The name of the dataset.</p>
     */
    inline DatasetProperties& WithDatasetName(const Aws::String& value) { SetDatasetName(value); return *this;}

    /**
     * <p>The name of the dataset.</p>
     */
    inline DatasetProperties& WithDatasetName(Aws::String&& value) { SetDatasetName(std::move(value)); return *this;}

    /**
     * <p>The name of the dataset.</p>
     */
    inline DatasetProperties& WithDatasetName(const char* value) { SetDatasetName(value); return *this;}


    /**
     * <p>The dataset type (training data or test data).</p>
     */
    inline const DatasetType& GetDatasetType() const{ return m_datasetType; }

    /**
     * <p>The dataset type (training data or test data).</p>
     */
    inline bool DatasetTypeHasBeenSet() const { return m_datasetTypeHasBeenSet; }

    /**
     * <p>The dataset type (training data or test data).</p>
     */
    inline void SetDatasetType(const DatasetType& value) { m_datasetTypeHasBeenSet = true; m_datasetType = value; }

    /**
     * <p>The dataset type (training data or test data).</p>
     */
    inline void SetDatasetType(DatasetType&& value) { m_datasetTypeHasBeenSet = true; m_datasetType = std::move(value); }

    /**
     * <p>The dataset type (training data or test data).</p>
     */
    inline DatasetProperties& WithDatasetType(const DatasetType& value) { SetDatasetType(value); return *this;}

    /**
     * <p>The dataset type (training data or test data).</p>
     */
    inline DatasetProperties& WithDatasetType(DatasetType&& value) { SetDatasetType(std::move(value)); return *this;}


    /**
     * <p>The S3 URI where the dataset is stored.</p>
     */
    inline const Aws::String& GetDatasetS3Uri() const{ return m_datasetS3Uri; }

    /**
     * <p>The S3 URI where the dataset is stored.</p>
     */
    inline bool DatasetS3UriHasBeenSet() const { return m_datasetS3UriHasBeenSet; }

    /**
     * <p>The S3 URI where the dataset is stored.</p>
     */
    inline void SetDatasetS3Uri(const Aws::String& value) { m_datasetS3UriHasBeenSet = true; m_datasetS3Uri = value; }

    /**
     * <p>The S3 URI where the dataset is stored.</p>
     */
    inline void SetDatasetS3Uri(Aws::String&& value) { m_datasetS3UriHasBeenSet = true; m_datasetS3Uri = std::move(value); }

    /**
     * <p>The S3 URI where the dataset is stored.</p>
     */
    inline void SetDatasetS3Uri(const char* value) { m_datasetS3UriHasBeenSet = true; m_datasetS3Uri.assign(value); }

    /**
     * <p>The S3 URI where the dataset is stored.</p>
     */
    inline DatasetProperties& WithDatasetS3Uri(const Aws::String& value) { SetDatasetS3Uri(value); return *this;}

    /**
     * <p>The S3 URI where the dataset is stored.</p>
     */
    inline DatasetProperties& WithDatasetS3Uri(Aws::String&& value) { SetDatasetS3Uri(std::move(value)); return *this;}

    /**
     * <p>The S3 URI where the dataset is stored.</p>
     */
    inline DatasetProperties& WithDatasetS3Uri(const char* value) { SetDatasetS3Uri(value); return *this;}


    /**
     * <p>Description of the dataset.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>Description of the dataset.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>Description of the dataset.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>Description of the dataset.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>Description of the dataset.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>Description of the dataset.</p>
     */
    inline DatasetProperties& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>Description of the dataset.</p>
     */
    inline DatasetProperties& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>Description of the dataset.</p>
     */
    inline DatasetProperties& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The dataset status. While the system creates the dataset, the status is
     * <code>CREATING</code>. When the dataset is ready to use, the status changes to
     * <code>COMPLETED</code>. </p>
     */
    inline const DatasetStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The dataset status. While the system creates the dataset, the status is
     * <code>CREATING</code>. When the dataset is ready to use, the status changes to
     * <code>COMPLETED</code>. </p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The dataset status. While the system creates the dataset, the status is
     * <code>CREATING</code>. When the dataset is ready to use, the status changes to
     * <code>COMPLETED</code>. </p>
     */
    inline void SetStatus(const DatasetStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The dataset status. While the system creates the dataset, the status is
     * <code>CREATING</code>. When the dataset is ready to use, the status changes to
     * <code>COMPLETED</code>. </p>
     */
    inline void SetStatus(DatasetStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The dataset status. While the system creates the dataset, the status is
     * <code>CREATING</code>. When the dataset is ready to use, the status changes to
     * <code>COMPLETED</code>. </p>
     */
    inline DatasetProperties& WithStatus(const DatasetStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The dataset status. While the system creates the dataset, the status is
     * <code>CREATING</code>. When the dataset is ready to use, the status changes to
     * <code>COMPLETED</code>. </p>
     */
    inline DatasetProperties& WithStatus(DatasetStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>A description of the status of the dataset.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>A description of the status of the dataset.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>A description of the status of the dataset.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>A description of the status of the dataset.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>A description of the status of the dataset.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>A description of the status of the dataset.</p>
     */
    inline DatasetProperties& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>A description of the status of the dataset.</p>
     */
    inline DatasetProperties& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>A description of the status of the dataset.</p>
     */
    inline DatasetProperties& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>The number of documents in the dataset.</p>
     */
    inline long long GetNumberOfDocuments() const{ return m_numberOfDocuments; }

    /**
     * <p>The number of documents in the dataset.</p>
     */
    inline bool NumberOfDocumentsHasBeenSet() const { return m_numberOfDocumentsHasBeenSet; }

    /**
     * <p>The number of documents in the dataset.</p>
     */
    inline void SetNumberOfDocuments(long long value) { m_numberOfDocumentsHasBeenSet = true; m_numberOfDocuments = value; }

    /**
     * <p>The number of documents in the dataset.</p>
     */
    inline DatasetProperties& WithNumberOfDocuments(long long value) { SetNumberOfDocuments(value); return *this;}


    /**
     * <p>Creation time of the dataset.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>Creation time of the dataset.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>Creation time of the dataset.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>Creation time of the dataset.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>Creation time of the dataset.</p>
     */
    inline DatasetProperties& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>Creation time of the dataset.</p>
     */
    inline DatasetProperties& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>Time when the data from the dataset becomes available in the data lake.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>Time when the data from the dataset becomes available in the data lake.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>Time when the data from the dataset becomes available in the data lake.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>Time when the data from the dataset becomes available in the data lake.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>Time when the data from the dataset becomes available in the data lake.</p>
     */
    inline DatasetProperties& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>Time when the data from the dataset becomes available in the data lake.</p>
     */
    inline DatasetProperties& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}

  private:

    Aws::String m_datasetArn;
    bool m_datasetArnHasBeenSet = false;

    Aws::String m_datasetName;
    bool m_datasetNameHasBeenSet = false;

    DatasetType m_datasetType;
    bool m_datasetTypeHasBeenSet = false;

    Aws::String m_datasetS3Uri;
    bool m_datasetS3UriHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    DatasetStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    long long m_numberOfDocuments;
    bool m_numberOfDocumentsHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace Comprehend
} // namespace Aws
