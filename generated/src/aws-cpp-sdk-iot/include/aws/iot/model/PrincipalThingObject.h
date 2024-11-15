/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/ThingPrincipalType.h>
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
   * <p>An object that represents the thing and the type of relation it has with the
   * principal.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/PrincipalThingObject">AWS
   * API Reference</a></p>
   */
  class PrincipalThingObject
  {
  public:
    AWS_IOT_API PrincipalThingObject();
    AWS_IOT_API PrincipalThingObject(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API PrincipalThingObject& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the thing.</p>
     */
    inline const Aws::String& GetThingName() const{ return m_thingName; }
    inline bool ThingNameHasBeenSet() const { return m_thingNameHasBeenSet; }
    inline void SetThingName(const Aws::String& value) { m_thingNameHasBeenSet = true; m_thingName = value; }
    inline void SetThingName(Aws::String&& value) { m_thingNameHasBeenSet = true; m_thingName = std::move(value); }
    inline void SetThingName(const char* value) { m_thingNameHasBeenSet = true; m_thingName.assign(value); }
    inline PrincipalThingObject& WithThingName(const Aws::String& value) { SetThingName(value); return *this;}
    inline PrincipalThingObject& WithThingName(Aws::String&& value) { SetThingName(std::move(value)); return *this;}
    inline PrincipalThingObject& WithThingName(const char* value) { SetThingName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the relation you want to specify when you attach a principal to a
     * thing. The value defaults to <code>NON_EXCLUSIVE_THING</code>.</p> <ul> <li> <p>
     * <code>EXCLUSIVE_THING</code> - Attaches the specified principal to the specified
     * thing, exclusively. The thing will be the only thing that’s attached to the
     * principal.</p> </li> </ul> <ul> <li> <p> <code>NON_EXCLUSIVE_THING</code> -
     * Attaches the specified principal to the specified thing. Multiple things can be
     * attached to the principal.</p> </li> </ul>
     */
    inline const ThingPrincipalType& GetThingPrincipalType() const{ return m_thingPrincipalType; }
    inline bool ThingPrincipalTypeHasBeenSet() const { return m_thingPrincipalTypeHasBeenSet; }
    inline void SetThingPrincipalType(const ThingPrincipalType& value) { m_thingPrincipalTypeHasBeenSet = true; m_thingPrincipalType = value; }
    inline void SetThingPrincipalType(ThingPrincipalType&& value) { m_thingPrincipalTypeHasBeenSet = true; m_thingPrincipalType = std::move(value); }
    inline PrincipalThingObject& WithThingPrincipalType(const ThingPrincipalType& value) { SetThingPrincipalType(value); return *this;}
    inline PrincipalThingObject& WithThingPrincipalType(ThingPrincipalType&& value) { SetThingPrincipalType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_thingName;
    bool m_thingNameHasBeenSet = false;

    ThingPrincipalType m_thingPrincipalType;
    bool m_thingPrincipalTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
