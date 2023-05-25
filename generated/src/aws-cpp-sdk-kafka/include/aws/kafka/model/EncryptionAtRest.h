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
    AWS_KAFKA_API EncryptionAtRest();
    AWS_KAFKA_API EncryptionAtRest(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API EncryptionAtRest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * 
            <p>The ARN of the AWS KMS key for encrypting data at rest. If you
     * don't specify a KMS key, MSK creates one for you and uses it.</p>
         
     */
    inline const Aws::String& GetDataVolumeKMSKeyId() const{ return m_dataVolumeKMSKeyId; }

    /**
     * 
            <p>The ARN of the AWS KMS key for encrypting data at rest. If you
     * don't specify a KMS key, MSK creates one for you and uses it.</p>
         
     */
    inline bool DataVolumeKMSKeyIdHasBeenSet() const { return m_dataVolumeKMSKeyIdHasBeenSet; }

    /**
     * 
            <p>The ARN of the AWS KMS key for encrypting data at rest. If you
     * don't specify a KMS key, MSK creates one for you and uses it.</p>
         
     */
    inline void SetDataVolumeKMSKeyId(const Aws::String& value) { m_dataVolumeKMSKeyIdHasBeenSet = true; m_dataVolumeKMSKeyId = value; }

    /**
     * 
            <p>The ARN of the AWS KMS key for encrypting data at rest. If you
     * don't specify a KMS key, MSK creates one for you and uses it.</p>
         
     */
    inline void SetDataVolumeKMSKeyId(Aws::String&& value) { m_dataVolumeKMSKeyIdHasBeenSet = true; m_dataVolumeKMSKeyId = std::move(value); }

    /**
     * 
            <p>The ARN of the AWS KMS key for encrypting data at rest. If you
     * don't specify a KMS key, MSK creates one for you and uses it.</p>
         
     */
    inline void SetDataVolumeKMSKeyId(const char* value) { m_dataVolumeKMSKeyIdHasBeenSet = true; m_dataVolumeKMSKeyId.assign(value); }

    /**
     * 
            <p>The ARN of the AWS KMS key for encrypting data at rest. If you
     * don't specify a KMS key, MSK creates one for you and uses it.</p>
         
     */
    inline EncryptionAtRest& WithDataVolumeKMSKeyId(const Aws::String& value) { SetDataVolumeKMSKeyId(value); return *this;}

    /**
     * 
            <p>The ARN of the AWS KMS key for encrypting data at rest. If you
     * don't specify a KMS key, MSK creates one for you and uses it.</p>
         
     */
    inline EncryptionAtRest& WithDataVolumeKMSKeyId(Aws::String&& value) { SetDataVolumeKMSKeyId(std::move(value)); return *this;}

    /**
     * 
            <p>The ARN of the AWS KMS key for encrypting data at rest. If you
     * don't specify a KMS key, MSK creates one for you and uses it.</p>
         
     */
    inline EncryptionAtRest& WithDataVolumeKMSKeyId(const char* value) { SetDataVolumeKMSKeyId(value); return *this;}

  private:

    Aws::String m_dataVolumeKMSKeyId;
    bool m_dataVolumeKMSKeyIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
