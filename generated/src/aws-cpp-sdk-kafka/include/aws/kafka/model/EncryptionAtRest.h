/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
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
namespace Kafka
{
namespace Model
{

  /**
   * 
            <p>The data-volume encryption details.</p>
         <p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/EncryptionAtRest">AWS
   * API Reference</a></p>
   */
  class EncryptionAtRest
  {
  public:
    AWS_KAFKA_API EncryptionAtRest() = default;
    AWS_KAFKA_API EncryptionAtRest(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API EncryptionAtRest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * 
            <p>The ARN of the AWS KMS key for encrypting data at rest. If you
     * don't specify a KMS key, MSK creates one for you and uses it.</p>
         
     */
    inline const Aws::String& GetDataVolumeKMSKeyId() const { return m_dataVolumeKMSKeyId; }
    inline bool DataVolumeKMSKeyIdHasBeenSet() const { return m_dataVolumeKMSKeyIdHasBeenSet; }
    template<typename DataVolumeKMSKeyIdT = Aws::String>
    void SetDataVolumeKMSKeyId(DataVolumeKMSKeyIdT&& value) { m_dataVolumeKMSKeyIdHasBeenSet = true; m_dataVolumeKMSKeyId = std::forward<DataVolumeKMSKeyIdT>(value); }
    template<typename DataVolumeKMSKeyIdT = Aws::String>
    EncryptionAtRest& WithDataVolumeKMSKeyId(DataVolumeKMSKeyIdT&& value) { SetDataVolumeKMSKeyId(std::forward<DataVolumeKMSKeyIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_dataVolumeKMSKeyId;
    bool m_dataVolumeKMSKeyIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
