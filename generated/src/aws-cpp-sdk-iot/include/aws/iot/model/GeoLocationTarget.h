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
    AWS_IOT_API GeoLocationTarget() = default;
    AWS_IOT_API GeoLocationTarget(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API GeoLocationTarget& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The <code>name</code> of the geolocation target field. If the target field is
     * part of a named shadow, you must select the named shadow using the
     * <code>namedShadow</code> filter.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    GeoLocationTarget& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>order</code> of the geolocation target field. This field is
     * optional. The default value is <code>LatLon</code>.</p>
     */
    inline TargetFieldOrder GetOrder() const { return m_order; }
    inline bool OrderHasBeenSet() const { return m_orderHasBeenSet; }
    inline void SetOrder(TargetFieldOrder value) { m_orderHasBeenSet = true; m_order = value; }
    inline GeoLocationTarget& WithOrder(TargetFieldOrder value) { SetOrder(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    TargetFieldOrder m_order{TargetFieldOrder::NOT_SET};
    bool m_orderHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
