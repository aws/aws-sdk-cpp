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
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
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
    Channel(const Aws::Utils::Json::JsonValue& jsonValue);
    Channel& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the channel. </p>
     */
    inline const Aws::String& GetChannelName() const{ return m_channelName; }

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
     * <code>None</code>. <code>CompressionType</code> is used only in PIPE input mode.
     * In FILE mode, leave this field unset or set it to None.</p>
     */
    inline const CompressionType& GetCompressionType() const{ return m_compressionType; }

    /**
     * <p>If training data is compressed, the compression type. The default value is
     * <code>None</code>. <code>CompressionType</code> is used only in PIPE input mode.
     * In FILE mode, leave this field unset or set it to None.</p>
     */
    inline void SetCompressionType(const CompressionType& value) { m_compressionTypeHasBeenSet = true; m_compressionType = value; }

    /**
     * <p>If training data is compressed, the compression type. The default value is
     * <code>None</code>. <code>CompressionType</code> is used only in PIPE input mode.
     * In FILE mode, leave this field unset or set it to None.</p>
     */
    inline void SetCompressionType(CompressionType&& value) { m_compressionTypeHasBeenSet = true; m_compressionType = std::move(value); }

    /**
     * <p>If training data is compressed, the compression type. The default value is
     * <code>None</code>. <code>CompressionType</code> is used only in PIPE input mode.
     * In FILE mode, leave this field unset or set it to None.</p>
     */
    inline Channel& WithCompressionType(const CompressionType& value) { SetCompressionType(value); return *this;}

    /**
     * <p>If training data is compressed, the compression type. The default value is
     * <code>None</code>. <code>CompressionType</code> is used only in PIPE input mode.
     * In FILE mode, leave this field unset or set it to None.</p>
     */
    inline Channel& WithCompressionType(CompressionType&& value) { SetCompressionType(std::move(value)); return *this;}


    /**
     * <p/> <p>Specify RecordIO as the value when input data is in raw format but the
     * training algorithm requires the RecordIO format, in which caseAmazon SageMaker
     * wraps each individual S3 object in a RecordIO record. If the input data is
     * already in RecordIO format, you don't need to set this attribute. For more
     * information, see <a
     * href="https://mxnet.incubator.apache.org/how_to/recordio.html?highlight=im2rec">Create
     * a Dataset Using RecordIO</a>. </p> <p>In FILE mode, leave this field unset or
     * set it to None.</p> <p/>
     */
    inline const RecordWrapper& GetRecordWrapperType() const{ return m_recordWrapperType; }

    /**
     * <p/> <p>Specify RecordIO as the value when input data is in raw format but the
     * training algorithm requires the RecordIO format, in which caseAmazon SageMaker
     * wraps each individual S3 object in a RecordIO record. If the input data is
     * already in RecordIO format, you don't need to set this attribute. For more
     * information, see <a
     * href="https://mxnet.incubator.apache.org/how_to/recordio.html?highlight=im2rec">Create
     * a Dataset Using RecordIO</a>. </p> <p>In FILE mode, leave this field unset or
     * set it to None.</p> <p/>
     */
    inline void SetRecordWrapperType(const RecordWrapper& value) { m_recordWrapperTypeHasBeenSet = true; m_recordWrapperType = value; }

    /**
     * <p/> <p>Specify RecordIO as the value when input data is in raw format but the
     * training algorithm requires the RecordIO format, in which caseAmazon SageMaker
     * wraps each individual S3 object in a RecordIO record. If the input data is
     * already in RecordIO format, you don't need to set this attribute. For more
     * information, see <a
     * href="https://mxnet.incubator.apache.org/how_to/recordio.html?highlight=im2rec">Create
     * a Dataset Using RecordIO</a>. </p> <p>In FILE mode, leave this field unset or
     * set it to None.</p> <p/>
     */
    inline void SetRecordWrapperType(RecordWrapper&& value) { m_recordWrapperTypeHasBeenSet = true; m_recordWrapperType = std::move(value); }

    /**
     * <p/> <p>Specify RecordIO as the value when input data is in raw format but the
     * training algorithm requires the RecordIO format, in which caseAmazon SageMaker
     * wraps each individual S3 object in a RecordIO record. If the input data is
     * already in RecordIO format, you don't need to set this attribute. For more
     * information, see <a
     * href="https://mxnet.incubator.apache.org/how_to/recordio.html?highlight=im2rec">Create
     * a Dataset Using RecordIO</a>. </p> <p>In FILE mode, leave this field unset or
     * set it to None.</p> <p/>
     */
    inline Channel& WithRecordWrapperType(const RecordWrapper& value) { SetRecordWrapperType(value); return *this;}

    /**
     * <p/> <p>Specify RecordIO as the value when input data is in raw format but the
     * training algorithm requires the RecordIO format, in which caseAmazon SageMaker
     * wraps each individual S3 object in a RecordIO record. If the input data is
     * already in RecordIO format, you don't need to set this attribute. For more
     * information, see <a
     * href="https://mxnet.incubator.apache.org/how_to/recordio.html?highlight=im2rec">Create
     * a Dataset Using RecordIO</a>. </p> <p>In FILE mode, leave this field unset or
     * set it to None.</p> <p/>
     */
    inline Channel& WithRecordWrapperType(RecordWrapper&& value) { SetRecordWrapperType(std::move(value)); return *this;}

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
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
