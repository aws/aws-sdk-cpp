/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace StorageGateway
{
namespace Model
{

  /**
   * <p>Describes a storage volume object.</p>
   */
  class AWS_STORAGEGATEWAY_API VolumeInfo
  {
  public:
    VolumeInfo();
    VolumeInfo(const Aws::Utils::Json::JsonValue& jsonValue);
    VolumeInfo& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The Amazon Resource Name (ARN) for the storage volume. For example, the
     * following is a valid ARN:</p> <p>
     * <code>arn:aws:storagegateway:us-east-1:111122223333:gateway/sgw-12A3456B/volume/vol-1122AABB</code>
     * </p> <p> Valid Values: 50 to 500 lowercase letters, numbers, periods (.), and
     * hyphens (-).</p>
     */
    inline const Aws::String& GetVolumeARN() const{ return m_volumeARN; }

    /**
     * <p>The Amazon Resource Name (ARN) for the storage volume. For example, the
     * following is a valid ARN:</p> <p>
     * <code>arn:aws:storagegateway:us-east-1:111122223333:gateway/sgw-12A3456B/volume/vol-1122AABB</code>
     * </p> <p> Valid Values: 50 to 500 lowercase letters, numbers, periods (.), and
     * hyphens (-).</p>
     */
    inline void SetVolumeARN(const Aws::String& value) { m_volumeARNHasBeenSet = true; m_volumeARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the storage volume. For example, the
     * following is a valid ARN:</p> <p>
     * <code>arn:aws:storagegateway:us-east-1:111122223333:gateway/sgw-12A3456B/volume/vol-1122AABB</code>
     * </p> <p> Valid Values: 50 to 500 lowercase letters, numbers, periods (.), and
     * hyphens (-).</p>
     */
    inline void SetVolumeARN(Aws::String&& value) { m_volumeARNHasBeenSet = true; m_volumeARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the storage volume. For example, the
     * following is a valid ARN:</p> <p>
     * <code>arn:aws:storagegateway:us-east-1:111122223333:gateway/sgw-12A3456B/volume/vol-1122AABB</code>
     * </p> <p> Valid Values: 50 to 500 lowercase letters, numbers, periods (.), and
     * hyphens (-).</p>
     */
    inline void SetVolumeARN(const char* value) { m_volumeARNHasBeenSet = true; m_volumeARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the storage volume. For example, the
     * following is a valid ARN:</p> <p>
     * <code>arn:aws:storagegateway:us-east-1:111122223333:gateway/sgw-12A3456B/volume/vol-1122AABB</code>
     * </p> <p> Valid Values: 50 to 500 lowercase letters, numbers, periods (.), and
     * hyphens (-).</p>
     */
    inline VolumeInfo& WithVolumeARN(const Aws::String& value) { SetVolumeARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the storage volume. For example, the
     * following is a valid ARN:</p> <p>
     * <code>arn:aws:storagegateway:us-east-1:111122223333:gateway/sgw-12A3456B/volume/vol-1122AABB</code>
     * </p> <p> Valid Values: 50 to 500 lowercase letters, numbers, periods (.), and
     * hyphens (-).</p>
     */
    inline VolumeInfo& WithVolumeARN(Aws::String&& value) { SetVolumeARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the storage volume. For example, the
     * following is a valid ARN:</p> <p>
     * <code>arn:aws:storagegateway:us-east-1:111122223333:gateway/sgw-12A3456B/volume/vol-1122AABB</code>
     * </p> <p> Valid Values: 50 to 500 lowercase letters, numbers, periods (.), and
     * hyphens (-).</p>
     */
    inline VolumeInfo& WithVolumeARN(const char* value) { SetVolumeARN(value); return *this;}

    /**
     * <p>The unique identifier assigned to the volume. This ID becomes part of the
     * volume Amazon Resource Name (ARN), which you use as input for other
     * operations.</p> <p> Valid Values: 50 to 500 lowercase letters, numbers, periods
     * (.), and hyphens (-).</p>
     */
    inline const Aws::String& GetVolumeId() const{ return m_volumeId; }

    /**
     * <p>The unique identifier assigned to the volume. This ID becomes part of the
     * volume Amazon Resource Name (ARN), which you use as input for other
     * operations.</p> <p> Valid Values: 50 to 500 lowercase letters, numbers, periods
     * (.), and hyphens (-).</p>
     */
    inline void SetVolumeId(const Aws::String& value) { m_volumeIdHasBeenSet = true; m_volumeId = value; }

    /**
     * <p>The unique identifier assigned to the volume. This ID becomes part of the
     * volume Amazon Resource Name (ARN), which you use as input for other
     * operations.</p> <p> Valid Values: 50 to 500 lowercase letters, numbers, periods
     * (.), and hyphens (-).</p>
     */
    inline void SetVolumeId(Aws::String&& value) { m_volumeIdHasBeenSet = true; m_volumeId = value; }

    /**
     * <p>The unique identifier assigned to the volume. This ID becomes part of the
     * volume Amazon Resource Name (ARN), which you use as input for other
     * operations.</p> <p> Valid Values: 50 to 500 lowercase letters, numbers, periods
     * (.), and hyphens (-).</p>
     */
    inline void SetVolumeId(const char* value) { m_volumeIdHasBeenSet = true; m_volumeId.assign(value); }

    /**
     * <p>The unique identifier assigned to the volume. This ID becomes part of the
     * volume Amazon Resource Name (ARN), which you use as input for other
     * operations.</p> <p> Valid Values: 50 to 500 lowercase letters, numbers, periods
     * (.), and hyphens (-).</p>
     */
    inline VolumeInfo& WithVolumeId(const Aws::String& value) { SetVolumeId(value); return *this;}

    /**
     * <p>The unique identifier assigned to the volume. This ID becomes part of the
     * volume Amazon Resource Name (ARN), which you use as input for other
     * operations.</p> <p> Valid Values: 50 to 500 lowercase letters, numbers, periods
     * (.), and hyphens (-).</p>
     */
    inline VolumeInfo& WithVolumeId(Aws::String&& value) { SetVolumeId(value); return *this;}

    /**
     * <p>The unique identifier assigned to the volume. This ID becomes part of the
     * volume Amazon Resource Name (ARN), which you use as input for other
     * operations.</p> <p> Valid Values: 50 to 500 lowercase letters, numbers, periods
     * (.), and hyphens (-).</p>
     */
    inline VolumeInfo& WithVolumeId(const char* value) { SetVolumeId(value); return *this;}

    
    inline const Aws::String& GetGatewayARN() const{ return m_gatewayARN; }

    
    inline void SetGatewayARN(const Aws::String& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = value; }

    
    inline void SetGatewayARN(Aws::String&& value) { m_gatewayARNHasBeenSet = true; m_gatewayARN = value; }

    
    inline void SetGatewayARN(const char* value) { m_gatewayARNHasBeenSet = true; m_gatewayARN.assign(value); }

    
    inline VolumeInfo& WithGatewayARN(const Aws::String& value) { SetGatewayARN(value); return *this;}

    
    inline VolumeInfo& WithGatewayARN(Aws::String&& value) { SetGatewayARN(value); return *this;}

    
    inline VolumeInfo& WithGatewayARN(const char* value) { SetGatewayARN(value); return *this;}

    /**
     * <p>The unique identifier assigned to your gateway during activation. This ID
     * becomes part of the gateway Amazon Resource Name (ARN), which you use as input
     * for other operations.</p> <p> Valid Values: 50 to 500 lowercase letters,
     * numbers, periods (.), and hyphens (-).</p>
     */
    inline const Aws::String& GetGatewayId() const{ return m_gatewayId; }

    /**
     * <p>The unique identifier assigned to your gateway during activation. This ID
     * becomes part of the gateway Amazon Resource Name (ARN), which you use as input
     * for other operations.</p> <p> Valid Values: 50 to 500 lowercase letters,
     * numbers, periods (.), and hyphens (-).</p>
     */
    inline void SetGatewayId(const Aws::String& value) { m_gatewayIdHasBeenSet = true; m_gatewayId = value; }

    /**
     * <p>The unique identifier assigned to your gateway during activation. This ID
     * becomes part of the gateway Amazon Resource Name (ARN), which you use as input
     * for other operations.</p> <p> Valid Values: 50 to 500 lowercase letters,
     * numbers, periods (.), and hyphens (-).</p>
     */
    inline void SetGatewayId(Aws::String&& value) { m_gatewayIdHasBeenSet = true; m_gatewayId = value; }

    /**
     * <p>The unique identifier assigned to your gateway during activation. This ID
     * becomes part of the gateway Amazon Resource Name (ARN), which you use as input
     * for other operations.</p> <p> Valid Values: 50 to 500 lowercase letters,
     * numbers, periods (.), and hyphens (-).</p>
     */
    inline void SetGatewayId(const char* value) { m_gatewayIdHasBeenSet = true; m_gatewayId.assign(value); }

    /**
     * <p>The unique identifier assigned to your gateway during activation. This ID
     * becomes part of the gateway Amazon Resource Name (ARN), which you use as input
     * for other operations.</p> <p> Valid Values: 50 to 500 lowercase letters,
     * numbers, periods (.), and hyphens (-).</p>
     */
    inline VolumeInfo& WithGatewayId(const Aws::String& value) { SetGatewayId(value); return *this;}

    /**
     * <p>The unique identifier assigned to your gateway during activation. This ID
     * becomes part of the gateway Amazon Resource Name (ARN), which you use as input
     * for other operations.</p> <p> Valid Values: 50 to 500 lowercase letters,
     * numbers, periods (.), and hyphens (-).</p>
     */
    inline VolumeInfo& WithGatewayId(Aws::String&& value) { SetGatewayId(value); return *this;}

    /**
     * <p>The unique identifier assigned to your gateway during activation. This ID
     * becomes part of the gateway Amazon Resource Name (ARN), which you use as input
     * for other operations.</p> <p> Valid Values: 50 to 500 lowercase letters,
     * numbers, periods (.), and hyphens (-).</p>
     */
    inline VolumeInfo& WithGatewayId(const char* value) { SetGatewayId(value); return *this;}

    
    inline const Aws::String& GetVolumeType() const{ return m_volumeType; }

    
    inline void SetVolumeType(const Aws::String& value) { m_volumeTypeHasBeenSet = true; m_volumeType = value; }

    
    inline void SetVolumeType(Aws::String&& value) { m_volumeTypeHasBeenSet = true; m_volumeType = value; }

    
    inline void SetVolumeType(const char* value) { m_volumeTypeHasBeenSet = true; m_volumeType.assign(value); }

    
    inline VolumeInfo& WithVolumeType(const Aws::String& value) { SetVolumeType(value); return *this;}

    
    inline VolumeInfo& WithVolumeType(Aws::String&& value) { SetVolumeType(value); return *this;}

    
    inline VolumeInfo& WithVolumeType(const char* value) { SetVolumeType(value); return *this;}

    /**
     * <p>The size, in bytes, of the volume.</p> <p>Valid Values: 50 to 500 lowercase
     * letters, numbers, periods (.), and hyphens (-).</p>
     */
    inline long long GetVolumeSizeInBytes() const{ return m_volumeSizeInBytes; }

    /**
     * <p>The size, in bytes, of the volume.</p> <p>Valid Values: 50 to 500 lowercase
     * letters, numbers, periods (.), and hyphens (-).</p>
     */
    inline void SetVolumeSizeInBytes(long long value) { m_volumeSizeInBytesHasBeenSet = true; m_volumeSizeInBytes = value; }

    /**
     * <p>The size, in bytes, of the volume.</p> <p>Valid Values: 50 to 500 lowercase
     * letters, numbers, periods (.), and hyphens (-).</p>
     */
    inline VolumeInfo& WithVolumeSizeInBytes(long long value) { SetVolumeSizeInBytes(value); return *this;}

  private:
    Aws::String m_volumeARN;
    bool m_volumeARNHasBeenSet;
    Aws::String m_volumeId;
    bool m_volumeIdHasBeenSet;
    Aws::String m_gatewayARN;
    bool m_gatewayARNHasBeenSet;
    Aws::String m_gatewayId;
    bool m_gatewayIdHasBeenSet;
    Aws::String m_volumeType;
    bool m_volumeTypeHasBeenSet;
    long long m_volumeSizeInBytes;
    bool m_volumeSizeInBytesHasBeenSet;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
