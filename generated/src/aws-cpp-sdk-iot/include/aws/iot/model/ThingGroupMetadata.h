﻿/**
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
    AWS_IOT_API ThingGroupMetadata();
    AWS_IOT_API ThingGroupMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API ThingGroupMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The parent thing group name.</p>
     */
    inline const Aws::String& GetParentGroupName() const{ return m_parentGroupName; }
    inline bool ParentGroupNameHasBeenSet() const { return m_parentGroupNameHasBeenSet; }
    inline void SetParentGroupName(const Aws::String& value) { m_parentGroupNameHasBeenSet = true; m_parentGroupName = value; }
    inline void SetParentGroupName(Aws::String&& value) { m_parentGroupNameHasBeenSet = true; m_parentGroupName = std::move(value); }
    inline void SetParentGroupName(const char* value) { m_parentGroupNameHasBeenSet = true; m_parentGroupName.assign(value); }
    inline ThingGroupMetadata& WithParentGroupName(const Aws::String& value) { SetParentGroupName(value); return *this;}
    inline ThingGroupMetadata& WithParentGroupName(Aws::String&& value) { SetParentGroupName(std::move(value)); return *this;}
    inline ThingGroupMetadata& WithParentGroupName(const char* value) { SetParentGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The root parent thing group.</p>
     */
    inline const Aws::Vector<GroupNameAndArn>& GetRootToParentThingGroups() const{ return m_rootToParentThingGroups; }
    inline bool RootToParentThingGroupsHasBeenSet() const { return m_rootToParentThingGroupsHasBeenSet; }
    inline void SetRootToParentThingGroups(const Aws::Vector<GroupNameAndArn>& value) { m_rootToParentThingGroupsHasBeenSet = true; m_rootToParentThingGroups = value; }
    inline void SetRootToParentThingGroups(Aws::Vector<GroupNameAndArn>&& value) { m_rootToParentThingGroupsHasBeenSet = true; m_rootToParentThingGroups = std::move(value); }
    inline ThingGroupMetadata& WithRootToParentThingGroups(const Aws::Vector<GroupNameAndArn>& value) { SetRootToParentThingGroups(value); return *this;}
    inline ThingGroupMetadata& WithRootToParentThingGroups(Aws::Vector<GroupNameAndArn>&& value) { SetRootToParentThingGroups(std::move(value)); return *this;}
    inline ThingGroupMetadata& AddRootToParentThingGroups(const GroupNameAndArn& value) { m_rootToParentThingGroupsHasBeenSet = true; m_rootToParentThingGroups.push_back(value); return *this; }
    inline ThingGroupMetadata& AddRootToParentThingGroups(GroupNameAndArn&& value) { m_rootToParentThingGroupsHasBeenSet = true; m_rootToParentThingGroups.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The UNIX timestamp of when the thing group was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }
    inline ThingGroupMetadata& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}
    inline ThingGroupMetadata& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_parentGroupName;
    bool m_parentGroupNameHasBeenSet = false;

    Aws::Vector<GroupNameAndArn> m_rootToParentThingGroups;
    bool m_rootToParentThingGroupsHasBeenSet = false;

    Aws::Utils::DateTime m_creationDate;
    bool m_creationDateHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
