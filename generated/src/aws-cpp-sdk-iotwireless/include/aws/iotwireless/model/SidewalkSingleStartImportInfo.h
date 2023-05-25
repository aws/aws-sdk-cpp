/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
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
namespace IoTWireless
{
namespace Model
{

  /**
   * <p>Information about an import task created for an individual Sidewalk
   * device.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/SidewalkSingleStartImportInfo">AWS
   * API Reference</a></p>
   */
  class SidewalkSingleStartImportInfo
  {
  public:
    AWS_IOTWIRELESS_API SidewalkSingleStartImportInfo();
    AWS_IOTWIRELESS_API SidewalkSingleStartImportInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API SidewalkSingleStartImportInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Sidewalk manufacturing serial number (SMSN) of the device added to the
     * import task.</p>
     */
    inline const Aws::String& GetSidewalkManufacturingSn() const{ return m_sidewalkManufacturingSn; }

    /**
     * <p>The Sidewalk manufacturing serial number (SMSN) of the device added to the
     * import task.</p>
     */
    inline bool SidewalkManufacturingSnHasBeenSet() const { return m_sidewalkManufacturingSnHasBeenSet; }

    /**
     * <p>The Sidewalk manufacturing serial number (SMSN) of the device added to the
     * import task.</p>
     */
    inline void SetSidewalkManufacturingSn(const Aws::String& value) { m_sidewalkManufacturingSnHasBeenSet = true; m_sidewalkManufacturingSn = value; }

    /**
     * <p>The Sidewalk manufacturing serial number (SMSN) of the device added to the
     * import task.</p>
     */
    inline void SetSidewalkManufacturingSn(Aws::String&& value) { m_sidewalkManufacturingSnHasBeenSet = true; m_sidewalkManufacturingSn = std::move(value); }

    /**
     * <p>The Sidewalk manufacturing serial number (SMSN) of the device added to the
     * import task.</p>
     */
    inline void SetSidewalkManufacturingSn(const char* value) { m_sidewalkManufacturingSnHasBeenSet = true; m_sidewalkManufacturingSn.assign(value); }

    /**
     * <p>The Sidewalk manufacturing serial number (SMSN) of the device added to the
     * import task.</p>
     */
    inline SidewalkSingleStartImportInfo& WithSidewalkManufacturingSn(const Aws::String& value) { SetSidewalkManufacturingSn(value); return *this;}

    /**
     * <p>The Sidewalk manufacturing serial number (SMSN) of the device added to the
     * import task.</p>
     */
    inline SidewalkSingleStartImportInfo& WithSidewalkManufacturingSn(Aws::String&& value) { SetSidewalkManufacturingSn(std::move(value)); return *this;}

    /**
     * <p>The Sidewalk manufacturing serial number (SMSN) of the device added to the
     * import task.</p>
     */
    inline SidewalkSingleStartImportInfo& WithSidewalkManufacturingSn(const char* value) { SetSidewalkManufacturingSn(value); return *this;}

  private:

    Aws::String m_sidewalkManufacturingSn;
    bool m_sidewalkManufacturingSnHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
