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
   * <p>An object that represents the principal and the type of relation it has with
   * the thing.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ThingPrincipalObject">AWS
   * API Reference</a></p>
   */
  class ThingPrincipalObject
  {
  public:
    AWS_IOT_API ThingPrincipalObject() = default;
    AWS_IOT_API ThingPrincipalObject(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API ThingPrincipalObject& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The principal of the thing principal object.</p>
     */
    inline const Aws::String& GetPrincipal() const { return m_principal; }
    inline bool PrincipalHasBeenSet() const { return m_principalHasBeenSet; }
    template<typename PrincipalT = Aws::String>
    void SetPrincipal(PrincipalT&& value) { m_principalHasBeenSet = true; m_principal = std::forward<PrincipalT>(value); }
    template<typename PrincipalT = Aws::String>
    ThingPrincipalObject& WithPrincipal(PrincipalT&& value) { SetPrincipal(std::forward<PrincipalT>(value)); return *this;}
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
    inline ThingPrincipalType GetThingPrincipalType() const { return m_thingPrincipalType; }
    inline bool ThingPrincipalTypeHasBeenSet() const { return m_thingPrincipalTypeHasBeenSet; }
    inline void SetThingPrincipalType(ThingPrincipalType value) { m_thingPrincipalTypeHasBeenSet = true; m_thingPrincipalType = value; }
    inline ThingPrincipalObject& WithThingPrincipalType(ThingPrincipalType value) { SetThingPrincipalType(value); return *this;}
    ///@}
  private:

    Aws::String m_principal;
    bool m_principalHasBeenSet = false;

    ThingPrincipalType m_thingPrincipalType{ThingPrincipalType::NOT_SET};
    bool m_thingPrincipalTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
