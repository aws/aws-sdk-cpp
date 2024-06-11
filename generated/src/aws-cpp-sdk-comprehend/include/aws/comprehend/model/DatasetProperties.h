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


    ///@{
    /**
     * <p>The ARN of the dataset.</p>
     */
    inline const Aws::String& GetDatasetArn() const{ return m_datasetArn; }
    inline bool DatasetArnHasBeenSet() const { return m_datasetArnHasBeenSet; }
    inline void SetDatasetArn(const Aws::String& value) { m_datasetArnHasBeenSet = true; m_datasetArn = value; }
    inline void SetDatasetArn(Aws::String&& value) { m_datasetArnHasBeenSet = true; m_datasetArn = std::move(value); }
    inline void SetDatasetArn(const char* value) { m_datasetArnHasBeenSet = true; m_datasetArn.assign(value); }
    inline DatasetProperties& WithDatasetArn(const Aws::String& value) { SetDatasetArn(value); return *this;}
    inline DatasetProperties& WithDatasetArn(Aws::String&& value) { SetDatasetArn(std::move(value)); return *this;}
    inline DatasetProperties& WithDatasetArn(const char* value) { SetDatasetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the dataset.</p>
     */
    inline const Aws::String& GetDatasetName() const{ return m_datasetName; }
    inline bool DatasetNameHasBeenSet() const { return m_datasetNameHasBeenSet; }
    inline void SetDatasetName(const Aws::String& value) { m_datasetNameHasBeenSet = true; m_datasetName = value; }
    inline void SetDatasetName(Aws::String&& value) { m_datasetNameHasBeenSet = true; m_datasetName = std::move(value); }
    inline void SetDatasetName(const char* value) { m_datasetNameHasBeenSet = true; m_datasetName.assign(value); }
    inline DatasetProperties& WithDatasetName(const Aws::String& value) { SetDatasetName(value); return *this;}
    inline DatasetProperties& WithDatasetName(Aws::String&& value) { SetDatasetName(std::move(value)); return *this;}
    inline DatasetProperties& WithDatasetName(const char* value) { SetDatasetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The dataset type (training data or test data).</p>
     */
    inline const DatasetType& GetDatasetType() const{ return m_datasetType; }
    inline bool DatasetTypeHasBeenSet() const { return m_datasetTypeHasBeenSet; }
    inline void SetDatasetType(const DatasetType& value) { m_datasetTypeHasBeenSet = true; m_datasetType = value; }
    inline void SetDatasetType(DatasetType&& value) { m_datasetTypeHasBeenSet = true; m_datasetType = std::move(value); }
    inline DatasetProperties& WithDatasetType(const DatasetType& value) { SetDatasetType(value); return *this;}
    inline DatasetProperties& WithDatasetType(DatasetType&& value) { SetDatasetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The S3 URI where the dataset is stored.</p>
     */
    inline const Aws::String& GetDatasetS3Uri() const{ return m_datasetS3Uri; }
    inline bool DatasetS3UriHasBeenSet() const { return m_datasetS3UriHasBeenSet; }
    inline void SetDatasetS3Uri(const Aws::String& value) { m_datasetS3UriHasBeenSet = true; m_datasetS3Uri = value; }
    inline void SetDatasetS3Uri(Aws::String&& value) { m_datasetS3UriHasBeenSet = true; m_datasetS3Uri = std::move(value); }
    inline void SetDatasetS3Uri(const char* value) { m_datasetS3UriHasBeenSet = true; m_datasetS3Uri.assign(value); }
    inline DatasetProperties& WithDatasetS3Uri(const Aws::String& value) { SetDatasetS3Uri(value); return *this;}
    inline DatasetProperties& WithDatasetS3Uri(Aws::String&& value) { SetDatasetS3Uri(std::move(value)); return *this;}
    inline DatasetProperties& WithDatasetS3Uri(const char* value) { SetDatasetS3Uri(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Description of the dataset.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline DatasetProperties& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline DatasetProperties& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline DatasetProperties& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The dataset status. While the system creates the dataset, the status is
     * <code>CREATING</code>. When the dataset is ready to use, the status changes to
     * <code>COMPLETED</code>. </p>
     */
    inline const DatasetStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const DatasetStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(DatasetStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline DatasetProperties& WithStatus(const DatasetStatus& value) { SetStatus(value); return *this;}
    inline DatasetProperties& WithStatus(DatasetStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the status of the dataset.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }
    inline DatasetProperties& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline DatasetProperties& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline DatasetProperties& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of documents in the dataset.</p>
     */
    inline long long GetNumberOfDocuments() const{ return m_numberOfDocuments; }
    inline bool NumberOfDocumentsHasBeenSet() const { return m_numberOfDocumentsHasBeenSet; }
    inline void SetNumberOfDocuments(long long value) { m_numberOfDocumentsHasBeenSet = true; m_numberOfDocuments = value; }
    inline DatasetProperties& WithNumberOfDocuments(long long value) { SetNumberOfDocuments(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Creation time of the dataset.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline DatasetProperties& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline DatasetProperties& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Time when the data from the dataset becomes available in the data lake.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }
    inline DatasetProperties& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}
    inline DatasetProperties& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}
    ///@}
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
