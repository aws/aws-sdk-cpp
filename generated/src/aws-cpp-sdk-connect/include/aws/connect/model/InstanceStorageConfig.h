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
    AWS_CONNECT_API InstanceStorageConfig() = default;
    AWS_CONNECT_API InstanceStorageConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API InstanceStorageConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The existing association identifier that uniquely identifies the resource
     * type and storage config for the given instance ID.</p>
     */
    inline const Aws::String& GetAssociationId() const { return m_associationId; }
    inline bool AssociationIdHasBeenSet() const { return m_associationIdHasBeenSet; }
    template<typename AssociationIdT = Aws::String>
    void SetAssociationId(AssociationIdT&& value) { m_associationIdHasBeenSet = true; m_associationId = std::forward<AssociationIdT>(value); }
    template<typename AssociationIdT = Aws::String>
    InstanceStorageConfig& WithAssociationId(AssociationIdT&& value) { SetAssociationId(std::forward<AssociationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A valid storage type.</p>
     */
    inline StorageType GetStorageType() const { return m_storageType; }
    inline bool StorageTypeHasBeenSet() const { return m_storageTypeHasBeenSet; }
    inline void SetStorageType(StorageType value) { m_storageTypeHasBeenSet = true; m_storageType = value; }
    inline InstanceStorageConfig& WithStorageType(StorageType value) { SetStorageType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The S3 bucket configuration.</p>
     */
    inline const S3Config& GetS3Config() const { return m_s3Config; }
    inline bool S3ConfigHasBeenSet() const { return m_s3ConfigHasBeenSet; }
    template<typename S3ConfigT = S3Config>
    void SetS3Config(S3ConfigT&& value) { m_s3ConfigHasBeenSet = true; m_s3Config = std::forward<S3ConfigT>(value); }
    template<typename S3ConfigT = S3Config>
    InstanceStorageConfig& WithS3Config(S3ConfigT&& value) { SetS3Config(std::forward<S3ConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration of the Kinesis video stream.</p>
     */
    inline const KinesisVideoStreamConfig& GetKinesisVideoStreamConfig() const { return m_kinesisVideoStreamConfig; }
    inline bool KinesisVideoStreamConfigHasBeenSet() const { return m_kinesisVideoStreamConfigHasBeenSet; }
    template<typename KinesisVideoStreamConfigT = KinesisVideoStreamConfig>
    void SetKinesisVideoStreamConfig(KinesisVideoStreamConfigT&& value) { m_kinesisVideoStreamConfigHasBeenSet = true; m_kinesisVideoStreamConfig = std::forward<KinesisVideoStreamConfigT>(value); }
    template<typename KinesisVideoStreamConfigT = KinesisVideoStreamConfig>
    InstanceStorageConfig& WithKinesisVideoStreamConfig(KinesisVideoStreamConfigT&& value) { SetKinesisVideoStreamConfig(std::forward<KinesisVideoStreamConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration of the Kinesis data stream.</p>
     */
    inline const KinesisStreamConfig& GetKinesisStreamConfig() const { return m_kinesisStreamConfig; }
    inline bool KinesisStreamConfigHasBeenSet() const { return m_kinesisStreamConfigHasBeenSet; }
    template<typename KinesisStreamConfigT = KinesisStreamConfig>
    void SetKinesisStreamConfig(KinesisStreamConfigT&& value) { m_kinesisStreamConfigHasBeenSet = true; m_kinesisStreamConfig = std::forward<KinesisStreamConfigT>(value); }
    template<typename KinesisStreamConfigT = KinesisStreamConfig>
    InstanceStorageConfig& WithKinesisStreamConfig(KinesisStreamConfigT&& value) { SetKinesisStreamConfig(std::forward<KinesisStreamConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration of the Kinesis Firehose delivery stream.</p>
     */
    inline const KinesisFirehoseConfig& GetKinesisFirehoseConfig() const { return m_kinesisFirehoseConfig; }
    inline bool KinesisFirehoseConfigHasBeenSet() const { return m_kinesisFirehoseConfigHasBeenSet; }
    template<typename KinesisFirehoseConfigT = KinesisFirehoseConfig>
    void SetKinesisFirehoseConfig(KinesisFirehoseConfigT&& value) { m_kinesisFirehoseConfigHasBeenSet = true; m_kinesisFirehoseConfig = std::forward<KinesisFirehoseConfigT>(value); }
    template<typename KinesisFirehoseConfigT = KinesisFirehoseConfig>
    InstanceStorageConfig& WithKinesisFirehoseConfig(KinesisFirehoseConfigT&& value) { SetKinesisFirehoseConfig(std::forward<KinesisFirehoseConfigT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_associationId;
    bool m_associationIdHasBeenSet = false;

    StorageType m_storageType{StorageType::NOT_SET};
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
