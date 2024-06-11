﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/firehose/Firehose_EXPORTS.h>
#include <aws/firehose/model/OrcCompression.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/firehose/model/OrcFormatVersion.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>A serializer to use for converting data to the ORC format before storing it
   * in Amazon S3. For more information, see <a
   * href="https://orc.apache.org/docs/">Apache ORC</a>.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/firehose-2015-08-04/OrcSerDe">AWS
   * API Reference</a></p>
   */
  class OrcSerDe
  {
  public:
    AWS_FIREHOSE_API OrcSerDe();
    AWS_FIREHOSE_API OrcSerDe(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API OrcSerDe& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The number of bytes in each stripe. The default is 64 MiB and the minimum is
     * 8 MiB.</p>
     */
    inline int GetStripeSizeBytes() const{ return m_stripeSizeBytes; }
    inline bool StripeSizeBytesHasBeenSet() const { return m_stripeSizeBytesHasBeenSet; }
    inline void SetStripeSizeBytes(int value) { m_stripeSizeBytesHasBeenSet = true; m_stripeSizeBytes = value; }
    inline OrcSerDe& WithStripeSizeBytes(int value) { SetStripeSizeBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Hadoop Distributed File System (HDFS) block size. This is useful if you
     * intend to copy the data from Amazon S3 to HDFS before querying. The default is
     * 256 MiB and the minimum is 64 MiB. Firehose uses this value for padding
     * calculations.</p>
     */
    inline int GetBlockSizeBytes() const{ return m_blockSizeBytes; }
    inline bool BlockSizeBytesHasBeenSet() const { return m_blockSizeBytesHasBeenSet; }
    inline void SetBlockSizeBytes(int value) { m_blockSizeBytesHasBeenSet = true; m_blockSizeBytes = value; }
    inline OrcSerDe& WithBlockSizeBytes(int value) { SetBlockSizeBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of rows between index entries. The default is 10,000 and the
     * minimum is 1,000.</p>
     */
    inline int GetRowIndexStride() const{ return m_rowIndexStride; }
    inline bool RowIndexStrideHasBeenSet() const { return m_rowIndexStrideHasBeenSet; }
    inline void SetRowIndexStride(int value) { m_rowIndexStrideHasBeenSet = true; m_rowIndexStride = value; }
    inline OrcSerDe& WithRowIndexStride(int value) { SetRowIndexStride(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Set this to <code>true</code> to indicate that you want stripes to be padded
     * to the HDFS block boundaries. This is useful if you intend to copy the data from
     * Amazon S3 to HDFS before querying. The default is <code>false</code>.</p>
     */
    inline bool GetEnablePadding() const{ return m_enablePadding; }
    inline bool EnablePaddingHasBeenSet() const { return m_enablePaddingHasBeenSet; }
    inline void SetEnablePadding(bool value) { m_enablePaddingHasBeenSet = true; m_enablePadding = value; }
    inline OrcSerDe& WithEnablePadding(bool value) { SetEnablePadding(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A number between 0 and 1 that defines the tolerance for block padding as a
     * decimal fraction of stripe size. The default value is 0.05, which means 5
     * percent of stripe size.</p> <p>For the default values of 64 MiB ORC stripes and
     * 256 MiB HDFS blocks, the default block padding tolerance of 5 percent reserves a
     * maximum of 3.2 MiB for padding within the 256 MiB block. In such a case, if the
     * available size within the block is more than 3.2 MiB, a new, smaller stripe is
     * inserted to fit within that space. This ensures that no stripe crosses block
     * boundaries and causes remote reads within a node-local task.</p> <p>Firehose
     * ignores this parameter when <a>OrcSerDe$EnablePadding</a> is
     * <code>false</code>.</p>
     */
    inline double GetPaddingTolerance() const{ return m_paddingTolerance; }
    inline bool PaddingToleranceHasBeenSet() const { return m_paddingToleranceHasBeenSet; }
    inline void SetPaddingTolerance(double value) { m_paddingToleranceHasBeenSet = true; m_paddingTolerance = value; }
    inline OrcSerDe& WithPaddingTolerance(double value) { SetPaddingTolerance(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The compression code to use over data blocks. The default is
     * <code>SNAPPY</code>.</p>
     */
    inline const OrcCompression& GetCompression() const{ return m_compression; }
    inline bool CompressionHasBeenSet() const { return m_compressionHasBeenSet; }
    inline void SetCompression(const OrcCompression& value) { m_compressionHasBeenSet = true; m_compression = value; }
    inline void SetCompression(OrcCompression&& value) { m_compressionHasBeenSet = true; m_compression = std::move(value); }
    inline OrcSerDe& WithCompression(const OrcCompression& value) { SetCompression(value); return *this;}
    inline OrcSerDe& WithCompression(OrcCompression&& value) { SetCompression(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The column names for which you want Firehose to create bloom filters. The
     * default is <code>null</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetBloomFilterColumns() const{ return m_bloomFilterColumns; }
    inline bool BloomFilterColumnsHasBeenSet() const { return m_bloomFilterColumnsHasBeenSet; }
    inline void SetBloomFilterColumns(const Aws::Vector<Aws::String>& value) { m_bloomFilterColumnsHasBeenSet = true; m_bloomFilterColumns = value; }
    inline void SetBloomFilterColumns(Aws::Vector<Aws::String>&& value) { m_bloomFilterColumnsHasBeenSet = true; m_bloomFilterColumns = std::move(value); }
    inline OrcSerDe& WithBloomFilterColumns(const Aws::Vector<Aws::String>& value) { SetBloomFilterColumns(value); return *this;}
    inline OrcSerDe& WithBloomFilterColumns(Aws::Vector<Aws::String>&& value) { SetBloomFilterColumns(std::move(value)); return *this;}
    inline OrcSerDe& AddBloomFilterColumns(const Aws::String& value) { m_bloomFilterColumnsHasBeenSet = true; m_bloomFilterColumns.push_back(value); return *this; }
    inline OrcSerDe& AddBloomFilterColumns(Aws::String&& value) { m_bloomFilterColumnsHasBeenSet = true; m_bloomFilterColumns.push_back(std::move(value)); return *this; }
    inline OrcSerDe& AddBloomFilterColumns(const char* value) { m_bloomFilterColumnsHasBeenSet = true; m_bloomFilterColumns.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Bloom filter false positive probability (FPP). The lower the FPP, the
     * bigger the Bloom filter. The default value is 0.05, the minimum is 0, and the
     * maximum is 1.</p>
     */
    inline double GetBloomFilterFalsePositiveProbability() const{ return m_bloomFilterFalsePositiveProbability; }
    inline bool BloomFilterFalsePositiveProbabilityHasBeenSet() const { return m_bloomFilterFalsePositiveProbabilityHasBeenSet; }
    inline void SetBloomFilterFalsePositiveProbability(double value) { m_bloomFilterFalsePositiveProbabilityHasBeenSet = true; m_bloomFilterFalsePositiveProbability = value; }
    inline OrcSerDe& WithBloomFilterFalsePositiveProbability(double value) { SetBloomFilterFalsePositiveProbability(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the fraction of the total number of non-null rows. To turn off
     * dictionary encoding, set this fraction to a number that is less than the number
     * of distinct keys in a dictionary. To always use dictionary encoding, set this
     * threshold to 1.</p>
     */
    inline double GetDictionaryKeyThreshold() const{ return m_dictionaryKeyThreshold; }
    inline bool DictionaryKeyThresholdHasBeenSet() const { return m_dictionaryKeyThresholdHasBeenSet; }
    inline void SetDictionaryKeyThreshold(double value) { m_dictionaryKeyThresholdHasBeenSet = true; m_dictionaryKeyThreshold = value; }
    inline OrcSerDe& WithDictionaryKeyThreshold(double value) { SetDictionaryKeyThreshold(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the file to write. The possible values are <code>V0_11</code>
     * and <code>V0_12</code>. The default is <code>V0_12</code>.</p>
     */
    inline const OrcFormatVersion& GetFormatVersion() const{ return m_formatVersion; }
    inline bool FormatVersionHasBeenSet() const { return m_formatVersionHasBeenSet; }
    inline void SetFormatVersion(const OrcFormatVersion& value) { m_formatVersionHasBeenSet = true; m_formatVersion = value; }
    inline void SetFormatVersion(OrcFormatVersion&& value) { m_formatVersionHasBeenSet = true; m_formatVersion = std::move(value); }
    inline OrcSerDe& WithFormatVersion(const OrcFormatVersion& value) { SetFormatVersion(value); return *this;}
    inline OrcSerDe& WithFormatVersion(OrcFormatVersion&& value) { SetFormatVersion(std::move(value)); return *this;}
    ///@}
  private:

    int m_stripeSizeBytes;
    bool m_stripeSizeBytesHasBeenSet = false;

    int m_blockSizeBytes;
    bool m_blockSizeBytesHasBeenSet = false;

    int m_rowIndexStride;
    bool m_rowIndexStrideHasBeenSet = false;

    bool m_enablePadding;
    bool m_enablePaddingHasBeenSet = false;

    double m_paddingTolerance;
    bool m_paddingToleranceHasBeenSet = false;

    OrcCompression m_compression;
    bool m_compressionHasBeenSet = false;

    Aws::Vector<Aws::String> m_bloomFilterColumns;
    bool m_bloomFilterColumnsHasBeenSet = false;

    double m_bloomFilterFalsePositiveProbability;
    bool m_bloomFilterFalsePositiveProbabilityHasBeenSet = false;

    double m_dictionaryKeyThreshold;
    bool m_dictionaryKeyThresholdHasBeenSet = false;

    OrcFormatVersion m_formatVersion;
    bool m_formatVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
