/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrassv2/GreengrassV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace GreengrassV2
{
namespace Model
{

  /**
   * <p>Contains information about a client device that is associated to a core
   * device for cloud discovery.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/greengrassv2-2020-11-30/AssociatedClientDevice">AWS
   * API Reference</a></p>
   */
  class AssociatedClientDevice
  {
  public:
    AWS_GREENGRASSV2_API AssociatedClientDevice() = default;
    AWS_GREENGRASSV2_API AssociatedClientDevice(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASSV2_API AssociatedClientDevice& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the IoT thing that represents the associated client device.</p>
     */
    inline const Aws::String& GetThingName() const { return m_thingName; }
    inline bool ThingNameHasBeenSet() const { return m_thingNameHasBeenSet; }
    template<typename ThingNameT = Aws::String>
    void SetThingName(ThingNameT&& value) { m_thingNameHasBeenSet = true; m_thingName = std::forward<ThingNameT>(value); }
    template<typename ThingNameT = Aws::String>
    AssociatedClientDevice& WithThingName(ThingNameT&& value) { SetThingName(std::forward<ThingNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the client device was associated, expressed in ISO 8601
     * format.</p>
     */
    inline const Aws::Utils::DateTime& GetAssociationTimestamp() const { return m_associationTimestamp; }
    inline bool AssociationTimestampHasBeenSet() const { return m_associationTimestampHasBeenSet; }
    template<typename AssociationTimestampT = Aws::Utils::DateTime>
    void SetAssociationTimestamp(AssociationTimestampT&& value) { m_associationTimestampHasBeenSet = true; m_associationTimestamp = std::forward<AssociationTimestampT>(value); }
    template<typename AssociationTimestampT = Aws::Utils::DateTime>
    AssociatedClientDevice& WithAssociationTimestamp(AssociationTimestampT&& value) { SetAssociationTimestamp(std::forward<AssociationTimestampT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_thingName;
    bool m_thingNameHasBeenSet = false;

    Aws::Utils::DateTime m_associationTimestamp{};
    bool m_associationTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
