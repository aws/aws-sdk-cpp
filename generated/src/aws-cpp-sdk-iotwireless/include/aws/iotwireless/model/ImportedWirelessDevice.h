/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/iotwireless/model/ImportedSidewalkDevice.h>
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
namespace IoTWireless
{
namespace Model
{

  /**
   * <p>Information about a wireless device that has been added to an import
   * task.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/ImportedWirelessDevice">AWS
   * API Reference</a></p>
   */
  class ImportedWirelessDevice
  {
  public:
    AWS_IOTWIRELESS_API ImportedWirelessDevice();
    AWS_IOTWIRELESS_API ImportedWirelessDevice(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API ImportedWirelessDevice& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Sidewalk-related information about a device that has been added to an
     * import task.</p>
     */
    inline const ImportedSidewalkDevice& GetSidewalk() const{ return m_sidewalk; }

    /**
     * <p>The Sidewalk-related information about a device that has been added to an
     * import task.</p>
     */
    inline bool SidewalkHasBeenSet() const { return m_sidewalkHasBeenSet; }

    /**
     * <p>The Sidewalk-related information about a device that has been added to an
     * import task.</p>
     */
    inline void SetSidewalk(const ImportedSidewalkDevice& value) { m_sidewalkHasBeenSet = true; m_sidewalk = value; }

    /**
     * <p>The Sidewalk-related information about a device that has been added to an
     * import task.</p>
     */
    inline void SetSidewalk(ImportedSidewalkDevice&& value) { m_sidewalkHasBeenSet = true; m_sidewalk = std::move(value); }

    /**
     * <p>The Sidewalk-related information about a device that has been added to an
     * import task.</p>
     */
    inline ImportedWirelessDevice& WithSidewalk(const ImportedSidewalkDevice& value) { SetSidewalk(value); return *this;}

    /**
     * <p>The Sidewalk-related information about a device that has been added to an
     * import task.</p>
     */
    inline ImportedWirelessDevice& WithSidewalk(ImportedSidewalkDevice&& value) { SetSidewalk(std::move(value)); return *this;}

  private:

    ImportedSidewalkDevice m_sidewalk;
    bool m_sidewalkHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
