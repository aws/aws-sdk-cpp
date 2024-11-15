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
    AWS_IOT_API PropagatingAttribute();
    AWS_IOT_API PropagatingAttribute(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API PropagatingAttribute& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The key of the user property key-value pair.</p>
     */
    inline const Aws::String& GetUserPropertyKey() const{ return m_userPropertyKey; }
    inline bool UserPropertyKeyHasBeenSet() const { return m_userPropertyKeyHasBeenSet; }
    inline void SetUserPropertyKey(const Aws::String& value) { m_userPropertyKeyHasBeenSet = true; m_userPropertyKey = value; }
    inline void SetUserPropertyKey(Aws::String&& value) { m_userPropertyKeyHasBeenSet = true; m_userPropertyKey = std::move(value); }
    inline void SetUserPropertyKey(const char* value) { m_userPropertyKeyHasBeenSet = true; m_userPropertyKey.assign(value); }
    inline PropagatingAttribute& WithUserPropertyKey(const Aws::String& value) { SetUserPropertyKey(value); return *this;}
    inline PropagatingAttribute& WithUserPropertyKey(Aws::String&& value) { SetUserPropertyKey(std::move(value)); return *this;}
    inline PropagatingAttribute& WithUserPropertyKey(const char* value) { SetUserPropertyKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user-defined thing attribute that is propagating for MQTT 5 message
     * enrichment.</p>
     */
    inline const Aws::String& GetThingAttribute() const{ return m_thingAttribute; }
    inline bool ThingAttributeHasBeenSet() const { return m_thingAttributeHasBeenSet; }
    inline void SetThingAttribute(const Aws::String& value) { m_thingAttributeHasBeenSet = true; m_thingAttribute = value; }
    inline void SetThingAttribute(Aws::String&& value) { m_thingAttributeHasBeenSet = true; m_thingAttribute = std::move(value); }
    inline void SetThingAttribute(const char* value) { m_thingAttributeHasBeenSet = true; m_thingAttribute.assign(value); }
    inline PropagatingAttribute& WithThingAttribute(const Aws::String& value) { SetThingAttribute(value); return *this;}
    inline PropagatingAttribute& WithThingAttribute(Aws::String&& value) { SetThingAttribute(std::move(value)); return *this;}
    inline PropagatingAttribute& WithThingAttribute(const char* value) { SetThingAttribute(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The attribute associated with the connection between a device and Amazon Web
     * Services IoT Core.</p>
     */
    inline const Aws::String& GetConnectionAttribute() const{ return m_connectionAttribute; }
    inline bool ConnectionAttributeHasBeenSet() const { return m_connectionAttributeHasBeenSet; }
    inline void SetConnectionAttribute(const Aws::String& value) { m_connectionAttributeHasBeenSet = true; m_connectionAttribute = value; }
    inline void SetConnectionAttribute(Aws::String&& value) { m_connectionAttributeHasBeenSet = true; m_connectionAttribute = std::move(value); }
    inline void SetConnectionAttribute(const char* value) { m_connectionAttributeHasBeenSet = true; m_connectionAttribute.assign(value); }
    inline PropagatingAttribute& WithConnectionAttribute(const Aws::String& value) { SetConnectionAttribute(value); return *this;}
    inline PropagatingAttribute& WithConnectionAttribute(Aws::String&& value) { SetConnectionAttribute(std::move(value)); return *this;}
    inline PropagatingAttribute& WithConnectionAttribute(const char* value) { SetConnectionAttribute(value); return *this;}
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
