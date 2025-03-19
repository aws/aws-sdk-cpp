/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-data/IoTDataPlane_EXPORTS.h>
#include <aws/iot-data/IoTDataPlaneRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace IoTDataPlane
{
namespace Model
{

  /**
   * <p>The input for the GetThingShadow operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-data-2015-05-28/GetThingShadowRequest">AWS
   * API Reference</a></p>
   */
  class GetThingShadowRequest : public IoTDataPlaneRequest
  {
  public:
    AWS_IOTDATAPLANE_API GetThingShadowRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetThingShadow"; }

    AWS_IOTDATAPLANE_API Aws::String SerializePayload() const override;

    AWS_IOTDATAPLANE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The name of the thing.</p>
     */
    inline const Aws::String& GetThingName() const { return m_thingName; }
    inline bool ThingNameHasBeenSet() const { return m_thingNameHasBeenSet; }
    template<typename ThingNameT = Aws::String>
    void SetThingName(ThingNameT&& value) { m_thingNameHasBeenSet = true; m_thingName = std::forward<ThingNameT>(value); }
    template<typename ThingNameT = Aws::String>
    GetThingShadowRequest& WithThingName(ThingNameT&& value) { SetThingName(std::forward<ThingNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the shadow.</p>
     */
    inline const Aws::String& GetShadowName() const { return m_shadowName; }
    inline bool ShadowNameHasBeenSet() const { return m_shadowNameHasBeenSet; }
    template<typename ShadowNameT = Aws::String>
    void SetShadowName(ShadowNameT&& value) { m_shadowNameHasBeenSet = true; m_shadowName = std::forward<ShadowNameT>(value); }
    template<typename ShadowNameT = Aws::String>
    GetThingShadowRequest& WithShadowName(ShadowNameT&& value) { SetShadowName(std::forward<ShadowNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_thingName;
    bool m_thingNameHasBeenSet = false;

    Aws::String m_shadowName;
    bool m_shadowNameHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTDataPlane
} // namespace Aws
