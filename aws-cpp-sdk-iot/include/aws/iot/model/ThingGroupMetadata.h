/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_IOT_API ThingGroupMetadata
  {
  public:
    ThingGroupMetadata();
    ThingGroupMetadata(Aws::Utils::Json::JsonView jsonValue);
    ThingGroupMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The parent thing group name.</p>
     */
    inline const Aws::String& GetParentGroupName() const{ return m_parentGroupName; }

    /**
     * <p>The parent thing group name.</p>
     */
    inline bool ParentGroupNameHasBeenSet() const { return m_parentGroupNameHasBeenSet; }

    /**
     * <p>The parent thing group name.</p>
     */
    inline void SetParentGroupName(const Aws::String& value) { m_parentGroupNameHasBeenSet = true; m_parentGroupName = value; }

    /**
     * <p>The parent thing group name.</p>
     */
    inline void SetParentGroupName(Aws::String&& value) { m_parentGroupNameHasBeenSet = true; m_parentGroupName = std::move(value); }

    /**
     * <p>The parent thing group name.</p>
     */
    inline void SetParentGroupName(const char* value) { m_parentGroupNameHasBeenSet = true; m_parentGroupName.assign(value); }

    /**
     * <p>The parent thing group name.</p>
     */
    inline ThingGroupMetadata& WithParentGroupName(const Aws::String& value) { SetParentGroupName(value); return *this;}

    /**
     * <p>The parent thing group name.</p>
     */
    inline ThingGroupMetadata& WithParentGroupName(Aws::String&& value) { SetParentGroupName(std::move(value)); return *this;}

    /**
     * <p>The parent thing group name.</p>
     */
    inline ThingGroupMetadata& WithParentGroupName(const char* value) { SetParentGroupName(value); return *this;}


    /**
     * <p>The root parent thing group.</p>
     */
    inline const Aws::Vector<GroupNameAndArn>& GetRootToParentThingGroups() const{ return m_rootToParentThingGroups; }

    /**
     * <p>The root parent thing group.</p>
     */
    inline bool RootToParentThingGroupsHasBeenSet() const { return m_rootToParentThingGroupsHasBeenSet; }

    /**
     * <p>The root parent thing group.</p>
     */
    inline void SetRootToParentThingGroups(const Aws::Vector<GroupNameAndArn>& value) { m_rootToParentThingGroupsHasBeenSet = true; m_rootToParentThingGroups = value; }

    /**
     * <p>The root parent thing group.</p>
     */
    inline void SetRootToParentThingGroups(Aws::Vector<GroupNameAndArn>&& value) { m_rootToParentThingGroupsHasBeenSet = true; m_rootToParentThingGroups = std::move(value); }

    /**
     * <p>The root parent thing group.</p>
     */
    inline ThingGroupMetadata& WithRootToParentThingGroups(const Aws::Vector<GroupNameAndArn>& value) { SetRootToParentThingGroups(value); return *this;}

    /**
     * <p>The root parent thing group.</p>
     */
    inline ThingGroupMetadata& WithRootToParentThingGroups(Aws::Vector<GroupNameAndArn>&& value) { SetRootToParentThingGroups(std::move(value)); return *this;}

    /**
     * <p>The root parent thing group.</p>
     */
    inline ThingGroupMetadata& AddRootToParentThingGroups(const GroupNameAndArn& value) { m_rootToParentThingGroupsHasBeenSet = true; m_rootToParentThingGroups.push_back(value); return *this; }

    /**
     * <p>The root parent thing group.</p>
     */
    inline ThingGroupMetadata& AddRootToParentThingGroups(GroupNameAndArn&& value) { m_rootToParentThingGroupsHasBeenSet = true; m_rootToParentThingGroups.push_back(std::move(value)); return *this; }


    /**
     * <p>The UNIX timestamp of when the thing group was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDate() const{ return m_creationDate; }

    /**
     * <p>The UNIX timestamp of when the thing group was created.</p>
     */
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }

    /**
     * <p>The UNIX timestamp of when the thing group was created.</p>
     */
    inline void SetCreationDate(const Aws::Utils::DateTime& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }

    /**
     * <p>The UNIX timestamp of when the thing group was created.</p>
     */
    inline void SetCreationDate(Aws::Utils::DateTime&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }

    /**
     * <p>The UNIX timestamp of when the thing group was created.</p>
     */
    inline ThingGroupMetadata& WithCreationDate(const Aws::Utils::DateTime& value) { SetCreationDate(value); return *this;}

    /**
     * <p>The UNIX timestamp of when the thing group was created.</p>
     */
    inline ThingGroupMetadata& WithCreationDate(Aws::Utils::DateTime&& value) { SetCreationDate(std::move(value)); return *this;}

  private:

    Aws::String m_parentGroupName;
    bool m_parentGroupNameHasBeenSet;

    Aws::Vector<GroupNameAndArn> m_rootToParentThingGroups;
    bool m_rootToParentThingGroupsHasBeenSet;

    Aws::Utils::DateTime m_creationDate;
    bool m_creationDateHasBeenSet;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
