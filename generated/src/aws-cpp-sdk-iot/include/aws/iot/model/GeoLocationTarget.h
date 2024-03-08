/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/TargetFieldOrder.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>A geolocation target that you select to index. Each geolocation target
   * contains a <code>name</code> and <code>order</code> key-value pair that
   * specifies the geolocation target fields.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/GeoLocationTarget">AWS
   * API Reference</a></p>
   */
  class GeoLocationTarget
  {
  public:
    AWS_IOT_API GeoLocationTarget();
    AWS_IOT_API GeoLocationTarget(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API GeoLocationTarget& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The <code>name</code> of the geolocation target field. If the target field is
     * part of a named shadow, you must select the named shadow using the
     * <code>namedShadow</code> filter.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The <code>name</code> of the geolocation target field. If the target field is
     * part of a named shadow, you must select the named shadow using the
     * <code>namedShadow</code> filter.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The <code>name</code> of the geolocation target field. If the target field is
     * part of a named shadow, you must select the named shadow using the
     * <code>namedShadow</code> filter.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The <code>name</code> of the geolocation target field. If the target field is
     * part of a named shadow, you must select the named shadow using the
     * <code>namedShadow</code> filter.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The <code>name</code> of the geolocation target field. If the target field is
     * part of a named shadow, you must select the named shadow using the
     * <code>namedShadow</code> filter.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The <code>name</code> of the geolocation target field. If the target field is
     * part of a named shadow, you must select the named shadow using the
     * <code>namedShadow</code> filter.</p>
     */
    inline GeoLocationTarget& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The <code>name</code> of the geolocation target field. If the target field is
     * part of a named shadow, you must select the named shadow using the
     * <code>namedShadow</code> filter.</p>
     */
    inline GeoLocationTarget& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The <code>name</code> of the geolocation target field. If the target field is
     * part of a named shadow, you must select the named shadow using the
     * <code>namedShadow</code> filter.</p>
     */
    inline GeoLocationTarget& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The <code>order</code> of the geolocation target field. This field is
     * optional. The default value is <code>LatLon</code>.</p>
     */
    inline const TargetFieldOrder& GetOrder() const{ return m_order; }

    /**
     * <p>The <code>order</code> of the geolocation target field. This field is
     * optional. The default value is <code>LatLon</code>.</p>
     */
    inline bool OrderHasBeenSet() const { return m_orderHasBeenSet; }

    /**
     * <p>The <code>order</code> of the geolocation target field. This field is
     * optional. The default value is <code>LatLon</code>.</p>
     */
    inline void SetOrder(const TargetFieldOrder& value) { m_orderHasBeenSet = true; m_order = value; }

    /**
     * <p>The <code>order</code> of the geolocation target field. This field is
     * optional. The default value is <code>LatLon</code>.</p>
     */
    inline void SetOrder(TargetFieldOrder&& value) { m_orderHasBeenSet = true; m_order = std::move(value); }

    /**
     * <p>The <code>order</code> of the geolocation target field. This field is
     * optional. The default value is <code>LatLon</code>.</p>
     */
    inline GeoLocationTarget& WithOrder(const TargetFieldOrder& value) { SetOrder(value); return *this;}

    /**
     * <p>The <code>order</code> of the geolocation target field. This field is
     * optional. The default value is <code>LatLon</code>.</p>
     */
    inline GeoLocationTarget& WithOrder(TargetFieldOrder&& value) { SetOrder(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    TargetFieldOrder m_order;
    bool m_orderHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
