/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/Drs_EXPORTS.h>
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
namespace drs
{
namespace Model
{

  /**
   * <p>An object representing a block storage device on the Recovery
   * Instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/RecoveryInstanceDisk">AWS
   * API Reference</a></p>
   */
  class RecoveryInstanceDisk
  {
  public:
    AWS_DRS_API RecoveryInstanceDisk() = default;
    AWS_DRS_API RecoveryInstanceDisk(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API RecoveryInstanceDisk& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The amount of storage on the disk in bytes.</p>
     */
    inline long long GetBytes() const { return m_bytes; }
    inline bool BytesHasBeenSet() const { return m_bytesHasBeenSet; }
    inline void SetBytes(long long value) { m_bytesHasBeenSet = true; m_bytes = value; }
    inline RecoveryInstanceDisk& WithBytes(long long value) { SetBytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The EBS Volume ID of this disk.</p>
     */
    inline const Aws::String& GetEbsVolumeID() const { return m_ebsVolumeID; }
    inline bool EbsVolumeIDHasBeenSet() const { return m_ebsVolumeIDHasBeenSet; }
    template<typename EbsVolumeIDT = Aws::String>
    void SetEbsVolumeID(EbsVolumeIDT&& value) { m_ebsVolumeIDHasBeenSet = true; m_ebsVolumeID = std::forward<EbsVolumeIDT>(value); }
    template<typename EbsVolumeIDT = Aws::String>
    RecoveryInstanceDisk& WithEbsVolumeID(EbsVolumeIDT&& value) { SetEbsVolumeID(std::forward<EbsVolumeIDT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The internal device name of this disk. This is the name that is visible on
     * the machine itself and not from the EC2 console.</p>
     */
    inline const Aws::String& GetInternalDeviceName() const { return m_internalDeviceName; }
    inline bool InternalDeviceNameHasBeenSet() const { return m_internalDeviceNameHasBeenSet; }
    template<typename InternalDeviceNameT = Aws::String>
    void SetInternalDeviceName(InternalDeviceNameT&& value) { m_internalDeviceNameHasBeenSet = true; m_internalDeviceName = std::forward<InternalDeviceNameT>(value); }
    template<typename InternalDeviceNameT = Aws::String>
    RecoveryInstanceDisk& WithInternalDeviceName(InternalDeviceNameT&& value) { SetInternalDeviceName(std::forward<InternalDeviceNameT>(value)); return *this;}
    ///@}
  private:

    long long m_bytes{0};
    bool m_bytesHasBeenSet = false;

    Aws::String m_ebsVolumeID;
    bool m_ebsVolumeIDHasBeenSet = false;

    Aws::String m_internalDeviceName;
    bool m_internalDeviceNameHasBeenSet = false;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
