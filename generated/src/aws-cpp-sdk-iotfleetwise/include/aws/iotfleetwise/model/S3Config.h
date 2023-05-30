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
    AWS_IOTFLEETWISE_API S3Config();
    AWS_IOTFLEETWISE_API S3Config(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API S3Config& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon S3 bucket.</p>
     */
    inline const Aws::String& GetBucketArn() const{ return m_bucketArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon S3 bucket.</p>
     */
    inline bool BucketArnHasBeenSet() const { return m_bucketArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon S3 bucket.</p>
     */
    inline void SetBucketArn(const Aws::String& value) { m_bucketArnHasBeenSet = true; m_bucketArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon S3 bucket.</p>
     */
    inline void SetBucketArn(Aws::String&& value) { m_bucketArnHasBeenSet = true; m_bucketArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon S3 bucket.</p>
     */
    inline void SetBucketArn(const char* value) { m_bucketArnHasBeenSet = true; m_bucketArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon S3 bucket.</p>
     */
    inline S3Config& WithBucketArn(const Aws::String& value) { SetBucketArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon S3 bucket.</p>
     */
    inline S3Config& WithBucketArn(Aws::String&& value) { SetBucketArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon S3 bucket.</p>
     */
    inline S3Config& WithBucketArn(const char* value) { SetBucketArn(value); return *this;}


    /**
     * <p>Specify the format that files are saved in the Amazon S3 bucket. You can save
     * files in an Apache Parquet or JSON format.</p> <ul> <li> <p>Parquet - Store data
     * in a columnar storage file format. Parquet is optimal for fast data retrieval
     * and can reduce costs. This option is selected by default.</p> </li> <li> <p>JSON
     * - Store data in a standard text-based JSON file format.</p> </li> </ul>
     */
    inline const DataFormat& GetDataFormat() const{ return m_dataFormat; }

    /**
     * <p>Specify the format that files are saved in the Amazon S3 bucket. You can save
     * files in an Apache Parquet or JSON format.</p> <ul> <li> <p>Parquet - Store data
     * in a columnar storage file format. Parquet is optimal for fast data retrieval
     * and can reduce costs. This option is selected by default.</p> </li> <li> <p>JSON
     * - Store data in a standard text-based JSON file format.</p> </li> </ul>
     */
    inline bool DataFormatHasBeenSet() const { return m_dataFormatHasBeenSet; }

    /**
     * <p>Specify the format that files are saved in the Amazon S3 bucket. You can save
     * files in an Apache Parquet or JSON format.</p> <ul> <li> <p>Parquet - Store data
     * in a columnar storage file format. Parquet is optimal for fast data retrieval
     * and can reduce costs. This option is selected by default.</p> </li> <li> <p>JSON
     * - Store data in a standard text-based JSON file format.</p> </li> </ul>
     */
    inline void SetDataFormat(const DataFormat& value) { m_dataFormatHasBeenSet = true; m_dataFormat = value; }

    /**
     * <p>Specify the format that files are saved in the Amazon S3 bucket. You can save
     * files in an Apache Parquet or JSON format.</p> <ul> <li> <p>Parquet - Store data
     * in a columnar storage file format. Parquet is optimal for fast data retrieval
     * and can reduce costs. This option is selected by default.</p> </li> <li> <p>JSON
     * - Store data in a standard text-based JSON file format.</p> </li> </ul>
     */
    inline void SetDataFormat(DataFormat&& value) { m_dataFormatHasBeenSet = true; m_dataFormat = std::move(value); }

    /**
     * <p>Specify the format that files are saved in the Amazon S3 bucket. You can save
     * files in an Apache Parquet or JSON format.</p> <ul> <li> <p>Parquet - Store data
     * in a columnar storage file format. Parquet is optimal for fast data retrieval
     * and can reduce costs. This option is selected by default.</p> </li> <li> <p>JSON
     * - Store data in a standard text-based JSON file format.</p> </li> </ul>
     */
    inline S3Config& WithDataFormat(const DataFormat& value) { SetDataFormat(value); return *this;}

    /**
     * <p>Specify the format that files are saved in the Amazon S3 bucket. You can save
     * files in an Apache Parquet or JSON format.</p> <ul> <li> <p>Parquet - Store data
     * in a columnar storage file format. Parquet is optimal for fast data retrieval
     * and can reduce costs. This option is selected by default.</p> </li> <li> <p>JSON
     * - Store data in a standard text-based JSON file format.</p> </li> </ul>
     */
    inline S3Config& WithDataFormat(DataFormat&& value) { SetDataFormat(std::move(value)); return *this;}


    /**
     * <p>By default, stored data is compressed as a .gzip file. Compressed files have
     * a reduced file size, which can optimize the cost of data storage.</p>
     */
    inline const StorageCompressionFormat& GetStorageCompressionFormat() const{ return m_storageCompressionFormat; }

    /**
     * <p>By default, stored data is compressed as a .gzip file. Compressed files have
     * a reduced file size, which can optimize the cost of data storage.</p>
     */
    inline bool StorageCompressionFormatHasBeenSet() const { return m_storageCompressionFormatHasBeenSet; }

    /**
     * <p>By default, stored data is compressed as a .gzip file. Compressed files have
     * a reduced file size, which can optimize the cost of data storage.</p>
     */
    inline void SetStorageCompressionFormat(const StorageCompressionFormat& value) { m_storageCompressionFormatHasBeenSet = true; m_storageCompressionFormat = value; }

    /**
     * <p>By default, stored data is compressed as a .gzip file. Compressed files have
     * a reduced file size, which can optimize the cost of data storage.</p>
     */
    inline void SetStorageCompressionFormat(StorageCompressionFormat&& value) { m_storageCompressionFormatHasBeenSet = true; m_storageCompressionFormat = std::move(value); }

    /**
     * <p>By default, stored data is compressed as a .gzip file. Compressed files have
     * a reduced file size, which can optimize the cost of data storage.</p>
     */
    inline S3Config& WithStorageCompressionFormat(const StorageCompressionFormat& value) { SetStorageCompressionFormat(value); return *this;}

    /**
     * <p>By default, stored data is compressed as a .gzip file. Compressed files have
     * a reduced file size, which can optimize the cost of data storage.</p>
     */
    inline S3Config& WithStorageCompressionFormat(StorageCompressionFormat&& value) { SetStorageCompressionFormat(std::move(value)); return *this;}


    /**
     * <p>(Optional) Enter an S3 bucket prefix. The prefix is the string of characters
     * after the bucket name and before the object name. You can use the prefix to
     * organize data stored in Amazon S3 buckets. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-prefixes.html">Organizing
     * objects using prefixes</a> in the <i>Amazon Simple Storage Service User
     * Guide</i>.</p> <p>By default, Amazon Web Services IoT FleetWise sets the prefix
     * <code>processed-data/year=YY/month=MM/date=DD/hour=HH/</code> (in UTC) to data
     * it delivers to Amazon S3. You can enter a prefix to append it to this default
     * prefix. For example, if you enter the prefix <code>vehicles</code>, the prefix
     * will be
     * <code>vehicles/processed-data/year=YY/month=MM/date=DD/hour=HH/</code>.</p>
     */
    inline const Aws::String& GetPrefix() const{ return m_prefix; }

    /**
     * <p>(Optional) Enter an S3 bucket prefix. The prefix is the string of characters
     * after the bucket name and before the object name. You can use the prefix to
     * organize data stored in Amazon S3 buckets. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-prefixes.html">Organizing
     * objects using prefixes</a> in the <i>Amazon Simple Storage Service User
     * Guide</i>.</p> <p>By default, Amazon Web Services IoT FleetWise sets the prefix
     * <code>processed-data/year=YY/month=MM/date=DD/hour=HH/</code> (in UTC) to data
     * it delivers to Amazon S3. You can enter a prefix to append it to this default
     * prefix. For example, if you enter the prefix <code>vehicles</code>, the prefix
     * will be
     * <code>vehicles/processed-data/year=YY/month=MM/date=DD/hour=HH/</code>.</p>
     */
    inline bool PrefixHasBeenSet() const { return m_prefixHasBeenSet; }

    /**
     * <p>(Optional) Enter an S3 bucket prefix. The prefix is the string of characters
     * after the bucket name and before the object name. You can use the prefix to
     * organize data stored in Amazon S3 buckets. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-prefixes.html">Organizing
     * objects using prefixes</a> in the <i>Amazon Simple Storage Service User
     * Guide</i>.</p> <p>By default, Amazon Web Services IoT FleetWise sets the prefix
     * <code>processed-data/year=YY/month=MM/date=DD/hour=HH/</code> (in UTC) to data
     * it delivers to Amazon S3. You can enter a prefix to append it to this default
     * prefix. For example, if you enter the prefix <code>vehicles</code>, the prefix
     * will be
     * <code>vehicles/processed-data/year=YY/month=MM/date=DD/hour=HH/</code>.</p>
     */
    inline void SetPrefix(const Aws::String& value) { m_prefixHasBeenSet = true; m_prefix = value; }

    /**
     * <p>(Optional) Enter an S3 bucket prefix. The prefix is the string of characters
     * after the bucket name and before the object name. You can use the prefix to
     * organize data stored in Amazon S3 buckets. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-prefixes.html">Organizing
     * objects using prefixes</a> in the <i>Amazon Simple Storage Service User
     * Guide</i>.</p> <p>By default, Amazon Web Services IoT FleetWise sets the prefix
     * <code>processed-data/year=YY/month=MM/date=DD/hour=HH/</code> (in UTC) to data
     * it delivers to Amazon S3. You can enter a prefix to append it to this default
     * prefix. For example, if you enter the prefix <code>vehicles</code>, the prefix
     * will be
     * <code>vehicles/processed-data/year=YY/month=MM/date=DD/hour=HH/</code>.</p>
     */
    inline void SetPrefix(Aws::String&& value) { m_prefixHasBeenSet = true; m_prefix = std::move(value); }

    /**
     * <p>(Optional) Enter an S3 bucket prefix. The prefix is the string of characters
     * after the bucket name and before the object name. You can use the prefix to
     * organize data stored in Amazon S3 buckets. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-prefixes.html">Organizing
     * objects using prefixes</a> in the <i>Amazon Simple Storage Service User
     * Guide</i>.</p> <p>By default, Amazon Web Services IoT FleetWise sets the prefix
     * <code>processed-data/year=YY/month=MM/date=DD/hour=HH/</code> (in UTC) to data
     * it delivers to Amazon S3. You can enter a prefix to append it to this default
     * prefix. For example, if you enter the prefix <code>vehicles</code>, the prefix
     * will be
     * <code>vehicles/processed-data/year=YY/month=MM/date=DD/hour=HH/</code>.</p>
     */
    inline void SetPrefix(const char* value) { m_prefixHasBeenSet = true; m_prefix.assign(value); }

    /**
     * <p>(Optional) Enter an S3 bucket prefix. The prefix is the string of characters
     * after the bucket name and before the object name. You can use the prefix to
     * organize data stored in Amazon S3 buckets. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-prefixes.html">Organizing
     * objects using prefixes</a> in the <i>Amazon Simple Storage Service User
     * Guide</i>.</p> <p>By default, Amazon Web Services IoT FleetWise sets the prefix
     * <code>processed-data/year=YY/month=MM/date=DD/hour=HH/</code> (in UTC) to data
     * it delivers to Amazon S3. You can enter a prefix to append it to this default
     * prefix. For example, if you enter the prefix <code>vehicles</code>, the prefix
     * will be
     * <code>vehicles/processed-data/year=YY/month=MM/date=DD/hour=HH/</code>.</p>
     */
    inline S3Config& WithPrefix(const Aws::String& value) { SetPrefix(value); return *this;}

    /**
     * <p>(Optional) Enter an S3 bucket prefix. The prefix is the string of characters
     * after the bucket name and before the object name. You can use the prefix to
     * organize data stored in Amazon S3 buckets. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-prefixes.html">Organizing
     * objects using prefixes</a> in the <i>Amazon Simple Storage Service User
     * Guide</i>.</p> <p>By default, Amazon Web Services IoT FleetWise sets the prefix
     * <code>processed-data/year=YY/month=MM/date=DD/hour=HH/</code> (in UTC) to data
     * it delivers to Amazon S3. You can enter a prefix to append it to this default
     * prefix. For example, if you enter the prefix <code>vehicles</code>, the prefix
     * will be
     * <code>vehicles/processed-data/year=YY/month=MM/date=DD/hour=HH/</code>.</p>
     */
    inline S3Config& WithPrefix(Aws::String&& value) { SetPrefix(std::move(value)); return *this;}

    /**
     * <p>(Optional) Enter an S3 bucket prefix. The prefix is the string of characters
     * after the bucket name and before the object name. You can use the prefix to
     * organize data stored in Amazon S3 buckets. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/using-prefixes.html">Organizing
     * objects using prefixes</a> in the <i>Amazon Simple Storage Service User
     * Guide</i>.</p> <p>By default, Amazon Web Services IoT FleetWise sets the prefix
     * <code>processed-data/year=YY/month=MM/date=DD/hour=HH/</code> (in UTC) to data
     * it delivers to Amazon S3. You can enter a prefix to append it to this default
     * prefix. For example, if you enter the prefix <code>vehicles</code>, the prefix
     * will be
     * <code>vehicles/processed-data/year=YY/month=MM/date=DD/hour=HH/</code>.</p>
     */
    inline S3Config& WithPrefix(const char* value) { SetPrefix(value); return *this;}

  private:

    Aws::String m_bucketArn;
    bool m_bucketArnHasBeenSet = false;

    DataFormat m_dataFormat;
    bool m_dataFormatHasBeenSet = false;

    StorageCompressionFormat m_storageCompressionFormat;
    bool m_storageCompressionFormatHasBeenSet = false;

    Aws::String m_prefix;
    bool m_prefixHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
