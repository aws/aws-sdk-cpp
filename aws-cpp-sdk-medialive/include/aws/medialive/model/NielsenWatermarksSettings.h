/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/NielsenCBET.h>
#include <aws/medialive/model/NielsenWatermarksDistributionTypes.h>
#include <aws/medialive/model/NielsenNaesIiNw.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * Nielsen Watermarks Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/NielsenWatermarksSettings">AWS
   * API Reference</a></p>
   */
  class NielsenWatermarksSettings
  {
  public:
    AWS_MEDIALIVE_API NielsenWatermarksSettings();
    AWS_MEDIALIVE_API NielsenWatermarksSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API NielsenWatermarksSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Complete these fields only if you want to insert watermarks of type Nielsen CBET
     */
    inline const NielsenCBET& GetNielsenCbetSettings() const{ return m_nielsenCbetSettings; }

    /**
     * Complete these fields only if you want to insert watermarks of type Nielsen CBET
     */
    inline bool NielsenCbetSettingsHasBeenSet() const { return m_nielsenCbetSettingsHasBeenSet; }

    /**
     * Complete these fields only if you want to insert watermarks of type Nielsen CBET
     */
    inline void SetNielsenCbetSettings(const NielsenCBET& value) { m_nielsenCbetSettingsHasBeenSet = true; m_nielsenCbetSettings = value; }

    /**
     * Complete these fields only if you want to insert watermarks of type Nielsen CBET
     */
    inline void SetNielsenCbetSettings(NielsenCBET&& value) { m_nielsenCbetSettingsHasBeenSet = true; m_nielsenCbetSettings = std::move(value); }

    /**
     * Complete these fields only if you want to insert watermarks of type Nielsen CBET
     */
    inline NielsenWatermarksSettings& WithNielsenCbetSettings(const NielsenCBET& value) { SetNielsenCbetSettings(value); return *this;}

    /**
     * Complete these fields only if you want to insert watermarks of type Nielsen CBET
     */
    inline NielsenWatermarksSettings& WithNielsenCbetSettings(NielsenCBET&& value) { SetNielsenCbetSettings(std::move(value)); return *this;}


    /**
     * Choose the distribution types that you want to assign to the watermarks:
-
     * PROGRAM_CONTENT
- FINAL_DISTRIBUTOR
     */
    inline const NielsenWatermarksDistributionTypes& GetNielsenDistributionType() const{ return m_nielsenDistributionType; }

    /**
     * Choose the distribution types that you want to assign to the watermarks:
-
     * PROGRAM_CONTENT
- FINAL_DISTRIBUTOR
     */
    inline bool NielsenDistributionTypeHasBeenSet() const { return m_nielsenDistributionTypeHasBeenSet; }

    /**
     * Choose the distribution types that you want to assign to the watermarks:
-
     * PROGRAM_CONTENT
- FINAL_DISTRIBUTOR
     */
    inline void SetNielsenDistributionType(const NielsenWatermarksDistributionTypes& value) { m_nielsenDistributionTypeHasBeenSet = true; m_nielsenDistributionType = value; }

    /**
     * Choose the distribution types that you want to assign to the watermarks:
-
     * PROGRAM_CONTENT
- FINAL_DISTRIBUTOR
     */
    inline void SetNielsenDistributionType(NielsenWatermarksDistributionTypes&& value) { m_nielsenDistributionTypeHasBeenSet = true; m_nielsenDistributionType = std::move(value); }

    /**
     * Choose the distribution types that you want to assign to the watermarks:
-
     * PROGRAM_CONTENT
- FINAL_DISTRIBUTOR
     */
    inline NielsenWatermarksSettings& WithNielsenDistributionType(const NielsenWatermarksDistributionTypes& value) { SetNielsenDistributionType(value); return *this;}

    /**
     * Choose the distribution types that you want to assign to the watermarks:
-
     * PROGRAM_CONTENT
- FINAL_DISTRIBUTOR
     */
    inline NielsenWatermarksSettings& WithNielsenDistributionType(NielsenWatermarksDistributionTypes&& value) { SetNielsenDistributionType(std::move(value)); return *this;}


    /**
     * Complete these fields only if you want to insert watermarks of type Nielsen NAES
     * II (N2) and Nielsen NAES VI (NW).
     */
    inline const NielsenNaesIiNw& GetNielsenNaesIiNwSettings() const{ return m_nielsenNaesIiNwSettings; }

    /**
     * Complete these fields only if you want to insert watermarks of type Nielsen NAES
     * II (N2) and Nielsen NAES VI (NW).
     */
    inline bool NielsenNaesIiNwSettingsHasBeenSet() const { return m_nielsenNaesIiNwSettingsHasBeenSet; }

    /**
     * Complete these fields only if you want to insert watermarks of type Nielsen NAES
     * II (N2) and Nielsen NAES VI (NW).
     */
    inline void SetNielsenNaesIiNwSettings(const NielsenNaesIiNw& value) { m_nielsenNaesIiNwSettingsHasBeenSet = true; m_nielsenNaesIiNwSettings = value; }

    /**
     * Complete these fields only if you want to insert watermarks of type Nielsen NAES
     * II (N2) and Nielsen NAES VI (NW).
     */
    inline void SetNielsenNaesIiNwSettings(NielsenNaesIiNw&& value) { m_nielsenNaesIiNwSettingsHasBeenSet = true; m_nielsenNaesIiNwSettings = std::move(value); }

    /**
     * Complete these fields only if you want to insert watermarks of type Nielsen NAES
     * II (N2) and Nielsen NAES VI (NW).
     */
    inline NielsenWatermarksSettings& WithNielsenNaesIiNwSettings(const NielsenNaesIiNw& value) { SetNielsenNaesIiNwSettings(value); return *this;}

    /**
     * Complete these fields only if you want to insert watermarks of type Nielsen NAES
     * II (N2) and Nielsen NAES VI (NW).
     */
    inline NielsenWatermarksSettings& WithNielsenNaesIiNwSettings(NielsenNaesIiNw&& value) { SetNielsenNaesIiNwSettings(std::move(value)); return *this;}

  private:

    NielsenCBET m_nielsenCbetSettings;
    bool m_nielsenCbetSettingsHasBeenSet = false;

    NielsenWatermarksDistributionTypes m_nielsenDistributionType;
    bool m_nielsenDistributionTypeHasBeenSet = false;

    NielsenNaesIiNw m_nielsenNaesIiNwSettings;
    bool m_nielsenNaesIiNwSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
