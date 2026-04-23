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
#include <aws/sagemaker/model/TransformDataSource.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/CompressionType.h>
#include <aws/sagemaker/model/SplitType.h>
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
   * <p>Describes the input source of a transform job and the way the transform job
   * consumes it.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/TransformInput">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API TransformInput
  {
  public:
    TransformInput();
    TransformInput(Aws::Utils::Json::JsonView jsonValue);
    TransformInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Describes the location of the channel data, which is, the S3 location of the
     * input data that the model can consume.</p>
     */
    inline const TransformDataSource& GetDataSource() const{ return m_dataSource; }

    /**
     * <p>Describes the location of the channel data, which is, the S3 location of the
     * input data that the model can consume.</p>
     */
    inline bool DataSourceHasBeenSet() const { return m_dataSourceHasBeenSet; }

    /**
     * <p>Describes the location of the channel data, which is, the S3 location of the
     * input data that the model can consume.</p>
     */
    inline void SetDataSource(const TransformDataSource& value) { m_dataSourceHasBeenSet = true; m_dataSource = value; }

    /**
     * <p>Describes the location of the channel data, which is, the S3 location of the
     * input data that the model can consume.</p>
     */
    inline void SetDataSource(TransformDataSource&& value) { m_dataSourceHasBeenSet = true; m_dataSource = std::move(value); }

    /**
     * <p>Describes the location of the channel data, which is, the S3 location of the
     * input data that the model can consume.</p>
     */
    inline TransformInput& WithDataSource(const TransformDataSource& value) { SetDataSource(value); return *this;}

    /**
     * <p>Describes the location of the channel data, which is, the S3 location of the
     * input data that the model can consume.</p>
     */
    inline TransformInput& WithDataSource(TransformDataSource&& value) { SetDataSource(std::move(value)); return *this;}


    /**
     * <p>The multipurpose internet mail extension (MIME) type of the data. Amazon
     * SageMaker uses the MIME type with each http call to transfer data to the
     * transform job.</p>
     */
    inline const Aws::String& GetContentType() const{ return m_contentType; }

    /**
     * <p>The multipurpose internet mail extension (MIME) type of the data. Amazon
     * SageMaker uses the MIME type with each http call to transfer data to the
     * transform job.</p>
     */
    inline bool ContentTypeHasBeenSet() const { return m_contentTypeHasBeenSet; }

    /**
     * <p>The multipurpose internet mail extension (MIME) type of the data. Amazon
     * SageMaker uses the MIME type with each http call to transfer data to the
     * transform job.</p>
     */
    inline void SetContentType(const Aws::String& value) { m_contentTypeHasBeenSet = true; m_contentType = value; }

    /**
     * <p>The multipurpose internet mail extension (MIME) type of the data. Amazon
     * SageMaker uses the MIME type with each http call to transfer data to the
     * transform job.</p>
     */
    inline void SetContentType(Aws::String&& value) { m_contentTypeHasBeenSet = true; m_contentType = std::move(value); }

    /**
     * <p>The multipurpose internet mail extension (MIME) type of the data. Amazon
     * SageMaker uses the MIME type with each http call to transfer data to the
     * transform job.</p>
     */
    inline void SetContentType(const char* value) { m_contentTypeHasBeenSet = true; m_contentType.assign(value); }

    /**
     * <p>The multipurpose internet mail extension (MIME) type of the data. Amazon
     * SageMaker uses the MIME type with each http call to transfer data to the
     * transform job.</p>
     */
    inline TransformInput& WithContentType(const Aws::String& value) { SetContentType(value); return *this;}

    /**
     * <p>The multipurpose internet mail extension (MIME) type of the data. Amazon
     * SageMaker uses the MIME type with each http call to transfer data to the
     * transform job.</p>
     */
    inline TransformInput& WithContentType(Aws::String&& value) { SetContentType(std::move(value)); return *this;}

    /**
     * <p>The multipurpose internet mail extension (MIME) type of the data. Amazon
     * SageMaker uses the MIME type with each http call to transfer data to the
     * transform job.</p>
     */
    inline TransformInput& WithContentType(const char* value) { SetContentType(value); return *this;}


    /**
     * <p>If your transform data is compressed, specify the compression type. Amazon
     * SageMaker automatically decompresses the data for the transform job accordingly.
     * The default value is <code>None</code>.</p>
     */
    inline const CompressionType& GetCompressionType() const{ return m_compressionType; }

    /**
     * <p>If your transform data is compressed, specify the compression type. Amazon
     * SageMaker automatically decompresses the data for the transform job accordingly.
     * The default value is <code>None</code>.</p>
     */
    inline bool CompressionTypeHasBeenSet() const { return m_compressionTypeHasBeenSet; }

    /**
     * <p>If your transform data is compressed, specify the compression type. Amazon
     * SageMaker automatically decompresses the data for the transform job accordingly.
     * The default value is <code>None</code>.</p>
     */
    inline void SetCompressionType(const CompressionType& value) { m_compressionTypeHasBeenSet = true; m_compressionType = value; }

    /**
     * <p>If your transform data is compressed, specify the compression type. Amazon
     * SageMaker automatically decompresses the data for the transform job accordingly.
     * The default value is <code>None</code>.</p>
     */
    inline void SetCompressionType(CompressionType&& value) { m_compressionTypeHasBeenSet = true; m_compressionType = std::move(value); }

    /**
     * <p>If your transform data is compressed, specify the compression type. Amazon
     * SageMaker automatically decompresses the data for the transform job accordingly.
     * The default value is <code>None</code>.</p>
     */
    inline TransformInput& WithCompressionType(const CompressionType& value) { SetCompressionType(value); return *this;}

    /**
     * <p>If your transform data is compressed, specify the compression type. Amazon
     * SageMaker automatically decompresses the data for the transform job accordingly.
     * The default value is <code>None</code>.</p>
     */
    inline TransformInput& WithCompressionType(CompressionType&& value) { SetCompressionType(std::move(value)); return *this;}


    /**
     * <p>The method to use to split the transform job's data files into smaller
     * batches. Splitting is necessary when the total size of each object is too large
     * to fit in a single request. You can also use data splitting to improve
     * performance by processing multiple concurrent mini-batches. The default value
     * for <code>SplitType</code> is <code>None</code>, which indicates that input data
     * files are not split, and request payloads contain the entire contents of an
     * input object. Set the value of this parameter to <code>Line</code> to split
     * records on a newline character boundary. <code>SplitType</code> also supports a
     * number of record-oriented binary data formats.</p> <p>When splitting is enabled,
     * the size of a mini-batch depends on the values of the <code>BatchStrategy</code>
     * and <code>MaxPayloadInMB</code> parameters. When the value of
     * <code>BatchStrategy</code> is <code>MultiRecord</code>, Amazon SageMaker sends
     * the maximum number of records in each request, up to the
     * <code>MaxPayloadInMB</code> limit. If the value of <code>BatchStrategy</code> is
     * <code>SingleRecord</code>, Amazon SageMaker sends individual records in each
     * request.</p> <note> <p>Some data formats represent a record as a binary payload
     * wrapped with extra padding bytes. When splitting is applied to a binary data
     * format, padding is removed if the value of <code>BatchStrategy</code> is set to
     * <code>SingleRecord</code>. Padding is not removed if the value of
     * <code>BatchStrategy</code> is set to <code>MultiRecord</code>.</p> <p>For more
     * information about the RecordIO, see <a
     * href="http://mxnet.io/architecture/note_data_loading.html#data-format">Data
     * Format</a> in the MXNet documentation. For more information about the TFRecord,
     * see <a
     * href="https://www.tensorflow.org/guide/datasets#consuming_tfrecord_data">Consuming
     * TFRecord data</a> in the TensorFlow documentation.</p> </note>
     */
    inline const SplitType& GetSplitType() const{ return m_splitType; }

    /**
     * <p>The method to use to split the transform job's data files into smaller
     * batches. Splitting is necessary when the total size of each object is too large
     * to fit in a single request. You can also use data splitting to improve
     * performance by processing multiple concurrent mini-batches. The default value
     * for <code>SplitType</code> is <code>None</code>, which indicates that input data
     * files are not split, and request payloads contain the entire contents of an
     * input object. Set the value of this parameter to <code>Line</code> to split
     * records on a newline character boundary. <code>SplitType</code> also supports a
     * number of record-oriented binary data formats.</p> <p>When splitting is enabled,
     * the size of a mini-batch depends on the values of the <code>BatchStrategy</code>
     * and <code>MaxPayloadInMB</code> parameters. When the value of
     * <code>BatchStrategy</code> is <code>MultiRecord</code>, Amazon SageMaker sends
     * the maximum number of records in each request, up to the
     * <code>MaxPayloadInMB</code> limit. If the value of <code>BatchStrategy</code> is
     * <code>SingleRecord</code>, Amazon SageMaker sends individual records in each
     * request.</p> <note> <p>Some data formats represent a record as a binary payload
     * wrapped with extra padding bytes. When splitting is applied to a binary data
     * format, padding is removed if the value of <code>BatchStrategy</code> is set to
     * <code>SingleRecord</code>. Padding is not removed if the value of
     * <code>BatchStrategy</code> is set to <code>MultiRecord</code>.</p> <p>For more
     * information about the RecordIO, see <a
     * href="http://mxnet.io/architecture/note_data_loading.html#data-format">Data
     * Format</a> in the MXNet documentation. For more information about the TFRecord,
     * see <a
     * href="https://www.tensorflow.org/guide/datasets#consuming_tfrecord_data">Consuming
     * TFRecord data</a> in the TensorFlow documentation.</p> </note>
     */
    inline bool SplitTypeHasBeenSet() const { return m_splitTypeHasBeenSet; }

    /**
     * <p>The method to use to split the transform job's data files into smaller
     * batches. Splitting is necessary when the total size of each object is too large
     * to fit in a single request. You can also use data splitting to improve
     * performance by processing multiple concurrent mini-batches. The default value
     * for <code>SplitType</code> is <code>None</code>, which indicates that input data
     * files are not split, and request payloads contain the entire contents of an
     * input object. Set the value of this parameter to <code>Line</code> to split
     * records on a newline character boundary. <code>SplitType</code> also supports a
     * number of record-oriented binary data formats.</p> <p>When splitting is enabled,
     * the size of a mini-batch depends on the values of the <code>BatchStrategy</code>
     * and <code>MaxPayloadInMB</code> parameters. When the value of
     * <code>BatchStrategy</code> is <code>MultiRecord</code>, Amazon SageMaker sends
     * the maximum number of records in each request, up to the
     * <code>MaxPayloadInMB</code> limit. If the value of <code>BatchStrategy</code> is
     * <code>SingleRecord</code>, Amazon SageMaker sends individual records in each
     * request.</p> <note> <p>Some data formats represent a record as a binary payload
     * wrapped with extra padding bytes. When splitting is applied to a binary data
     * format, padding is removed if the value of <code>BatchStrategy</code> is set to
     * <code>SingleRecord</code>. Padding is not removed if the value of
     * <code>BatchStrategy</code> is set to <code>MultiRecord</code>.</p> <p>For more
     * information about the RecordIO, see <a
     * href="http://mxnet.io/architecture/note_data_loading.html#data-format">Data
     * Format</a> in the MXNet documentation. For more information about the TFRecord,
     * see <a
     * href="https://www.tensorflow.org/guide/datasets#consuming_tfrecord_data">Consuming
     * TFRecord data</a> in the TensorFlow documentation.</p> </note>
     */
    inline void SetSplitType(const SplitType& value) { m_splitTypeHasBeenSet = true; m_splitType = value; }

    /**
     * <p>The method to use to split the transform job's data files into smaller
     * batches. Splitting is necessary when the total size of each object is too large
     * to fit in a single request. You can also use data splitting to improve
     * performance by processing multiple concurrent mini-batches. The default value
     * for <code>SplitType</code> is <code>None</code>, which indicates that input data
     * files are not split, and request payloads contain the entire contents of an
     * input object. Set the value of this parameter to <code>Line</code> to split
     * records on a newline character boundary. <code>SplitType</code> also supports a
     * number of record-oriented binary data formats.</p> <p>When splitting is enabled,
     * the size of a mini-batch depends on the values of the <code>BatchStrategy</code>
     * and <code>MaxPayloadInMB</code> parameters. When the value of
     * <code>BatchStrategy</code> is <code>MultiRecord</code>, Amazon SageMaker sends
     * the maximum number of records in each request, up to the
     * <code>MaxPayloadInMB</code> limit. If the value of <code>BatchStrategy</code> is
     * <code>SingleRecord</code>, Amazon SageMaker sends individual records in each
     * request.</p> <note> <p>Some data formats represent a record as a binary payload
     * wrapped with extra padding bytes. When splitting is applied to a binary data
     * format, padding is removed if the value of <code>BatchStrategy</code> is set to
     * <code>SingleRecord</code>. Padding is not removed if the value of
     * <code>BatchStrategy</code> is set to <code>MultiRecord</code>.</p> <p>For more
     * information about the RecordIO, see <a
     * href="http://mxnet.io/architecture/note_data_loading.html#data-format">Data
     * Format</a> in the MXNet documentation. For more information about the TFRecord,
     * see <a
     * href="https://www.tensorflow.org/guide/datasets#consuming_tfrecord_data">Consuming
     * TFRecord data</a> in the TensorFlow documentation.</p> </note>
     */
    inline void SetSplitType(SplitType&& value) { m_splitTypeHasBeenSet = true; m_splitType = std::move(value); }

    /**
     * <p>The method to use to split the transform job's data files into smaller
     * batches. Splitting is necessary when the total size of each object is too large
     * to fit in a single request. You can also use data splitting to improve
     * performance by processing multiple concurrent mini-batches. The default value
     * for <code>SplitType</code> is <code>None</code>, which indicates that input data
     * files are not split, and request payloads contain the entire contents of an
     * input object. Set the value of this parameter to <code>Line</code> to split
     * records on a newline character boundary. <code>SplitType</code> also supports a
     * number of record-oriented binary data formats.</p> <p>When splitting is enabled,
     * the size of a mini-batch depends on the values of the <code>BatchStrategy</code>
     * and <code>MaxPayloadInMB</code> parameters. When the value of
     * <code>BatchStrategy</code> is <code>MultiRecord</code>, Amazon SageMaker sends
     * the maximum number of records in each request, up to the
     * <code>MaxPayloadInMB</code> limit. If the value of <code>BatchStrategy</code> is
     * <code>SingleRecord</code>, Amazon SageMaker sends individual records in each
     * request.</p> <note> <p>Some data formats represent a record as a binary payload
     * wrapped with extra padding bytes. When splitting is applied to a binary data
     * format, padding is removed if the value of <code>BatchStrategy</code> is set to
     * <code>SingleRecord</code>. Padding is not removed if the value of
     * <code>BatchStrategy</code> is set to <code>MultiRecord</code>.</p> <p>For more
     * information about the RecordIO, see <a
     * href="http://mxnet.io/architecture/note_data_loading.html#data-format">Data
     * Format</a> in the MXNet documentation. For more information about the TFRecord,
     * see <a
     * href="https://www.tensorflow.org/guide/datasets#consuming_tfrecord_data">Consuming
     * TFRecord data</a> in the TensorFlow documentation.</p> </note>
     */
    inline TransformInput& WithSplitType(const SplitType& value) { SetSplitType(value); return *this;}

    /**
     * <p>The method to use to split the transform job's data files into smaller
     * batches. Splitting is necessary when the total size of each object is too large
     * to fit in a single request. You can also use data splitting to improve
     * performance by processing multiple concurrent mini-batches. The default value
     * for <code>SplitType</code> is <code>None</code>, which indicates that input data
     * files are not split, and request payloads contain the entire contents of an
     * input object. Set the value of this parameter to <code>Line</code> to split
     * records on a newline character boundary. <code>SplitType</code> also supports a
     * number of record-oriented binary data formats.</p> <p>When splitting is enabled,
     * the size of a mini-batch depends on the values of the <code>BatchStrategy</code>
     * and <code>MaxPayloadInMB</code> parameters. When the value of
     * <code>BatchStrategy</code> is <code>MultiRecord</code>, Amazon SageMaker sends
     * the maximum number of records in each request, up to the
     * <code>MaxPayloadInMB</code> limit. If the value of <code>BatchStrategy</code> is
     * <code>SingleRecord</code>, Amazon SageMaker sends individual records in each
     * request.</p> <note> <p>Some data formats represent a record as a binary payload
     * wrapped with extra padding bytes. When splitting is applied to a binary data
     * format, padding is removed if the value of <code>BatchStrategy</code> is set to
     * <code>SingleRecord</code>. Padding is not removed if the value of
     * <code>BatchStrategy</code> is set to <code>MultiRecord</code>.</p> <p>For more
     * information about the RecordIO, see <a
     * href="http://mxnet.io/architecture/note_data_loading.html#data-format">Data
     * Format</a> in the MXNet documentation. For more information about the TFRecord,
     * see <a
     * href="https://www.tensorflow.org/guide/datasets#consuming_tfrecord_data">Consuming
     * TFRecord data</a> in the TensorFlow documentation.</p> </note>
     */
    inline TransformInput& WithSplitType(SplitType&& value) { SetSplitType(std::move(value)); return *this;}

  private:

    TransformDataSource m_dataSource;
    bool m_dataSourceHasBeenSet;

    Aws::String m_contentType;
    bool m_contentTypeHasBeenSet;

    CompressionType m_compressionType;
    bool m_compressionTypeHasBeenSet;

    SplitType m_splitType;
    bool m_splitTypeHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
