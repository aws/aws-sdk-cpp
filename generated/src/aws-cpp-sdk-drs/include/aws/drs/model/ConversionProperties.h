/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/Drs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/drs/model/ProductCode.h>
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
    AWS_DRS_API ConversionProperties() = default;
    AWS_DRS_API ConversionProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API ConversionProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The timestamp of when the snapshot being converted was taken</p>
     */
    inline const Aws::String& GetDataTimestamp() const { return m_dataTimestamp; }
    inline bool DataTimestampHasBeenSet() const { return m_dataTimestampHasBeenSet; }
    template<typename DataTimestampT = Aws::String>
    void SetDataTimestamp(DataTimestampT&& value) { m_dataTimestampHasBeenSet = true; m_dataTimestamp = std::forward<DataTimestampT>(value); }
    template<typename DataTimestampT = Aws::String>
    ConversionProperties& WithDataTimestamp(DataTimestampT&& value) { SetDataTimestamp(std::forward<DataTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the volume being converted uses UEFI or not</p>
     */
    inline bool GetForceUefi() const { return m_forceUefi; }
    inline bool ForceUefiHasBeenSet() const { return m_forceUefiHasBeenSet; }
    inline void SetForceUefi(bool value) { m_forceUefiHasBeenSet = true; m_forceUefi = value; }
    inline ConversionProperties& WithForceUefi(bool value) { SetForceUefi(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The root volume name of a conversion job</p>
     */
    inline const Aws::String& GetRootVolumeName() const { return m_rootVolumeName; }
    inline bool RootVolumeNameHasBeenSet() const { return m_rootVolumeNameHasBeenSet; }
    template<typename RootVolumeNameT = Aws::String>
    void SetRootVolumeName(RootVolumeNameT&& value) { m_rootVolumeNameHasBeenSet = true; m_rootVolumeName = std::forward<RootVolumeNameT>(value); }
    template<typename RootVolumeNameT = Aws::String>
    ConversionProperties& WithRootVolumeName(RootVolumeNameT&& value) { SetRootVolumeName(std::forward<RootVolumeNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A mapping between the volumes being converted and the converted snapshot
     * ids</p>
     */
    inline const Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>& GetVolumeToConversionMap() const { return m_volumeToConversionMap; }
    inline bool VolumeToConversionMapHasBeenSet() const { return m_volumeToConversionMapHasBeenSet; }
    template<typename VolumeToConversionMapT = Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>>
    void SetVolumeToConversionMap(VolumeToConversionMapT&& value) { m_volumeToConversionMapHasBeenSet = true; m_volumeToConversionMap = std::forward<VolumeToConversionMapT>(value); }
    template<typename VolumeToConversionMapT = Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>>
    ConversionProperties& WithVolumeToConversionMap(VolumeToConversionMapT&& value) { SetVolumeToConversionMap(std::forward<VolumeToConversionMapT>(value)); return *this;}
    template<typename VolumeToConversionMapKeyT = Aws::String, typename VolumeToConversionMapValueT = Aws::Map<Aws::String, Aws::String>>
    ConversionProperties& AddVolumeToConversionMap(VolumeToConversionMapKeyT&& key, VolumeToConversionMapValueT&& value) {
      m_volumeToConversionMapHasBeenSet = true; m_volumeToConversionMap.emplace(std::forward<VolumeToConversionMapKeyT>(key), std::forward<VolumeToConversionMapValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>A mapping between the volumes being converted and the product codes
     * associated with them</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<ProductCode>>& GetVolumeToProductCodes() const { return m_volumeToProductCodes; }
    inline bool VolumeToProductCodesHasBeenSet() const { return m_volumeToProductCodesHasBeenSet; }
    template<typename VolumeToProductCodesT = Aws::Map<Aws::String, Aws::Vector<ProductCode>>>
    void SetVolumeToProductCodes(VolumeToProductCodesT&& value) { m_volumeToProductCodesHasBeenSet = true; m_volumeToProductCodes = std::forward<VolumeToProductCodesT>(value); }
    template<typename VolumeToProductCodesT = Aws::Map<Aws::String, Aws::Vector<ProductCode>>>
    ConversionProperties& WithVolumeToProductCodes(VolumeToProductCodesT&& value) { SetVolumeToProductCodes(std::forward<VolumeToProductCodesT>(value)); return *this;}
    template<typename VolumeToProductCodesKeyT = Aws::String, typename VolumeToProductCodesValueT = Aws::Vector<ProductCode>>
    ConversionProperties& AddVolumeToProductCodes(VolumeToProductCodesKeyT&& key, VolumeToProductCodesValueT&& value) {
      m_volumeToProductCodesHasBeenSet = true; m_volumeToProductCodes.emplace(std::forward<VolumeToProductCodesKeyT>(key), std::forward<VolumeToProductCodesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>A mapping between the volumes and their sizes</p>
     */
    inline const Aws::Map<Aws::String, long long>& GetVolumeToVolumeSize() const { return m_volumeToVolumeSize; }
    inline bool VolumeToVolumeSizeHasBeenSet() const { return m_volumeToVolumeSizeHasBeenSet; }
    template<typename VolumeToVolumeSizeT = Aws::Map<Aws::String, long long>>
    void SetVolumeToVolumeSize(VolumeToVolumeSizeT&& value) { m_volumeToVolumeSizeHasBeenSet = true; m_volumeToVolumeSize = std::forward<VolumeToVolumeSizeT>(value); }
    template<typename VolumeToVolumeSizeT = Aws::Map<Aws::String, long long>>
    ConversionProperties& WithVolumeToVolumeSize(VolumeToVolumeSizeT&& value) { SetVolumeToVolumeSize(std::forward<VolumeToVolumeSizeT>(value)); return *this;}
    inline ConversionProperties& AddVolumeToVolumeSize(Aws::String key, long long value) {
      m_volumeToVolumeSizeHasBeenSet = true; m_volumeToVolumeSize.emplace(key, value); return *this;
    }
    ///@}
  private:

    Aws::String m_dataTimestamp;
    bool m_dataTimestampHasBeenSet = false;

    bool m_forceUefi{false};
    bool m_forceUefiHasBeenSet = false;

    Aws::String m_rootVolumeName;
    bool m_rootVolumeNameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>> m_volumeToConversionMap;
    bool m_volumeToConversionMapHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Vector<ProductCode>> m_volumeToProductCodes;
    bool m_volumeToProductCodesHasBeenSet = false;

    Aws::Map<Aws::String, long long> m_volumeToVolumeSize;
    bool m_volumeToVolumeSizeHasBeenSet = false;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
