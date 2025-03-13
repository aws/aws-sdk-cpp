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
    AWS_IOTSITEWISE_API SiemensIE() = default;
    AWS_IOTSITEWISE_API SiemensIE(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API SiemensIE& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the IoT Thing for your SiteWise Edge gateway.</p>
     */
    inline const Aws::String& GetIotCoreThingName() const { return m_iotCoreThingName; }
    inline bool IotCoreThingNameHasBeenSet() const { return m_iotCoreThingNameHasBeenSet; }
    template<typename IotCoreThingNameT = Aws::String>
    void SetIotCoreThingName(IotCoreThingNameT&& value) { m_iotCoreThingNameHasBeenSet = true; m_iotCoreThingName = std::forward<IotCoreThingNameT>(value); }
    template<typename IotCoreThingNameT = Aws::String>
    SiemensIE& WithIotCoreThingName(IotCoreThingNameT&& value) { SetIotCoreThingName(std::forward<IotCoreThingNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_iotCoreThingName;
    bool m_iotCoreThingNameHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
