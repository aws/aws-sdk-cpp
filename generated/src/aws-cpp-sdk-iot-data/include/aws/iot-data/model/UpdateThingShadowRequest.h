/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-data/IoTDataPlane_EXPORTS.h>
#include <aws/iot-data/IoTDataPlaneRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Array.h>
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
   * <p>The input for the UpdateThingShadow operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-data-2015-05-28/UpdateThingShadowRequest">AWS
   * API Reference</a></p>
   */
  class UpdateThingShadowRequest : public StreamingIoTDataPlaneRequest
  {
  public:
    AWS_IOTDATAPLANE_API UpdateThingShadowRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateThingShadow"; }

    AWS_IOTDATAPLANE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The name of the thing.</p>
     */
    inline const Aws::String& GetThingName() const{ return m_thingName; }

    /**
     * <p>The name of the thing.</p>
     */
    inline bool ThingNameHasBeenSet() const { return m_thingNameHasBeenSet; }

    /**
     * <p>The name of the thing.</p>
     */
    inline void SetThingName(const Aws::String& value) { m_thingNameHasBeenSet = true; m_thingName = value; }

    /**
     * <p>The name of the thing.</p>
     */
    inline void SetThingName(Aws::String&& value) { m_thingNameHasBeenSet = true; m_thingName = std::move(value); }

    /**
     * <p>The name of the thing.</p>
     */
    inline void SetThingName(const char* value) { m_thingNameHasBeenSet = true; m_thingName.assign(value); }

    /**
     * <p>The name of the thing.</p>
     */
    inline UpdateThingShadowRequest& WithThingName(const Aws::String& value) { SetThingName(value); return *this;}

    /**
     * <p>The name of the thing.</p>
     */
    inline UpdateThingShadowRequest& WithThingName(Aws::String&& value) { SetThingName(std::move(value)); return *this;}

    /**
     * <p>The name of the thing.</p>
     */
    inline UpdateThingShadowRequest& WithThingName(const char* value) { SetThingName(value); return *this;}


    /**
     * <p>The name of the shadow.</p>
     */
    inline const Aws::String& GetShadowName() const{ return m_shadowName; }

    /**
     * <p>The name of the shadow.</p>
     */
    inline bool ShadowNameHasBeenSet() const { return m_shadowNameHasBeenSet; }

    /**
     * <p>The name of the shadow.</p>
     */
    inline void SetShadowName(const Aws::String& value) { m_shadowNameHasBeenSet = true; m_shadowName = value; }

    /**
     * <p>The name of the shadow.</p>
     */
    inline void SetShadowName(Aws::String&& value) { m_shadowNameHasBeenSet = true; m_shadowName = std::move(value); }

    /**
     * <p>The name of the shadow.</p>
     */
    inline void SetShadowName(const char* value) { m_shadowNameHasBeenSet = true; m_shadowName.assign(value); }

    /**
     * <p>The name of the shadow.</p>
     */
    inline UpdateThingShadowRequest& WithShadowName(const Aws::String& value) { SetShadowName(value); return *this;}

    /**
     * <p>The name of the shadow.</p>
     */
    inline UpdateThingShadowRequest& WithShadowName(Aws::String&& value) { SetShadowName(std::move(value)); return *this;}

    /**
     * <p>The name of the shadow.</p>
     */
    inline UpdateThingShadowRequest& WithShadowName(const char* value) { SetShadowName(value); return *this;}

  private:

    Aws::String m_thingName;
    bool m_thingNameHasBeenSet = false;

    Aws::String m_shadowName;
    bool m_shadowNameHasBeenSet = false;

  };

} // namespace Model
} // namespace IoTDataPlane
} // namespace Aws
