/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/Drs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
   * <p>Properties of a conversion job</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/ConversionProperties">AWS
   * API Reference</a></p>
   */
  class ConversionProperties
  {
  public:
    AWS_DRS_API ConversionProperties();
    AWS_DRS_API ConversionProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API ConversionProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The timestamp of when the snapshot being converted was taken</p>
     */
    inline const Aws::String& GetDataTimestamp() const{ return m_dataTimestamp; }

    /**
     * <p>The timestamp of when the snapshot being converted was taken</p>
     */
    inline bool DataTimestampHasBeenSet() const { return m_dataTimestampHasBeenSet; }

    /**
     * <p>The timestamp of when the snapshot being converted was taken</p>
     */
    inline void SetDataTimestamp(const Aws::String& value) { m_dataTimestampHasBeenSet = true; m_dataTimestamp = value; }

    /**
     * <p>The timestamp of when the snapshot being converted was taken</p>
     */
    inline void SetDataTimestamp(Aws::String&& value) { m_dataTimestampHasBeenSet = true; m_dataTimestamp = std::move(value); }

    /**
     * <p>The timestamp of when the snapshot being converted was taken</p>
     */
    inline void SetDataTimestamp(const char* value) { m_dataTimestampHasBeenSet = true; m_dataTimestamp.assign(value); }

    /**
     * <p>The timestamp of when the snapshot being converted was taken</p>
     */
    inline ConversionProperties& WithDataTimestamp(const Aws::String& value) { SetDataTimestamp(value); return *this;}

    /**
     * <p>The timestamp of when the snapshot being converted was taken</p>
     */
    inline ConversionProperties& WithDataTimestamp(Aws::String&& value) { SetDataTimestamp(std::move(value)); return *this;}

    /**
     * <p>The timestamp of when the snapshot being converted was taken</p>
     */
    inline ConversionProperties& WithDataTimestamp(const char* value) { SetDataTimestamp(value); return *this;}


    /**
     * <p>Whether the volume being converted uses UEFI or not</p>
     */
    inline bool GetForceUefi() const{ return m_forceUefi; }

    /**
     * <p>Whether the volume being converted uses UEFI or not</p>
     */
    inline bool ForceUefiHasBeenSet() const { return m_forceUefiHasBeenSet; }

    /**
     * <p>Whether the volume being converted uses UEFI or not</p>
     */
    inline void SetForceUefi(bool value) { m_forceUefiHasBeenSet = true; m_forceUefi = value; }

    /**
     * <p>Whether the volume being converted uses UEFI or not</p>
     */
    inline ConversionProperties& WithForceUefi(bool value) { SetForceUefi(value); return *this;}


    /**
     * <p>The root volume name of a conversion job</p>
     */
    inline const Aws::String& GetRootVolumeName() const{ return m_rootVolumeName; }

    /**
     * <p>The root volume name of a conversion job</p>
     */
    inline bool RootVolumeNameHasBeenSet() const { return m_rootVolumeNameHasBeenSet; }

    /**
     * <p>The root volume name of a conversion job</p>
     */
    inline void SetRootVolumeName(const Aws::String& value) { m_rootVolumeNameHasBeenSet = true; m_rootVolumeName = value; }

    /**
     * <p>The root volume name of a conversion job</p>
     */
    inline void SetRootVolumeName(Aws::String&& value) { m_rootVolumeNameHasBeenSet = true; m_rootVolumeName = std::move(value); }

    /**
     * <p>The root volume name of a conversion job</p>
     */
    inline void SetRootVolumeName(const char* value) { m_rootVolumeNameHasBeenSet = true; m_rootVolumeName.assign(value); }

    /**
     * <p>The root volume name of a conversion job</p>
     */
    inline ConversionProperties& WithRootVolumeName(const Aws::String& value) { SetRootVolumeName(value); return *this;}

    /**
     * <p>The root volume name of a conversion job</p>
     */
    inline ConversionProperties& WithRootVolumeName(Aws::String&& value) { SetRootVolumeName(std::move(value)); return *this;}

    /**
     * <p>The root volume name of a conversion job</p>
     */
    inline ConversionProperties& WithRootVolumeName(const char* value) { SetRootVolumeName(value); return *this;}


    /**
     * <p>A mapping between the volumes being converted and the converted snapshot
     * ids</p>
     */
    inline const Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>& GetVolumeToConversionMap() const{ return m_volumeToConversionMap; }

    /**
     * <p>A mapping between the volumes being converted and the converted snapshot
     * ids</p>
     */
    inline bool VolumeToConversionMapHasBeenSet() const { return m_volumeToConversionMapHasBeenSet; }

    /**
     * <p>A mapping between the volumes being converted and the converted snapshot
     * ids</p>
     */
    inline void SetVolumeToConversionMap(const Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>& value) { m_volumeToConversionMapHasBeenSet = true; m_volumeToConversionMap = value; }

    /**
     * <p>A mapping between the volumes being converted and the converted snapshot
     * ids</p>
     */
    inline void SetVolumeToConversionMap(Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>&& value) { m_volumeToConversionMapHasBeenSet = true; m_volumeToConversionMap = std::move(value); }

    /**
     * <p>A mapping between the volumes being converted and the converted snapshot
     * ids</p>
     */
    inline ConversionProperties& WithVolumeToConversionMap(const Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>& value) { SetVolumeToConversionMap(value); return *this;}

    /**
     * <p>A mapping between the volumes being converted and the converted snapshot
     * ids</p>
     */
    inline ConversionProperties& WithVolumeToConversionMap(Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>&& value) { SetVolumeToConversionMap(std::move(value)); return *this;}

    /**
     * <p>A mapping between the volumes being converted and the converted snapshot
     * ids</p>
     */
    inline ConversionProperties& AddVolumeToConversionMap(const Aws::String& key, const Aws::Map<Aws::String, Aws::String>& value) { m_volumeToConversionMapHasBeenSet = true; m_volumeToConversionMap.emplace(key, value); return *this; }

    /**
     * <p>A mapping between the volumes being converted and the converted snapshot
     * ids</p>
     */
    inline ConversionProperties& AddVolumeToConversionMap(Aws::String&& key, const Aws::Map<Aws::String, Aws::String>& value) { m_volumeToConversionMapHasBeenSet = true; m_volumeToConversionMap.emplace(std::move(key), value); return *this; }

    /**
     * <p>A mapping between the volumes being converted and the converted snapshot
     * ids</p>
     */
    inline ConversionProperties& AddVolumeToConversionMap(const Aws::String& key, Aws::Map<Aws::String, Aws::String>&& value) { m_volumeToConversionMapHasBeenSet = true; m_volumeToConversionMap.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A mapping between the volumes being converted and the converted snapshot
     * ids</p>
     */
    inline ConversionProperties& AddVolumeToConversionMap(Aws::String&& key, Aws::Map<Aws::String, Aws::String>&& value) { m_volumeToConversionMapHasBeenSet = true; m_volumeToConversionMap.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A mapping between the volumes being converted and the converted snapshot
     * ids</p>
     */
    inline ConversionProperties& AddVolumeToConversionMap(const char* key, Aws::Map<Aws::String, Aws::String>&& value) { m_volumeToConversionMapHasBeenSet = true; m_volumeToConversionMap.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A mapping between the volumes being converted and the converted snapshot
     * ids</p>
     */
    inline ConversionProperties& AddVolumeToConversionMap(const char* key, const Aws::Map<Aws::String, Aws::String>& value) { m_volumeToConversionMapHasBeenSet = true; m_volumeToConversionMap.emplace(key, value); return *this; }


    /**
     * <p>A mapping between the volumes and their sizes</p>
     */
    inline const Aws::Map<Aws::String, long long>& GetVolumeToVolumeSize() const{ return m_volumeToVolumeSize; }

    /**
     * <p>A mapping between the volumes and their sizes</p>
     */
    inline bool VolumeToVolumeSizeHasBeenSet() const { return m_volumeToVolumeSizeHasBeenSet; }

    /**
     * <p>A mapping between the volumes and their sizes</p>
     */
    inline void SetVolumeToVolumeSize(const Aws::Map<Aws::String, long long>& value) { m_volumeToVolumeSizeHasBeenSet = true; m_volumeToVolumeSize = value; }

    /**
     * <p>A mapping between the volumes and their sizes</p>
     */
    inline void SetVolumeToVolumeSize(Aws::Map<Aws::String, long long>&& value) { m_volumeToVolumeSizeHasBeenSet = true; m_volumeToVolumeSize = std::move(value); }

    /**
     * <p>A mapping between the volumes and their sizes</p>
     */
    inline ConversionProperties& WithVolumeToVolumeSize(const Aws::Map<Aws::String, long long>& value) { SetVolumeToVolumeSize(value); return *this;}

    /**
     * <p>A mapping between the volumes and their sizes</p>
     */
    inline ConversionProperties& WithVolumeToVolumeSize(Aws::Map<Aws::String, long long>&& value) { SetVolumeToVolumeSize(std::move(value)); return *this;}

    /**
     * <p>A mapping between the volumes and their sizes</p>
     */
    inline ConversionProperties& AddVolumeToVolumeSize(const Aws::String& key, long long value) { m_volumeToVolumeSizeHasBeenSet = true; m_volumeToVolumeSize.emplace(key, value); return *this; }

    /**
     * <p>A mapping between the volumes and their sizes</p>
     */
    inline ConversionProperties& AddVolumeToVolumeSize(Aws::String&& key, long long value) { m_volumeToVolumeSizeHasBeenSet = true; m_volumeToVolumeSize.emplace(std::move(key), value); return *this; }

    /**
     * <p>A mapping between the volumes and their sizes</p>
     */
    inline ConversionProperties& AddVolumeToVolumeSize(const char* key, long long value) { m_volumeToVolumeSizeHasBeenSet = true; m_volumeToVolumeSize.emplace(key, value); return *this; }

  private:

    Aws::String m_dataTimestamp;
    bool m_dataTimestampHasBeenSet = false;

    bool m_forceUefi;
    bool m_forceUefiHasBeenSet = false;

    Aws::String m_rootVolumeName;
    bool m_rootVolumeNameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>> m_volumeToConversionMap;
    bool m_volumeToConversionMapHasBeenSet = false;

    Aws::Map<Aws::String, long long> m_volumeToVolumeSize;
    bool m_volumeToVolumeSizeHasBeenSet = false;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
