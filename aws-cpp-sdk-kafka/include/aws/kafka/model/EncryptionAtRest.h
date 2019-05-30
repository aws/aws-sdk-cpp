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
  class AWS_KAFKA_API EncryptionAtRest
  {
  public:
    EncryptionAtRest();
    EncryptionAtRest(Aws::Utils::Json::JsonView jsonValue);
    EncryptionAtRest& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
    bool m_dataVolumeKMSKeyIdHasBeenSet;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
