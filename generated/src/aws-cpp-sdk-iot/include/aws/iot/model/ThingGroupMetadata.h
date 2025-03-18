/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/iot/model/GroupNameAndArn.h>
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
   * <p>Thing group metadata.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ThingGroupMetadata">AWS
   * API Reference</a></p>
   */
  class ThingGroupMetadata
  {
  public:
    AWS_IOT_API ThingGroupMetadata() = default;
    AWS_IOT_API ThingGroupMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API ThingGroupMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The parent thing group name.</p>
     */
    inline const Aws::String& GetParentGroupName() const { return m_parentGroupName; }
    inline bool ParentGroupNameHasBeenSet() const { return m_parentGroupNameHasBeenSet; }
    template<typename ParentGroupNameT = Aws::String>
    void SetParentGroupName(ParentGroupNameT&& value) { m_parentGroupNameHasBeenSet = true; m_parentGroupName = std::forward<ParentGroupNameT>(value); }
    template<typename ParentGroupNameT = Aws::String>
    ThingGroupMetadata& WithParentGroupName(ParentGroupNameT&& value) { SetParentGroupName(std::forward<ParentGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The root parent thing group.</p>
     */
    inline const Aws::Vector<GroupNameAndArn>& GetRootToParentThingGroups() const { return m_rootToParentThingGroups; }
    inline bool RootToParentThingGroupsHasBeenSet() const { return m_rootToParentThingGroupsHasBeenSet; }
    template<typename RootToParentThingGroupsT = Aws::Vector<GroupNameAndArn>>
    void SetRootToParentThingGroups(RootToParentThingGroupsT&& value) { m_rootToParentThingGroupsHasBeenSet = true; m_rootToParentThingGroups = std::forward<RootToParentThingGroupsT>(value); }
    template<typename RootToParentThingGroupsT = Aws::Vector<GroupNameAndArn>>
    ThingGroupMetadata& WithRootToParentThingGroups(RootToParentThingGroupsT&& value) { SetRootToParentThingGroups(std::forward<RootToParentThingGroupsT>(value)); return *this;}
    template<typename RootToParentThingGroupsT = GroupNameAndArn>
    ThingGroupMetadata& AddRootToParentThingGroups(RootToParentThingGroupsT&& value) { m_rootToParentThingGroupsHasBeenSet = true; m_rootToParentThingGroups.emplace_back(std::forward<RootToParentThingGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The UNIX timestamp of when the thing group was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const { return m_creationDate; }
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }
    template<typename CreationDateT = Aws::Utils::DateTime>
    void SetCreationDate(CreationDateT&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::forward<CreationDateT>(value); }
    template<typename CreationDateT = Aws::Utils::DateTime>
    ThingGroupMetadata& WithCreationDate(CreationDateT&& value) { SetCreationDate(std::forward<CreationDateT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_parentGroupName;
    bool m_parentGroupNameHasBeenSet = false;

    Aws::Vector<GroupNameAndArn> m_rootToParentThingGroups;
    bool m_rootToParentThingGroupsHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate{};
    bool m_creationDateHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
