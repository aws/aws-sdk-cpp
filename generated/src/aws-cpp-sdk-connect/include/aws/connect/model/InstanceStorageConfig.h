/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/StorageType.h>
#include <aws/connect/model/S3Config.h>
#include <aws/connect/model/KinesisVideoStreamConfig.h>
#include <aws/connect/model/KinesisStreamConfig.h>
#include <aws/connect/model/KinesisFirehoseConfig.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>The storage configuration for the instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/InstanceStorageConfig">AWS
   * API Reference</a></p>
   */
  class InstanceStorageConfig
  {
  public:
    AWS_CONNECT_API InstanceStorageConfig();
    AWS_CONNECT_API InstanceStorageConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API InstanceStorageConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The existing association identifier that uniquely identifies the resource
     * type and storage config for the given instance ID.</p>
     */
    inline const Aws::String& GetAssociationId() const{ return m_associationId; }

    /**
     * <p>The existing association identifier that uniquely identifies the resource
     * type and storage config for the given instance ID.</p>
     */
    inline bool AssociationIdHasBeenSet() const { return m_associationIdHasBeenSet; }

    /**
     * <p>The existing association identifier that uniquely identifies the resource
     * type and storage config for the given instance ID.</p>
     */
    inline void SetAssociationId(const Aws::String& value) { m_associationIdHasBeenSet = true; m_associationId = value; }

    /**
     * <p>The existing association identifier that uniquely identifies the resource
     * type and storage config for the given instance ID.</p>
     */
    inline void SetAssociationId(Aws::String&& value) { m_associationIdHasBeenSet = true; m_associationId = std::move(value); }

    /**
     * <p>The existing association identifier that uniquely identifies the resource
     * type and storage config for the given instance ID.</p>
     */
    inline void SetAssociationId(const char* value) { m_associationIdHasBeenSet = true; m_associationId.assign(value); }

    /**
     * <p>The existing association identifier that uniquely identifies the resource
     * type and storage config for the given instance ID.</p>
     */
    inline InstanceStorageConfig& WithAssociationId(const Aws::String& value) { SetAssociationId(value); return *this;}

    /**
     * <p>The existing association identifier that uniquely identifies the resource
     * type and storage config for the given instance ID.</p>
     */
    inline InstanceStorageConfig& WithAssociationId(Aws::String&& value) { SetAssociationId(std::move(value)); return *this;}

    /**
     * <p>The existing association identifier that uniquely identifies the resource
     * type and storage config for the given instance ID.</p>
     */
    inline InstanceStorageConfig& WithAssociationId(const char* value) { SetAssociationId(value); return *this;}


    /**
     * <p>A valid storage type.</p>
     */
    inline const StorageType& GetStorageType() const{ return m_storageType; }

    /**
     * <p>A valid storage type.</p>
     */
    inline bool StorageTypeHasBeenSet() const { return m_storageTypeHasBeenSet; }

    /**
     * <p>A valid storage type.</p>
     */
    inline void SetStorageType(const StorageType& value) { m_storageTypeHasBeenSet = true; m_storageType = value; }

    /**
     * <p>A valid storage type.</p>
     */
    inline void SetStorageType(StorageType&& value) { m_storageTypeHasBeenSet = true; m_storageType = std::move(value); }

    /**
     * <p>A valid storage type.</p>
     */
    inline InstanceStorageConfig& WithStorageType(const StorageType& value) { SetStorageType(value); return *this;}

    /**
     * <p>A valid storage type.</p>
     */
    inline InstanceStorageConfig& WithStorageType(StorageType&& value) { SetStorageType(std::move(value)); return *this;}


    /**
     * <p>The S3 bucket configuration.</p>
     */
    inline const S3Config& GetS3Config() const{ return m_s3Config; }

    /**
     * <p>The S3 bucket configuration.</p>
     */
    inline bool S3ConfigHasBeenSet() const { return m_s3ConfigHasBeenSet; }

    /**
     * <p>The S3 bucket configuration.</p>
     */
    inline void SetS3Config(const S3Config& value) { m_s3ConfigHasBeenSet = true; m_s3Config = value; }

    /**
     * <p>The S3 bucket configuration.</p>
     */
    inline void SetS3Config(S3Config&& value) { m_s3ConfigHasBeenSet = true; m_s3Config = std::move(value); }

    /**
     * <p>The S3 bucket configuration.</p>
     */
    inline InstanceStorageConfig& WithS3Config(const S3Config& value) { SetS3Config(value); return *this;}

    /**
     * <p>The S3 bucket configuration.</p>
     */
    inline InstanceStorageConfig& WithS3Config(S3Config&& value) { SetS3Config(std::move(value)); return *this;}


    /**
     * <p>The configuration of the Kinesis video stream.</p>
     */
    inline const KinesisVideoStreamConfig& GetKinesisVideoStreamConfig() const{ return m_kinesisVideoStreamConfig; }

    /**
     * <p>The configuration of the Kinesis video stream.</p>
     */
    inline bool KinesisVideoStreamConfigHasBeenSet() const { return m_kinesisVideoStreamConfigHasBeenSet; }

    /**
     * <p>The configuration of the Kinesis video stream.</p>
     */
    inline void SetKinesisVideoStreamConfig(const KinesisVideoStreamConfig& value) { m_kinesisVideoStreamConfigHasBeenSet = true; m_kinesisVideoStreamConfig = value; }

    /**
     * <p>The configuration of the Kinesis video stream.</p>
     */
    inline void SetKinesisVideoStreamConfig(KinesisVideoStreamConfig&& value) { m_kinesisVideoStreamConfigHasBeenSet = true; m_kinesisVideoStreamConfig = std::move(value); }

    /**
     * <p>The configuration of the Kinesis video stream.</p>
     */
    inline InstanceStorageConfig& WithKinesisVideoStreamConfig(const KinesisVideoStreamConfig& value) { SetKinesisVideoStreamConfig(value); return *this;}

    /**
     * <p>The configuration of the Kinesis video stream.</p>
     */
    inline InstanceStorageConfig& WithKinesisVideoStreamConfig(KinesisVideoStreamConfig&& value) { SetKinesisVideoStreamConfig(std::move(value)); return *this;}


    /**
     * <p>The configuration of the Kinesis data stream.</p>
     */
    inline const KinesisStreamConfig& GetKinesisStreamConfig() const{ return m_kinesisStreamConfig; }

    /**
     * <p>The configuration of the Kinesis data stream.</p>
     */
    inline bool KinesisStreamConfigHasBeenSet() const { return m_kinesisStreamConfigHasBeenSet; }

    /**
     * <p>The configuration of the Kinesis data stream.</p>
     */
    inline void SetKinesisStreamConfig(const KinesisStreamConfig& value) { m_kinesisStreamConfigHasBeenSet = true; m_kinesisStreamConfig = value; }

    /**
     * <p>The configuration of the Kinesis data stream.</p>
     */
    inline void SetKinesisStreamConfig(KinesisStreamConfig&& value) { m_kinesisStreamConfigHasBeenSet = true; m_kinesisStreamConfig = std::move(value); }

    /**
     * <p>The configuration of the Kinesis data stream.</p>
     */
    inline InstanceStorageConfig& WithKinesisStreamConfig(const KinesisStreamConfig& value) { SetKinesisStreamConfig(value); return *this;}

    /**
     * <p>The configuration of the Kinesis data stream.</p>
     */
    inline InstanceStorageConfig& WithKinesisStreamConfig(KinesisStreamConfig&& value) { SetKinesisStreamConfig(std::move(value)); return *this;}


    /**
     * <p>The configuration of the Kinesis Firehose delivery stream.</p>
     */
    inline const KinesisFirehoseConfig& GetKinesisFirehoseConfig() const{ return m_kinesisFirehoseConfig; }

    /**
     * <p>The configuration of the Kinesis Firehose delivery stream.</p>
     */
    inline bool KinesisFirehoseConfigHasBeenSet() const { return m_kinesisFirehoseConfigHasBeenSet; }

    /**
     * <p>The configuration of the Kinesis Firehose delivery stream.</p>
     */
    inline void SetKinesisFirehoseConfig(const KinesisFirehoseConfig& value) { m_kinesisFirehoseConfigHasBeenSet = true; m_kinesisFirehoseConfig = value; }

    /**
     * <p>The configuration of the Kinesis Firehose delivery stream.</p>
     */
    inline void SetKinesisFirehoseConfig(KinesisFirehoseConfig&& value) { m_kinesisFirehoseConfigHasBeenSet = true; m_kinesisFirehoseConfig = std::move(value); }

    /**
     * <p>The configuration of the Kinesis Firehose delivery stream.</p>
     */
    inline InstanceStorageConfig& WithKinesisFirehoseConfig(const KinesisFirehoseConfig& value) { SetKinesisFirehoseConfig(value); return *this;}

    /**
     * <p>The configuration of the Kinesis Firehose delivery stream.</p>
     */
    inline InstanceStorageConfig& WithKinesisFirehoseConfig(KinesisFirehoseConfig&& value) { SetKinesisFirehoseConfig(std::move(value)); return *this;}

  private:

    Aws::String m_associationId;
    bool m_associationIdHasBeenSet = false;

    StorageType m_storageType;
    bool m_storageTypeHasBeenSet = false;

    S3Config m_s3Config;
    bool m_s3ConfigHasBeenSet = false;

    KinesisVideoStreamConfig m_kinesisVideoStreamConfig;
    bool m_kinesisVideoStreamConfigHasBeenSet = false;

    KinesisStreamConfig m_kinesisStreamConfig;
    bool m_kinesisStreamConfigHasBeenSet = false;

    KinesisFirehoseConfig m_kinesisFirehoseConfig;
    bool m_kinesisFirehoseConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
