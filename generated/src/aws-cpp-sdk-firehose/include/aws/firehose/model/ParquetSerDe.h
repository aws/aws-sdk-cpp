﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/firehose/Firehose_EXPORTS.h>
#include <aws/firehose/model/ParquetCompression.h>
#include <aws/firehose/model/ParquetWriterVersion.h>
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
namespace Firehose
{
namespace Model
{

  /**
   * <p>A serializer to use for converting data to the Parquet format before storing
   * it in Amazon S3. For more information, see <a
   * href="https://parquet.apache.org/docs/">Apache Parquet</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/firehose-2015-08-04/ParquetSerDe">AWS
   * API Reference</a></p>
   */
  class ParquetSerDe
  {
  public:
    AWS_FIREHOSE_API ParquetSerDe() = default;
    AWS_FIREHOSE_API ParquetSerDe(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API ParquetSerDe& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Hadoop Distributed File System (HDFS) block size. This is useful if you
     * intend to copy the data from Amazon S3 to HDFS before querying. The default is
     * 256 MiB and the minimum is 64 MiB. Firehose uses this value for padding
     * calculations.</p>
     */
    inline int GetBlockSizeBytes() const { return m_blockSizeBytes; }
    inline bool BlockSizeBytesHasBeenSet() const { return m_blockSizeBytesHasBeenSet; }
    inline void SetBlockSizeBytes(int value) { m_blockSizeBytesHasBeenSet = true; m_blockSizeBytes = value; }
    inline ParquetSerDe& WithBlockSizeBytes(int value) { SetBlockSizeBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Parquet page size. Column chunks are divided into pages. A page is
     * conceptually an indivisible unit (in terms of compression and encoding). The
     * minimum value is 64 KiB and the default is 1 MiB.</p>
     */
    inline int GetPageSizeBytes() const { return m_pageSizeBytes; }
    inline bool PageSizeBytesHasBeenSet() const { return m_pageSizeBytesHasBeenSet; }
    inline void SetPageSizeBytes(int value) { m_pageSizeBytesHasBeenSet = true; m_pageSizeBytes = value; }
    inline ParquetSerDe& WithPageSizeBytes(int value) { SetPageSizeBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The compression code to use over data blocks. The possible values are
     * <code>UNCOMPRESSED</code>, <code>SNAPPY</code>, and <code>GZIP</code>, with the
     * default being <code>SNAPPY</code>. Use <code>SNAPPY</code> for higher
     * decompression speed. Use <code>GZIP</code> if the compression ratio is more
     * important than speed.</p>
     */
    inline ParquetCompression GetCompression() const { return m_compression; }
    inline bool CompressionHasBeenSet() const { return m_compressionHasBeenSet; }
    inline void SetCompression(ParquetCompression value) { m_compressionHasBeenSet = true; m_compression = value; }
    inline ParquetSerDe& WithCompression(ParquetCompression value) { SetCompression(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether to enable dictionary compression.</p>
     */
    inline bool GetEnableDictionaryCompression() const { return m_enableDictionaryCompression; }
    inline bool EnableDictionaryCompressionHasBeenSet() const { return m_enableDictionaryCompressionHasBeenSet; }
    inline void SetEnableDictionaryCompression(bool value) { m_enableDictionaryCompressionHasBeenSet = true; m_enableDictionaryCompression = value; }
    inline ParquetSerDe& WithEnableDictionaryCompression(bool value) { SetEnableDictionaryCompression(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum amount of padding to apply. This is useful if you intend to copy
     * the data from Amazon S3 to HDFS before querying. The default is 0.</p>
     */
    inline int GetMaxPaddingBytes() const { return m_maxPaddingBytes; }
    inline bool MaxPaddingBytesHasBeenSet() const { return m_maxPaddingBytesHasBeenSet; }
    inline void SetMaxPaddingBytes(int value) { m_maxPaddingBytesHasBeenSet = true; m_maxPaddingBytes = value; }
    inline ParquetSerDe& WithMaxPaddingBytes(int value) { SetMaxPaddingBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the version of row format to output. The possible values are
     * <code>V1</code> and <code>V2</code>. The default is <code>V1</code>.</p>
     */
    inline ParquetWriterVersion GetWriterVersion() const { return m_writerVersion; }
    inline bool WriterVersionHasBeenSet() const { return m_writerVersionHasBeenSet; }
    inline void SetWriterVersion(ParquetWriterVersion value) { m_writerVersionHasBeenSet = true; m_writerVersion = value; }
    inline ParquetSerDe& WithWriterVersion(ParquetWriterVersion value) { SetWriterVersion(value); return *this;}
    ///@}
  private:

    int m_blockSizeBytes{0};
    bool m_blockSizeBytesHasBeenSet = false;

    int m_pageSizeBytes{0};
    bool m_pageSizeBytesHasBeenSet = false;

    ParquetCompression m_compression{ParquetCompression::NOT_SET};
    bool m_compressionHasBeenSet = false;

    bool m_enableDictionaryCompression{false};
    bool m_enableDictionaryCompressionHasBeenSet = false;

    int m_maxPaddingBytes{0};
    bool m_maxPaddingBytesHasBeenSet = false;

    ParquetWriterVersion m_writerVersion{ParquetWriterVersion::NOT_SET};
    bool m_writerVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
