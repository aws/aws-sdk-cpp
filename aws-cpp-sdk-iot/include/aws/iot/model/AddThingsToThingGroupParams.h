/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Parameters used when defining a mitigation action that move a set of things
   * to a thing group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/AddThingsToThingGroupParams">AWS
   * API Reference</a></p>
   */
  class AddThingsToThingGroupParams
  {
  public:
    AWS_IOT_API AddThingsToThingGroupParams();
    AWS_IOT_API AddThingsToThingGroupParams(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API AddThingsToThingGroupParams& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The list of groups to which you want to add the things that triggered the
     * mitigation action. You can add a thing to a maximum of 10 groups, but you can't
     * add a thing to more than one group in the same hierarchy.</p>
     */
    inline const Aws::Vector<Aws::String>& GetThingGroupNames() const{ return m_thingGroupNames; }

    /**
     * <p>The list of groups to which you want to add the things that triggered the
     * mitigation action. You can add a thing to a maximum of 10 groups, but you can't
     * add a thing to more than one group in the same hierarchy.</p>
     */
    inline bool ThingGroupNamesHasBeenSet() const { return m_thingGroupNamesHasBeenSet; }

    /**
     * <p>The list of groups to which you want to add the things that triggered the
     * mitigation action. You can add a thing to a maximum of 10 groups, but you can't
     * add a thing to more than one group in the same hierarchy.</p>
     */
    inline void SetThingGroupNames(const Aws::Vector<Aws::String>& value) { m_thingGroupNamesHasBeenSet = true; m_thingGroupNames = value; }

    /**
     * <p>The list of groups to which you want to add the things that triggered the
     * mitigation action. You can add a thing to a maximum of 10 groups, but you can't
     * add a thing to more than one group in the same hierarchy.</p>
     */
    inline void SetThingGroupNames(Aws::Vector<Aws::String>&& value) { m_thingGroupNamesHasBeenSet = true; m_thingGroupNames = std::move(value); }

    /**
     * <p>The list of groups to which you want to add the things that triggered the
     * mitigation action. You can add a thing to a maximum of 10 groups, but you can't
     * add a thing to more than one group in the same hierarchy.</p>
     */
    inline AddThingsToThingGroupParams& WithThingGroupNames(const Aws::Vector<Aws::String>& value) { SetThingGroupNames(value); return *this;}

    /**
     * <p>The list of groups to which you want to add the things that triggered the
     * mitigation action. You can add a thing to a maximum of 10 groups, but you can't
     * add a thing to more than one group in the same hierarchy.</p>
     */
    inline AddThingsToThingGroupParams& WithThingGroupNames(Aws::Vector<Aws::String>&& value) { SetThingGroupNames(std::move(value)); return *this;}

    /**
     * <p>The list of groups to which you want to add the things that triggered the
     * mitigation action. You can add a thing to a maximum of 10 groups, but you can't
     * add a thing to more than one group in the same hierarchy.</p>
     */
    inline AddThingsToThingGroupParams& AddThingGroupNames(const Aws::String& value) { m_thingGroupNamesHasBeenSet = true; m_thingGroupNames.push_back(value); return *this; }

    /**
     * <p>The list of groups to which you want to add the things that triggered the
     * mitigation action. You can add a thing to a maximum of 10 groups, but you can't
     * add a thing to more than one group in the same hierarchy.</p>
     */
    inline AddThingsToThingGroupParams& AddThingGroupNames(Aws::String&& value) { m_thingGroupNamesHasBeenSet = true; m_thingGroupNames.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of groups to which you want to add the things that triggered the
     * mitigation action. You can add a thing to a maximum of 10 groups, but you can't
     * add a thing to more than one group in the same hierarchy.</p>
     */
    inline AddThingsToThingGroupParams& AddThingGroupNames(const char* value) { m_thingGroupNamesHasBeenSet = true; m_thingGroupNames.push_back(value); return *this; }


    /**
     * <p>Specifies if this mitigation action can move the things that triggered the
     * mitigation action even if they are part of one or more dynamic thing groups.</p>
     */
    inline bool GetOverrideDynamicGroups() const{ return m_overrideDynamicGroups; }

    /**
     * <p>Specifies if this mitigation action can move the things that triggered the
     * mitigation action even if they are part of one or more dynamic thing groups.</p>
     */
    inline bool OverrideDynamicGroupsHasBeenSet() const { return m_overrideDynamicGroupsHasBeenSet; }

    /**
     * <p>Specifies if this mitigation action can move the things that triggered the
     * mitigation action even if they are part of one or more dynamic thing groups.</p>
     */
    inline void SetOverrideDynamicGroups(bool value) { m_overrideDynamicGroupsHasBeenSet = true; m_overrideDynamicGroups = value; }

    /**
     * <p>Specifies if this mitigation action can move the things that triggered the
     * mitigation action even if they are part of one or more dynamic thing groups.</p>
     */
    inline AddThingsToThingGroupParams& WithOverrideDynamicGroups(bool value) { SetOverrideDynamicGroups(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_thingGroupNames;
    bool m_thingGroupNamesHasBeenSet = false;

    bool m_overrideDynamicGroups;
    bool m_overrideDynamicGroupsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
