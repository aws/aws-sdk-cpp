/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/personalize/PersonalizeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/personalize/model/DataSource.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/personalize/model/ImportMode.h>
#include <aws/personalize/model/Tag.h>
#include <utility>

namespace Aws
{
namespace Personalize
{
namespace Model
{

  /**
   */
  class CreateDatasetImportJobRequest : public PersonalizeRequest
  {
  public:
    AWS_PERSONALIZE_API CreateDatasetImportJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDatasetImportJob"; }

    AWS_PERSONALIZE_API Aws::String SerializePayload() const override;

    AWS_PERSONALIZE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name for the dataset import job.</p>
     */
    inline const Aws::String& GetJobName() const{ return m_jobName; }

    /**
     * <p>The name for the dataset import job.</p>
     */
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }

    /**
     * <p>The name for the dataset import job.</p>
     */
    inline void SetJobName(const Aws::String& value) { m_jobNameHasBeenSet = true; m_jobName = value; }

    /**
     * <p>The name for the dataset import job.</p>
     */
    inline void SetJobName(Aws::String&& value) { m_jobNameHasBeenSet = true; m_jobName = std::move(value); }

    /**
     * <p>The name for the dataset import job.</p>
     */
    inline void SetJobName(const char* value) { m_jobNameHasBeenSet = true; m_jobName.assign(value); }

    /**
     * <p>The name for the dataset import job.</p>
     */
    inline CreateDatasetImportJobRequest& WithJobName(const Aws::String& value) { SetJobName(value); return *this;}

    /**
     * <p>The name for the dataset import job.</p>
     */
    inline CreateDatasetImportJobRequest& WithJobName(Aws::String&& value) { SetJobName(std::move(value)); return *this;}

    /**
     * <p>The name for the dataset import job.</p>
     */
    inline CreateDatasetImportJobRequest& WithJobName(const char* value) { SetJobName(value); return *this;}


    /**
     * <p>The ARN of the dataset that receives the imported data.</p>
     */
    inline const Aws::String& GetDatasetArn() const{ return m_datasetArn; }

    /**
     * <p>The ARN of the dataset that receives the imported data.</p>
     */
    inline bool DatasetArnHasBeenSet() const { return m_datasetArnHasBeenSet; }

    /**
     * <p>The ARN of the dataset that receives the imported data.</p>
     */
    inline void SetDatasetArn(const Aws::String& value) { m_datasetArnHasBeenSet = true; m_datasetArn = value; }

    /**
     * <p>The ARN of the dataset that receives the imported data.</p>
     */
    inline void SetDatasetArn(Aws::String&& value) { m_datasetArnHasBeenSet = true; m_datasetArn = std::move(value); }

    /**
     * <p>The ARN of the dataset that receives the imported data.</p>
     */
    inline void SetDatasetArn(const char* value) { m_datasetArnHasBeenSet = true; m_datasetArn.assign(value); }

    /**
     * <p>The ARN of the dataset that receives the imported data.</p>
     */
    inline CreateDatasetImportJobRequest& WithDatasetArn(const Aws::String& value) { SetDatasetArn(value); return *this;}

    /**
     * <p>The ARN of the dataset that receives the imported data.</p>
     */
    inline CreateDatasetImportJobRequest& WithDatasetArn(Aws::String&& value) { SetDatasetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the dataset that receives the imported data.</p>
     */
    inline CreateDatasetImportJobRequest& WithDatasetArn(const char* value) { SetDatasetArn(value); return *this;}


    /**
     * <p>The Amazon S3 bucket that contains the training data to import.</p>
     */
    inline const DataSource& GetDataSource() const{ return m_dataSource; }

    /**
     * <p>The Amazon S3 bucket that contains the training data to import.</p>
     */
    inline bool DataSourceHasBeenSet() const { return m_dataSourceHasBeenSet; }

    /**
     * <p>The Amazon S3 bucket that contains the training data to import.</p>
     */
    inline void SetDataSource(const DataSource& value) { m_dataSourceHasBeenSet = true; m_dataSource = value; }

    /**
     * <p>The Amazon S3 bucket that contains the training data to import.</p>
     */
    inline void SetDataSource(DataSource&& value) { m_dataSourceHasBeenSet = true; m_dataSource = std::move(value); }

    /**
     * <p>The Amazon S3 bucket that contains the training data to import.</p>
     */
    inline CreateDatasetImportJobRequest& WithDataSource(const DataSource& value) { SetDataSource(value); return *this;}

    /**
     * <p>The Amazon S3 bucket that contains the training data to import.</p>
     */
    inline CreateDatasetImportJobRequest& WithDataSource(DataSource&& value) { SetDataSource(std::move(value)); return *this;}


    /**
     * <p>The ARN of the IAM role that has permissions to read from the Amazon S3 data
     * source.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The ARN of the IAM role that has permissions to read from the Amazon S3 data
     * source.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The ARN of the IAM role that has permissions to read from the Amazon S3 data
     * source.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The ARN of the IAM role that has permissions to read from the Amazon S3 data
     * source.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The ARN of the IAM role that has permissions to read from the Amazon S3 data
     * source.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The ARN of the IAM role that has permissions to read from the Amazon S3 data
     * source.</p>
     */
    inline CreateDatasetImportJobRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The ARN of the IAM role that has permissions to read from the Amazon S3 data
     * source.</p>
     */
    inline CreateDatasetImportJobRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the IAM role that has permissions to read from the Amazon S3 data
     * source.</p>
     */
    inline CreateDatasetImportJobRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/personalize/latest/dev/tagging-resources.html">tags</a>
     * to apply to the dataset import job.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/personalize/latest/dev/tagging-resources.html">tags</a>
     * to apply to the dataset import job.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/personalize/latest/dev/tagging-resources.html">tags</a>
     * to apply to the dataset import job.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/personalize/latest/dev/tagging-resources.html">tags</a>
     * to apply to the dataset import job.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/personalize/latest/dev/tagging-resources.html">tags</a>
     * to apply to the dataset import job.</p>
     */
    inline CreateDatasetImportJobRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/personalize/latest/dev/tagging-resources.html">tags</a>
     * to apply to the dataset import job.</p>
     */
    inline CreateDatasetImportJobRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/personalize/latest/dev/tagging-resources.html">tags</a>
     * to apply to the dataset import job.</p>
     */
    inline CreateDatasetImportJobRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/personalize/latest/dev/tagging-resources.html">tags</a>
     * to apply to the dataset import job.</p>
     */
    inline CreateDatasetImportJobRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>Specify how to add the new records to an existing dataset. The default import
     * mode is <code>FULL</code>. If you haven't imported bulk records into the dataset
     * previously, you can only specify <code>FULL</code>.</p> <ul> <li> <p>Specify
     * <code>FULL</code> to overwrite all existing bulk data in your dataset. Data you
     * imported individually is not replaced.</p> </li> <li> <p>Specify
     * <code>INCREMENTAL</code> to append the new records to the existing data in your
     * dataset. Amazon Personalize replaces any record with the same ID with the new
     * one.</p> </li> </ul>
     */
    inline const ImportMode& GetImportMode() const{ return m_importMode; }

    /**
     * <p>Specify how to add the new records to an existing dataset. The default import
     * mode is <code>FULL</code>. If you haven't imported bulk records into the dataset
     * previously, you can only specify <code>FULL</code>.</p> <ul> <li> <p>Specify
     * <code>FULL</code> to overwrite all existing bulk data in your dataset. Data you
     * imported individually is not replaced.</p> </li> <li> <p>Specify
     * <code>INCREMENTAL</code> to append the new records to the existing data in your
     * dataset. Amazon Personalize replaces any record with the same ID with the new
     * one.</p> </li> </ul>
     */
    inline bool ImportModeHasBeenSet() const { return m_importModeHasBeenSet; }

    /**
     * <p>Specify how to add the new records to an existing dataset. The default import
     * mode is <code>FULL</code>. If you haven't imported bulk records into the dataset
     * previously, you can only specify <code>FULL</code>.</p> <ul> <li> <p>Specify
     * <code>FULL</code> to overwrite all existing bulk data in your dataset. Data you
     * imported individually is not replaced.</p> </li> <li> <p>Specify
     * <code>INCREMENTAL</code> to append the new records to the existing data in your
     * dataset. Amazon Personalize replaces any record with the same ID with the new
     * one.</p> </li> </ul>
     */
    inline void SetImportMode(const ImportMode& value) { m_importModeHasBeenSet = true; m_importMode = value; }

    /**
     * <p>Specify how to add the new records to an existing dataset. The default import
     * mode is <code>FULL</code>. If you haven't imported bulk records into the dataset
     * previously, you can only specify <code>FULL</code>.</p> <ul> <li> <p>Specify
     * <code>FULL</code> to overwrite all existing bulk data in your dataset. Data you
     * imported individually is not replaced.</p> </li> <li> <p>Specify
     * <code>INCREMENTAL</code> to append the new records to the existing data in your
     * dataset. Amazon Personalize replaces any record with the same ID with the new
     * one.</p> </li> </ul>
     */
    inline void SetImportMode(ImportMode&& value) { m_importModeHasBeenSet = true; m_importMode = std::move(value); }

    /**
     * <p>Specify how to add the new records to an existing dataset. The default import
     * mode is <code>FULL</code>. If you haven't imported bulk records into the dataset
     * previously, you can only specify <code>FULL</code>.</p> <ul> <li> <p>Specify
     * <code>FULL</code> to overwrite all existing bulk data in your dataset. Data you
     * imported individually is not replaced.</p> </li> <li> <p>Specify
     * <code>INCREMENTAL</code> to append the new records to the existing data in your
     * dataset. Amazon Personalize replaces any record with the same ID with the new
     * one.</p> </li> </ul>
     */
    inline CreateDatasetImportJobRequest& WithImportMode(const ImportMode& value) { SetImportMode(value); return *this;}

    /**
     * <p>Specify how to add the new records to an existing dataset. The default import
     * mode is <code>FULL</code>. If you haven't imported bulk records into the dataset
     * previously, you can only specify <code>FULL</code>.</p> <ul> <li> <p>Specify
     * <code>FULL</code> to overwrite all existing bulk data in your dataset. Data you
     * imported individually is not replaced.</p> </li> <li> <p>Specify
     * <code>INCREMENTAL</code> to append the new records to the existing data in your
     * dataset. Amazon Personalize replaces any record with the same ID with the new
     * one.</p> </li> </ul>
     */
    inline CreateDatasetImportJobRequest& WithImportMode(ImportMode&& value) { SetImportMode(std::move(value)); return *this;}


    /**
     * <p>If you created a metric attribution, specify whether to publish metrics for
     * this import job to Amazon S3</p>
     */
    inline bool GetPublishAttributionMetricsToS3() const{ return m_publishAttributionMetricsToS3; }

    /**
     * <p>If you created a metric attribution, specify whether to publish metrics for
     * this import job to Amazon S3</p>
     */
    inline bool PublishAttributionMetricsToS3HasBeenSet() const { return m_publishAttributionMetricsToS3HasBeenSet; }

    /**
     * <p>If you created a metric attribution, specify whether to publish metrics for
     * this import job to Amazon S3</p>
     */
    inline void SetPublishAttributionMetricsToS3(bool value) { m_publishAttributionMetricsToS3HasBeenSet = true; m_publishAttributionMetricsToS3 = value; }

    /**
     * <p>If you created a metric attribution, specify whether to publish metrics for
     * this import job to Amazon S3</p>
     */
    inline CreateDatasetImportJobRequest& WithPublishAttributionMetricsToS3(bool value) { SetPublishAttributionMetricsToS3(value); return *this;}

  private:

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet = false;

    Aws::String m_datasetArn;
    bool m_datasetArnHasBeenSet = false;

    DataSource m_dataSource;
    bool m_dataSourceHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    ImportMode m_importMode;
    bool m_importModeHasBeenSet = false;

    bool m_publishAttributionMetricsToS3;
    bool m_publishAttributionMetricsToS3HasBeenSet = false;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
