/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/forecast/ForecastService_EXPORTS.h>
#include <aws/forecast/ForecastServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/forecast/model/DataSource.h>
#include <utility>

namespace Aws
{
namespace ForecastService
{
namespace Model
{

  /**
   */
  class AWS_FORECASTSERVICE_API CreateDatasetImportJobRequest : public ForecastServiceRequest
  {
  public:
    CreateDatasetImportJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDatasetImportJob"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name for the dataset import job. We recommend including the current
     * timestamp in the name, for example, <code>20190721DatasetImport</code>. This can
     * help you avoid getting a <code>ResourceAlreadyExistsException</code>
     * exception.</p>
     */
    inline const Aws::String& GetDatasetImportJobName() const{ return m_datasetImportJobName; }

    /**
     * <p>The name for the dataset import job. We recommend including the current
     * timestamp in the name, for example, <code>20190721DatasetImport</code>. This can
     * help you avoid getting a <code>ResourceAlreadyExistsException</code>
     * exception.</p>
     */
    inline bool DatasetImportJobNameHasBeenSet() const { return m_datasetImportJobNameHasBeenSet; }

    /**
     * <p>The name for the dataset import job. We recommend including the current
     * timestamp in the name, for example, <code>20190721DatasetImport</code>. This can
     * help you avoid getting a <code>ResourceAlreadyExistsException</code>
     * exception.</p>
     */
    inline void SetDatasetImportJobName(const Aws::String& value) { m_datasetImportJobNameHasBeenSet = true; m_datasetImportJobName = value; }

    /**
     * <p>The name for the dataset import job. We recommend including the current
     * timestamp in the name, for example, <code>20190721DatasetImport</code>. This can
     * help you avoid getting a <code>ResourceAlreadyExistsException</code>
     * exception.</p>
     */
    inline void SetDatasetImportJobName(Aws::String&& value) { m_datasetImportJobNameHasBeenSet = true; m_datasetImportJobName = std::move(value); }

    /**
     * <p>The name for the dataset import job. We recommend including the current
     * timestamp in the name, for example, <code>20190721DatasetImport</code>. This can
     * help you avoid getting a <code>ResourceAlreadyExistsException</code>
     * exception.</p>
     */
    inline void SetDatasetImportJobName(const char* value) { m_datasetImportJobNameHasBeenSet = true; m_datasetImportJobName.assign(value); }

    /**
     * <p>The name for the dataset import job. We recommend including the current
     * timestamp in the name, for example, <code>20190721DatasetImport</code>. This can
     * help you avoid getting a <code>ResourceAlreadyExistsException</code>
     * exception.</p>
     */
    inline CreateDatasetImportJobRequest& WithDatasetImportJobName(const Aws::String& value) { SetDatasetImportJobName(value); return *this;}

    /**
     * <p>The name for the dataset import job. We recommend including the current
     * timestamp in the name, for example, <code>20190721DatasetImport</code>. This can
     * help you avoid getting a <code>ResourceAlreadyExistsException</code>
     * exception.</p>
     */
    inline CreateDatasetImportJobRequest& WithDatasetImportJobName(Aws::String&& value) { SetDatasetImportJobName(std::move(value)); return *this;}

    /**
     * <p>The name for the dataset import job. We recommend including the current
     * timestamp in the name, for example, <code>20190721DatasetImport</code>. This can
     * help you avoid getting a <code>ResourceAlreadyExistsException</code>
     * exception.</p>
     */
    inline CreateDatasetImportJobRequest& WithDatasetImportJobName(const char* value) { SetDatasetImportJobName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Forecast dataset that you want
     * to import data to.</p>
     */
    inline const Aws::String& GetDatasetArn() const{ return m_datasetArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Forecast dataset that you want
     * to import data to.</p>
     */
    inline bool DatasetArnHasBeenSet() const { return m_datasetArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Forecast dataset that you want
     * to import data to.</p>
     */
    inline void SetDatasetArn(const Aws::String& value) { m_datasetArnHasBeenSet = true; m_datasetArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Forecast dataset that you want
     * to import data to.</p>
     */
    inline void SetDatasetArn(Aws::String&& value) { m_datasetArnHasBeenSet = true; m_datasetArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Forecast dataset that you want
     * to import data to.</p>
     */
    inline void SetDatasetArn(const char* value) { m_datasetArnHasBeenSet = true; m_datasetArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Forecast dataset that you want
     * to import data to.</p>
     */
    inline CreateDatasetImportJobRequest& WithDatasetArn(const Aws::String& value) { SetDatasetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Forecast dataset that you want
     * to import data to.</p>
     */
    inline CreateDatasetImportJobRequest& WithDatasetArn(Aws::String&& value) { SetDatasetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Forecast dataset that you want
     * to import data to.</p>
     */
    inline CreateDatasetImportJobRequest& WithDatasetArn(const char* value) { SetDatasetArn(value); return *this;}


    /**
     * <p>The location of the training data to import and an AWS Identity and Access
     * Management (IAM) role that Amazon Forecast can assume to access the data. The
     * training data must be stored in an Amazon S3 bucket.</p> <p>If encryption is
     * used, <code>DataSource</code> must include an AWS Key Management Service (KMS)
     * key and the IAM role must allow Amazon Forecast permission to access the key.
     * The KMS key and IAM role must match those specified in the
     * <code>EncryptionConfig</code> parameter of the <a>CreateDataset</a>
     * operation.</p>
     */
    inline const DataSource& GetDataSource() const{ return m_dataSource; }

    /**
     * <p>The location of the training data to import and an AWS Identity and Access
     * Management (IAM) role that Amazon Forecast can assume to access the data. The
     * training data must be stored in an Amazon S3 bucket.</p> <p>If encryption is
     * used, <code>DataSource</code> must include an AWS Key Management Service (KMS)
     * key and the IAM role must allow Amazon Forecast permission to access the key.
     * The KMS key and IAM role must match those specified in the
     * <code>EncryptionConfig</code> parameter of the <a>CreateDataset</a>
     * operation.</p>
     */
    inline bool DataSourceHasBeenSet() const { return m_dataSourceHasBeenSet; }

    /**
     * <p>The location of the training data to import and an AWS Identity and Access
     * Management (IAM) role that Amazon Forecast can assume to access the data. The
     * training data must be stored in an Amazon S3 bucket.</p> <p>If encryption is
     * used, <code>DataSource</code> must include an AWS Key Management Service (KMS)
     * key and the IAM role must allow Amazon Forecast permission to access the key.
     * The KMS key and IAM role must match those specified in the
     * <code>EncryptionConfig</code> parameter of the <a>CreateDataset</a>
     * operation.</p>
     */
    inline void SetDataSource(const DataSource& value) { m_dataSourceHasBeenSet = true; m_dataSource = value; }

    /**
     * <p>The location of the training data to import and an AWS Identity and Access
     * Management (IAM) role that Amazon Forecast can assume to access the data. The
     * training data must be stored in an Amazon S3 bucket.</p> <p>If encryption is
     * used, <code>DataSource</code> must include an AWS Key Management Service (KMS)
     * key and the IAM role must allow Amazon Forecast permission to access the key.
     * The KMS key and IAM role must match those specified in the
     * <code>EncryptionConfig</code> parameter of the <a>CreateDataset</a>
     * operation.</p>
     */
    inline void SetDataSource(DataSource&& value) { m_dataSourceHasBeenSet = true; m_dataSource = std::move(value); }

    /**
     * <p>The location of the training data to import and an AWS Identity and Access
     * Management (IAM) role that Amazon Forecast can assume to access the data. The
     * training data must be stored in an Amazon S3 bucket.</p> <p>If encryption is
     * used, <code>DataSource</code> must include an AWS Key Management Service (KMS)
     * key and the IAM role must allow Amazon Forecast permission to access the key.
     * The KMS key and IAM role must match those specified in the
     * <code>EncryptionConfig</code> parameter of the <a>CreateDataset</a>
     * operation.</p>
     */
    inline CreateDatasetImportJobRequest& WithDataSource(const DataSource& value) { SetDataSource(value); return *this;}

    /**
     * <p>The location of the training data to import and an AWS Identity and Access
     * Management (IAM) role that Amazon Forecast can assume to access the data. The
     * training data must be stored in an Amazon S3 bucket.</p> <p>If encryption is
     * used, <code>DataSource</code> must include an AWS Key Management Service (KMS)
     * key and the IAM role must allow Amazon Forecast permission to access the key.
     * The KMS key and IAM role must match those specified in the
     * <code>EncryptionConfig</code> parameter of the <a>CreateDataset</a>
     * operation.</p>
     */
    inline CreateDatasetImportJobRequest& WithDataSource(DataSource&& value) { SetDataSource(std::move(value)); return *this;}


    /**
     * <p>The format of timestamps in the dataset. The format that you specify depends
     * on the <code>DataFrequency</code> specified when the dataset was created. The
     * following formats are supported</p> <ul> <li> <p>"yyyy-MM-dd"</p> <p>For the
     * following data frequencies: Y, M, W, and D</p> </li> <li> <p>"yyyy-MM-dd
     * HH:mm:ss"</p> <p>For the following data frequencies: H, 30min, 15min, and 1min;
     * and optionally, for: Y, M, W, and D</p> </li> </ul> <p>If the format isn't
     * specified, Amazon Forecast expects the format to be "yyyy-MM-dd HH:mm:ss".</p>
     */
    inline const Aws::String& GetTimestampFormat() const{ return m_timestampFormat; }

    /**
     * <p>The format of timestamps in the dataset. The format that you specify depends
     * on the <code>DataFrequency</code> specified when the dataset was created. The
     * following formats are supported</p> <ul> <li> <p>"yyyy-MM-dd"</p> <p>For the
     * following data frequencies: Y, M, W, and D</p> </li> <li> <p>"yyyy-MM-dd
     * HH:mm:ss"</p> <p>For the following data frequencies: H, 30min, 15min, and 1min;
     * and optionally, for: Y, M, W, and D</p> </li> </ul> <p>If the format isn't
     * specified, Amazon Forecast expects the format to be "yyyy-MM-dd HH:mm:ss".</p>
     */
    inline bool TimestampFormatHasBeenSet() const { return m_timestampFormatHasBeenSet; }

    /**
     * <p>The format of timestamps in the dataset. The format that you specify depends
     * on the <code>DataFrequency</code> specified when the dataset was created. The
     * following formats are supported</p> <ul> <li> <p>"yyyy-MM-dd"</p> <p>For the
     * following data frequencies: Y, M, W, and D</p> </li> <li> <p>"yyyy-MM-dd
     * HH:mm:ss"</p> <p>For the following data frequencies: H, 30min, 15min, and 1min;
     * and optionally, for: Y, M, W, and D</p> </li> </ul> <p>If the format isn't
     * specified, Amazon Forecast expects the format to be "yyyy-MM-dd HH:mm:ss".</p>
     */
    inline void SetTimestampFormat(const Aws::String& value) { m_timestampFormatHasBeenSet = true; m_timestampFormat = value; }

    /**
     * <p>The format of timestamps in the dataset. The format that you specify depends
     * on the <code>DataFrequency</code> specified when the dataset was created. The
     * following formats are supported</p> <ul> <li> <p>"yyyy-MM-dd"</p> <p>For the
     * following data frequencies: Y, M, W, and D</p> </li> <li> <p>"yyyy-MM-dd
     * HH:mm:ss"</p> <p>For the following data frequencies: H, 30min, 15min, and 1min;
     * and optionally, for: Y, M, W, and D</p> </li> </ul> <p>If the format isn't
     * specified, Amazon Forecast expects the format to be "yyyy-MM-dd HH:mm:ss".</p>
     */
    inline void SetTimestampFormat(Aws::String&& value) { m_timestampFormatHasBeenSet = true; m_timestampFormat = std::move(value); }

    /**
     * <p>The format of timestamps in the dataset. The format that you specify depends
     * on the <code>DataFrequency</code> specified when the dataset was created. The
     * following formats are supported</p> <ul> <li> <p>"yyyy-MM-dd"</p> <p>For the
     * following data frequencies: Y, M, W, and D</p> </li> <li> <p>"yyyy-MM-dd
     * HH:mm:ss"</p> <p>For the following data frequencies: H, 30min, 15min, and 1min;
     * and optionally, for: Y, M, W, and D</p> </li> </ul> <p>If the format isn't
     * specified, Amazon Forecast expects the format to be "yyyy-MM-dd HH:mm:ss".</p>
     */
    inline void SetTimestampFormat(const char* value) { m_timestampFormatHasBeenSet = true; m_timestampFormat.assign(value); }

    /**
     * <p>The format of timestamps in the dataset. The format that you specify depends
     * on the <code>DataFrequency</code> specified when the dataset was created. The
     * following formats are supported</p> <ul> <li> <p>"yyyy-MM-dd"</p> <p>For the
     * following data frequencies: Y, M, W, and D</p> </li> <li> <p>"yyyy-MM-dd
     * HH:mm:ss"</p> <p>For the following data frequencies: H, 30min, 15min, and 1min;
     * and optionally, for: Y, M, W, and D</p> </li> </ul> <p>If the format isn't
     * specified, Amazon Forecast expects the format to be "yyyy-MM-dd HH:mm:ss".</p>
     */
    inline CreateDatasetImportJobRequest& WithTimestampFormat(const Aws::String& value) { SetTimestampFormat(value); return *this;}

    /**
     * <p>The format of timestamps in the dataset. The format that you specify depends
     * on the <code>DataFrequency</code> specified when the dataset was created. The
     * following formats are supported</p> <ul> <li> <p>"yyyy-MM-dd"</p> <p>For the
     * following data frequencies: Y, M, W, and D</p> </li> <li> <p>"yyyy-MM-dd
     * HH:mm:ss"</p> <p>For the following data frequencies: H, 30min, 15min, and 1min;
     * and optionally, for: Y, M, W, and D</p> </li> </ul> <p>If the format isn't
     * specified, Amazon Forecast expects the format to be "yyyy-MM-dd HH:mm:ss".</p>
     */
    inline CreateDatasetImportJobRequest& WithTimestampFormat(Aws::String&& value) { SetTimestampFormat(std::move(value)); return *this;}

    /**
     * <p>The format of timestamps in the dataset. The format that you specify depends
     * on the <code>DataFrequency</code> specified when the dataset was created. The
     * following formats are supported</p> <ul> <li> <p>"yyyy-MM-dd"</p> <p>For the
     * following data frequencies: Y, M, W, and D</p> </li> <li> <p>"yyyy-MM-dd
     * HH:mm:ss"</p> <p>For the following data frequencies: H, 30min, 15min, and 1min;
     * and optionally, for: Y, M, W, and D</p> </li> </ul> <p>If the format isn't
     * specified, Amazon Forecast expects the format to be "yyyy-MM-dd HH:mm:ss".</p>
     */
    inline CreateDatasetImportJobRequest& WithTimestampFormat(const char* value) { SetTimestampFormat(value); return *this;}

  private:

    Aws::String m_datasetImportJobName;
    bool m_datasetImportJobNameHasBeenSet;

    Aws::String m_datasetArn;
    bool m_datasetArnHasBeenSet;

    DataSource m_dataSource;
    bool m_dataSourceHasBeenSet;

    Aws::String m_timestampFormat;
    bool m_timestampFormatHasBeenSet;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
