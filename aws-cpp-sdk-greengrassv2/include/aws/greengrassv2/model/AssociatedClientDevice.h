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
    AWS_GREENGRASSV2_API AssociatedClientDevice();
    AWS_GREENGRASSV2_API AssociatedClientDevice(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASSV2_API AssociatedClientDevice& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the IoT thing that represents the associated client device.</p>
     */
    inline const Aws::String& GetThingName() const{ return m_thingName; }

    /**
     * <p>The name of the IoT thing that represents the associated client device.</p>
     */
    inline bool ThingNameHasBeenSet() const { return m_thingNameHasBeenSet; }

    /**
     * <p>The name of the IoT thing that represents the associated client device.</p>
     */
    inline void SetThingName(const Aws::String& value) { m_thingNameHasBeenSet = true; m_thingName = value; }

    /**
     * <p>The name of the IoT thing that represents the associated client device.</p>
     */
    inline void SetThingName(Aws::String&& value) { m_thingNameHasBeenSet = true; m_thingName = std::move(value); }

    /**
     * <p>The name of the IoT thing that represents the associated client device.</p>
     */
    inline void SetThingName(const char* value) { m_thingNameHasBeenSet = true; m_thingName.assign(value); }

    /**
     * <p>The name of the IoT thing that represents the associated client device.</p>
     */
    inline AssociatedClientDevice& WithThingName(const Aws::String& value) { SetThingName(value); return *this;}

    /**
     * <p>The name of the IoT thing that represents the associated client device.</p>
     */
    inline AssociatedClientDevice& WithThingName(Aws::String&& value) { SetThingName(std::move(value)); return *this;}

    /**
     * <p>The name of the IoT thing that represents the associated client device.</p>
     */
    inline AssociatedClientDevice& WithThingName(const char* value) { SetThingName(value); return *this;}


    /**
     * <p>The time that the client device was associated, expressed in ISO 8601
     * format.</p>
     */
    inline const Aws::Utils::DateTime& GetAssociationTimestamp() const{ return m_associationTimestamp; }

    /**
     * <p>The time that the client device was associated, expressed in ISO 8601
     * format.</p>
     */
    inline bool AssociationTimestampHasBeenSet() const { return m_associationTimestampHasBeenSet; }

    /**
     * <p>The time that the client device was associated, expressed in ISO 8601
     * format.</p>
     */
    inline void SetAssociationTimestamp(const Aws::Utils::DateTime& value) { m_associationTimestampHasBeenSet = true; m_associationTimestamp = value; }

    /**
     * <p>The time that the client device was associated, expressed in ISO 8601
     * format.</p>
     */
    inline void SetAssociationTimestamp(Aws::Utils::DateTime&& value) { m_associationTimestampHasBeenSet = true; m_associationTimestamp = std::move(value); }

    /**
     * <p>The time that the client device was associated, expressed in ISO 8601
     * format.</p>
     */
    inline AssociatedClientDevice& WithAssociationTimestamp(const Aws::Utils::DateTime& value) { SetAssociationTimestamp(value); return *this;}

    /**
     * <p>The time that the client device was associated, expressed in ISO 8601
     * format.</p>
     */
    inline AssociatedClientDevice& WithAssociationTimestamp(Aws::Utils::DateTime&& value) { SetAssociationTimestamp(std::move(value)); return *this;}

  private:

    Aws::String m_thingName;
    bool m_thingNameHasBeenSet = false;

    Aws::Utils::DateTime m_associationTimestamp;
    bool m_associationTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
