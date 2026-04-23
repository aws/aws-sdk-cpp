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
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/DataSource.h>
#include <aws/sagemaker/model/CompressionType.h>
#include <aws/sagemaker/model/RecordWrapper.h>
#include <aws/sagemaker/model/TrainingInputMode.h>
#include <aws/sagemaker/model/ShuffleConfig.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>A channel is a named input source that training algorithms can consume.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/Channel">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API Channel
  {
  public:
    Channel();
    Channel(Aws::Utils::Json::JsonView jsonValue);
    Channel& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the channel. </p>
     */
    inline const Aws::String& GetChannelName() const{ return m_channelName; }

    /**
     * <p>The name of the channel. </p>
     */
    inline bool ChannelNameHasBeenSet() const { return m_channelNameHasBeenSet; }

    /**
     * <p>The name of the channel. </p>
     */
    inline void SetChannelName(const Aws::String& value) { m_channelNameHasBeenSet = true; m_channelName = value; }

    /**
     * <p>The name of the channel. </p>
     */
    inline void SetChannelName(Aws::String&& value) { m_channelNameHasBeenSet = true; m_channelName = std::move(value); }

    /**
     * <p>The name of the channel. </p>
     */
    inline void SetChannelName(const char* value) { m_channelNameHasBeenSet = true; m_channelName.assign(value); }

    /**
     * <p>The name of the channel. </p>
     */
    inline Channel& WithChannelName(const Aws::String& value) { SetChannelName(value); return *this;}

    /**
     * <p>The name of the channel. </p>
     */
    inline Channel& WithChannelName(Aws::String&& value) { SetChannelName(std::move(value)); return *this;}

    /**
     * <p>The name of the channel. </p>
     */
    inline Channel& WithChannelName(const char* value) { SetChannelName(value); return *this;}


    /**
     * <p>The location of the channel data.</p>
     */
    inline const DataSource& GetDataSource() const{ return m_dataSource; }

    /**
     * <p>The location of the channel data.</p>
     */
    inline bool DataSourceHasBeenSet() const { return m_dataSourceHasBeenSet; }

    /**
     * <p>The location of the channel data.</p>
     */
    inline void SetDataSource(const DataSource& value) { m_dataSourceHasBeenSet = true; m_dataSource = value; }

    /**
     * <p>The location of the channel data.</p>
     */
    inline void SetDataSource(DataSource&& value) { m_dataSourceHasBeenSet = true; m_dataSource = std::move(value); }

    /**
     * <p>The location of the channel data.</p>
     */
    inline Channel& WithDataSource(const DataSource& value) { SetDataSource(value); return *this;}

    /**
     * <p>The location of the channel data.</p>
     */
    inline Channel& WithDataSource(DataSource&& value) { SetDataSource(std::move(value)); return *this;}


    /**
     * <p>The MIME type of the data.</p>
     */
    inline const Aws::String& GetContentType() const{ return m_contentType; }

    /**
     * <p>The MIME type of the data.</p>
     */
    inline bool ContentTypeHasBeenSet() const { return m_contentTypeHasBeenSet; }

    /**
     * <p>The MIME type of the data.</p>
     */
    inline void SetContentType(const Aws::String& value) { m_contentTypeHasBeenSet = true; m_contentType = value; }

    /**
     * <p>The MIME type of the data.</p>
     */
    inline void SetContentType(Aws::String&& value) { m_contentTypeHasBeenSet = true; m_contentType = std::move(value); }

    /**
     * <p>The MIME type of the data.</p>
     */
    inline void SetContentType(const char* value) { m_contentTypeHasBeenSet = true; m_contentType.assign(value); }

    /**
     * <p>The MIME type of the data.</p>
     */
    inline Channel& WithContentType(const Aws::String& value) { SetContentType(value); return *this;}

    /**
     * <p>The MIME type of the data.</p>
     */
    inline Channel& WithContentType(Aws::String&& value) { SetContentType(std::move(value)); return *this;}

    /**
     * <p>The MIME type of the data.</p>
     */
    inline Channel& WithContentType(const char* value) { SetContentType(value); return *this;}


    /**
     * <p>If training data is compressed, the compression type. The default value is
     * <code>None</code>. <code>CompressionType</code> is used only in Pipe input mode.
     * In File mode, leave this field unset or set it to None.</p>
     */
    inline const CompressionType& GetCompressionType() const{ return m_compressionType; }

    /**
     * <p>If training data is compressed, the compression type. The default value is
     * <code>None</code>. <code>CompressionType</code> is used only in Pipe input mode.
     * In File mode, leave this field unset or set it to None.</p>
     */
    inline bool CompressionTypeHasBeenSet() const { return m_compressionTypeHasBeenSet; }

    /**
     * <p>If training data is compressed, the compression type. The default value is
     * <code>None</code>. <code>CompressionType</code> is used only in Pipe input mode.
     * In File mode, leave this field unset or set it to None.</p>
     */
    inline void SetCompressionType(const CompressionType& value) { m_compressionTypeHasBeenSet = true; m_compressionType = value; }

    /**
     * <p>If training data is compressed, the compression type. The default value is
     * <code>None</code>. <code>CompressionType</code> is used only in Pipe input mode.
     * In File mode, leave this field unset or set it to None.</p>
     */
    inline void SetCompressionType(CompressionType&& value) { m_compressionTypeHasBeenSet = true; m_compressionType = std::move(value); }

    /**
     * <p>If training data is compressed, the compression type. The default value is
     * <code>None</code>. <code>CompressionType</code> is used only in Pipe input mode.
     * In File mode, leave this field unset or set it to None.</p>
     */
    inline Channel& WithCompressionType(const CompressionType& value) { SetCompressionType(value); return *this;}

    /**
     * <p>If training data is compressed, the compression type. The default value is
     * <code>None</code>. <code>CompressionType</code> is used only in Pipe input mode.
     * In File mode, leave this field unset or set it to None.</p>
     */
    inline Channel& WithCompressionType(CompressionType&& value) { SetCompressionType(std::move(value)); return *this;}


    /**
     * <p/> <p>Specify RecordIO as the value when input data is in raw format but the
     * training algorithm requires the RecordIO format. In this case, Amazon SageMaker
     * wraps each individual S3 object in a RecordIO record. If the input data is
     * already in RecordIO format, you don't need to set this attribute. For more
     * information, see <a
     * href="https://mxnet.incubator.apache.org/architecture/note_data_loading.html#data-format">Create
     * a Dataset Using RecordIO</a>. </p> <p>In File mode, leave this field unset or
     * set it to None.</p>
     */
    inline const RecordWrapper& GetRecordWrapperType() const{ return m_recordWrapperType; }

    /**
     * <p/> <p>Specify RecordIO as the value when input data is in raw format but the
     * training algorithm requires the RecordIO format. In this case, Amazon SageMaker
     * wraps each individual S3 object in a RecordIO record. If the input data is
     * already in RecordIO format, you don't need to set this attribute. For more
     * information, see <a
     * href="https://mxnet.incubator.apache.org/architecture/note_data_loading.html#data-format">Create
     * a Dataset Using RecordIO</a>. </p> <p>In File mode, leave this field unset or
     * set it to None.</p>
     */
    inline bool RecordWrapperTypeHasBeenSet() const { return m_recordWrapperTypeHasBeenSet; }

    /**
     * <p/> <p>Specify RecordIO as the value when input data is in raw format but the
     * training algorithm requires the RecordIO format. In this case, Amazon SageMaker
     * wraps each individual S3 object in a RecordIO record. If the input data is
     * already in RecordIO format, you don't need to set this attribute. For more
     * information, see <a
     * href="https://mxnet.incubator.apache.org/architecture/note_data_loading.html#data-format">Create
     * a Dataset Using RecordIO</a>. </p> <p>In File mode, leave this field unset or
     * set it to None.</p>
     */
    inline void SetRecordWrapperType(const RecordWrapper& value) { m_recordWrapperTypeHasBeenSet = true; m_recordWrapperType = value; }

    /**
     * <p/> <p>Specify RecordIO as the value when input data is in raw format but the
     * training algorithm requires the RecordIO format. In this case, Amazon SageMaker
     * wraps each individual S3 object in a RecordIO record. If the input data is
     * already in RecordIO format, you don't need to set this attribute. For more
     * information, see <a
     * href="https://mxnet.incubator.apache.org/architecture/note_data_loading.html#data-format">Create
     * a Dataset Using RecordIO</a>. </p> <p>In File mode, leave this field unset or
     * set it to None.</p>
     */
    inline void SetRecordWrapperType(RecordWrapper&& value) { m_recordWrapperTypeHasBeenSet = true; m_recordWrapperType = std::move(value); }

    /**
     * <p/> <p>Specify RecordIO as the value when input data is in raw format but the
     * training algorithm requires the RecordIO format. In this case, Amazon SageMaker
     * wraps each individual S3 object in a RecordIO record. If the input data is
     * already in RecordIO format, you don't need to set this attribute. For more
     * information, see <a
     * href="https://mxnet.incubator.apache.org/architecture/note_data_loading.html#data-format">Create
     * a Dataset Using RecordIO</a>. </p> <p>In File mode, leave this field unset or
     * set it to None.</p>
     */
    inline Channel& WithRecordWrapperType(const RecordWrapper& value) { SetRecordWrapperType(value); return *this;}

    /**
     * <p/> <p>Specify RecordIO as the value when input data is in raw format but the
     * training algorithm requires the RecordIO format. In this case, Amazon SageMaker
     * wraps each individual S3 object in a RecordIO record. If the input data is
     * already in RecordIO format, you don't need to set this attribute. For more
     * information, see <a
     * href="https://mxnet.incubator.apache.org/architecture/note_data_loading.html#data-format">Create
     * a Dataset Using RecordIO</a>. </p> <p>In File mode, leave this field unset or
     * set it to None.</p>
     */
    inline Channel& WithRecordWrapperType(RecordWrapper&& value) { SetRecordWrapperType(std::move(value)); return *this;}


    /**
     * <p>(Optional) The input mode to use for the data channel in a training job. If
     * you don't set a value for <code>InputMode</code>, Amazon SageMaker uses the
     * value set for <code>TrainingInputMode</code>. Use this parameter to override the
     * <code>TrainingInputMode</code> setting in a <a>AlgorithmSpecification</a>
     * request when you have a channel that needs a different input mode from the
     * training job's general setting. To download the data from Amazon Simple Storage
     * Service (Amazon S3) to the provisioned ML storage volume, and mount the
     * directory to a Docker volume, use <code>File</code> input mode. To stream data
     * directly from Amazon S3 to the container, choose <code>Pipe</code> input
     * mode.</p> <p>To use a model for incremental training, choose <code>File</code>
     * input model.</p>
     */
    inline const TrainingInputMode& GetInputMode() const{ return m_inputMode; }

    /**
     * <p>(Optional) The input mode to use for the data channel in a training job. If
     * you don't set a value for <code>InputMode</code>, Amazon SageMaker uses the
     * value set for <code>TrainingInputMode</code>. Use this parameter to override the
     * <code>TrainingInputMode</code> setting in a <a>AlgorithmSpecification</a>
     * request when you have a channel that needs a different input mode from the
     * training job's general setting. To download the data from Amazon Simple Storage
     * Service (Amazon S3) to the provisioned ML storage volume, and mount the
     * directory to a Docker volume, use <code>File</code> input mode. To stream data
     * directly from Amazon S3 to the container, choose <code>Pipe</code> input
     * mode.</p> <p>To use a model for incremental training, choose <code>File</code>
     * input model.</p>
     */
    inline bool InputModeHasBeenSet() const { return m_inputModeHasBeenSet; }

    /**
     * <p>(Optional) The input mode to use for the data channel in a training job. If
     * you don't set a value for <code>InputMode</code>, Amazon SageMaker uses the
     * value set for <code>TrainingInputMode</code>. Use this parameter to override the
     * <code>TrainingInputMode</code> setting in a <a>AlgorithmSpecification</a>
     * request when you have a channel that needs a different input mode from the
     * training job's general setting. To download the data from Amazon Simple Storage
     * Service (Amazon S3) to the provisioned ML storage volume, and mount the
     * directory to a Docker volume, use <code>File</code> input mode. To stream data
     * directly from Amazon S3 to the container, choose <code>Pipe</code> input
     * mode.</p> <p>To use a model for incremental training, choose <code>File</code>
     * input model.</p>
     */
    inline void SetInputMode(const TrainingInputMode& value) { m_inputModeHasBeenSet = true; m_inputMode = value; }

    /**
     * <p>(Optional) The input mode to use for the data channel in a training job. If
     * you don't set a value for <code>InputMode</code>, Amazon SageMaker uses the
     * value set for <code>TrainingInputMode</code>. Use this parameter to override the
     * <code>TrainingInputMode</code> setting in a <a>AlgorithmSpecification</a>
     * request when you have a channel that needs a different input mode from the
     * training job's general setting. To download the data from Amazon Simple Storage
     * Service (Amazon S3) to the provisioned ML storage volume, and mount the
     * directory to a Docker volume, use <code>File</code> input mode. To stream data
     * directly from Amazon S3 to the container, choose <code>Pipe</code> input
     * mode.</p> <p>To use a model for incremental training, choose <code>File</code>
     * input model.</p>
     */
    inline void SetInputMode(TrainingInputMode&& value) { m_inputModeHasBeenSet = true; m_inputMode = std::move(value); }

    /**
     * <p>(Optional) The input mode to use for the data channel in a training job. If
     * you don't set a value for <code>InputMode</code>, Amazon SageMaker uses the
     * value set for <code>TrainingInputMode</code>. Use this parameter to override the
     * <code>TrainingInputMode</code> setting in a <a>AlgorithmSpecification</a>
     * request when you have a channel that needs a different input mode from the
     * training job's general setting. To download the data from Amazon Simple Storage
     * Service (Amazon S3) to the provisioned ML storage volume, and mount the
     * directory to a Docker volume, use <code>File</code> input mode. To stream data
     * directly from Amazon S3 to the container, choose <code>Pipe</code> input
     * mode.</p> <p>To use a model for incremental training, choose <code>File</code>
     * input model.</p>
     */
    inline Channel& WithInputMode(const TrainingInputMode& value) { SetInputMode(value); return *this;}

    /**
     * <p>(Optional) The input mode to use for the data channel in a training job. If
     * you don't set a value for <code>InputMode</code>, Amazon SageMaker uses the
     * value set for <code>TrainingInputMode</code>. Use this parameter to override the
     * <code>TrainingInputMode</code> setting in a <a>AlgorithmSpecification</a>
     * request when you have a channel that needs a different input mode from the
     * training job's general setting. To download the data from Amazon Simple Storage
     * Service (Amazon S3) to the provisioned ML storage volume, and mount the
     * directory to a Docker volume, use <code>File</code> input mode. To stream data
     * directly from Amazon S3 to the container, choose <code>Pipe</code> input
     * mode.</p> <p>To use a model for incremental training, choose <code>File</code>
     * input model.</p>
     */
    inline Channel& WithInputMode(TrainingInputMode&& value) { SetInputMode(std::move(value)); return *this;}


    /**
     * <p>A configuration for a shuffle option for input data in a channel. If you use
     * <code>S3Prefix</code> for <code>S3DataType</code>, this shuffles the results of
     * the S3 key prefix matches. If you use <code>ManifestFile</code>, the order of
     * the S3 object references in the <code>ManifestFile</code> is shuffled. If you
     * use <code>AugmentedManifestFile</code>, the order of the JSON lines in the
     * <code>AugmentedManifestFile</code> is shuffled. The shuffling order is
     * determined using the <code>Seed</code> value.</p> <p>For Pipe input mode,
     * shuffling is done at the start of every epoch. With large datasets this ensures
     * that the order of the training data is different for each epoch, it helps reduce
     * bias and possible overfitting. In a multi-node training job when ShuffleConfig
     * is combined with <code>S3DataDistributionType</code> of
     * <code>ShardedByS3Key</code>, the data is shuffled across nodes so that the
     * content sent to a particular node on the first epoch might be sent to a
     * different node on the second epoch.</p>
     */
    inline const ShuffleConfig& GetShuffleConfig() const{ return m_shuffleConfig; }

    /**
     * <p>A configuration for a shuffle option for input data in a channel. If you use
     * <code>S3Prefix</code> for <code>S3DataType</code>, this shuffles the results of
     * the S3 key prefix matches. If you use <code>ManifestFile</code>, the order of
     * the S3 object references in the <code>ManifestFile</code> is shuffled. If you
     * use <code>AugmentedManifestFile</code>, the order of the JSON lines in the
     * <code>AugmentedManifestFile</code> is shuffled. The shuffling order is
     * determined using the <code>Seed</code> value.</p> <p>For Pipe input mode,
     * shuffling is done at the start of every epoch. With large datasets this ensures
     * that the order of the training data is different for each epoch, it helps reduce
     * bias and possible overfitting. In a multi-node training job when ShuffleConfig
     * is combined with <code>S3DataDistributionType</code> of
     * <code>ShardedByS3Key</code>, the data is shuffled across nodes so that the
     * content sent to a particular node on the first epoch might be sent to a
     * different node on the second epoch.</p>
     */
    inline bool ShuffleConfigHasBeenSet() const { return m_shuffleConfigHasBeenSet; }

    /**
     * <p>A configuration for a shuffle option for input data in a channel. If you use
     * <code>S3Prefix</code> for <code>S3DataType</code>, this shuffles the results of
     * the S3 key prefix matches. If you use <code>ManifestFile</code>, the order of
     * the S3 object references in the <code>ManifestFile</code> is shuffled. If you
     * use <code>AugmentedManifestFile</code>, the order of the JSON lines in the
     * <code>AugmentedManifestFile</code> is shuffled. The shuffling order is
     * determined using the <code>Seed</code> value.</p> <p>For Pipe input mode,
     * shuffling is done at the start of every epoch. With large datasets this ensures
     * that the order of the training data is different for each epoch, it helps reduce
     * bias and possible overfitting. In a multi-node training job when ShuffleConfig
     * is combined with <code>S3DataDistributionType</code> of
     * <code>ShardedByS3Key</code>, the data is shuffled across nodes so that the
     * content sent to a particular node on the first epoch might be sent to a
     * different node on the second epoch.</p>
     */
    inline void SetShuffleConfig(const ShuffleConfig& value) { m_shuffleConfigHasBeenSet = true; m_shuffleConfig = value; }

    /**
     * <p>A configuration for a shuffle option for input data in a channel. If you use
     * <code>S3Prefix</code> for <code>S3DataType</code>, this shuffles the results of
     * the S3 key prefix matches. If you use <code>ManifestFile</code>, the order of
     * the S3 object references in the <code>ManifestFile</code> is shuffled. If you
     * use <code>AugmentedManifestFile</code>, the order of the JSON lines in the
     * <code>AugmentedManifestFile</code> is shuffled. The shuffling order is
     * determined using the <code>Seed</code> value.</p> <p>For Pipe input mode,
     * shuffling is done at the start of every epoch. With large datasets this ensures
     * that the order of the training data is different for each epoch, it helps reduce
     * bias and possible overfitting. In a multi-node training job when ShuffleConfig
     * is combined with <code>S3DataDistributionType</code> of
     * <code>ShardedByS3Key</code>, the data is shuffled across nodes so that the
     * content sent to a particular node on the first epoch might be sent to a
     * different node on the second epoch.</p>
     */
    inline void SetShuffleConfig(ShuffleConfig&& value) { m_shuffleConfigHasBeenSet = true; m_shuffleConfig = std::move(value); }

    /**
     * <p>A configuration for a shuffle option for input data in a channel. If you use
     * <code>S3Prefix</code> for <code>S3DataType</code>, this shuffles the results of
     * the S3 key prefix matches. If you use <code>ManifestFile</code>, the order of
     * the S3 object references in the <code>ManifestFile</code> is shuffled. If you
     * use <code>AugmentedManifestFile</code>, the order of the JSON lines in the
     * <code>AugmentedManifestFile</code> is shuffled. The shuffling order is
     * determined using the <code>Seed</code> value.</p> <p>For Pipe input mode,
     * shuffling is done at the start of every epoch. With large datasets this ensures
     * that the order of the training data is different for each epoch, it helps reduce
     * bias and possible overfitting. In a multi-node training job when ShuffleConfig
     * is combined with <code>S3DataDistributionType</code> of
     * <code>ShardedByS3Key</code>, the data is shuffled across nodes so that the
     * content sent to a particular node on the first epoch might be sent to a
     * different node on the second epoch.</p>
     */
    inline Channel& WithShuffleConfig(const ShuffleConfig& value) { SetShuffleConfig(value); return *this;}

    /**
     * <p>A configuration for a shuffle option for input data in a channel. If you use
     * <code>S3Prefix</code> for <code>S3DataType</code>, this shuffles the results of
     * the S3 key prefix matches. If you use <code>ManifestFile</code>, the order of
     * the S3 object references in the <code>ManifestFile</code> is shuffled. If you
     * use <code>AugmentedManifestFile</code>, the order of the JSON lines in the
     * <code>AugmentedManifestFile</code> is shuffled. The shuffling order is
     * determined using the <code>Seed</code> value.</p> <p>For Pipe input mode,
     * shuffling is done at the start of every epoch. With large datasets this ensures
     * that the order of the training data is different for each epoch, it helps reduce
     * bias and possible overfitting. In a multi-node training job when ShuffleConfig
     * is combined with <code>S3DataDistributionType</code> of
     * <code>ShardedByS3Key</code>, the data is shuffled across nodes so that the
     * content sent to a particular node on the first epoch might be sent to a
     * different node on the second epoch.</p>
     */
    inline Channel& WithShuffleConfig(ShuffleConfig&& value) { SetShuffleConfig(std::move(value)); return *this;}

  private:

    Aws::String m_channelName;
    bool m_channelNameHasBeenSet;

    DataSource m_dataSource;
    bool m_dataSourceHasBeenSet;

    Aws::String m_contentType;
    bool m_contentTypeHasBeenSet;

    CompressionType m_compressionType;
    bool m_compressionTypeHasBeenSet;

    RecordWrapper m_recordWrapperType;
    bool m_recordWrapperTypeHasBeenSet;

    TrainingInputMode m_inputMode;
    bool m_inputModeHasBeenSet;

    ShuffleConfig m_shuffleConfig;
    bool m_shuffleConfigHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
