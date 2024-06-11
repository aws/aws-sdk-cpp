﻿/**
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
    AWS_DRS_API ConversionProperties();
    AWS_DRS_API ConversionProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API ConversionProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DRS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The timestamp of when the snapshot being converted was taken</p>
     */
    inline const Aws::String& GetDataTimestamp() const{ return m_dataTimestamp; }
    inline bool DataTimestampHasBeenSet() const { return m_dataTimestampHasBeenSet; }
    inline void SetDataTimestamp(const Aws::String& value) { m_dataTimestampHasBeenSet = true; m_dataTimestamp = value; }
    inline void SetDataTimestamp(Aws::String&& value) { m_dataTimestampHasBeenSet = true; m_dataTimestamp = std::move(value); }
    inline void SetDataTimestamp(const char* value) { m_dataTimestampHasBeenSet = true; m_dataTimestamp.assign(value); }
    inline ConversionProperties& WithDataTimestamp(const Aws::String& value) { SetDataTimestamp(value); return *this;}
    inline ConversionProperties& WithDataTimestamp(Aws::String&& value) { SetDataTimestamp(std::move(value)); return *this;}
    inline ConversionProperties& WithDataTimestamp(const char* value) { SetDataTimestamp(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the volume being converted uses UEFI or not</p>
     */
    inline bool GetForceUefi() const{ return m_forceUefi; }
    inline bool ForceUefiHasBeenSet() const { return m_forceUefiHasBeenSet; }
    inline void SetForceUefi(bool value) { m_forceUefiHasBeenSet = true; m_forceUefi = value; }
    inline ConversionProperties& WithForceUefi(bool value) { SetForceUefi(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The root volume name of a conversion job</p>
     */
    inline const Aws::String& GetRootVolumeName() const{ return m_rootVolumeName; }
    inline bool RootVolumeNameHasBeenSet() const { return m_rootVolumeNameHasBeenSet; }
    inline void SetRootVolumeName(const Aws::String& value) { m_rootVolumeNameHasBeenSet = true; m_rootVolumeName = value; }
    inline void SetRootVolumeName(Aws::String&& value) { m_rootVolumeNameHasBeenSet = true; m_rootVolumeName = std::move(value); }
    inline void SetRootVolumeName(const char* value) { m_rootVolumeNameHasBeenSet = true; m_rootVolumeName.assign(value); }
    inline ConversionProperties& WithRootVolumeName(const Aws::String& value) { SetRootVolumeName(value); return *this;}
    inline ConversionProperties& WithRootVolumeName(Aws::String&& value) { SetRootVolumeName(std::move(value)); return *this;}
    inline ConversionProperties& WithRootVolumeName(const char* value) { SetRootVolumeName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A mapping between the volumes being converted and the converted snapshot
     * ids</p>
     */
    inline const Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>& GetVolumeToConversionMap() const{ return m_volumeToConversionMap; }
    inline bool VolumeToConversionMapHasBeenSet() const { return m_volumeToConversionMapHasBeenSet; }
    inline void SetVolumeToConversionMap(const Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>& value) { m_volumeToConversionMapHasBeenSet = true; m_volumeToConversionMap = value; }
    inline void SetVolumeToConversionMap(Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>&& value) { m_volumeToConversionMapHasBeenSet = true; m_volumeToConversionMap = std::move(value); }
    inline ConversionProperties& WithVolumeToConversionMap(const Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>& value) { SetVolumeToConversionMap(value); return *this;}
    inline ConversionProperties& WithVolumeToConversionMap(Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>&& value) { SetVolumeToConversionMap(std::move(value)); return *this;}
    inline ConversionProperties& AddVolumeToConversionMap(const Aws::String& key, const Aws::Map<Aws::String, Aws::String>& value) { m_volumeToConversionMapHasBeenSet = true; m_volumeToConversionMap.emplace(key, value); return *this; }
    inline ConversionProperties& AddVolumeToConversionMap(Aws::String&& key, const Aws::Map<Aws::String, Aws::String>& value) { m_volumeToConversionMapHasBeenSet = true; m_volumeToConversionMap.emplace(std::move(key), value); return *this; }
    inline ConversionProperties& AddVolumeToConversionMap(const Aws::String& key, Aws::Map<Aws::String, Aws::String>&& value) { m_volumeToConversionMapHasBeenSet = true; m_volumeToConversionMap.emplace(key, std::move(value)); return *this; }
    inline ConversionProperties& AddVolumeToConversionMap(Aws::String&& key, Aws::Map<Aws::String, Aws::String>&& value) { m_volumeToConversionMapHasBeenSet = true; m_volumeToConversionMap.emplace(std::move(key), std::move(value)); return *this; }
    inline ConversionProperties& AddVolumeToConversionMap(const char* key, Aws::Map<Aws::String, Aws::String>&& value) { m_volumeToConversionMapHasBeenSet = true; m_volumeToConversionMap.emplace(key, std::move(value)); return *this; }
    inline ConversionProperties& AddVolumeToConversionMap(const char* key, const Aws::Map<Aws::String, Aws::String>& value) { m_volumeToConversionMapHasBeenSet = true; m_volumeToConversionMap.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A mapping between the volumes being converted and the product codes
     * associated with them</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<ProductCode>>& GetVolumeToProductCodes() const{ return m_volumeToProductCodes; }
    inline bool VolumeToProductCodesHasBeenSet() const { return m_volumeToProductCodesHasBeenSet; }
    inline void SetVolumeToProductCodes(const Aws::Map<Aws::String, Aws::Vector<ProductCode>>& value) { m_volumeToProductCodesHasBeenSet = true; m_volumeToProductCodes = value; }
    inline void SetVolumeToProductCodes(Aws::Map<Aws::String, Aws::Vector<ProductCode>>&& value) { m_volumeToProductCodesHasBeenSet = true; m_volumeToProductCodes = std::move(value); }
    inline ConversionProperties& WithVolumeToProductCodes(const Aws::Map<Aws::String, Aws::Vector<ProductCode>>& value) { SetVolumeToProductCodes(value); return *this;}
    inline ConversionProperties& WithVolumeToProductCodes(Aws::Map<Aws::String, Aws::Vector<ProductCode>>&& value) { SetVolumeToProductCodes(std::move(value)); return *this;}
    inline ConversionProperties& AddVolumeToProductCodes(const Aws::String& key, const Aws::Vector<ProductCode>& value) { m_volumeToProductCodesHasBeenSet = true; m_volumeToProductCodes.emplace(key, value); return *this; }
    inline ConversionProperties& AddVolumeToProductCodes(Aws::String&& key, const Aws::Vector<ProductCode>& value) { m_volumeToProductCodesHasBeenSet = true; m_volumeToProductCodes.emplace(std::move(key), value); return *this; }
    inline ConversionProperties& AddVolumeToProductCodes(const Aws::String& key, Aws::Vector<ProductCode>&& value) { m_volumeToProductCodesHasBeenSet = true; m_volumeToProductCodes.emplace(key, std::move(value)); return *this; }
    inline ConversionProperties& AddVolumeToProductCodes(Aws::String&& key, Aws::Vector<ProductCode>&& value) { m_volumeToProductCodesHasBeenSet = true; m_volumeToProductCodes.emplace(std::move(key), std::move(value)); return *this; }
    inline ConversionProperties& AddVolumeToProductCodes(const char* key, Aws::Vector<ProductCode>&& value) { m_volumeToProductCodesHasBeenSet = true; m_volumeToProductCodes.emplace(key, std::move(value)); return *this; }
    inline ConversionProperties& AddVolumeToProductCodes(const char* key, const Aws::Vector<ProductCode>& value) { m_volumeToProductCodesHasBeenSet = true; m_volumeToProductCodes.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A mapping between the volumes and their sizes</p>
     */
    inline const Aws::Map<Aws::String, long long>& GetVolumeToVolumeSize() const{ return m_volumeToVolumeSize; }
    inline bool VolumeToVolumeSizeHasBeenSet() const { return m_volumeToVolumeSizeHasBeenSet; }
    inline void SetVolumeToVolumeSize(const Aws::Map<Aws::String, long long>& value) { m_volumeToVolumeSizeHasBeenSet = true; m_volumeToVolumeSize = value; }
    inline void SetVolumeToVolumeSize(Aws::Map<Aws::String, long long>&& value) { m_volumeToVolumeSizeHasBeenSet = true; m_volumeToVolumeSize = std::move(value); }
    inline ConversionProperties& WithVolumeToVolumeSize(const Aws::Map<Aws::String, long long>& value) { SetVolumeToVolumeSize(value); return *this;}
    inline ConversionProperties& WithVolumeToVolumeSize(Aws::Map<Aws::String, long long>&& value) { SetVolumeToVolumeSize(std::move(value)); return *this;}
    inline ConversionProperties& AddVolumeToVolumeSize(const Aws::String& key, long long value) { m_volumeToVolumeSizeHasBeenSet = true; m_volumeToVolumeSize.emplace(key, value); return *this; }
    inline ConversionProperties& AddVolumeToVolumeSize(Aws::String&& key, long long value) { m_volumeToVolumeSizeHasBeenSet = true; m_volumeToVolumeSize.emplace(std::move(key), value); return *this; }
    inline ConversionProperties& AddVolumeToVolumeSize(const char* key, long long value) { m_volumeToVolumeSizeHasBeenSet = true; m_volumeToVolumeSize.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_dataTimestamp;
    bool m_dataTimestampHasBeenSet = false;

    bool m_forceUefi;
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
