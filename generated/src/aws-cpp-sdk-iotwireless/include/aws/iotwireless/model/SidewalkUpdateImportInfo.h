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
   * <p>Sidewalk object information for updating an import task.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/SidewalkUpdateImportInfo">AWS
   * API Reference</a></p>
   */
  class SidewalkUpdateImportInfo
  {
  public:
    AWS_IOTWIRELESS_API SidewalkUpdateImportInfo() = default;
    AWS_IOTWIRELESS_API SidewalkUpdateImportInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API SidewalkUpdateImportInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The CSV file contained in an S3 bucket that's used for appending devices to
     * an existing import task.</p>
     */
    inline const Aws::String& GetDeviceCreationFile() const { return m_deviceCreationFile; }
    inline bool DeviceCreationFileHasBeenSet() const { return m_deviceCreationFileHasBeenSet; }
    template<typename DeviceCreationFileT = Aws::String>
    void SetDeviceCreationFile(DeviceCreationFileT&& value) { m_deviceCreationFileHasBeenSet = true; m_deviceCreationFile = std::forward<DeviceCreationFileT>(value); }
    template<typename DeviceCreationFileT = Aws::String>
    SidewalkUpdateImportInfo& WithDeviceCreationFile(DeviceCreationFileT&& value) { SetDeviceCreationFile(std::forward<DeviceCreationFileT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_deviceCreationFile;
    bool m_deviceCreationFileHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
