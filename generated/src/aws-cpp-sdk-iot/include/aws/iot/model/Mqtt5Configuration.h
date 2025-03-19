/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iot/model/PropagatingAttribute.h>
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
   * <p>The configuration to add user-defined properties to enrich MQTT 5
   * messages.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/Mqtt5Configuration">AWS
   * API Reference</a></p>
   */
  class Mqtt5Configuration
  {
  public:
    AWS_IOT_API Mqtt5Configuration() = default;
    AWS_IOT_API Mqtt5Configuration(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Mqtt5Configuration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An object that represents the propagating thing attributes and the connection
     * attributes.</p>
     */
    inline const Aws::Vector<PropagatingAttribute>& GetPropagatingAttributes() const { return m_propagatingAttributes; }
    inline bool PropagatingAttributesHasBeenSet() const { return m_propagatingAttributesHasBeenSet; }
    template<typename PropagatingAttributesT = Aws::Vector<PropagatingAttribute>>
    void SetPropagatingAttributes(PropagatingAttributesT&& value) { m_propagatingAttributesHasBeenSet = true; m_propagatingAttributes = std::forward<PropagatingAttributesT>(value); }
    template<typename PropagatingAttributesT = Aws::Vector<PropagatingAttribute>>
    Mqtt5Configuration& WithPropagatingAttributes(PropagatingAttributesT&& value) { SetPropagatingAttributes(std::forward<PropagatingAttributesT>(value)); return *this;}
    template<typename PropagatingAttributesT = PropagatingAttribute>
    Mqtt5Configuration& AddPropagatingAttributes(PropagatingAttributesT&& value) { m_propagatingAttributesHasBeenSet = true; m_propagatingAttributes.emplace_back(std::forward<PropagatingAttributesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<PropagatingAttribute> m_propagatingAttributes;
    bool m_propagatingAttributesHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
