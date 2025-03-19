/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>An object that represents the connection attribute, thing attribute, and the
   * user property key.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/PropagatingAttribute">AWS
   * API Reference</a></p>
   */
  class PropagatingAttribute
  {
  public:
    AWS_IOT_API PropagatingAttribute() = default;
    AWS_IOT_API PropagatingAttribute(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API PropagatingAttribute& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The key of the user property key-value pair.</p>
     */
    inline const Aws::String& GetUserPropertyKey() const { return m_userPropertyKey; }
    inline bool UserPropertyKeyHasBeenSet() const { return m_userPropertyKeyHasBeenSet; }
    template<typename UserPropertyKeyT = Aws::String>
    void SetUserPropertyKey(UserPropertyKeyT&& value) { m_userPropertyKeyHasBeenSet = true; m_userPropertyKey = std::forward<UserPropertyKeyT>(value); }
    template<typename UserPropertyKeyT = Aws::String>
    PropagatingAttribute& WithUserPropertyKey(UserPropertyKeyT&& value) { SetUserPropertyKey(std::forward<UserPropertyKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user-defined thing attribute that is propagating for MQTT 5 message
     * enrichment.</p>
     */
    inline const Aws::String& GetThingAttribute() const { return m_thingAttribute; }
    inline bool ThingAttributeHasBeenSet() const { return m_thingAttributeHasBeenSet; }
    template<typename ThingAttributeT = Aws::String>
    void SetThingAttribute(ThingAttributeT&& value) { m_thingAttributeHasBeenSet = true; m_thingAttribute = std::forward<ThingAttributeT>(value); }
    template<typename ThingAttributeT = Aws::String>
    PropagatingAttribute& WithThingAttribute(ThingAttributeT&& value) { SetThingAttribute(std::forward<ThingAttributeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The attribute associated with the connection between a device and Amazon Web
     * Services IoT Core.</p>
     */
    inline const Aws::String& GetConnectionAttribute() const { return m_connectionAttribute; }
    inline bool ConnectionAttributeHasBeenSet() const { return m_connectionAttributeHasBeenSet; }
    template<typename ConnectionAttributeT = Aws::String>
    void SetConnectionAttribute(ConnectionAttributeT&& value) { m_connectionAttributeHasBeenSet = true; m_connectionAttribute = std::forward<ConnectionAttributeT>(value); }
    template<typename ConnectionAttributeT = Aws::String>
    PropagatingAttribute& WithConnectionAttribute(ConnectionAttributeT&& value) { SetConnectionAttribute(std::forward<ConnectionAttributeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_userPropertyKey;
    bool m_userPropertyKeyHasBeenSet = false;

    Aws::String m_thingAttribute;
    bool m_thingAttributeHasBeenSet = false;

    Aws::String m_connectionAttribute;
    bool m_connectionAttributeHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
