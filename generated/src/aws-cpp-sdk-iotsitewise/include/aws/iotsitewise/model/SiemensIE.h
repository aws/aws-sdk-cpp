/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
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
namespace IoTSiteWise
{
namespace Model
{

  /**
   * <p>Contains details for a SiteWise Edge gateway that runs on a Siemens
   * Industrial Edge Device.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/SiemensIE">AWS
   * API Reference</a></p>
   */
  class SiemensIE
  {
  public:
    AWS_IOTSITEWISE_API SiemensIE();
    AWS_IOTSITEWISE_API SiemensIE(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API SiemensIE& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the IoT Thing for your SiteWise Edge gateway.</p>
     */
    inline const Aws::String& GetIotCoreThingName() const{ return m_iotCoreThingName; }
    inline bool IotCoreThingNameHasBeenSet() const { return m_iotCoreThingNameHasBeenSet; }
    inline void SetIotCoreThingName(const Aws::String& value) { m_iotCoreThingNameHasBeenSet = true; m_iotCoreThingName = value; }
    inline void SetIotCoreThingName(Aws::String&& value) { m_iotCoreThingNameHasBeenSet = true; m_iotCoreThingName = std::move(value); }
    inline void SetIotCoreThingName(const char* value) { m_iotCoreThingNameHasBeenSet = true; m_iotCoreThingName.assign(value); }
    inline SiemensIE& WithIotCoreThingName(const Aws::String& value) { SetIotCoreThingName(value); return *this;}
    inline SiemensIE& WithIotCoreThingName(Aws::String&& value) { SetIotCoreThingName(std::move(value)); return *this;}
    inline SiemensIE& WithIotCoreThingName(const char* value) { SetIotCoreThingName(value); return *this;}
    ///@}
  private:

    Aws::String m_iotCoreThingName;
    bool m_iotCoreThingNameHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
