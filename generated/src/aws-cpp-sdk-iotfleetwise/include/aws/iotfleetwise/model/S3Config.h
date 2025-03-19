/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotfleetwise/model/DataFormat.h>
#include <aws/iotfleetwise/model/StorageCompressionFormat.h>
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
namespace IoTFleetWise
{
namespace Model
{

  /**
   * <p>The Amazon S3 bucket where the Amazon Web Services IoT FleetWise campaign
   * sends data. Amazon S3 is an object storage service that stores data as objects
   * within buckets. For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/creating-buckets-s3.html">Creating,
   * configuring, and working with Amazon S3 buckets</a> in the <i>Amazon Simple
   * Storage Service User Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/S3Config">AWS
   * API Reference</a></p>
   */
  class S3Config
  {
  public:
    AWS_IOTFLEETWISE_API S3Config() = default;
    AWS_IOTFLEETWISE_API S3Config(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API S3Config& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon S3 bucket.</p>
     */
    inline const Aws::String& GetBucketArn() const { return m_bucketArn; }
    inline bool BucketArnHasBeenSet() const { return m_bucketArnHasBeenSet; }
    template<typename BucketArnT = Aws::String>
    void SetBucketArn(BucketArnT&& value) { m_bucketArnHasBeenSet = true; m_bucketArn = std::forward<BucketArnT>(value); }
    template<typename BucketArnT = Aws::String>
    S3Config& WithBucketArn(BucketArnT&& value) { SetBucketArn(std::forward<BucketArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify the format that files are saved in the Amazon S3 bucket. You can save
     * files in an Apache Parquet or JSON format.</p> <ul> <li> <p>Parquet - Store data
     * in a columnar storage file format. Parquet is optimal for fast data retrieval
     * and can reduce costs. This option is selected by default.</p> </li> <li> <p>JSON
     * - Store data in a standard text-based JSON file format.</p> </li> </ul>
     */
    inline DataFormat GetDataFormat() const { return m_dataFormat; }
    inline bool DataFormatHasBeenSet() const { return m_dataFormatHasBeenSet; }
    inline void SetDataFormat(DataFormat value) { m_dataFormatHasBeenSet = true; m_dataFormat = value; }
    inline S3Config& WithDataFormat(DataFormat value) { SetDataFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>By default, stored data is compressed as a .gzip file. Compressed files have
     * a reduced file size, which can optimize the cost of data storage.</p>
     */
    inline StorageCompressionFormat GetStorageCompressionFormat() const { return m_storageCompressionFormat; }
    inline bool StorageCompressionFormatHasBeenSet() const { return m_storageCompressionFormatHasBeenSet; }
    inline void SetStorageCompressionFormat(StorageCompressionFormat value) { m_storageCompressionFormatHasBeenSet = true; m_storageCompressionFormat = value; }
    inline S3Config& WithStorageCompressionFormat(StorageCompressionFormat value) { SetStorageCompressionFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enter an S3 bucket prefix. The prefix is the string of characters after the
     * bucket name and before the object name. You can use the prefix to organize data
     * stored in Amazon S3 buckets. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-prefixes.html">Organizing
     * objects using prefixes</a> in the <i>Amazon Simple Storage Service User
     * Guide</i>.</p> <p>By default, Amazon Web Services IoT FleetWise sets the prefix
     * <code>processed-data/year=YY/month=MM/date=DD/hour=HH/</code> (in UTC) to data
     * it delivers to Amazon S3. You can enter a prefix to append it to this default
     * prefix. For example, if you enter the prefix <code>vehicles</code>, the prefix
     * will be
     * <code>vehicles/processed-data/year=YY/month=MM/date=DD/hour=HH/</code>.</p>
     */
    inline const Aws::String& GetPrefix() const { return m_prefix; }
    inline bool PrefixHasBeenSet() const { return m_prefixHasBeenSet; }
    template<typename PrefixT = Aws::String>
    void SetPrefix(PrefixT&& value) { m_prefixHasBeenSet = true; m_prefix = std::forward<PrefixT>(value); }
    template<typename PrefixT = Aws::String>
    S3Config& WithPrefix(PrefixT&& value) { SetPrefix(std::forward<PrefixT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_bucketArn;
    bool m_bucketArnHasBeenSet = false;

    DataFormat m_dataFormat{DataFormat::NOT_SET};
    bool m_dataFormatHasBeenSet = false;

    StorageCompressionFormat m_storageCompressionFormat{StorageCompressionFormat::NOT_SET};
    bool m_storageCompressionFormatHasBeenSet = false;

    Aws::String m_prefix;
    bool m_prefixHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
